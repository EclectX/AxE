
#define MAX_HALF ( 0x7FFFFFFF )

#include "debug.h"

#include "boolean.h"
#include "mpsoc.h"
#include "typedefs.h"
#include "defines.h"

#include "controller.h"

#include "nodes.h"
#include "prgs.h"
#include "arch.h"

#include "energy_harvester.h"

#include "util.h"
#include "fixed_point.h"

#include "globals.h"

#include "clk_func.h"
#include "math_func.h"
#include "time_func.h"
#include "nodes_func.h"
#include "prgs_func.h"
#include "arch_func.h"
#include "queue_func.h"

#include "partition_func.h"
#include "scheduler.h"

#include "input_rgb_size.h"

// period_in_s = 1 / ( MHz * 1.000.000 )
// 60 / period_in_s = clk_cnt_for_1_min

// everytime the cnt reaches clk_cnt_for_1_min * n the next power value is read

// watt is the rate at which energy is created
// W * t = E
// Power output = energy / time

// charge = energy / voltage


/// events at time t
// 
// 1. charging events
// 2. scheduling events
// 
// all events are in a single queue so only a single if has to be checked during
// each iteration.

/// 1. charging events
// 
// go through every node and apply the energy.
// the calculation of the energy is done in some init process.

/// 2. scheduling events
// 
// assign some tasks to a node.



/// measurements of a big and a small node:
// 
// datab.ods, sheet "bit"
// 
// 334; 5,00045; 0,225107; 1,1256362982
// 363; 5,00044; 0,224977; 1,1249839899
// 
// -> big:   1.1256362982 W ~ 1125636 microwatts ~ 1126 milliwatts
// -> small: 1.1249839899 W ~ 1124983 microwatts ~ 1125 milliwatts
// 
// diff
// 1125636 - 1124983 = 653 microwatts

/// clk_cnt
// 
// mul_500_nop_500
// 3,685,821
// 
// mul_500_nop_501
// 3,686,947
// 
// mul_500_nop_502
// 3,687,889

/// period t
// 
// period_in_microseconds = ( 1s / ( 25MHz * 1,000,000 ) ) * 1,000,000
// -> one period takes 0.04 microseconds

/// exec duration
// 
// mul_500_nop_500
// 3,685,821 * 0.04 = 147432.84 microseconds
// 
// mul_500_nop_501
// 3,686,947 * 0.04 = 147477.88 microseconds
// 
// mul_500_nop_502
// 3,687,889 * 0.04 = 147515.56 microseconds
// 
// calc without float:
// 3687889 * 0.04 = x | * 100
// 3687889 * 4 = 100x
// -> 100x / 100 = x
// 
// as milliseconds
// 3687889 * 0.00004 = x | * 100000
// 3687889 * 4 = 100000x
// -> 100000x / 100000 = x

/// energy
// 
// mul_500_nop_502
// 
// 147,432 microseconds * 1,125,636 microwatts = 165,954,766,752 microjouls
// 147 milliseconds * 1,126 milliwatts = 165,522 millijouls

/// clk cnts for 1 millisecond
// 
// one period takes 0.04 microseconds
// -> 0.00004 milliseconds
// -> 25,000 clk cycles in 1 milliseconds

/// multiple cnt reads
// 
// 117,960
// 162,064
// 207,722
// 254,934
// 303,552
// 
// -> considering, that subsecquent cnt reads and writes of the number take so
// long it is not going to be possible to update the batteries of multiple nodes
// between 25,000 clk cylces long reads. writes cannot be avoided for debugging
// purposes.
// 
// -> update the battery every second.

/// clk cnts for 1 s
// 
// one period takes 0.04 microseconds
// -> 0.00000004 s
// -> 25,000,000 clk cycles in 1 s

/// how the battery is charged
// 
// every second some millijouls are added to the battery.




//------------------------------------------------------------------------------
// notes
//------------------------------------------------------------------------------

// prints
// although prints are throught the loop and one might think it is better to
// do them between iterations of the loop. however, printing is not so hard
// and just saving the chars into a buffer might cause even more delay.

void trap()
{
	print_str( "ended sched sw\n" );
	signal_fin();
	while ( 1 == 1 ) {}
}

