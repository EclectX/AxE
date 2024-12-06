
import os
import sys

# open file

path = sys.argv[1]
path_ref = sys.argv[2]
path_out = sys.argv[3]

f = open( path, "r" )
lines = f.readlines()
f.close()

# get the gray values from the file

grays = []

for index,line in enumerate(lines):
    
    lines[ index ] = line[:-1]
    

# find where the start and end of the values is

i_start = 0
i_end = 0

for index,line in enumerate(lines):
    
    if line == "running img test":
        
        i_start = index
        
    
    if line == "kill me":
        
        i_end = index
        
    

# get out the gray values

for index,line in enumerate(lines):
    
    if (i_start < index) and (index < i_end):
        
        grays.append( line )
        
    

for line in grays:
    print( line )

# tripple values for rgb

rgbs = []

for line in grays:
    
    rgbs.append( line )
    rgbs.append( line )
    rgbs.append( line )
    

# prepare header

f = open( path_ref, "r" )
lines = f.readlines()
f.close()

header = []

header.append( lines[0] )
header.append( lines[1] )
header.append( lines[2] )
header.append( lines[3] )

# write file

f = open( path_out, "w" )

for l in header:
    
    f.write( l )
    f.write( "\n" )
    

for l in rgbs:
    
    f.write( l )
    f.write( "\n" )
    

f.close()
