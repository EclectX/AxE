
import json

import configparser

import sys

import logging
import logging.handlers

from defines import *

from func_files import *
from func_addr import *

from memory import *
from simulator import *

from system import *
from system_spsoc import *
from system_mpsoc import *

from taskset import *

from software import *
from software_program import *
from software_program_task import *
from software_controller import *

prefix = "\t\t\t\t>>>>>>>>"

# the simulation that the memory compression runs is on a single core system,
# so no controller is needed.

def memory_compression( sim, prgs_lst ):
    
    # create objects
    # ---------------------------------------
    
    mem = Memory()
    
    # we need one system for each arch
    
    sys_mem_packer_rv32i = System( "_mem_packer_rv32i" )
    sys_mem_packer_rv32im = System( "_mem_packer_rv32im" )
    
    # sys_mem_packer_rv32im.clean()
    print( "\t\t\t\t>>>>>>>>Clean system im" )
    
    # sys_mem_packer_rv32im.compl()
    print( "\t\t\t\t>>>>>>>>compiled system im" )
    
    # the different architectures objects. not strings.
    
    arch_dict = {
        
        #  "rv32i"  : sys_mem_packer_rv32i
        "rv32im" : sys_mem_packer_rv32im
        
    }
    
    # get prg sizes/stack pointers
    # ---------------------------------------
    
    print( "\t\t\t\t>>>>>>>>calling mem.pack_prgs" )
    
    mem.pack_prgs( sim, prgs_lst, arch_dict )
    
    return mem
    

# NOT USED ANYMORE

def timing_estimation( sim, controller_size, mem_file_name, node_arch_lst ):
    
    print( "\t\t\t\t>>>>>>>>running timing estimation" )
    
    mem = Memory()
    
    intervals_dict = {}
    
    # make sure that the memory has is loaded
    
    mem.load( mem_file_name )
    print( prefix + "loaded memory with the file name: " + mem_file_name )
    
    # obviously the controller does not have any timing information on the
    # prgs. so don't use them in the controller software.
    
    con_te = Controller( "_timing_estimation", "rv32i" )
    print( prefix + "created controller" )
    
    con_te.create_node_define( node_arch_lst )
    print( prefix + "created node define using the node_arch_lst" )
    
    con_te.create_prg_define( arch_lst, mem, index )
    print( prefix + "created prog define" )
    
    # set the node that should run the prg
    # we chose an i node for this as we are more interested in the worst case
    
    node_to_use = 0
    
    if ( "i" in node_arch_lst ):
        
        node_to_use = node_arch_lst.index( "i" )
        
    
    con_te.set_define( "defines", "NODE_TO_USE", str(node_to_use) )
    
    prgs_lst = mem.get_prgs_lst()
    
    # the timing estimation in simulation has been disabled
    
    for i,prg in enumerate( prgs_lst ):
        
        #~ # get a fresh copy obj of the prgs
        
        mem.load( mem_file_name )
        
        # prepare the controller
        
        con_te.clean()
        con_te.set_define( "defines", "PRG_TO_RUN", str(i) )
        con_te.compl( index_to_addr( controller_size ) )
        
        # prepare the memory
        
        # TODO the following method calls could be added to a func
        
        mem.include( con_te, index_to_addr( controller_size ) )
        mem.pack( arch_lst, "test.hex", "_timing_estimation" )
        
        # run the simulation and extract the lines of the output we are
        # interested in. this is the name of the prg and the execution time.
        
        result = sim.run( sys, "test.hex", SIM_NO_ARGS, SIM_RETURN_OUTPUT )
        # intervals_dict[ result[5] ] = ( int(result[ -2 ]) * 2 )
        intervals_dict[ result[-5] ] = ( int(result[ -2 ]) )
        
        # print( str(result[-5] ) )
        # print( str(int(result[-2])))
        
        # print( str(result) )
        # exit()
        
        # break
    
    # con.create_prg_define( arch_lst, mem, index )
    
    
    print( json.dumps(intervals_dict, indent=4, sort_keys=True) )
    
    # make sure the memory does not exist anymore. who knows where python
    # might float this around in the ether.
    
    del mem
    
    return intervals_dict
    

# ------------------------------------------------------------------------------
# config
# ------------------------------------------------------------------------------

config_name = sys.argv[1]

config = configparser.ConfigParser()
config.read_file( open( config_name ) )

# remove the .conf from the config_name
# split returns an array and the first part is the name

config_name = config_name.split( "." )[0]

# controller

controller_name = config.get( "controller", "controller_name" )

save_mode_at = config.getint( "controller", "save_mode_at" )
start_charging_at = config.getint( "controller", "start_charging_at" )
stop_charging_at = config.getint( "controller", "stop_charging_at" )

# system

system_name = config.get( "system", "system_name" )
arch_str = config.get( "system", "arch_lst" )
arch_lst = arch_str.split( "," )

node_arch_str = config.get( "system", "node_arch_lst" )
node_arch_str = node_arch_str.replace( " ", "" ) # space is used for better formatting
node_arch_lst = node_arch_str.split( "," )

