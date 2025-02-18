/*
 ============================================================================
 Name        : TinyNN.c
 Author      : Darius Malysiak
 Version     : 0.01
 Copyright   : It's mine
 Description : A tiny 2-layer NN (one input neuron and one output neuron) implementation with backpropagation training
 ============================================================================
 */

#include "util.h"
#include "print.h"

#define NEURON_COUNT 20
#define SAMPLE_COUNT 20
#define MAX_ITERATIONS 10

#define NETWORK_DATA_TYPE uint32_t

extern inline NETWORK_DATA_TYPE g_deriv(NETWORK_DATA_TYPE a);
extern inline NETWORK_DATA_TYPE g(NETWORK_DATA_TYPE a);

void sampleSine(NETWORK_DATA_TYPE* input, NETWORK_DATA_TYPE* output, NETWORK_DATA_TYPE start, NETWORK_DATA_TYPE end, unsigned int size);
void fillArrayRand(NETWORK_DATA_TYPE* array, unsigned int size);

//#define FANCY
#define OUTPUT

inline NETWORK_DATA_TYPE g_deriv(NETWORK_DATA_TYPE a)
{
	NETWORK_DATA_TYPE sigmoid = fpdiv(0x3f800000 , (fpadd(0x3f800000, fp_Exp(fpmul(0xbf800000,a)))));
	return fpmul(sigmoid,fpsub(0x3f800000,sigmoid));
}

inline NETWORK_DATA_TYPE g(NETWORK_DATA_TYPE a)
{
	return fpdiv(0x3f800000 , (fpadd(0x3f800000, fp_Exp(fpmul(0xbf800000,a)))));
}

