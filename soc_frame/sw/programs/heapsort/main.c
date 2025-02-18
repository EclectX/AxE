#include "util.h"
#include "print.h"


static int64_t bplong;
static int64_t base[2048];

/*************************/
/*  Heap Sort Program    */
/*************************/

int
HSORT(int64_t m, int64_t p)
{
  int64_t i,j,k,l;
  int64_t size;

  int64_t  msize, iran, ia, ic, im, ih, ir;
  int64_t  count, ca;

  msize = m * bplong;
  size  = m - 1;

  if (m >= 2048)
    {
      display_print(0, 0, "base buffer overflow!\n");
      Fail(1);
    }

  ia = 106;
  ic = 1283;
  im = 6075;
  ih = 1001;

  count = 0;

  iran = 47;                        /* Fill with 'random' numbers */
  for(i=1 ; i<=size ; i++)
    {
      iran = (iran * ia + ic) % im;
      *(base+i) = 1 + (ih * iran) / im;
    }

  k = (size >> 1) + 1;              /* Heap sort the array */
  l = size;
  ca = 0;

  for (;;)
    {
      if (k > 1)
	{
	  ir = *(base+(--k));
	}
      else
	{
	  ir = *(base+l);
	  *(base+l) = *(base+1);
	  if (--l == 1)
	    {
	      *(base+1) = ir;
	      goto Done;
	    }
	}

      i = k;
      j = k << 1;

      while (j <= l)
	{
	  if ( (j < l) && (*(base+j) < *(base+j+1)) ) ++j;
	  if (ir < *(base+j))
	    {
	      *(base+i) = *(base+j);
	      j += (i=j);
	    }
	  else
	    {
	      j = l + 1;
	    }
	}
      *(base+i) = ir;
    }
 Done:
  count = count + ca;

  /* Scale runtime per iteration */
  ir = count;
  ir = (ir + ca) / 2;

  if ( p != 0L )
    Print("   %d\n", PRINTVARS((int)msize));

  /* check the array */
  for(i = 0; i < size-1; i++)
    {
      if (base[i] > base[i+1])
      {
        display_print(0, 0, "ERROR: base array is not properly sorted!\n");
        libmin_fail(1);
      }
    }
  display_print(0, 0, "INFO: base array is properly sorted!\n");

  return 0;
}

void
my_main()
{
  int64_t  j, p;

  bplong = sizeof(int64_t);

  display_print(0, 0, "\n   Heap Sort C Program\n");
  Print("   Size of long (bytes): %d\n\n", PRINTVARS((long)bplong));
  display_print(0, 0, "   Array Size (bytes)\n");

				   /* Predetermine runtime (sec) for  */
				   /* memory size 2000 * sizeof(long),*/
				   /* and 256 iterations. p = 0 means */
				   /* don't print the result.         */
  j = 1024;
  p = 1;
  HSORT(j,p);

}