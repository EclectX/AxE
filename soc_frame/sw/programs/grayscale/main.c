
//~ #include "util.h"
#include "input.h"

void my_main()
{
    int cr = 0b01001101;
    int cg = 0b10010111;
    int cb = 0b00011101;
    
    int mr = 0;
    int mg = 0;
    int mb = 0;
    
    int gray = 0;
    
    int i = 0;
    
    for ( i = 0; i < RGB_SIZE; i+=3 )
    {
        mr = cr * rgb[ i ];
        mg = cg * rgb[ i+1 ];
        mb = cb * rgb[ i+2 ];
        
        gray = mr + mg + mb;
        
        gray >>= 8;
    }
}
