
// This is free and unencumbered software released into the public domain.

#include "util.h"
// The main function has to be called my_main. An explanation will follow.
#include <math.h>
#include <stdlib.h>
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
    float x = 0;
    float Z[100]  ={
        1196.093994, 3506.360107, 2564.884033, 4381.979004, 34.449600, 3853.311768, 1168.934937, 2430.388916, 5917.436035, 6738.983887, 
        102.748398, 7710.552246, 9.578700, 778.939209, 5872.217285, 293.431580, 2362.247314, 1166.668701, 5428.461426, 5309.015625, 
        390.833588, 3190.776611, 8738.637695, 518.982117, 1644.200562, 791.047485, 2599.258057, 7453.602051, 5070.031738, 2613.386475, 
        1920.625000, 1.124900, 5983.667969, 195.977509, 4599.901855, 6669.090820, 374.802429, 2924.850342, 5437.977539, 7046.015625, 
        2894.351074, 926.320923, 5922.505371, 2084.094482, 1930.226929, 1731.599976, 270.190491, 5325.409668, 2634.191406, 358.307983, 
        2693.372070, 1670.492798, 283.518036, 1405.970947, 4412.210449, 5557.860352, 698.002502, 139.544601, 1107.507446, 1945.551880, 
        2303.460938, 5056.374512, 1119.604004, 340.011078, 1643.737427, 7935.841309, 282.076202, 1235.864136, 2239.131104, 951.231628, 
        1367.062500, 2419.536865, 3647.086670, 2766.733887, 4258.647461, 5266.007324, 6865.233398, 3362.021240, 8612.939453, 526.161804, 
        4081.352295, 2455.466309, 4397.880371, 66.081497, 1434.711548, 71.751801, 4083.386963, 6493.902832, 1402.974243, 362.773376, 
        6580.446289, 2025.898682, 4368.429199, 1460.545166, 3973.984131, 382.043579, 2798.750977, 52.941601, 1079.694092, 2674.295410};
    //~ print_str( "mul s\n" );
    for(int i=0;i<100;i++){
         x =  Z[99-i]/Z[i];
       
        // x = x * ((rand()%10000));
        display_print(0,0,"\n");
        display_print(2,i,"");
        display_print(0,0,"\t");
        display_print_float(Z[99-i]);
        display_print(0,0,"\t");
        display_print_float(x);
    }
    // int a = 333;
    // int b = 444;
    
    // int pro;
    
    // pro = a * b;
     x = 5.9;
    float y = 12.9;
    float z = cos(x);
    float k = x/y;
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
