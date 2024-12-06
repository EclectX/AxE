
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


void my_main()
{

	
	// -------------------------------------------------------------------------
	// init
	// -------------------------------------------------------------------------
	
	init_nodes( nodes );
	init_prgs( prgs );
	init_archs( archs );
	print_str("******** ");print_str(" Start executing ");print_str(prgs[0].name);print_str(" on the slave node");print_str(" ********\n");
	node_assign_prg( 0, 0 );
	while(!node_is_busy(0)){
		nodes_set_idle();
	}
	print_str("\n********");print_str(" Finished executing ");print_str(prgs[0].name);print_str(" on the slave node");print_str(" ********\n");
}
