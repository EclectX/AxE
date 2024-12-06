
#define MAX_HALF ( 0x7FFFFFFF )

#include "debug.h"

#include "boolean.h"
#include "mpsoc.h"
#include "typedefs.h"
#include "defines.h"

#include "util.h"
#include "fixed_point.h"

#include "globals.h"

#include "clk_func.h"
#include "time_func.h"
#include "interval_func.h"

#include "input_rgb_size.h"
#include "input_rgb_size2.h"

// period_in_s = 1 / ( MHz * 1.000.000 )
// 60 / period_in_s = clk_cnt_for_1_min

// everytime the cnt reaches clk_cnt_for_1_min * n the next power value is read

// watt is the rate at which energy is created
// W * t = E
// Power output = energy / time

// charge = energy / voltage


/// events at time t
// 
// 1. charging events
// 2. scheduling events
// 
// all events are in a single queue so only a single if has to be checked during
// each iteration.

/// 1. charging events
// 
// go through every node and apply the energy.
// the calculation of the energy is done in some init process.

/// 2. scheduling events
// 
// assign some tasks to a node.



/// measurements of a big and a small node:
// 
// datab.ods, sheet "bit"
// 
// 334; 5,00045; 0,225107; 1,1256362982
// 363; 5,00044; 0,224977; 1,1249839899
// 
// -> big:   1.1256362982 W ~ 1125636 microwatts ~ 1126 milliwatts
// -> small: 1.1249839899 W ~ 1124983 microwatts ~ 1125 milliwatts
// 
// diff
// 1125636 - 1124983 = 653 microwatts

/// clk_cnt
// 
// mul_500_nop_500
// 3,685,821
// 
// mul_500_nop_501
// 3,686,947
// 
// mul_500_nop_502
// 3,687,889

/// period t
// 
// period_in_microseconds = ( 1s / ( 25MHz * 1,000,000 ) ) * 1,000,000
// -> one period takes 0.04 microseconds

/// exec duration
// 
// mul_500_nop_500
// 3,685,821 * 0.04 = 147432.84 microseconds
// 
// mul_500_nop_501
// 3,686,947 * 0.04 = 147477.88 microseconds
// 
// mul_500_nop_502
// 3,687,889 * 0.04 = 147515.56 microseconds
// 
// calc without float:
// 3687889 * 0.04 = x | * 100
// 3687889 * 4 = 100x
// -> 100x / 100 = x
// 
// as milliseconds
// 3687889 * 0.00004 = x | * 100000
// 3687889 * 4 = 100000x
// -> 100000x / 100000 = x

/// energy
// 
// mul_500_nop_502
// 
// 147,432 microseconds * 1,125,636 microwatts = 165,954,766,752 microjouls
// 147 milliseconds * 1,126 milliwatts = 165,522 millijouls

/// clk cnts for 1 millisecond
// 
// one period takes 0.04 microseconds
// -> 0.00004 milliseconds
// -> 25,000 clk cycles in 1 milliseconds

/// multiple cnt reads
// 
// 117,960
// 162,064
// 207,722
// 254,934
// 303,552
// 
// -> considering, that subsecquent cnt reads and writes of the number take so
// long it is not going to be possible to update the batteries of multiple nodes
// between 25,000 clk cylces long reads. writes cannot be avoided for debugging
// purposes.
// 
// -> update the battery every second.

/// clk cnts for 1 s
// 
// one period takes 0.04 microseconds
// -> 0.00000004 s
// -> 25,000,000 clk cycles in 1 s

/// how the battery is charged
// 
// every second some millijouls are added to the battery.




//------------------------------------------------------------------------------
// notes
//------------------------------------------------------------------------------

// prints
// although prints are throught the loop and one might think it is better to
// do them between iterations of the loop. however, printing is not so hard
// and just saving the chars into a buffer might cause even more delay.

void trap()
{
	print_str( "ended sched sw\n" );
	signal_fin();
	while ( 1 == 1 ) {}
}

void img_test()
{
    print_str( "running img test\n" );
    
    int spoon = 0;
    
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
        //spoon = GET_SPOON_FED;
        //print_dec( spoon );NL;
        
        mr = cr * GET_SPOON_FED;
        mg = cg * GET_SPOON_FED;
        mb = cb * GET_SPOON_FED;
        
        //mr = cr * rgb[ i ];
        //mg = cg * rgb[ i+1 ];
        //mb = cb * rgb[ i+2 ];
        
        gray = mr + mg + mb;
        
        gray >>= 8;
        
        print_dec(gray);NL;
        //print_dec(gray);NL;
        //print_dec(gray);NL;
        
        //print_bin( gray, 16 );
        //printf("\n");
        //printf("\n");
        time_update_global();
    }
    
    NL;
    print_str("cnt: ");print_dec(cnt_global.cnt);NL;
    print_str("overflows: ");print_dec(cnt_global.overflows);NL;
    NL;
    
    print_char( 0x04 );
    
    print_str( "img_done\n" );
}