void img_test()
{
    print_str( "running img test\n" );
    
    int spoon = 0;
    
    int cr = 0b01001101;
    int cg = 0b10010111;
    int cb = 0b00011101;
    
    int mr = 0;
    int mg = 0;
    int mb = 0;
    
    int gray = 0;
    
    int i = 0;
    
    for ( i = 0; i < RGB_SIZE; i+=3 )
    {
        //spoon = GET_SPOON_FED;
        //print_dec( spoon );NL;
        
        mr = cr * GET_SPOON_FED;
        mg = cg * GET_SPOON_FED;
        mb = cb * GET_SPOON_FED;
        
        //mr = cr * rgb[ i ];
        //mg = cg * rgb[ i+1 ];
        //mb = cb * rgb[ i+2 ];
        
        gray = mr + mg + mb;
        
        gray >>= 8;
        
        print_dec(gray);NL;
        //print_dec(gray);NL;
        //print_dec(gray);NL;
        
        //print_bin( gray, 16 );
        //printf("\n");
        //printf("\n");
        time_update_global();
    }
    
    NL;
    print_str("cnt: ");print_dec(cnt_global.cnt);NL;
    print_str("overflows: ");print_dec(cnt_global.overflows);NL;
    NL;
    
    print_char( 0x04 );
    
    print_str( "img_done\n" );
}

