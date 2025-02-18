/* Kepler.c:

   Solve Kepler's equation using various methods. Can be run as a standalone
   program or called via the entry point kepler (see below.)

   Kepler's equation is the transcendental equation

	E = M + e sin(E)

   where M is a given angle (in radians) and e is a number in the range
   [0,1). Solution of Kepler's equation is a key step in determining the
   position of a planet or satellite in its orbit. Here e is the eccentricity
   of the elliptical orbit and M is the "Mean anomaly." M is a fictitious
   angle that increases at a uniform rate from 0 at perihelion to 2Pi in
   one orbital period. E is an angle at the center of the ellipse. It is
   somewhat difficult to describe in words its precise geometric meaning --
   see any standard text on dynamical or positional astronomy, e.g.,
   W.E. Smart, Spherical Astronomy. Suffice it to say that E determines
   the angle v at the focus between the radius vector to the planet and
   the radius vector to the perihelion, the "true anomaly"  (the ultimate
   angle of interest.) Thus, kepler's equation provides the link between the
   "date", as measured by M, and the angular position of the planet on its
    orbit. 

   Compile: cc -o kepler kepler.c -lm

   ( Use the flag -D_SHORT_STRINGS if your compiler cannot handle multiline
     strings.)

   For usage information, give the command kepler -h or see USAGE defined
   below.

   API usage:

	extern int kepler(uint32_t *E, uint32_t M, uint32_t e, uint32_t derror,
            int method);

	where the last two parameters are a uint32_t specifying the 
        precision and an int specifying the method. The possible values
        of m are:

	m=0: simple iteration. 
	m=1: Newton's method.
	m=2: Binary search.
	m=3: Power series in e.
	m=4: Fourier Bessel series. 

        The answer is returned through the pointer passed as first argument.
	The function returns the number of iterations required or -1
	in case of an error.

   Also possibly of interest is the included routine for calculating bessel
   functions of the first kind with integer index, although I'm sure the
   implementation is pretty naive. The calling sequence is:

	extern uint32_t J(int n, uint32_t x);

   Compile this file with cc -c -DNO_MAIN and link your program with kepler.o.

   Author: Terry R. McConnell
	   trmcconn@syr.edu

*/
#include "util.h"
#include "print.h"
#include "memmgr.h"

#define VERSION "1.11"

#ifndef DBL_EPSILON
#define DBL_EPSILON 0x25800000
#endif

#ifndef PI
#define PI 0x40490fdb
#endif
#define LAPLACE_LIMIT 0x3f29a98d
#define USAGE "kepler [-h -v -a <.nnnn...> -m <k>] M e"

#ifdef _SHORT_STRINGS
#define HELP USAGE
#else
#define HELP USAGE"\n\
-h: print this helpful message\n\
-v: print version number and exit\n\
-a: obtain solution to accuracy of  < .nnnn (default .0000001)\n\
-m: use selected calculation method k, where\n\
	k = 1: Simple iteration.\n\
	k = 2: Newton's method.\n\
	k = 3: Binary search.\n\
	k = 4: Series in powers of e. (e<.6627434193.)\n\
	k = 5: Fourier Bessel series.\n\
M = mean anomaly (radians)\n\
e = orbit eccentricty."
#endif

/* E = eccentric anomaly,
   e = eccentricity,
   M = mean anomaly
   (using radian measure).
*/

uint32_t bin_fact(int n, int j);
uint32_t J(int,uint32_t);
static uint32_t derror = 0x358637bd;
#undef M
uint32_t strict_iteration(uint32_t E, uint32_t e, uint32_t M, int reset)
{
	return fpadd(M, fpmul(e,fp_Sin(E)));
}

uint32_t newton(uint32_t E, uint32_t e, uint32_t M, int reset)
{
	return fpadd(E,fpdiv(fpsub(fpadd(M,fpmul(e,fp_Sin(E))),E),fpsub(0x3f800000,fpmul(e,fp_Cos(E)))));
}

