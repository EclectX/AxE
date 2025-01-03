#include "util.h"
#include "print.h"
#include "memmgr.h"

typedef uint32_t (*fn_type)(uint32_t x);

uint32_t sqrt_value;

#define FN_SQRT

#ifdef FN_SQRT
uint32_t f(uint32_t x) {
  return fpsub(fpmul(x,x), sqrt_value);
}

uint32_t df(uint32_t x) {
  return fpmul(x,0x40000000);
}
#endif

#ifdef FN_COMPLEX
uint32_t f(uint32_t x)
{
  return fpsub(fpsub(fpmul(fpmul(x,x),x), x), 0x3f800000);
}

uint32_t df(uint32_t x)
{
  return fpsub(fpmul(x,0x40400000), 0x3f800000);
}
#endif

uint32_t myfabs(uint32_t num)
{
  if ((num >> 31))
    return num^0x80000000;
  else
    return num;
}

uint32_t rn_solver(int *converged, uint32_t maxerr, unsigned maxiter, fn_type f, fn_type df)
{
  unsigned iter;
  uint32_t guess = 0x3f800000;

  *converged = 0;
  for (iter = 0; iter < maxiter; iter++)
  {
      *converged = !(fpsub(maxerr,myfabs(f(guess))) >> 31);
      
      if (*converged)
        break;
        
      guess = fpsub(guess,fpdiv(f(guess),df(guess)));
  }
  Print("niter == %d\n",PRINTVARS(iter));
  return guess;
}
uint32_t testdata[5] = {0x48c14a18,0x4883fc5a,0x4963a6bc,0x495717ed,0x4789a484};
// 395856.76220473,270306.80574294,932459.74833807,881022.81949615,70473.028447684
  
#define NTESTDATA (sizeof(testdata)/sizeof(uint32_t))

void my_main(){
    uint32_t root;
    int converged;
    for (unsigned int i=0; i < NTESTDATA; i++)
    {
    sqrt_value = testdata[i];   // 0.00001
    root = rn_solver(&converged, 0x3727c5ab, 20, f, df);
    Print("sqrt(%f) == %f (converged:%s)\n",PRINTVARS( sqrt_value, root, converged ? "t" : "f"));
    }

}