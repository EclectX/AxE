#include "util.h"
#include "print.h"

/** Gradient Descent for linear regression.
* The formula for linear regression is : Y= wX + b
* Cost Function: 1/n⅀(Yi - (wXi + b))^2 [i starts from 0 → n]
*Functions Description:
* 1) derivateWRTWeight(uint32_t weight, uint32_t bias):
* 	Is the partial derivative of the cost function with respect to weight
* 2) derivateWRTBias(uint32_t weight, uint32_t bias):
* 	Is the partial derivative of the cost function with respect to bias
* 3) gradientDescent(uint32_t weight, uint32_t bias):
*	Represents the gradient descent function. It is used to manage the value of the weight
*	and the bias of the linear function.
*/

#define M  50
uint32_t L = 0x3a83126f;

// uint32_t X[M] = {0, 1, 2, 3, 4, 5, 6, 7};
// uint32_t Y[M] = {1, 2, 3, 4, 5, 6, 7, 8};
//uint32_t X[M] = {-5, -4.7, -3, -2.5, -1, 1.5, 2, 2.3, 3, 3.9};
//uint32_t Y[M] = {3, 1.7, 2, 1.5, 4, -0.3, -1.5, -2, -4.4, -6};

//Number of homicides by firearm
/*
uint32_t NEW_Y[M] = { 
  int_to_float(56), int_to_float(20), int_to_float(1198), int_to_float(9),int_to_float(30),int_to_float(18),int_to_float(11),int_to_float(52),int_to_float(1456),int_to_float(8),
  int_to_float(12),int_to_float(70),int_to_float(68),int_to_float(18),int_to_float(34678),int_to_float(0),int_to_float(51),int_to_float(187),int_to_float(173),int_to_float(353),
  int_to_float(12539),int_to_float(248),int_to_float(201),int_to_float(17),int_to_float(27),int_to_float(5),int_to_float(20),int_to_float(15),int_to_float(1618),int_to_float(1790),
  int_to_float(453),int_to_float(2446),int_to_float(41),int_to_float(3),int_to_float(24),int_to_float(35),int_to_float(24),int_to_float(158),int_to_float(29),int_to_float(5009),
  int_to_float(85),int_to_float(5201),int_to_float(7),int_to_float(0),int_to_float(3093),int_to_float(21),int_to_float(6),int_to_float(417),int_to_float(1080),int_to_float(11)
}; //6*/
uint32_t Y[M] = {
  56, 20, 1198, 9,30,18,11,52,1456,8,
  12,70,68,18,34678,0,51,187,173,353,
  12539,248,201,17,27,5,20,15,1618,1790,
  453,2446,41,3,24,35,24,158,29,5009,
  85,5201,7,0,3093,21,6,417,1080,11
}; //6
void turn_Y(){
	for (int i=0 ;i<M; i++){
		Y[i]= int_to_float(Y[i]);
	}
}
//Average firearms per 100 people
uint32_t X[M] = {
  0x4109999a, 0x40f33333,0x41233333,0x41480000,0x41700000,0x41f33333,0x40600000,0x40a9999a,0x3f000000,0x40f9999a,
  0x40e9999a,0x4189999a,0x412,0x418a6666,0x41000000,0x3fb33333,0x40c66666,0x4089999a,0x41f66666,0x412b3333,
  0x40bccccd,0x3fb33333,0x411e6666,0x41ad999a,0x4099999a,0x4211999a,0x41826666,0x41400000,0x40a33333,0x3fa66666,
  0x40600000,0x40b9999a,0x40c66666,0x41133333,0x42353333,0x40e9999a,0x41f26666,0x41b40000,0x4151999a,0x4169999a,
  0x40c66666,0x40b00000,0x41f26666,0x40866666,0x4109999a,0x40e9999a,0x413e6666,0x4101999a,0x3f19999a,0x41380000
};


uint32_t
derivateWRTWeight(uint32_t weight, uint32_t bias)
{
	uint32_t sum = 0;
	
	for(int i = 0; i<M; i++){
		sum =  fpadd(sum,fpmul(X[i],fpsub(Y[i],fpadd(fpmul(weight,X[i]),bias)))); //(X[i]*(Y[i] - (weight * X[i] + bias)));
	}
	
	return fpdiv(fpmul(0xc0000000,sum),M);
}

uint32_t
derivateWRTBias(uint32_t weight, uint32_t bias)
{
	uint32_t sum = 0;
	
	for(int i = 0; i<M; i++){
		sum = (uint32_t)(sum + (Y[i] - (weight * X[i] + bias)));
	}
	
	return ((uint32_t)-2.0 * sum)/M;
}

void
gradientDescent(uint32_t *pweight, uint32_t *pbias)
{
	for (unsigned i = 0; i<200; i++)
  {
		*pweight = (uint32_t)(*pweight - (L*derivateWRTWeight(*pweight, *pbias)));
		*pbias =(uint32_t)(*pbias - (L*derivateWRTBias(*pweight, *pbias)));		
	}
}

void
my_main()
{
	turn_Y();
	uint32_t weight = 0;
	uint32_t bias = 0;

	gradientDescent(&weight, &bias);
	Print("The function is: %fx + %f\n", PRINTVARS(weight, bias));

}