uint32_t binary(uint32_t E, uint32_t e, uint32_t M, int reset)
{
	static uint32_t scale = 0x3f490fdb;
	uint32_t R;
	uint32_t X;

	if(reset) {
		scale = fpdiv(PI,0x40800000);
		return 0;
	}
  
	R = fpsub(E,fpmul(e,fp_Sin(E)));
	X = !(fpsub(M,R)>>31) ? fpadd(E,scale) : fpsub(E, scale);
	scale = fpdiv(scale,0x40000000);
	return X;
	
}

uint32_t e_series(uint32_t E, uint32_t e, uint32_t M, int reset)
{
	static int n;
	int k;
	uint32_t n_2k,a_n=0,s_k;

	if(reset){
		n = 0;
		return 0;
	}
	if(n==0){
		n++;
		return M;
	}
	for(k=0;2*k<=n;k++){
		n_2k = fpsub(int_to_float(n),fpmul(0x40000000,int_to_float(k)));
		s_k = k%2 ? 0xbf800000 : 0x3f800000;
    
		a_n = fpadd(a_n,fpmul(s_k,fpmul(bin_fact(n,k),fp_Sin(fpmul(n_2k,M)))));
	}
	n++;
	return fpadd(E,fpmul(fp_Pow(e,int_to_float(n-1)),a_n));;
}

uint32_t j_series(uint32_t E, uint32_t e, uint32_t M, int reset)
{
	static int n;
	uint32_t dn, term;

	if(reset){
		n = 0;
		return 0;
	}

	if(n==0){
		n++;
		return M;
	}
	dn = int_to_float(n);
	term = fpmul(fpmul(fpdiv(0x40000000,int_to_float(n)),J(n,fpmul(dn,e))),fp_Sin(fpmul(dn,M)));
	n++;
	return fpadd(E, term);
}

static void *methods[] = {strict_iteration,
					newton,
					binary,
					e_series,
					j_series,
				};

#define NMETHODS (sizeof methods /sizeof(void *))

#define IITERATION 0
#define INEWTON 1
#define IBINARY 2
#define IESERIES 3
#define IJSERIES 4

#ifndef NO_MAIN

void my_main()
{
  int argc=5;
  char *argv[] = { "kepler", "-m", "3", "0.34", "0.25" };
	int n = 1,i=1;
	int m=1;
	uint32_t sign = 0x3f800000;
	uint32_t M = 0, e = 0xbdcccccd, E_old=fpdiv(PI,0x40000000),E;
	uint32_t (*method)(uint32_t,uint32_t, uint32_t,int);

	while(argv[i][0] == '-'){
		  if(strcmp(argv[i],"-h")==0){
			Print("%s\n",PRINTVARS(HELP));
		  }
		  if(strcmp(argv[i],"-v")==0){
			Print("%s\n",PRINTVARS(VERSION));
		  }
		  if(strcmp(argv[i],"-a")==0){
			derror = int_to_float((int)argv[i+1]);
			if(derror <= DBL_EPSILON)
			        display_print(0,0,"Warning: requested precision may exceed implementation limit.\n");
			i += 2;
			continue;
		  }
		  if(strcmp(argv[i],"-m")==0){
			m = atoi(argv[i+1]);
			if((m<=0) || (m>NMETHODS)){
				Print("Bad method number %d\n",PRINTVARS(m));
				return;
			}
			i += 2;
			continue;
		  }
		  Print("kepler: Unknown option %s\n",PRINTVARS(argv[i]));
		  Print("%s\n",PRINTVARS(USAGE));
		  return;
		}
	if(i + 2 > argc){
		Print("%s\n",PRINTVARS(USAGE));
		return;
	}
	M = Atof(argv[i++]);
	e = Atof(argv[i]);
	method = (uint32_t(*)(uint32_t,uint32_t,uint32_t,int))methods[m-1];
	if((m==4)&&(!(fpsub(e,LAPLACE_LIMIT)>>31) && e!=LAPLACE_LIMIT)){
		Print("e cannot exceed %f for this method.\n",
				PRINTVARS(LAPLACE_LIMIT));
		return;
	}

	if((e>>31)||!(fpsub(e,0x3f800000)>>31)){
		Print("Eccentricity %f out of range.\n",PRINTVARS(e));
		return;
	}
	sign = M >> 31 ? 0xbf800000 : 0x3f800000;
	M = fpdiv(fp_Fabs(M),fpmul(0x40000000,PI));
  M = fpmul(fpmul(fpsub(M,floor(M)),0X40000000),fpmul(PI,sign));
	sign = 0x3f800000;
  
	if(!(fpsub(M,PI)>>31) && M!=PI){
		M = fpsub(fpmul(int_to_float(2),PI),M);
		sign = 0xbf800000;
	}
  E=method(E_old,e,M,0);
	while(!(fpsub(fp_Fabs(fpsub(E_old,E)),derror)>>31)){
		E_old = E;
		Print("n = %d\tE = %f\n",PRINTVARS(n++,fpmul(sign,E)));
    E=method(E_old,e,M,0);
	}
}
#endif /* NO_MAIN */