# run

what_to_run = config.get( "run", "run" )

# TODO - important! - change names in config files

deadline_is_wcet_times_this_number = config.getfloat( "run", "exec_interval_modifier" )

# the system can run predefined programs, but also create simple tasks on the
# fly. as the latter option was the only one used for a long time, the other
# one, running predefined programs, might not work anymore.

if what_to_run == "prgs":
    
    # MIGHT NOT WORK ANYMORE
    
    print( "\t\t\t\t>>>>>>>>running prgs" )
    
    prgs_str = config.get( "prgs", "prgs_lst" )
    prgs_lst = prgs_str.split( "\n" )
    
elif what_to_run == "tasks":
    
    print( "\t\t\t\t>>>>>>>>running tasks" )
    
    cnt_tasks       = config.getint( "tasks", "cnt_tasks"       )
    
    loop_cnt_min    = config.getint( "tasks", "loop_cnt_min"    )
    loop_cnt_max    = config.getint( "tasks", "loop_cnt_max"    )
    
    percent_mul_min = config.getint( "tasks", "percent_mul_min" )
    percent_mul_max = config.getint( "tasks", "percent_mul_max" )
    
    ts = Taskset()
    ts.clear()
    
    prgs_lst = ts.create( 
         cnt_tasks
        ,loop_cnt_min
        ,loop_cnt_max
        ,percent_mul_min
        ,percent_mul_max
    )
    
else:
    
    print( "Don't know what to run" )
    exit()
    

print( "\t\t\t\t>>>>>>>>loading config for sim" )

# sim

sim_str = config.get( "sim", "sim_args" )
sim_args = sim_str.split( "\n" )

sim_prnt = config.getboolean( "sim", "sim_prnt" )

# controller estimations
# ---------------------------------------

print( "\t\t\t\t>>>>>>>>pick controller estimations" )

# the size of the controller i.e. where to put the stack pointer has to be
# set here.

#~ controller_size_addr = 16380; # 0x3FFC
# ~ controller_size_addr = 32764; # 0x7FFC
# ~ controller_size_addr = 65528; # 0xfff8
# ~ controller_size_addr = 131064; # 0x1FFF8
controller_size_addr = 196600; # 0x2FFF8
controller_size = controller_size_addr / 4

controller_size = int(controller_size)

index = controller_size-1 #* 4

# system can be created here and used throughout the process

print( "\t\t\t\t>>>>>>>>create objects" )

sys = System( system_name )
mem = Memory()
sim = Simulator()

# ------------------------------------------------------------------------------
# 
# system
# 
# ------------------------------------------------------------------------------

sys.clean()

# set the architectures for the nodes

for i,arch in enumerate( node_arch_lst ):
    
    sys.set_define( "defines_nodes", "N" + str(i) + "_ARCH", "`RV32" + arch.upper() )
    

sys.compl()
print( "\t\t\t\t>>>>>>>>compiled system" )

# ------------------------------------------------------------------------------
# 
# memory compression
# 
# ------------------------------------------------------------------------------

print( "\t\t\t\t>>>>>>>>will run memory compression" )

mem = memory_compression( sim, prgs_lst )
mem.save( config_name + "_prgs.json" )

# you could also load a .json file that has been generated before

#~ mem.load( config_name + "_prgs.json" )

# ------------------------------------------------------------------------------
# 
# controller
# 
# ------------------------------------------------------------------------------

con = Controller( controller_name, "rv32im" )

# defines are created that represent the system as well as the task set that
# should be executed

con.create_controller_define( save_mode_at, start_charging_at, stop_charging_at )
con.create_node_define( node_arch_lst )
con.create_prg_define( arch_lst, mem, index, deadline_is_wcet_times_this_number )

# we read solar charging data from a spreadsheet that is used to simulate a
# charging battery.

charges_f = open( "/home/user/soc_frame/tools/solar/final.csv", "r" )
charges_l = charges_f.readlines()

# remove newlines

for index, line in enumerate( charges_l ):
    
    charges_l[ index ] = line[ :-1 ]
    

con.create_charging_define( charges_l )

# compile controller with new defines
# ---------------------------------------

con.clean()
con.compl( index_to_addr( controller_size ) )

# add compiled controller to memory
# ---------------------------------------

mem.include( con, index_to_addr( controller_size ) )

mem.save( config_name + "_prgs_with_controller.json" )

# like before, an already created memory file can be loaded.

#~ mem.load( config_name + "_prgs_with_controller.json" )

# create hex file based on memory
# ---------------------------------------

# controller_name is going to be the first prg at addr 0.
# the others will be ordered by their name.

mem.pack( arch_lst, "test.hex", controller_name )

# ------------------------------------------------------------------------------
# 
# execution
# 
# ------------------------------------------------------------------------------

# run the created memory.hex file
# ---------------------------------------

print( "running sim" )

result = sim.run( sys, "test.hex", sim_args, sim_prnt )

print( str( result ) )