//~ __attribute__((noinline))
//~ int amul(int rd, int rs1, int rs2)
//~ {
    //~ asm __volatile__ (".word 0xFEC5857F\n");
    //~ asm __volatile__ ("addi %0, x10, 0" : "=r" (rd));
    
    //~ return rd;
//~ }



int get_color( int w, int h, int c )
{
         //~ if ( w < 0       ){ uw = 0;       }
    //~ else if ( h < 0       ){ uh = 0;       }
    //~ else if ( w >= WIDTH  ){ uw = WIDTH-1; }
    //~ else if ( h >= HEIGHT ){ uh = HEIGHT-1;}
         
         if ( w >= WIDTH  ){ w = WIDTH-1; }
    else if ( h >= HEIGHT ){ h = HEIGHT-1;}
    
    unsigned int addr_pixel = 0;
    unsigned int pixel = 0;
    
    addr_pixel = 0;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    addr_pixel |= w;
    addr_pixel = addr_pixel << 8;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    addr_pixel |= h;
    addr_pixel = addr_pixel << 8;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    addr_pixel |= c;
    addr_pixel = addr_pixel << 2;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    // byte alignment for addr
    
    //~ addr_pixel = addr_pixel << 2;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    //~ 110001  00000000 00000001 00000000 00
    
    // 2 msb set to 1
    
    addr_pixel |= 0xC0000000;
    
    //~ print_bin( addr_pixel, 32 );NL;
    
    pixel = *( (volatile int*) addr_pixel );
    
    //~ print_str( "got color: " );print_dec( pixel );NL;
    
    return pixel;
}

int clamp( int number )
{
         if ( number > 255 ){ return 255;    }
    else if ( number < 0   ){ return 0;      }
    else                    { return number; }
}

//~ int filter[3][3] =
//~ {
    //~ {-1, -1, -1},
    //~ {-1,  9, -1},
    //~ {-1, -1, -1}
//~ };

int filter[3][3] =
{
    {0, -1, 0},
    {-1,  5, -1},
    {0, -1, 0}
};

//~ int filter[3][3] =
//~ {
    //~ {0, 1, 0},
    //~ {1,  5, 1},
    //~ {0, 1, 0}
//~ };

void img_test2()
{
    
    //35815
    //125690
    
    cnt_t cnt_start;
    cnt_t cnt_end;
    
    time_init( &cnt_start );
    time_init( &cnt_end );
    
    unsigned int cnt_diff = 0;
    
    //~ print_str( "P3\n" );
    //~ print_str( "# huemer.tech\n" );
    //~ print_dec( WIDTH );
    //~ print_str( " " );
    //~ print_dec( HEIGHT );NL;
    //~ print_str( "255\n" );
    
    unsigned int w = 0;
    unsigned int h = 0;
    unsigned int c = 0;
    
    int cutout_w = 0;
    int cutout_h = 0;
    
    int fw = 0;
    int fh = 0;
    
    int r = 0;
    int g = 0;
    int b = 0;
    
    int cr = 0;
    int cg = 0;
    int cb = 0;
    
    int pro_appr = 0;
    
    time_reset_hw_cntr();
    
    for ( w = 0; w < WIDTH; w++ )
    {
        for ( h = 0; h < HEIGHT; h++ )
        {
            r = 0;
            g = 0;
            b = 0;
            
            cutout_w = w - 1;
            cutout_h = h - 1;
            
            time_update_global();
            time_record_global_cnt( &cnt_start );
            
            for ( fw = 0; fw < 3; fw++ )
            {
                for ( fh = 0; fh < 3; fh++ )
                {
                    if (
                        ( -1 == cutout_w )
                     && ( -1 == cutout_h )
                    )
                    {
                        cr = get_color( 0, 0, 0 );
                        cg = get_color( 0, 0, 1 );
                        cb = get_color( 0, 0, 2 );
                    }
                    else if ( -1 == cutout_w )
                    {
                        cr = get_color( 0, cutout_h, 0 );
                        cg = get_color( 0, cutout_h, 1 );
                        cb = get_color( 0, cutout_h, 2 );
                    }
                    else if ( -1 == cutout_h )
                    {
                        cr = get_color( cutout_w, 0, 0 );
                        cg = get_color( cutout_w, 0, 1 );
                        cb = get_color( cutout_w, 0, 2 );
                    }
                    else
                    {
                        cr = get_color( cutout_w, cutout_h, 0 );
                        cg = get_color( cutout_w, cutout_h, 1 );
                        cb = get_color( cutout_w, cutout_h, 2 );
                    }
                    
                    r += cr * filter[fw][fh];
                    g += cg * filter[fw][fh];
                    b += cb * filter[fw][fh];
                    
                    //~ r += amul( pro_appr, cr, filter[fw][fh] );
                    //~ g += amul( pro_appr, cg, filter[fw][fh] );
                    //~ b += amul( pro_appr, cb, filter[fw][fh] );
                    
                    cutout_h += 1;
                }
                
                cutout_h = h - 1;
                cutout_w += 1;
            }
            
            time_update_global();
            time_record_global_cnt( &cnt_end ); 
            
            cnt_diff = time_diff( &cnt_end, &cnt_start );
            print_str( " diff: " );print_dec( cnt_diff ); NL;
            
            print_dec( (unsigned int)clamp(r) );NL;
            print_dec( (unsigned int)clamp(g) );NL;
            print_dec( (unsigned int)clamp(b) );NL;
        }
    }
    
    print_char( 0x04 );
}

