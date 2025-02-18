/* Parrondo's game is based upon two simple games of chance.

        The gambler's fortune starts at 0.

	The simple game: Toss a biased coin and win +1 with probability
		S_WIN_PROB (defined below). Otherwise win -1; 

	The complex game: If the player's fortune is divisible by 3, toss
		the "bad coin" having win probability BAD_WIN_PROB.
		If the player's fortune is not divisible by 3 toss the
                "good coin" having win probability GOOD_WIN_PROB.

	A game ends when the accumlated fortune exceeds MAX_FORTUNE ( a "win" )
	or dips below -MAX_FORTUNE ( a "loss .)  

	The numbers are chosen so that each game is quite unfavorable.
        Remarkably, when the games are alternated at random, the resulting
        game is quite favorable.

	This program simulates many trials of a Parrondo game and reports
        statistics on their outcomes. (It can also simulate the simple and
        complex games individually.) The number of trials, fortune limits,
        and a seed for the random number can be supplied on the command line.
        The -h option prints detailed help. 

	For more information on Parrondo games and related phenomena see
        J. Parrondo's website, http://seneca.fis.ucm.es/parr/,  or the
        announcement in Nature magazine, 23/30, December 1999.
*/

#include "util.h"
#include "print.h"

#define VERSION "1.1"
#define USAGE "parrondo [ -s number -t number -m number -1 -2 -h -v]"
#ifndef _SHORT_STRINGS
#define HELP "parrondo [ -s number -t number -m number -1 -2 ]\n\n\
Print information on simulations of Parrondo's paradoxical game.\n\n\
-s: Use next argument as RNG seed. (otherwise use system time as seed.)\n\
-t: Use next argument as number of trials. Default 10000.\n\
-m: Use number as max fortune (win), -number as min fortune(loss). Default 50. \n\
-v: Print version number and exit. \n\
-h: Print this helpful information. \n\
-1: Simulate simple game alone.\n\
-2: Simulate complex game alone.\n\n"
#else
#define HELP USAGE
#endif

#define MAX_FORTUNE 50
#define MAX_ITERATIONS 1000000
#define TRIALS 1000
#define INITIAL_SEED 3445
#ifndef _MAX_RAND
#define _MAX_RAND 2147483647
#endif

#define S_WIN_PROB 0x3efd70a4
#define BAD_WIN_PROB 0x3dc28f5c
#define GOOD_WIN_PROB 0x3f3eb852

int cointoss(uint32_t p)
{

	uint32_t U;

	U = fpdiv(((uint32_t)Rand()),((uint32_t)_MAX_RAND));
	return (fpsub(U,p)>>31) ? 1 : -1;
} 

int play_s(void)
{
	return cointoss(S_WIN_PROB);
		
}

int play_c(int fortune){
	if( fortune % 3 )
		return cointoss(GOOD_WIN_PROB);
	return cointoss(BAD_WIN_PROB);
}

void my_main()
{
	int argc=6;
	char *argv[] = { "parrondo", "-2", "-t", "10", "-S", "1" };
	int n=0;
	uint32_t n_bar,n_tot=0;
	int trials = TRIALS;
	int i=0,j=0,m;
	int win_count = 0;
	int loss_count = 0;
	int site_visits[3];  /* counts visits to numbers mod 3 */
	int fortune = 0;
	int max_fortune = MAX_FORTUNE;
	uint32_t game_select = 0x3f000000;            
	int seed=0;
	while(++j < argc){
		if(argv[j][0] == '-')
			switch(argv[j][1]){ 
				case 's':
				case 'S':
					if(j+1 >= argc){
						Print("%s\n",PRINTVARS(USAGE));
					}
					seed = atoi(argv[j+1]);
					j++;
					continue;
				case 't':
				case 'T':
					if(j+1 >= argc){
						Print("%s\n",PRINTVARS(USAGE));
					}
					trials = atoi(argv[j+1]);
					j++;
					continue;	
				case 'm':
				case 'M':
					if(j+1 >= argc){
						Print("%s\n",PRINTVARS(USAGE));
					}
					max_fortune = atoi(argv[j+1]);
					j++;
					continue;
				case 'v':
				case 'V':
					Print("%s\n",PRINTVARS(VERSION));
				case '?':
				case 'h':
				case 'H':
					Print("%s\n",PRINTVARS(HELP));
				case '1':
					game_select = 0;
					break;
				case '2':
					game_select = 0x3f800000;
					break;
				default:
					Print("parrondo: unkown option %s\n",PRINTVARS(argv[j]));
			}
		else {
			Print("%s\n",PRINTVARS(USAGE));
		}
	}
	if(!seed){
		seed = INITIAL_SEED;
		Print("Using seed = %d\n",PRINTVARS(INITIAL_SEED));
    }
	Srand((int)seed);
	for(i=0;i<3;i++)site_visits[i] = 0;
	i=0;
	Print("Simulating %d trials ...\n",PRINTVARS(trials));
	while(i<trials){
		seed = Rand();
		Srand((int)seed);
		fortune = 0;
		while(n++<MAX_ITERATIONS){
			if(cointoss(game_select) == 1)
				fortune += play_c(fortune);
			else
				fortune += play_s();
			if((fortune >= max_fortune)||(fortune <= -max_fortune))
				break;

			m = fortune > 0 ? fortune : -fortune;
			site_visits[m%3]++;	
		}

		if(fortune == max_fortune)
			win_count++;
		else if(fortune == -max_fortune)
			loss_count++;

		i++;
		n_tot = fpadd(n_tot,int_to_float(n));
		n = 0;
	}

	n_bar = fpdiv(n_tot,(int_to_float(i)));

	Print("%d wins, %d losses, %d draws\n",PRINTVARS( win_count,loss_count, i-(win_count+loss_count)));
	Print("(Win/loss = %d/-%d, draw = no win/loss in %d plays.)\n",PRINTVARS(max_fortune,max_fortune,MAX_ITERATIONS));
	Print("Average trial length = %f\n",PRINTVARS(n_bar));
    uint32_t out[3] = {fpdiv(fpmul(0x42c80000,int_to_float(site_visits[0])),n_tot),fpdiv(fpmul(0x42c80000,int_to_float(site_visits[1])),n_tot),fpdiv(fpmul(0x42c80000,int_to_float(site_visits[2])),n_tot)};
	Print("Site occupancy: 0 mod 3: %f%%, 1 mod 3: %f%%, 2 mod 3: %f%%\n",PRINTVARS(out[0],out[1],out[2]));
}
