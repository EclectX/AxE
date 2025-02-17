
// This is free and unencumbered software released into the public domain.

#include "util.h"
// The main function has to be called my_main. An explanation will follow.
#include <math.h>
void my_main()
{
    // There are a few print functions located in util.h (found in dir _libs).
    // Contrary to printf there is a function for each type and should always
    // end with a newline as this tells the system the message is complete.
    
    // Please note that these prints can increase the program size dramatically
    // and it is best to use as few characters as possible e.g. using "s"
    // instead of "start" and "d" instead of "done".
    
    // The messeges are detected by the debugger module and further processed
    // by the simulation environment (sim_main.cpp under configurations)
    
    //~ print_str( "mul s\n" );
    
    int a = 333;
    int b = 444;
    
    int pro;
    
    pro = a * b;
    float x = 5.9;
    float y = 12.9;
    float z = cos(x);
    float k = x*y;
    display_print(0,0,"\nz: ");
    display_print_float(z);
    display_print(0,0,"\ny: ");
    display_print_float(y);
    display_print(0,0,"\nk: ");
    display_print_float(k);
    float* fptr = (float*)malloc(sizeof(float)*10);
    fptr[0] = 54.5454;
    display_print(0,0,"\nfptr[0]: ");
    display_print_float(fptr[0]*12.5445);

    
    // Printing a decimal number. Note the function nl() to print just a newline
    // right after it.
    
    //~ print_dec(pro);
    //~ nl();
    
    //~ print_str( "mul d\n" );
}
