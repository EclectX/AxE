
#include "util.h"
#include "print.h"

/**  mandel.c   by Eric R. Weeks   written 9-28-96
 **  weeks@dept.physics.upenn.edu
 **  http://dept.physics.upenn.edu/~weeks/
 **  
 **  This program is public domain, but this header must be left intact
 **  and unchanged.
 **  
 **  to compile:  cc -o mand mandel.c
 ** 
 **/



void
color(int red, int green, int blue)
{
  Print("<%d,%d,%d>\n",PRINTVARS(red, green, blue) );
}

int
my_main(void)
{
  uint32_t x, xx, y, cx, cy;
  int iteration, hx, hy;
  int itermax = 100;		/* how many iterations to do	*/
  uint32_t magnify = 0x3f800000;		/* no magnification		*/
  int hxres = 78;		/* horizonal resolution		*/
  int hyres = 48;		/* vertical resolution		*/

  /* header for PPM output */
  Print("** Mandelbrot ASCII image\n",0);
  Print("** xres: %d, yres: %d\n",PRINTVARS(hxres, hyres));

  for (hy=1; hy <= hyres; hy++)
    {
      for (hx=1; hx <= hxres; hx++)
	{
	  cx =fpsub(fpmul(fpdiv(fpsub(fpdiv(int_to_float(hx),int_to_float(hxres)),0x3f000000),magnify),0x40400000),0x3f333333);
	  cy = fpmul(fpdiv(fpsub(fpdiv(int_to_float(hy),int_to_float(hyres)),0x3f000000),magnify),0x40400000);
	  x =0x00000000 ; y =0x00000000 ;

	  for (iteration=1; iteration < itermax; iteration++)
	    {
	      xx = fpadd(fpsub(fpmul(x,x),fpmul(y,y)),cx);
	      y = fpadd(fpmul(fpmul(0x40000000,x),y),cy);
	      x = xx;
	      if (fp_ExtractSign(fpsub(fpadd(fpmul(x,x),fpmul(y,y)) , 0x42c80000))==0)
		iteration = 999999;
	    }
	  if (iteration < 99999)
	    Print(" ",0);
	  else
	    Print("0",0);
	}
      Print("\n",0);
    }

  
  return 0;
}