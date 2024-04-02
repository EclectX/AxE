/* This file has been automatically generated */

#include "globals.h"

#include "Node_arch_prgs.h"

void init_prgs( prg_t *prgs )
{
	prgs[0].name = "basicmath";
	prgs[0].addr[ARCH_RV32IM] = 0x200000; // index: 524288 size: 346980
	prgs[0].c[ARCH_RV32IM] = 0;
	prgs[0].d[ARCH_RV32IM] = 0;
	prgs[0].t[ARCH_RV32IM] = 0;
	prgs[0].e[ARCH_RV32IM] = 0;
	prgs[0].c_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].t_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].d_multiplyer = 0b0000000111100100;
	prgs[0].s          = 5;
	prgs[0].s_cnt_down = 5;
	prgs[0].assigned_to = 0;
	prgs[0].next_release_clk_cnt = 0;
	prgs[0].next_release_overflows = 0;
	prgs[0].next_deadline_clk_cnt = 0;
	prgs[0].next_deadline_overflows = 0;

	prgs[1].name = "msort";
	prgs[1].addr[ARCH_RV32IM] = 0x4a9218; // index: 1221766 size: 1292
	prgs[1].c[ARCH_RV32IM] = 0;
	prgs[1].d[ARCH_RV32IM] = 0;
	prgs[1].t[ARCH_RV32IM] = 0;
	prgs[1].e[ARCH_RV32IM] = 0;
	prgs[1].c_clk_cnt[ARCH_RV32IM] = 0;
	prgs[1].t_clk_cnt[ARCH_RV32IM] = 0;
	prgs[1].d_multiplyer = 0b0000001001000010;
	prgs[1].s          = 5;
	prgs[1].s_cnt_down = 5;
	prgs[1].assigned_to = 0;
	prgs[1].next_release_clk_cnt = 0;
	prgs[1].next_release_overflows = 0;
	prgs[1].next_deadline_clk_cnt = 0;
	prgs[1].next_deadline_overflows = 0;

}
