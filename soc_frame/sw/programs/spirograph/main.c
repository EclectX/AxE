/**
 * @file
 * @author [Krishna Vedala](https://github.com/kvedala)
 * @brief Implementation of
 * [Spirograph](https://en.wikipedia.org/wiki/Spirograph)
 *
 * @details
 * Implementation of the program is based on the geometry shown in the figure
 * below:
 *
 * <a
 * href="https://commons.wikimedia.org/wiki/File:Resonance_Cascade.svg"><img
 * src="https://upload.wikimedia.org/wikipedia/commons/3/39/Resonance_Cascade.svg"
 * alt="Spirograph geometry from Wikipedia" style="width: 250px"/></a>
 */
////////////// NOT Work properly
#include "util.h"
#include "print.h"
#include "memmgr.h"
#define M_PI 0x40490fdb //3.14...
void spirograph(uint32_t *x, uint32_t *y, uint32_t l, uint32_t k, size_t N, uint32_t rot)
{
	uint32_t N32 = int_to_float(N);
  uint32_t dt = fpdiv(fpmul(fpmul(rot,0x40000000),M_PI),N32); //2
  uint32_t t = 0, R = 0x3f800000;
  const uint32_t k1 = fpsub(0x3f800000, k);
  for (size_t dk = 0; dk < N; dk++, t = fpadd(t, dt)){
    x[dk] = fpmul(R,fpadd(fpmul(k1,fp_Cos(t)),fpmul(l,fpmul(k,fp_Cos(fpdiv(fpmul(k1,t),k))))));
    y[dk] = fpmul(R,fpsub(fpmul(k1,fp_Sin(t)),fpmul(l,fpmul(k,fp_Sin(fpdiv(fpmul(k1,t),k))))));
  }
}
void my_main()
{
  size_t N = 500;
  uint32_t l = 0x3e99999a, k = 0x3f400000, rot = 0x41200000;
  //  0.3   0.75  10
  uint32_t *x = memmgr_alloc(N * sizeof(uint32_t));
  uint32_t *y = memmgr_alloc(N * sizeof(uint32_t));
  spirograph(x, y, l, k, N, rot);
  char answer[25];
  for (size_t i = 0; i < N; i++)
  {
    //Print("\n%f, %f\n",PRINTVARS(x[i],y[i]));
    snPrint(answer,25,"\n %f, %f\n",PRINTVARS(x[i],y[i]));
    Print(answer,PRINTVARS(0));
  }
  memmgr_free(x);
  memmgr_free(y);
}