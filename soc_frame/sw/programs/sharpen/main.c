
#include "util.h"

#include "input.h"

// results: e 147852 - a 147408

int shift_by = 0;

__attribute__((noinline))
int amul(int rd, int rs1, int rs2)
{
    asm __volatile__ ( ".word 0xFEC5857F\n" );
    asm __volatile__ ( "addi %0, x10, 0" : "=r" (rd) );
    
    return rd;
}

__attribute__((noinline))
int emul(int rd, int rs1, int rs2)
{
    asm __volatile__ ( "mul x10, x11, x12" );
    asm __volatile__ ( "addi %0, x10, 0" : "=r" (rd) );
    
    return rd;
}

int mul( int a, int b )
{
    int rd = 0;
    
    //~ a <<= 4;
    //~ b <<= 4;
    a <<= shift_by;
    b <<= shift_by;
    
    if ( 1 == 1 )
    {
        rd = amul( rd, a, b );
    }
    else
    {
        rd = emul( rd, a, b );
    }
    
    rd >>= ( shift_by * 2 );
    
    return rd;
}

int get_color( int w, int h, int c )
{
         if ( w >= WIDTH  ){ w = WIDTH-1; }
    else if ( h >= HEIGHT ){ h = HEIGHT-1;}
    
    return rgb[ w ][ h ][ c ];
}

int clamp( int number )
{
         if ( number > 255 ){ return 255;    }
    else if ( number < 0   ){ return 0;      }
    else                    { return number; }
}

int filter[3][3] =
{
    {0, -1, 0},
    {-1,  5, -1},
    {0, -1, 0}
};

void img_sharpen()
{
    //~ print_str( "P3\n" );
    //~ print_str( "# huemer.tech\n" );
    //~ print_dec( WIDTH );
    //~ print_str( " " );
    //~ print_dec( HEIGHT );NL;
    //~ print_str( "255\n" );
    
    unsigned int w = 0;
    unsigned int h = 0;
    
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
    
    print_char( 0x07 );
    
    for ( w = 1; w < WIDTH-1; w++ )
    {
        for ( h = 1; h < HEIGHT-1; h++ )
        {
            r = 0;
            g = 0;
            b = 0;
            
            cutout_w = w - 1;
            cutout_h = h - 1;
            
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
                    
                    r += mul( cr, filter[fw][fh] );
                    g += mul( cg, filter[fw][fh] );
                    b += mul( cb, filter[fw][fh] );
                    
                    cutout_h += 1;
                }
                
                cutout_h = h - 1;
                cutout_w += 1;
            }
            
            print_dec( (unsigned int)clamp(r) );NL;
            print_dec( (unsigned int)clamp(g) );NL;
            print_dec( (unsigned int)clamp(b) );NL;
        }
    }
    
    print_char( 0x07 );
}

void my_main()
{
    int i = 0;
    
    for( i = 0; i < 32; i++ )
    {
        NL;
        NL;
        NL;
        print_str( "shift by: " );
        print_dec( shift_by );
        NL;
        NL;
        NL;
        
        img_sharpen();
        
        shift_by =+ 1;
    }
    
    //~ img_sharpen();
}
