/* This file has been automatically generated */

#include "NAP.h"

#include "typedefs.h"

#include "Node_arch_prgs.h"

#include "mpsoc.h"


void init_prgs( prg_t *prgs )
{
	prgs[0].name = "emptymain1";
	prgs[0].addr[ARCH_RV32IM] = 0x2fff8; // index: 49150 size: 1848
	prgs[0].c[ARCH_RV32IM] = 0;
	prgs[0].d[ARCH_RV32IM] = 0;
	prgs[0].t[ARCH_RV32IM] = 0;
	prgs[0].e[ARCH_RV32IM] = 0;
	prgs[0].c_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].t_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].d_multiplyer = 0b0000000110000100;
	prgs[0].s          = 5;
	prgs[0].s_cnt_down = 5;
	prgs[0].assigned_to = 0;
	prgs[0].next_release_clk_cnt = 0;
	prgs[0].next_release_overflows = 0;
	prgs[0].next_deadline_clk_cnt = 0;
	prgs[0].next_deadline_overflows = 0;

	prgs[1].name = "emptymain2";
	prgs[1].addr[ARCH_RV32IM] = 0x33d30; // index: 53068 size: 1842
	prgs[1].c[ARCH_RV32IM] = 0;
	prgs[1].d[ARCH_RV32IM] = 0;
	prgs[1].t[ARCH_RV32IM] = 0;
	prgs[1].e[ARCH_RV32IM] = 0;
	prgs[1].c_clk_cnt[ARCH_RV32IM] = 0;
	prgs[1].t_clk_cnt[ARCH_RV32IM] = 0;
	prgs[1].d_multiplyer = 0b0000001111101011;
	prgs[1].s          = 5;
	prgs[1].s_cnt_down = 5;
	prgs[1].assigned_to = 0;
	prgs[1].next_release_clk_cnt = 0;
	prgs[1].next_release_overflows = 0;
	prgs[1].next_deadline_clk_cnt = 0;
	prgs[1].next_deadline_overflows = 0;

}