//~ void img_test2()
//~ {
    //~ // print_str( "P3\n" );
    //~ // print_str( "# huemer.tech\n" );
    //~ // print_dec( WIDTH );
    //~ // print_str( " " );
    //~ // print_dec( HEIGHT );NL;
    //~ // print_str( "255\n" );
    
    //~ unsigned int w = 0;
    //~ unsigned int h = 0;
    //~ unsigned int c = 0;
    
    //~ int cutout_w = 0;
    //~ int cutout_h = 0;
    
    //~ int fw = 0;
    //~ int fh = 0;
    
    //~ int r = 0;
    //~ int g = 0;
    //~ int b = 0;
    
    //~ int cr = 0;
    //~ int cg = 0;
    //~ int cb = 0;
    
    //~ for ( w = 0; w < WIDTH; w++ )
    //~ {
        //~ for ( h = 0; h < HEIGHT; h++ )
        //~ {
            //~ r = 0;
            //~ g = 0;
            //~ b = 0;
            
            //~ cutout_w = w - 1;
            //~ cutout_h = h - 1;
            
            //~ for ( fw = 0; fw < 3; fw++ )
            //~ {
                //~ for ( fh = 0; fh < 3; fh++ )
                //~ {
                    //~ if (
                        //~ ( -1 == cutout_w )
                     //~ && ( -1 == cutout_h )
                    //~ )
                    //~ {
                        //~ cr = get_color( 0, 0, 0 );
                        //~ cg = get_color( 0, 0, 1 );
                        //~ cb = get_color( 0, 0, 2 );
                    //~ }
                    //~ else if ( -1 == cutout_w )
                    //~ {
                        //~ cr = get_color( 0, cutout_h, 0 );
                        //~ cg = get_color( 0, cutout_h, 1 );
                        //~ cb = get_color( 0, cutout_h, 2 );
                    //~ }
                    //~ else if ( -1 == cutout_h )
                    //~ {
                        //~ cr = get_color( cutout_w, 0, 0 );
                        //~ cg = get_color( cutout_w, 0, 1 );
                        //~ cb = get_color( cutout_w, 0, 2 );
                    //~ }
                    //~ else
                    //~ {
                        //~ cr = get_color( cutout_w, cutout_h, 0 );
                        //~ cg = get_color( cutout_w, cutout_h, 1 );
                        //~ cb = get_color( cutout_w, cutout_h, 2 );
                    //~ }
                    
                    //~ r += cr * filter[fw][fh];
                    //~ g += cg * filter[fw][fh];
                    //~ b += cb * filter[fw][fh];
                    
                    //~ cutout_h += 1;
                //~ }
                
                //~ cutout_h = h - 1;
                //~ cutout_w += 1;
            //~ }
            
            //~ print_dec( (unsigned int)clamp(r) );NL;
            //~ print_dec( (unsigned int)clamp(g) );NL;
            //~ print_dec( (unsigned int)clamp(b) );NL;
        //~ }
    //~ }
    
    //~ print_char( 0x04 );
//~ }





































void my_main()
{
    img_test2();
    //~ img_test();
    
    trap();
}
