#include "util.h"
#include "print.h"

void my_main(){
    uint32_t steps = 100000;    
    uint32_t x,y;
    y = fpadd(0x3f800000,fpdiv(0x3f800000,0x47c35000));
    x = 0x3f800000;
    for(; steps > 0; steps--){
        x = fpmul(x,y);
    }
    Print("natlog: e=%f\n",PRINTVARS(x));
}