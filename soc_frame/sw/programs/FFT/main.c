#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "util.h"
int my_main(int argc, char *argv[]) {
	unsigned MAXSIZE;
	unsigned MAXWAVES;
	unsigned i,j;
	float *RealIn;
	float *ImagIn;
	float *RealOut;
	float *ImagOut;
	float *coeff;
	float *amp;
	int invfft=0;


	MAXSIZE=4096;
	MAXWAVES=4;
		
 srand(1);

 RealIn=(float*)malloc(sizeof(float)*MAXSIZE);
 ImagIn=(float*)malloc(sizeof(float)*MAXSIZE);
 RealOut=(float*)malloc(sizeof(float)*MAXSIZE);
 ImagOut=(float*)malloc(sizeof(float)*MAXSIZE);
 coeff=(float*)malloc(sizeof(float)*MAXWAVES);
 amp=(float*)malloc(sizeof(float)*MAXWAVES);

 /* Makes MAXWAVES waves of random amplitude and period */
	for(i=0;i<MAXWAVES;i++) 
	{
		coeff[i] = rand()%1000;
		amp[i] = rand()%1000;
	}
 for(i=0;i<MAXSIZE;i++) 
 {
   /*   RealIn[i]=rand();*/
	 RealIn[i]=0;
	 for(j=0;j<MAXWAVES;j++) 
	 {
		 /* randomly select sin or cos */
		 if (rand()%2)
		 {
		 		RealIn[i]+=coeff[j]*cosf(amp[j]*i);
			}
		 else
		 {
		 	RealIn[i]+=coeff[j]*sinf(amp[j]*i);
		 }
  	 ImagIn[i]=0;
	 }
 }
//   display_print(0,0,"\nRealIn\n");
//  for (i=0;i<MAXSIZE;i++)
//    display_print_float(RealIn[i]);


//  display_print(0,0,"\nRealIn\n");
//  for (i=0;i<MAXSIZE;i++){
//    display_print_float(RealIn[i]);
//     display_print(0,0,"\n");

//  }
 /* regular*/
 fft_float (MAXSIZE,invfft,RealIn,ImagIn,RealOut,ImagOut);
 
 display_print(0,0,"\nRealOut\n");
 for (i=0;i<MAXSIZE;i++){
   display_print_float(RealOut[i]);
display_print(0,0,"\n");}

 display_print(0,0,"\nImagOut\n");
 for (i=0;i<MAXSIZE;i++){
   display_print_float(ImagOut[i]);
display_print(0,0,"\n");}
 free(RealIn);
 free(ImagIn);
 free(RealOut);
 free(ImagOut);
 free(coeff);
 free(amp);
 


}