uint32_t 
bin_fact(int n, int k)
{
		int j;
		uint32_t cum_prod = 0x3f800000;
		uint32_t num_fact,den_fact,dj,dk,x;
		x = fpsub(fpdiv(int_to_float(n),0x40000000),int_to_float(k));

		for(j=n-k;j>1;j--){
			dj = int_to_float(j);
			dk = fpsub(fpsub(fpadd(int_to_float(n),0x3f800000),dj),int_to_float(k));
			den_fact = n - k - j + 1 <= k ? fpmul(dk,dj) : dj;  
			num_fact = n - k - j + 1 <= k ? fpmul(x,x) : x; 
			cum_prod = fpmul(cum_prod,fpdiv(num_fact,den_fact));
		}
		return cum_prod;
}

uint32_t J(int n, uint32_t x)
{
	uint32_t dsum=0,dterm,s_j,d_n,d_j,cfact=int_to_float(1);
	int j,nn;
	nn = n >= 0 ? n : -n;
	d_n = int_to_float(nn);
	for(j=1;j<=nn;j++){
		d_j = int_to_float(j);
		cfact =fpmul(cfact,fpdiv(x,fpmul(int_to_float(2),d_j)));
	}
	dsum = dterm = cfact;

	j = 1;

	do {
		d_j = int_to_float(j);
		s_j = j%2 ? 0xbf800000: 0x3f800000;
		dterm = fpmul(dterm,fpdiv(fpmul(x,x),fpmul(d_j,fpmul(0x40800000,fpadd(d_n,d_j)))));
		dsum = fpadd(dsum,fpmul(s_j,dterm));
		j++;
	} while(!(fpsub(dterm,DBL_EPSILON) >> 31) && fpsub(dterm,DBL_EPSILON)!=0);
		
	s_j = nn%2 ? 0xbf800000 : 0x3f800000;
	return  n >= 0 ? dsum : fpmul(s_j,dsum);
}

int
kepler(uint32_t *E, uint32_t M, uint32_t e, uint32_t my_derror, int m)
{
	int count = 0;
	uint32_t sign = 0x3f800000;
	uint32_t  E_old=fpdiv(PI,2);
	uint32_t (*method)(uint32_t,uint32_t, uint32_t,int);
	
	if((m<0) || (m>=NMETHODS))return -1;

	method = (uint32_t(*)(uint32_t,uint32_t,uint32_t,int))methods[m];
	if((m==3)&&(!(fpsub(e,LAPLACE_LIMIT)>>31) && fpsub(e,LAPLACE_LIMIT)!=0))
		return -1;
	if((e>>31)||(!(fpsub(e,0x3f800000)>>31)))
		return -1;

	sign = !(M >> 31) ? 0x3f800000 : 0xbf800000;
	M = fpdiv(fp_Fabs(M),fpmul(int_to_float(2),PI));
	M = fpmul(fpmul(fpsub(M,floor(M)),0x40000000),fpmul(PI,sign));
	sign = !(M >> 31) ? 0x3f800000 : 0xbf800000;
	M = fp_Fabs(M);
	if(!(fpsub(M,PI)>>31) && fpsub(M,PI)!=0){
		M = fpsub(fpmul(2,PI),M);
		sign = 0xbf800000;
	}
	
	while(!(fpsub(fp_Fabs(fpsub(E_old,*E=method(E_old,e,M,0))),derror)>>31)){
		E_old = *E;
		count++;
	}
	*E = sign*(*E);
	method(0,0,0,0x3f800000);  /* reset */

	return count;
}
