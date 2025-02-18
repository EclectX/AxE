#include "util.h"
#include "print.h"

// Developer- Dik T. Winter
// Intro- Calculates the first 15000 digits of PI.
// Details- http://stackoverflow.com/questions/20287513/can-anyone-make-heads-or-tales-of-this-spigot-algorithm-code-pitiny-c
// Source- http://www.iwriteiam.nl/SigProgC.html#pi
 
int a[98],b,c=98,d,e,f=10000,g,h;
char output[10];
void my_main(){
    snPrint(output,10,"%d",PRINTVARS(e+d/f));
    for(;(b=c-=14);h=strlen(output)){
        Print("%s",PRINTVARS(output));
        for(e=d%=f;(g=--b*2);d/=g){
            d=d*b+f*(h?a[b]:f/5)  ,  a[b]=d%--g;
        }
        snPrint(output,10,"%d",PRINTVARS(e+d/f));
    }
}