void sampleSine(NETWORK_DATA_TYPE* input, NETWORK_DATA_TYPE* output, NETWORK_DATA_TYPE start, NETWORK_DATA_TYPE end, unsigned int size)
{
	
	NETWORK_DATA_TYPE step = fpdiv(fpsub(end,start),int_to_float(size));

	unsigned int i;
	for(i=0; i<size; ++i)
	{
		input[i] = fpadd(start,fpmul(step,int_to_float(i)));
		output[i] = fp_Sin(input[i]);
	}
}
void fillArrayRand(NETWORK_DATA_TYPE* array, unsigned int size)
{
	unsigned int i;
	for(i=0; i<size; ++i)
	{
		array[i] =  fpsub((NETWORK_DATA_TYPE)Rand(),0x3f000000);
	}
}
void fillArrayNull(NETWORK_DATA_TYPE* array, unsigned int size)
{
	unsigned int i;
	for(i=0; i<size; ++i)
	{
		array[i] = 0;
	}
}
int train(NETWORK_DATA_TYPE eta, NETWORK_DATA_TYPE error_threshold, NETWORK_DATA_TYPE bias, NETWORK_DATA_TYPE alpha)
{

	NETWORK_DATA_TYPE total_error = fpadd(error_threshold, 0x3f800000);

	NETWORK_DATA_TYPE input[SAMPLE_COUNT];
	NETWORK_DATA_TYPE output[SAMPLE_COUNT];

	NETWORK_DATA_TYPE NN_output = 0;
	NETWORK_DATA_TYPE weights_layer0_1[NEURON_COUNT*2];
	NETWORK_DATA_TYPE weights_layer1_2[NEURON_COUNT];

	NETWORK_DATA_TYPE delta_weights_layer0_1[NEURON_COUNT*2];
	NETWORK_DATA_TYPE delta_weights_layer1_2[NEURON_COUNT];

	NETWORK_DATA_TYPE delta_layer_2, delta_layer_1;
	NETWORK_DATA_TYPE a;
	NETWORK_DATA_TYPE g_layer_1[NEURON_COUNT];
	NETWORK_DATA_TYPE g_deriv_layer_1[NEURON_COUNT];
	NETWORK_DATA_TYPE delta_w_layer_2_1;
	NETWORK_DATA_TYPE delta_w_layer_1_0;

	fillArrayRand(weights_layer0_1,NEURON_COUNT*2);
	fillArrayRand(weights_layer1_2,NEURON_COUNT);

	fillArrayNull(delta_weights_layer0_1,NEURON_COUNT*2);
	fillArrayNull(delta_weights_layer1_2,NEURON_COUNT);

	sampleSine(input, output, 0, 0x4048f5c3, SAMPLE_COUNT);

	unsigned int iteration_count = 0;
	unsigned int i;
	unsigned int j;
	while(total_error > error_threshold && iteration_count < MAX_ITERATIONS)
	{
		total_error =0;

		
		for(i=0; i<SAMPLE_COUNT; ++i)
		{
			for(j=0; j<NEURON_COUNT; ++j)
			{
				a = fpadd(fpmul(input[i],weights_layer0_1[2*j]),fpmul(bias,weights_layer0_1[2*j+1]));
				g_layer_1[j] = g(a);
				g_deriv_layer_1[j] = g_deriv(a);
				NN_output = fpadd(NN_output,fpmul(weights_layer1_2[j], g_layer_1[j]));
			}
			delta_layer_2 = fpsub(NN_output,output[i]);
			total_error = fpadd(total_error,fpmul(delta_layer_2,delta_layer_2));

			for(j=0; j<NEURON_COUNT; ++j)
			{
				delta_layer_1 = fpmul(fpmul(g_deriv_layer_1[j],weights_layer1_2[j]),delta_layer_2);
				delta_w_layer_2_1 = fpmul(delta_layer_2 , g_layer_1[j]);
				weights_layer1_2[j] = fpsub(weights_layer1_2[j],fpadd(fpmul(delta_w_layer_2_1,eta),fpmul(alpha,delta_weights_layer1_2[j])));
				delta_weights_layer1_2[j] = fpadd(fpmul(delta_w_layer_2_1,eta),fpmul(alpha,delta_weights_layer1_2[j]));
				delta_w_layer_1_0 = fpmul(delta_layer_1,input[i]);
				weights_layer0_1[2*j] = fpsub(weights_layer0_1[2*j],fpadd(fpmul(delta_w_layer_1_0,eta),fpmul(alpha,delta_weights_layer0_1[2*j])));
				delta_weights_layer0_1[2*j] = fpadd(fpmul(delta_w_layer_1_0,eta),fpmul(alpha,delta_weights_layer0_1[2*j]));
				delta_w_layer_1_0 = fpmul(delta_layer_1,bias);
				weights_layer0_1[2*j+1] = fpsub(weights_layer0_1[2*j+1],fpadd(fpmul(delta_w_layer_1_0,eta),fpmul(alpha,delta_weights_layer0_1[2*j+1])));
				delta_weights_layer0_1[2*j+1] = fpadd(fpmul(delta_w_layer_1_0,eta),fpmul(alpha,delta_weights_layer0_1[2*j+1]));
			}
			#ifdef FANCY
			Print("sample error %f, should %f is %f\n",PRINTVARS(delta_layer_2,output[i], NN_output));
			#endif
			NN_output = 0;
		}
		#ifdef FANCY
		Print("Total error %f\n\n",PRINTVARS(total_error));
		#endif

		++iteration_count;

		fillArrayNull(delta_weights_layer0_1,NEURON_COUNT*2);
		fillArrayNull(delta_weights_layer1_2,NEURON_COUNT);

		#ifdef OUTPUT
		Print("iteration %d Total error %f\n",PRINTVARS(iteration_count,total_error));
		#endif
	}
	return 0;
}
void my_main()
{
	Srand(42);
    // 0.005, 0.01, 1.0, 0.4
    train(0x3ba3d70a,0x3c23d70a,0x3f800000,0x3ecccccd);
	display_print(0,0,"\n Done! \n");
}