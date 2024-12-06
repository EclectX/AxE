
import os
import sys

# open file

path = sys.argv[1]

f = open( path, "r" )
lines = f.readlines()
f.close()

# remove header

del lines[0]
del lines[0]
del lines[0]
del lines[0]

# prepare data

for index,line in enumerate(lines):
    
    lines[ index ] = line[:-1]
    

size = len( lines )

# prepare array string

define_str = ""
array_str = ""

define_str += "#define RGB_SIZE ( " + str(size) + " )\n"

array_str += define_str
array_str += "int rgb[RGB_SIZE] = {\n"

for line in lines:
    
    array_str += line + ",\n"
    

array_str = array_str[:-2] + "\n"

array_str += "};\n"

# write files

f = open( "input.h", "w" )
f.write( array_str )
f.close()

f = open( "input_rgb_size.h", "w" )
f.write( define_str )
f.close()
