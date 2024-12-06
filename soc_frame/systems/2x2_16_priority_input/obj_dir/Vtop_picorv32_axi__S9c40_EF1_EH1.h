// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_PICORV32_AXI__S9C40_EF1_EH1_H_
#define _VTOP_PICORV32_AXI__S9C40_EF1_EH1_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_picorv32_axi__S9c40_EF1_EH1) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_OUT8(trap,0,0);
    VL_OUT8(mem_axi_awvalid,0,0);
    VL_IN8(mem_axi_awready,0,0);
    VL_OUT8(mem_axi_awprot,2,0);
    VL_OUT8(mem_axi_wvalid,0,0);
    VL_IN8(mem_axi_wready,0,0);
    VL_OUT8(mem_axi_wstrb,3,0);
    VL_IN8(mem_axi_bvalid,0,0);
    VL_OUT8(mem_axi_bready,0,0);
    VL_OUT8(mem_axi_arvalid,0,0);
    VL_IN8(mem_axi_arready,0,0);
    VL_OUT8(mem_axi_arprot,2,0);
    VL_IN8(mem_axi_rvalid,0,0);
    VL_OUT8(mem_axi_rready,0,0);
    VL_OUT8(__PVT__pcpi_valid,0,0);
    VL_IN8(__PVT__pcpi_wr,0,0);
    VL_IN8(__PVT__pcpi_wait,0,0);
    VL_IN8(__PVT__pcpi_ready,0,0);
    VL_OUT8(__PVT__trace_valid,0,0);
    VL_OUT(mem_axi_awaddr,31,0);
    VL_OUT(mem_axi_wdata,31,0);
    VL_OUT(mem_axi_araddr,31,0);
    VL_IN(mem_axi_rdata,31,0);
    VL_OUT(__PVT__pcpi_insn,31,0);
    VL_OUT(__PVT__pcpi_rs1,31,0);
    VL_OUT(__PVT__pcpi_rs2,31,0);
    VL_IN(__PVT__pcpi_rd,31,0);
    VL_IN(__PVT__irq,31,0);
    VL_OUT(__PVT__eoi,31,0);
    VL_OUT64(__PVT__trace_data,35,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__mem_valid;
        CData/*3:0*/ __PVT__mem_wstrb;
        CData/*0:0*/ __PVT__mem_instr;
        CData/*0:0*/ __PVT__mem_ready;
        CData/*0:0*/ __PVT__axi_adapter__DOT__ack_awvalid;
        CData/*0:0*/ __PVT__axi_adapter__DOT__ack_arvalid;
        CData/*0:0*/ __PVT__axi_adapter__DOT__ack_wvalid;
        CData/*0:0*/ __PVT__axi_adapter__DOT__xfer_done;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_la_read;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_la_write;
        CData/*3:0*/ __PVT__picorv32_core__DOT__mem_la_wstrb;
        CData/*4:0*/ __PVT__picorv32_core__DOT__reg_sh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__irq_delay;
        CData/*0:0*/ __PVT__picorv32_core__DOT__irq_active;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_mul_wr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_mul_wait;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_mul_ready;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_div_wr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_div_wait;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_div_ready;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_int_wr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_int_ready;
        CData/*1:0*/ __PVT__picorv32_core__DOT__mem_state;
        CData/*1:0*/ __PVT__picorv32_core__DOT__mem_wordsize;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_do_prefetch;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_do_rinst;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_do_rdata;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_do_wdata;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_xfer;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_la_secondword;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_la_firstword_reg;
        CData/*0:0*/ __PVT__picorv32_core__DOT__last_mem_valid;
        CData/*0:0*/ __PVT__picorv32_core__DOT__prefetched_high_word;
        CData/*0:0*/ __PVT__picorv32_core__DOT__clear_prefetched_high_word;
        CData/*0:0*/ __PVT__picorv32_core__DOT__mem_done;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lui;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_auipc;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_jal;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_jalr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_beq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_bne;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_blt;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_bge;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_bltu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_bgeu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lb;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lw;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lbu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_lhu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sb;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sw;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_addi;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_slti;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sltiu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_xori;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_ori;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_andi;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_slli;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_srli;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_srai;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_add;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sub;
    };
    struct {
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sll;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_slt;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sltu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_xor;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_srl;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_sra;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_or;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_and;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_rdcycle;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_rdcycleh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_rdinstr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_rdinstrh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_ecall_ebreak;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_getq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_setq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_maskirq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_waitirq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_timer;
        CData/*0:0*/ __PVT__picorv32_core__DOT__instr_trap;
        CData/*4:0*/ __PVT__picorv32_core__DOT__decoded_rd;
        CData/*4:0*/ __PVT__picorv32_core__DOT__decoded_rs1;
        CData/*4:0*/ __PVT__picorv32_core__DOT__decoded_rs2;
        CData/*0:0*/ __PVT__picorv32_core__DOT__decoder_trigger;
        CData/*0:0*/ __PVT__picorv32_core__DOT__decoder_trigger_q;
        CData/*0:0*/ __PVT__picorv32_core__DOT__decoder_pseudo_trigger;
        CData/*0:0*/ __PVT__picorv32_core__DOT__decoder_pseudo_trigger_q;
        CData/*0:0*/ __PVT__picorv32_core__DOT__compressed_instr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_lui_auipc_jal;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_slli_srli_srai;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_sb_sh_sw;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_sll_srl_sra;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_slti_blt_slt;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_sltiu_bltu_sltu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_lbu_lhu_lw;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_alu_reg_imm;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_alu_reg_reg;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_compare;
        CData/*0:0*/ __PVT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh;
        CData/*4:0*/ __PVT__picorv32_core__DOT__dbg_insn_rs1;
        CData/*4:0*/ __PVT__picorv32_core__DOT__dbg_insn_rs2;
        CData/*4:0*/ __PVT__picorv32_core__DOT__dbg_insn_rd;
        CData/*0:0*/ __PVT__picorv32_core__DOT__dbg_rs1val_valid;
        CData/*0:0*/ __PVT__picorv32_core__DOT__dbg_rs2val_valid;
        CData/*4:0*/ __PVT__picorv32_core__DOT__q_insn_rs1;
        CData/*4:0*/ __PVT__picorv32_core__DOT__q_insn_rs2;
        CData/*4:0*/ __PVT__picorv32_core__DOT__q_insn_rd;
        CData/*0:0*/ __PVT__picorv32_core__DOT__dbg_next;
        CData/*0:0*/ __PVT__picorv32_core__DOT__launch_next_insn;
        CData/*0:0*/ __PVT__picorv32_core__DOT__dbg_valid_insn;
        CData/*4:0*/ __PVT__picorv32_core__DOT__cached_insn_rs1;
        CData/*4:0*/ __PVT__picorv32_core__DOT__cached_insn_rs2;
        CData/*4:0*/ __PVT__picorv32_core__DOT__cached_insn_rd;
        CData/*7:0*/ __PVT__picorv32_core__DOT__cpu_state;
        CData/*1:0*/ __PVT__picorv32_core__DOT__irq_state;
        CData/*0:0*/ __PVT__picorv32_core__DOT__set_mem_do_rinst;
        CData/*0:0*/ __PVT__picorv32_core__DOT__set_mem_do_rdata;
        CData/*0:0*/ __PVT__picorv32_core__DOT__set_mem_do_wdata;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_store;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_stalu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_branch;
    };
    struct {
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_compr;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_trace;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_is_lu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_is_lh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__latched_is_lb;
        CData/*4:0*/ __PVT__picorv32_core__DOT__latched_rd;
        CData/*3:0*/ __PVT__picorv32_core__DOT__pcpi_timeout_counter;
        CData/*0:0*/ __PVT__picorv32_core__DOT__pcpi_timeout;
        CData/*0:0*/ __PVT__picorv32_core__DOT__do_waitirq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_out_0;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_out_0_q;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_wait;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_wait_2;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_eq;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_ltu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__alu_lts;
        CData/*0:0*/ __PVT__picorv32_core__DOT__clear_prefetched_high_word_q;
        CData/*0:0*/ __PVT__picorv32_core__DOT__cpuregs_write;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q;
        CData/*6:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running;
        CData/*0:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign;
        SData/*15:0*/ __PVT__picorv32_core__DOT__mem_16bit_buffer;
        IData/*31:0*/ __PVT__mem_addr;
        IData/*31:0*/ __PVT__mem_wdata;
        IData/*31:0*/ __PVT__picorv32_core__DOT__mem_la_wdata;
        IData/*31:0*/ __PVT__picorv32_core__DOT__reg_pc;
        IData/*31:0*/ __PVT__picorv32_core__DOT__reg_next_pc;
        IData/*31:0*/ __PVT__picorv32_core__DOT__reg_op1;
        IData/*31:0*/ __PVT__picorv32_core__DOT__reg_op2;
        IData/*31:0*/ __PVT__picorv32_core__DOT__reg_out;
        IData/*31:0*/ __PVT__picorv32_core__DOT__next_insn_opcode;
        IData/*31:0*/ __PVT__picorv32_core__DOT__dbg_insn_opcode;
        IData/*31:0*/ __PVT__picorv32_core__DOT__dbg_insn_addr;
        IData/*31:0*/ __PVT__picorv32_core__DOT__next_pc;
        IData/*31:0*/ __PVT__picorv32_core__DOT__irq_mask;
        IData/*31:0*/ __PVT__picorv32_core__DOT__irq_pending;
        IData/*31:0*/ __PVT__picorv32_core__DOT__timer;
        IData/*31:0*/ __PVT__picorv32_core__DOT__i;
        IData/*31:0*/ __PVT__picorv32_core__DOT__pcpi_mul_rd;
        IData/*31:0*/ __PVT__picorv32_core__DOT__pcpi_div_rd;
        IData/*31:0*/ __PVT__picorv32_core__DOT__pcpi_int_rd;
        IData/*31:0*/ __PVT__picorv32_core__DOT__mem_rdata_word;
        IData/*31:0*/ __PVT__picorv32_core__DOT__mem_rdata_q;
        IData/*31:0*/ __PVT__picorv32_core__DOT__mem_rdata_latched_noshuffle;
        IData/*31:0*/ __PVT__picorv32_core__DOT__decoded_imm;
        IData/*31:0*/ __PVT__picorv32_core__DOT__decoded_imm_uj;
        IData/*31:0*/ __PVT__picorv32_core__DOT__dbg_insn_imm;
        IData/*31:0*/ __PVT__picorv32_core__DOT__dbg_rs1val;
        IData/*31:0*/ __PVT__picorv32_core__DOT__dbg_rs2val;
        IData/*31:0*/ __PVT__picorv32_core__DOT__q_insn_imm;
    };
    struct {
        IData/*31:0*/ __PVT__picorv32_core__DOT__q_insn_opcode;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cached_insn_imm;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cached_insn_opcode;
        WData/*127:0*/ __PVT__picorv32_core__DOT__dbg_ascii_state[4];
        IData/*31:0*/ __PVT__picorv32_core__DOT__current_pc;
        IData/*31:0*/ __PVT__picorv32_core__DOT__next_irq_pending;
        IData/*31:0*/ __PVT__picorv32_core__DOT__alu_out;
        IData/*31:0*/ __PVT__picorv32_core__DOT__alu_out_q;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cpuregs_wrdata;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cpuregs_rs1;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cpuregs_rs2;
        IData/*31:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend;
        IData/*31:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient;
        IData/*31:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk;
        QData/*63:0*/ __PVT__picorv32_core__DOT__count_cycle;
        QData/*63:0*/ __PVT__picorv32_core__DOT__count_instr;
        QData/*63:0*/ __PVT__picorv32_core__DOT__new_ascii_instr;
        QData/*63:0*/ __PVT__picorv32_core__DOT__dbg_ascii_instr;
        QData/*63:0*/ __PVT__picorv32_core__DOT__q_ascii_instr;
        QData/*63:0*/ __PVT__picorv32_core__DOT__cached_ascii_instr;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
        QData/*63:0*/ __PVT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt;
        QData/*62:0*/ __PVT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor;
        IData/*31:0*/ __PVT__picorv32_core__DOT__cpuregs[32];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap1;
    CData/*3:0*/ picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap2;
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*1:0*/ __Vdly__picorv32_core__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__picorv32_core__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__picorv32_core__DOT__cpuregs__v0;
    CData/*4:0*/ __Vdly__picorv32_core__DOT__reg_sh;
    CData/*3:0*/ __Vdly__picorv32_core__DOT__pcpi_timeout_counter;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__pcpi_timeout;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__mem_do_rinst;
    CData/*1:0*/ __Vdly__picorv32_core__DOT__mem_wordsize;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__latched_is_lb;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__picorv32_core__DOT__cpu_state;
    CData/*0:0*/ __Vdly__pcpi_valid;
    CData/*6:0*/ __Vdly__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu;
    CData/*0:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running;
    IData/*31:0*/ __Vdlyvval__picorv32_core__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__reg_out;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__reg_pc;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__reg_op1;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient;
    IData/*31:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk;
    QData/*63:0*/ __Vdly__picorv32_core__DOT__count_cycle;
    QData/*63:0*/ __Vdly__picorv32_core__DOT__count_instr;
    QData/*62:0*/ __Vdly__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor;
    static WData/*127:0*/ __Vtable1___PVT__picorv32_core__DOT__dbg_ascii_state[256][4];
    static WData/*127:0*/ __Vtable2___PVT__picorv32_core__DOT__dbg_ascii_state[256][4];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_picorv32_axi__S9c40_EF1_EH1);  ///< Copying not allowed
  public:
    Vtop_picorv32_axi__S9c40_EF1_EH1(const char* name = "TOP");
    ~Vtop_picorv32_axi__S9c40_EF1_EH1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _multiclk__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__8(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__1(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__2(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__3(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__6(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__7(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__5(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