void my_main()
{
    //img_test();
    
	int i = 0;
	int j = 0;
	
	unsigned int tmp = 0;
	
	print_str( "start\n" );
	
	cnt = GET_COUNTER_GLOBAL;
	
	cnt_global.cnt = GET_COUNTER_GLOBAL;
	cnt_global.overflows = 0;
	
	//~ c 147,0 mod 1,60937500 d 99,82812500
	
	unsigned int c = 0b1001001100000000;
	unsigned int m = 0b0000001110100010;
	
	print_str( "fuck me" ); NL;
	print_fix( c, 8, 8 ); NL;
	print_fix( m, 8, 8 ); NL;
	
	//~ int d = c * m;
	//~ d >>= 8;
	
	unsigned int d = fixed_mul_8q8( c, m );
	
	print_fix( d, 8, 8 ); NL;
	
	print_str( "div test" ); NL;
	
	//~ int ci = c << 8;
	unsigned int ci = c;
	unsigned int ti = d;
	
	//~ int upi = ci / ti;
	
	unsigned int upi = fixed_div_8q8( ci, ti );
	
	print_fix( ci, 8, 8 );
	print_str( " / " );
	print_fix( ti, 8, 8 );
	print_str( " = " );
	print_fix( upi, 8, 8 ); NL;
	
	upi += upi;
	
	print_fix( upi, 8, 8 ); NL;
	
	print_str( "t0: " );
	print_dec( cnt );
	nl();
	nl();
	
	// -------------------------------------------------------------------------
	// init
	// -------------------------------------------------------------------------
	
	init_nodes( nodes );
	init_prgs( prgs );
	init_archs( archs );
	
	init_charges( charges );
	
	// -------------------------------------------------------------------------
	// running estimations
	// -------------------------------------------------------------------------
	
	print_str( "estimations\n" );
	NL;
	
	prgs_estimate_execution_times();
	prgs_set_relative_deadline();
	prgs_set_period();
	prgs_set_period_clk_cnt();
	prgs_estimate_energy_requirements();
	
	NL;
	print_str( "estimations -> done\n" );
	
	print_str( "estimations 2\n" );
	NL;
	
	prgs_estimate_execution_times();
	prgs_set_relative_deadline();
	prgs_set_period();
	prgs_set_period_clk_cnt();
	prgs_estimate_energy_requirements();
	
	NL;
	print_str( "estimations -> done\n" );
	
	#ifdef REP_PRGS_SUMMERY
		prgs_summary();
	#endif
	
	SET_LEDS_STATUS = 0x2;
	SET_TRIGGERS = 0x2;
	
	// -------------------------------------------------------------------------
	// running prg partition
	// -------------------------------------------------------------------------
	
	print_str( "running task partition" ); NL;
	
	for( j = 0; j < NUM_NODES; j++ )
	{
		nodes[ j ].charge = 0;
	}
	
	i = partition_eh_ra();
	
	if ( -1 == i )
	{
		print_str( "could not partition task set" ); NL;
		signal_fin();
	}
	
	#ifdef REP_PARTITION_EH_RA
		rep_partition();
	#endif
	
	// -------------------------------------------------------------------------
	// task array sorted according to node assignment
	// -------------------------------------------------------------------------
	
	create_task_array();
	
	#ifdef REP_PRGS_LIST
		rep_prgs_list();
	#endif
	
	// -------------------------------------------------------------------------
	// clear used variables
	// -------------------------------------------------------------------------
	
	for( j = 0; j < NUM_NODES; j++ )
	{
		nodes[ j ].charge = MAX_HALF;
		//~ nodes[ j ].charge = 5;
	}
	
	// -------------------------------------------------------------------------
	// env
	// -------------------------------------------------------------------------
	
	task_set.e_max = 10;
	task_set.prgs_active = 0;
	
	battery.C = MAX;
	
	energy_harvester.Pr = 10;
	energy_harvester.charge_i = 0;
	energy_harvester.interval_cnt = 1000000;
	energy_harvester.clairvoyance = 1000000 * 50;

	energy_harvester.next_charge_cnt.cnt = energy_harvester.interval_cnt;
	energy_harvester.next_charge_cnt.overflows = 0;
	
	// -------------------------------------------------------------------------
	// last preperations
	// -------------------------------------------------------------------------
	
	prgs_set_initial_deadlines();
	
	#ifdef REP_INITIAL_DEADLINES
		rep_prgs_set_initial_deadlines();
	#endif
	
	// reset counter

	cnt_global.cnt = GET_COUNTER_GLOBAL_RESET;
	cnt_global.cnt = 0;



	//-----------------------------------------------------------------
	//
	// run scheduler
	//
	//-----------------------------------------------------------------
	


	int prg_i = 0;
	
	while ( 1 == 1 )
	{
		#ifdef DBG_SCHEDULER
			NL;
			print_str(">~~~~~~~~~>\n");
			NL;
		#endif
		


		//-----------------------------------------------------------------
		//
		// 1. updating time
		//
		//-----------------------------------------------------------------
		


		time_update_global();
		
		#ifdef DBG_SCHEDULER
			NL;
			print_str("cnt: ");print_dec(cnt_global.cnt);NL;
			print_str("overflows: ");print_dec(cnt_global.overflows);NL;
			NL;
		#endif



		//-----------------------------------------------------------------
		//
		// 2. checking charges
		//
		//-----------------------------------------------------------------

		// check if the next charge has happened
		


		if ( TRUE == time_reached_cnt_t( &energy_harvester.next_charge_cnt ) )
		{
			#ifdef DBG_SCHEDULER
				NL;
				print_str("CHARGE: the next charge has to be applied\n");
			#endif
			
			time_advance( &(energy_harvester.next_charge_cnt), energy_harvester.interval_cnt );
			
			#ifdef DBG_SCHEDULER
				NL;
				print_str("CHARGE: next charge will be at time:\n");
				print_str("CHARGE: cnt:  ");print_dec(energy_harvester.next_charge_cnt.cnt);NL;
				print_str("CHARGE: ovfl: ");print_dec(energy_harvester.next_charge_cnt.overflows);NL;
			#endif

			// applying charges

			for ( i = 0; i < NUM_NODES; i++ )
			{
				nodes[ i ].charge = clamp_add( nodes[ i ].charge, charges[ energy_harvester.charge_i ] );
			}

			energy_harvester.charge_i += 1;

			#ifdef REP_CHARGING
				for ( i = 0; i < NUM_NODES; i++ )
				{
					print_str("CHARGE: charge of n");print_dec(i);print_str(": ");print_dec(nodes[ i ].charge);NL;
				}
			#endif
		}
		


		//-----------------------------------------------------------------
		//
		// 3. find prg to run
		//
		//-----------------------------------------------------------------
		
		nodes_set_idle();

		// reset skip counter
		// prgs[i].s_cnt_down = prgs[i].s;

		// update skip cnt
		// watch out that the cnt does not go neg
		
		//if ( 0 != prgs[i].s_cnt_down )
		//{
		//	prgs[i].s_cnt_down -= 1;
		//}

		//SET_LEDS_STATUS = 0x4;
		//SET_TRIGGERS = 0x4;

		for ( i = 0; i < NUM_NODES; i++ )
		{
			if ( TRUE == node_is_busy( i ) )
			{
				continue;
			}

			#ifdef DBG_SCHEDULER
				NL;
				print_str("[ n");print_dec(i);print_str(" ]\n");
				NL;
			#endif
			
			// checking if any prgs got ready (the release time has been reached)
			
			prgs_set_ready( i );
			
			prg_i = get_prg_apply_edh_rules( i );
			
			if ( -1 == prg_i )
			{
				#ifdef DBG_SCHEDULER
					print_str("--> nothing to do\n");
				#endif
			}
			else
			{
				#ifdef DBG_SCHEDULER
					print_str("--> p");print_dec(prg_i);print_str(" should be run\n");
				#endif

				// execute the prg

				node_assign_prg( i, prg_i );

				// discharge the node

				nodes[i].charge = clamp_sub( nodes[i].charge, prgs[ prg_i ].e[ nodes[i].arch ] );

				#ifdef DBG_SCHEDULER
					print_str("n");print_dec(i);print_str(" e: ");print_dec(nodes[i].charge);NL;
					print_str("discharged: ");print_dec(prgs[ prg_i ].e[ nodes[i].arch ]);NL;
				#endif

				if ( 0 == nodes[i].charge )
				{
					print_str( "ERR: node ran out of energy" );NL;
					trap();
				}
			}
		}
	}
	
	trap();
}
