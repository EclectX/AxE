
from defines import *

import random

from Partitioner import *
from Scheduler import *
from Bookie import *

class Runner:
    
    def __init__(self):
        
        pass
        
    
    def prepare_prgs( self, prgs, per_min, per_max ):
        
        prgs[ 0].t = 259.78
        prgs[ 1].t = 202.71
        prgs[ 2].t = 431.58
        prgs[ 3].t = 18.8
        prgs[ 4].t = 439.64
        prgs[ 5].t = 94.53
        prgs[ 6].t = 3331.48
        prgs[ 7].t = 12056.3
        prgs[ 8].t = 610.66
        prgs[ 9].t = 221.2
        prgs[10].t = 757.43
        # ~ prgs[ 6].t = 610.66
        # ~ prgs[ 7].t = 221.2
        # ~ prgs[ 8].t = 757.43
        
        # ~ for prg in prgs:
            # ~ prg.set_t( random.uniform(per_min, per_max) )
            
        
    
    #
    # run
    #
    
    def run( self, configurations, prgs, per_min, per_max, ignore_fails = True, bookie = None ):
        
        self.prepare_prgs( prgs, per_min, per_max )
        
        # ~ for prg in prgs:
            # ~ print( prg.p() )
        
        partitioner = Partitioner()
        
        for configuration in configurations:
            
            configuration.reset_nodes()
            
            # ~ res = partitioner.partition( configuration, prgs )
            res = partitioner.partition_apprx_aware( configuration, prgs )
            
            if (res != 1) and (ignore_fails == False):
                print( "try again" )
                return False
            
            if res == 0:
                configuration.part_failed += 1;
            elif res == -1:
                configuration.part_no_choice += 1;
            else:
                configuration.partition_succ()
                
                print( configuration.p() )
                print( "sched" )
                
                scheduler = Scheduler()
                time = scheduler.schedule( configuration, prgs )
                
                print( configuration.p_charges() )
                
                # ~ print( str( time ) )
                
                if bookie is not None:
                    
                    bookie.record_entry_2_deep( configuration.i, str(per_min)+"_0_up", configuration.nodes[0].acc_up )
                    bookie.record_entry_2_deep( configuration.i, str(per_min)+"_1_up", configuration.nodes[1].acc_up )
                    bookie.record_entry_2_deep( configuration.i, str(per_min)+"_sched", time )
                    
                
            
        return True
        
    
    #
    # run multi ranges
    #
    
    def run_multi_ranges( self, configurations, prgs, per_start, per_step, per_end, per_range, multi_runs, bookie = None ):
        
        i = 0
        
        while i < multi_runs:
            
            self.run_ranges( configurations, prgs, per_start, per_step, per_end, per_range, bookie )
            
            i += 1
            
        
    
    #
    # run ranges
    #
    
    def run_ranges( self, configurations, prgs, per_start, per_step, per_end, per_range, bookie = None ):
        
        per = per_start
        
        while( per <= per_end ):
            
            print( str( per ) )
            
            self.run_100( configurations, prgs, per, per + per_range, bookie )
            
            for configuration in configurations:
                # ~ print( configuration.result() )
                
                bookie.record_entry_2_deep( configuration.i, per, configuration.succ_partitions )
                bookie.record_entry_2_deep( configuration.i, str(per)+"fail", configuration.part_failed )
                bookie.record_entry_2_deep( configuration.i, str(per)+"no", configuration.part_no_choice )
                
                configuration.reset()
                
            
            per += per_step
            
        
    
    #
    # run 100
    #
    
    def run_100( self, configurations, prgs, per_min, per_max, bookie = None ):
        
        i = 0
        
        while( i < 100 ):
            
            self.run( configurations, prgs, per_min, per_max, True, bookie )
            
            i += 1
            
        
        # ~ for configuration in configurations:
            # ~ print( configuration.result() )
        
    
    #
    # run once
    #
    
    def run_once( self, configurations, prgs, per_min, per_max, bookie = None ):
        
        succ_run = self.run( configurations, prgs, per_min, per_max, True, bookie )
        
        for configuration in configurations:
            for node in configuration.nodes:
                print( node.report_history() )
    
    #
    # run until succ
    #
    
    def run_until_succ( self, configurations, prgs, per_min, per_max, bookie = None ):
        
        succ_run = False
        
        while succ_run == False:
            
            for configuration in configurations:
                configuration.reset()
            
            succ_run = self.run( configurations, prgs, per_min, per_max, False, bookie )
            
        
        for configuration in configurations:
            for node in configuration.nodes:
                print( node.report_history() )
        
        for prg in prgs:
            
            print( prg.p() )
            
