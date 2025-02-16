#include "util.h"
#include "print.h"

		     /***********************************************/
#define LIMIT 8      /* You may need to change this to '3' for PC's */
		     /* and Clones or you can experiment with higher*/
		     /* values, but '13' is currently the max.      */
		     /***********************************************/
#define TRUE (1)   
#define FALSE (0)      
static long L_Prime,N_Prime;      /* Last Prime and Number of Primes Found */

static char flags[8192];

void err(char* s);

/**************************************/
/*  Sieve of Erathosthenes Program    */
/**************************************/

static int
SIEVE(long m, long p)
{
  register long i,prime=0,k;
  register long count,size;
  long j;

  size  = m - 1;

  N_Prime   = 0L;
  L_Prime   = 0L;

  j = 0;

      count = 0;

      for(i=0 ; i<=size ; i++)
	{
	  *(flags+i) = TRUE;                                /* 1*size  */
	}                                                 /* 3*size  */
      
      for(i=0 ; i<=size ; i++)
	{
	  if(*(flags+i))                                /* 2*size  */
	    {                                             /* 1*count */
	      count++;                                      /* 1*count */
	      prime = i + i + 3;                            /* 3*count */
	      for(k = i + prime ; k<=size ; k+=prime)     /* 3*count */
		{
		  *(flags+k)=FALSE;                           /* 1*ci    */
		}                                           /* 3*ci    */
	      /* 1*count */
	    }
	}                                               /* 3*size  */
      
      j = j + count;
						
  N_Prime = j ;
  L_Prime = prime;

  if (p != 0L)
    Print("  %9ld   %8ld     %8ld\n",PRINTVARS(m,N_Prime,L_Prime));

  return 0;
}

int
my_main(void)
{

  long  j,p;

  Print("\n   Sieve of Eratosthenes (Scaled to 10 Iterations)\n",0);
  Print("   Version 1.2b, 26 Sep 1992\n\n",0);
  Print("   Array Size   Number   Last Prime\n",0);
  Print("    (Bytes)   of Primes\n",0);
	
  j = 1024;
  p = 1;
  SIEVE(j,p);

  return 0;
}