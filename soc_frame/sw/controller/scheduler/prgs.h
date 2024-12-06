/* This file has been automatically generated */

#define NUM_PRGS ( 1 )

void init_prgs( prg_t *prgs )
{
	prgs[0].name = "mul_aprox";
	prgs[0].addr[ARCH_RV32I] = 0x2fff8; // index: 49150 size: 1864
	prgs[0].addr[ARCH_RV32IM] = 0x33d54; // index: 53077 size: 1852
	prgs[0].c[ARCH_RV32I] = 0;
	prgs[0].c[ARCH_RV32IM] = 0;
	prgs[0].d[ARCH_RV32I] = 0;
	prgs[0].d[ARCH_RV32IM] = 0;
	prgs[0].t[ARCH_RV32I] = 0;
	prgs[0].t[ARCH_RV32IM] = 0;
	prgs[0].e[ARCH_RV32I] = 0;
	prgs[0].e[ARCH_RV32IM] = 0;
	prgs[0].c_clk_cnt[ARCH_RV32I] = 0;
	prgs[0].c_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].t_clk_cnt[ARCH_RV32I] = 0;
	prgs[0].t_clk_cnt[ARCH_RV32IM] = 0;
	prgs[0].d_multiplyer = 0b0000000101011100;
	prgs[0].s          = 5;
	prgs[0].s_cnt_down = 5;
	prgs[0].assigned_to = 0;
	prgs[0].next_release_clk_cnt = 0;
	prgs[0].next_release_overflows = 0;
	prgs[0].next_deadline_clk_cnt = 0;
	prgs[0].next_deadline_overflows = 0;

}
