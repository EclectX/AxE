// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========
WData/*127:0*/ Vtop::__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[256][4];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__top__DOT__if_axi_light_axi_detector, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__if_axi_light_debugger, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__if_axi_light_memory, Vtop_if_axi_light);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 43, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 43, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1[7];
    // Body
    vlTOPp->top__DOT__memory_inst__DOT__latched_awprot = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__latched_arprot = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__latched_awaddr = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__latched_wdata = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__latched_araddr = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__index = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__done = 0U;
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x2f6d656dU;
    __Vtemp1[2U] = 0x72616d65U;
    __Vtemp1[3U] = 0x6f635f66U;
    __Vtemp1[4U] = 0x65722f73U;
    __Vtemp1[5U] = 0x652f7573U;
    __Vtemp1[6U] = 0x2f686f6dU;
    VL_READMEM_N(true, 32, 120192, 0, VL_CVT_PACK_STR_NW(7, __Vtemp1)
                 , vlTOPp->top__DOT__memory_inst__DOT__mem
                 , 0U, ~VL_ULL(0));
    vlTOPp->top__DOT__memory_inst__DOT__state = 0U;
    vlTOPp->ill_awaddr_out_of_range = 0U;
    vlTOPp->ill_araddr_out_of_range = 0U;
    vlTOPp->top__DOT__memory_inst__DOT__status = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vtask_write_req_wait__15__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__15__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__15__done;
    CData/*2:0*/ __Vtask_write_req__16__t_awprot;
    CData/*3:0*/ __Vtask_write_req__16__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__16__done;
    CData/*2:0*/ __Vtask_write_req_wait__19__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__19__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__19__done;
    CData/*2:0*/ __Vtask_write_req__20__t_awprot;
    CData/*3:0*/ __Vtask_write_req__20__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__20__done;
    CData/*2:0*/ __Vtask_write_req_wait__22__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__22__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__22__done;
    CData/*2:0*/ __Vtask_read_req_wait__23__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__23__done;
    CData/*1:0*/ __Vtask_write_resp__24__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__24__done;
    CData/*1:0*/ __Vtask_read_resp__25__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__25__done;
    CData/*1:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*4:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    CData/*1:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    CData/*0:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    IData/*31:0*/ __Vtask_write_req_wait__15__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__15__t_wdata;
    IData/*31:0*/ __Vtask_write_req__16__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__16__t_wdata;
    IData/*31:0*/ __Vtask_write_req_wait__19__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__19__t_wdata;
    IData/*31:0*/ __Vtask_write_req__20__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__20__t_wdata;
    IData/*31:0*/ __Vtask_write_req_wait__22__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__22__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__23__t_araddr;
    IData/*31:0*/ __Vtask_read_resp__25__t_rdata;
    IData/*31:0*/ __Vdlyvval__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    IData/*31:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    IData/*31:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    QData/*63:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    QData/*63:0*/ __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    // Body
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    __Vdlyvset__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.awready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.wready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.awvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.wvalid = 0U;
    vlTOPp->debugger_sig = 0U;
    if (vlTOPp->res_n) {
        if ((0U == vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__19__done = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__if_axi_light_debugger.awvalid) {
                __Vtask_write_req_wait__19__t_awaddr 
                    = vlSymsp->TOP__top__DOT__if_axi_light_debugger.awaddr;
                __Vtask_write_req_wait__19__t_awprot 
                    = vlSymsp->TOP__top__DOT__if_axi_light_debugger.awprot;
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__if_axi_light_debugger.wvalid) {
                __Vtask_write_req_wait__19__t_wdata 
                    = vlSymsp->TOP__top__DOT__if_axi_light_debugger.wdata;
                __Vtask_write_req_wait__19__t_wstrb 
                    = vlSymsp->TOP__top__DOT__if_axi_light_debugger.wstrb;
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_collected))) {
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_collected = 0U;
                __Vtask_write_req_wait__19__done = 1U;
            }
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__19__t_awaddr;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__19__t_awprot;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__19__t_wdata;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__19__t_wstrb;
            vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done 
                = __Vtask_write_req_wait__19__done;
            if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done) {
                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = 1U;
                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write)
                        ? vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr);
                if ((0U == vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected) {
                    vlTOPp->debugger_sig = 1U;
                    if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) {
                        vlTOPp->top__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data 
                            = vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->debugger_sig = 0U;
                }
                if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected) {
                    vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 1U;
                    if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) {
                        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 1U;
                        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 4U;
                    } else {
                        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 1U;
                        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 5U;
                    }
                } else {
                    vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state 
                        = ((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write)
                            ? 2U : 3U);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                    __Vtask_write_req__20__t_wstrb 
                        = vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb;
                    __Vtask_write_req__20__t_wdata 
                        = vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata;
                    __Vtask_write_req__20__t_awprot 
                        = vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot;
                    __Vtask_write_req__20__t_awaddr 
                        = vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr;
                    __Vtask_write_req__20__done = 0U;
                    vlSymsp->TOP__top__DOT__if_axi_light_memory.awaddr 
                        = __Vtask_write_req__20__t_awaddr;
                    vlSymsp->TOP__top__DOT__if_axi_light_memory.awprot 
                        = __Vtask_write_req__20__t_awprot;
                    vlSymsp->TOP__top__DOT__if_axi_light_memory.wdata 
                        = __Vtask_write_req__20__t_wdata;
                    vlSymsp->TOP__top__DOT__if_axi_light_memory.wstrb 
                        = __Vtask_write_req__20__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_memory.awready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_memory.wready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_sent = 0U;
                        __Vtask_write_req__20__done = 1U;
                    }
                    vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done 
                        = __Vtask_write_req__20__done;
                    if (vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done) {
                        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U != vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                        if ((4U == vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__if_axi_light_memory.bready) {
                                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U != vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                                vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb = 0U;
        vlTOPp->debugger_sig = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = 0U;
    }
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.awready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.wready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.awvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.wvalid = 0U;
    vlTOPp->fin = 0U;
    if (vlTOPp->res_n) {
        if ((0U == vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
            vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__15__done = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.wready = 1U;
            }
            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid) {
                __Vtask_write_req_wait__15__t_awaddr 
                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr;
                __Vtask_write_req_wait__15__t_awprot = 0U;
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_addr_collected = 1U;
            }
            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid) {
                __Vtask_write_req_wait__15__t_wdata 
                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata;
                __Vtask_write_req_wait__15__t_wstrb 
                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb;
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_data_collected))) {
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.w_data_collected = 0U;
                __Vtask_write_req_wait__15__done = 1U;
            }
            vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__15__t_awaddr;
            vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__15__t_awprot;
            vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__15__t_wdata;
            vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__15__t_wstrb;
            vlTOPp->top__DOT__axi_detector_inst__DOT__done 
                = __Vtask_write_req_wait__15__done;
            if (vlTOPp->top__DOT__axi_detector_inst__DOT__done) {
                vlTOPp->top__DOT__axi_detector_inst__DOT__write = 1U;
                vlTOPp->top__DOT__axi_detector_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
                vlTOPp->top__DOT__axi_detector_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__axi_detector_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write)
                        ? vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__axi_detector_inst__DOT__latched_araddr);
                if ((0xfffffcU == vlTOPp->top__DOT__axi_detector_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__axi_detector_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->fin = 1U;
                    if (vlTOPp->top__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__axi_detector_inst__DOT__data 
                            = vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->fin = 0U;
                }
                if (vlTOPp->top__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from = 1U;
                    if (vlTOPp->top__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid = 1U;
                        vlTOPp->top__DOT__axi_detector_inst__DOT__state = 4U;
                    } else {
                        vlTOPp->top__DOT__axi_detector_inst__DOT__r_rvalid = 1U;
                        vlTOPp->top__DOT__axi_detector_inst__DOT__state = 5U;
                    }
                } else {
                    vlTOPp->top__DOT__axi_detector_inst__DOT__state 
                        = ((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write)
                            ? 2U : 3U);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
                    __Vtask_write_req__16__t_wstrb 
                        = vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wstrb;
                    __Vtask_write_req__16__t_wdata 
                        = vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wdata;
                    __Vtask_write_req__16__t_awprot 
                        = vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awprot;
                    __Vtask_write_req__16__t_awaddr 
                        = vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awaddr;
                    __Vtask_write_req__16__done = 0U;
                    vlSymsp->TOP__top__DOT__if_axi_light_debugger.awaddr 
                        = __Vtask_write_req__16__t_awaddr;
                    vlSymsp->TOP__top__DOT__if_axi_light_debugger.awprot 
                        = __Vtask_write_req__16__t_awprot;
                    vlSymsp->TOP__top__DOT__if_axi_light_debugger.wdata 
                        = __Vtask_write_req__16__t_wdata;
                    vlSymsp->TOP__top__DOT__if_axi_light_debugger.wstrb 
                        = __Vtask_write_req__16__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_debugger.awready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_debugger.wready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__if_axi_light_debugger.w_data_sent = 0U;
                        __Vtask_write_req__16__done = 1U;
                    }
                    vlTOPp->top__DOT__axi_detector_inst__DOT__done 
                        = __Vtask_write_req__16__done;
                    if (vlTOPp->top__DOT__axi_detector_inst__DOT__done) {
                        vlTOPp->top__DOT__axi_detector_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U != vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
                        if ((4U == vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__if_axi_light_debugger.bready) {
                                vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U != vlTOPp->top__DOT__axi_detector_inst__DOT__state)) {
                                vlTOPp->top__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__axi_detector_inst__DOT__state = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__latched_wstrb = 0U;
        vlTOPp->fin = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__done = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__axi_detector_inst__DOT__write = 0U;
    }
    vlSymsp->TOP__top__DOT__if_axi_light_memory.awready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.wready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.arready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.bvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_memory.rvalid = 0U;
    vlTOPp->ill_awaddr_out_of_range = 0U;
    vlTOPp->ill_araddr_out_of_range = 0U;
    vlTOPp->w = 0U;
    if ((0U == vlTOPp->top__DOT__memory_inst__DOT__state)) {
        vlTOPp->top__DOT__memory_inst__DOT__status = 0U;
        __Vtask_write_req_wait__22__done = 0U;
        vlSymsp->TOP__top__DOT__if_axi_light_memory.arready = 1U;
        if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_collected)))) {
            vlSymsp->TOP__top__DOT__if_axi_light_memory.awready = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_collected)))) {
            vlSymsp->TOP__top__DOT__if_axi_light_memory.wready = 1U;
        }
        if (vlSymsp->TOP__top__DOT__if_axi_light_memory.awvalid) {
            __Vtask_write_req_wait__22__t_awaddr = vlSymsp->TOP__top__DOT__if_axi_light_memory.awaddr;
            __Vtask_write_req_wait__22__t_awprot = vlSymsp->TOP__top__DOT__if_axi_light_memory.awprot;
            vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_collected = 1U;
        }
        if (vlSymsp->TOP__top__DOT__if_axi_light_memory.wvalid) {
            __Vtask_write_req_wait__22__t_wdata = vlSymsp->TOP__top__DOT__if_axi_light_memory.wdata;
            __Vtask_write_req_wait__22__t_wstrb = vlSymsp->TOP__top__DOT__if_axi_light_memory.wstrb;
            vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_collected = 1U;
        }
        if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_collected) 
             & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_collected))) {
            vlSymsp->TOP__top__DOT__if_axi_light_memory.w_addr_collected = 0U;
            vlSymsp->TOP__top__DOT__if_axi_light_memory.w_data_collected = 0U;
            __Vtask_write_req_wait__22__done = 1U;
        }
        vlTOPp->top__DOT__memory_inst__DOT__latched_awaddr 
            = __Vtask_write_req_wait__22__t_awaddr;
        vlTOPp->top__DOT__memory_inst__DOT__latched_awprot 
            = __Vtask_write_req_wait__22__t_awprot;
        vlTOPp->top__DOT__memory_inst__DOT__latched_wdata 
            = __Vtask_write_req_wait__22__t_wdata;
        vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb 
            = __Vtask_write_req_wait__22__t_wstrb;
        vlTOPp->top__DOT__memory_inst__DOT__done = __Vtask_write_req_wait__22__done;
        if (vlTOPp->top__DOT__memory_inst__DOT__done) {
            vlTOPp->top__DOT__memory_inst__DOT__index 
                = (vlTOPp->top__DOT__memory_inst__DOT__latched_awaddr 
                   >> 2U);
            vlTOPp->top__DOT__memory_inst__DOT__state = 1U;
            if ((0x1d580U < (vlTOPp->top__DOT__memory_inst__DOT__latched_awaddr 
                             >> 2U))) {
                vlTOPp->ill_awaddr_out_of_range = 1U;
            }
        }
        __Vtask_read_req_wait__23__done = 0U;
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid) {
            __Vtask_read_req_wait__23__t_araddr = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr;
            __Vtask_read_req_wait__23__t_arprot = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr)
                                                    ? 4U
                                                    : 0U);
            __Vtask_read_req_wait__23__done = 1U;
        }
        vlTOPp->top__DOT__memory_inst__DOT__latched_araddr 
            = __Vtask_read_req_wait__23__t_araddr;
        vlTOPp->top__DOT__memory_inst__DOT__latched_arprot 
            = __Vtask_read_req_wait__23__t_arprot;
        vlTOPp->top__DOT__memory_inst__DOT__done = __Vtask_read_req_wait__23__done;
        if (vlTOPp->top__DOT__memory_inst__DOT__done) {
            vlTOPp->top__DOT__memory_inst__DOT__index 
                = (vlTOPp->top__DOT__memory_inst__DOT__latched_araddr 
                   >> 2U);
            vlTOPp->top__DOT__memory_inst__DOT__state = 3U;
            if ((0x1d580U < (vlTOPp->top__DOT__memory_inst__DOT__latched_araddr 
                             >> 2U))) {
                vlTOPp->ill_araddr_out_of_range = 1U;
            }
        }
    } else {
        if ((1U == vlTOPp->top__DOT__memory_inst__DOT__state)) {
            if ((0x1d580U > vlTOPp->top__DOT__memory_inst__DOT__index)) {
                if ((1U & (IData)(vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb))) {
                    vlTOPp->top__DOT__memory_inst__DOT____Vlvbound1 
                        = (0xffU & vlTOPp->top__DOT__memory_inst__DOT__latched_wdata);
                    if ((0x1d57fU >= (0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index))) {
                        vlTOPp->top__DOT__memory_inst__DOT__mem[(0x1ffffU 
                                                                 & vlTOPp->top__DOT__memory_inst__DOT__index)] 
                            = ((0xffffff00U & vlTOPp->top__DOT__memory_inst__DOT__mem
                                [(0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index)]) 
                               | (IData)(vlTOPp->top__DOT__memory_inst__DOT____Vlvbound1));
                    }
                }
                vlTOPp->w = 1U;
                if ((2U & (IData)(vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb))) {
                    vlTOPp->top__DOT__memory_inst__DOT____Vlvbound2 
                        = (0xffU & (vlTOPp->top__DOT__memory_inst__DOT__latched_wdata 
                                    >> 8U));
                    if ((0x1d57fU >= (0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index))) {
                        vlTOPp->top__DOT__memory_inst__DOT__mem[(0x1ffffU 
                                                                 & vlTOPp->top__DOT__memory_inst__DOT__index)] 
                            = ((0xffff00ffU & vlTOPp->top__DOT__memory_inst__DOT__mem
                                [(0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index)]) 
                               | ((IData)(vlTOPp->top__DOT__memory_inst__DOT____Vlvbound2) 
                                  << 8U));
                    }
                }
                if ((4U & (IData)(vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb))) {
                    vlTOPp->top__DOT__memory_inst__DOT____Vlvbound3 
                        = (0xffU & (vlTOPp->top__DOT__memory_inst__DOT__latched_wdata 
                                    >> 0x10U));
                    if ((0x1d57fU >= (0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index))) {
                        vlTOPp->top__DOT__memory_inst__DOT__mem[(0x1ffffU 
                                                                 & vlTOPp->top__DOT__memory_inst__DOT__index)] 
                            = ((0xff00ffffU & vlTOPp->top__DOT__memory_inst__DOT__mem
                                [(0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index)]) 
                               | ((IData)(vlTOPp->top__DOT__memory_inst__DOT____Vlvbound3) 
                                  << 0x10U));
                    }
                }
                if ((8U & (IData)(vlTOPp->top__DOT__memory_inst__DOT__latched_wstrb))) {
                    vlTOPp->top__DOT__memory_inst__DOT____Vlvbound4 
                        = (0xffU & (vlTOPp->top__DOT__memory_inst__DOT__latched_wdata 
                                    >> 0x18U));
                    if ((0x1d57fU >= (0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index))) {
                        vlTOPp->top__DOT__memory_inst__DOT__mem[(0x1ffffU 
                                                                 & vlTOPp->top__DOT__memory_inst__DOT__index)] 
                            = ((0xffffffU & vlTOPp->top__DOT__memory_inst__DOT__mem
                                [(0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index)]) 
                               | ((IData)(vlTOPp->top__DOT__memory_inst__DOT____Vlvbound4) 
                                  << 0x18U));
                    }
                }
                vlTOPp->w_index = vlTOPp->top__DOT__memory_inst__DOT__index;
            } else {
                vlTOPp->top__DOT__memory_inst__DOT__status = 2U;
            }
            vlTOPp->top__DOT__memory_inst__DOT__state = 2U;
        } else {
            if ((2U == vlTOPp->top__DOT__memory_inst__DOT__state)) {
                __Vtask_write_resp__24__t_bresp = vlTOPp->top__DOT__memory_inst__DOT__status;
                __Vtask_write_resp__24__done = 0U;
                vlSymsp->TOP__top__DOT__if_axi_light_memory.bvalid = 1U;
                vlSymsp->TOP__top__DOT__if_axi_light_memory.bresp 
                    = __Vtask_write_resp__24__t_bresp;
                if (vlSymsp->TOP__top__DOT__if_axi_light_memory.bready) {
                    __Vtask_write_resp__24__done = 1U;
                }
                vlTOPp->top__DOT__memory_inst__DOT__done 
                    = __Vtask_write_resp__24__done;
                if (vlTOPp->top__DOT__memory_inst__DOT__done) {
                    vlTOPp->top__DOT__memory_inst__DOT__state = 0U;
                }
            } else {
                if ((3U == vlTOPp->top__DOT__memory_inst__DOT__state)) {
                    if ((0x1d580U > vlTOPp->top__DOT__memory_inst__DOT__index)) {
                        vlTOPp->top__DOT__memory_inst__DOT__rdata_temp 
                            = ((0x1d57fU >= (0x1ffffU 
                                             & vlTOPp->top__DOT__memory_inst__DOT__index))
                                ? vlTOPp->top__DOT__memory_inst__DOT__mem
                               [(0x1ffffU & vlTOPp->top__DOT__memory_inst__DOT__index)]
                                : 0U);
                    } else {
                        vlTOPp->top__DOT__memory_inst__DOT__status = 2U;
                    }
                    vlTOPp->top__DOT__memory_inst__DOT__state = 4U;
                } else {
                    if ((4U == vlTOPp->top__DOT__memory_inst__DOT__state)) {
                        __Vtask_read_resp__25__t_rresp 
                            = vlTOPp->top__DOT__memory_inst__DOT__status;
                        __Vtask_read_resp__25__t_rdata 
                            = vlTOPp->top__DOT__memory_inst__DOT__rdata_temp;
                        __Vtask_read_resp__25__done = 0U;
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.rvalid = 1U;
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.rresp 
                            = __Vtask_read_resp__25__t_rresp;
                        vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                            = __Vtask_read_resp__25__t_rdata;
                        if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
                             & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)))))) {
                            __Vtask_read_resp__25__done = 1U;
                        }
                        vlTOPp->top__DOT__memory_inst__DOT__done 
                            = __Vtask_read_resp__25__done;
                        if (vlTOPp->top__DOT__memory_inst__DOT__done) {
                            vlTOPp->top__DOT__memory_inst__DOT__state = 0U;
                        }
                    } else {
                        vlTOPp->top__DOT__memory_inst__DOT__state = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_data = VL_ULL(0);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_valid = 0U;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__eoi = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_trace = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_valid = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_pending 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0_q 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_insn = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (0x7ffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 0x15U)))))) 
               & (~ (IData)((0U != (0x1fffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 7U))))));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq = 0U;
    }
    if ((1U & ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->trap)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
    } else {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->trap)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr;
    }
    if ((((IData)(vlTOPp->res_n) & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd)))) {
        __Vdlyvval__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata;
        __Vdlyvset__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                : (0xffffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode));
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2;
    }
    if (vlTOPp->res_n) {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
    }
    if (vlTOPp->res_n) {
        if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.awready) 
             & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.arready) 
             & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.wready) 
             & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid))))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
    } else {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 0U;
    }
    vlTOPp->debugger_ascii = (0x7fU & vlTOPp->top__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data);
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.bresp 
        = (((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.bresp));
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.bvalid 
        = (((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.bvalid));
    if (__Vdlyvset__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs[__Vdlyvdim0__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __Vdlyvval__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->trap))))) {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata 
                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata;
        }
    }
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bresp 
        = (((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.bresp));
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bvalid 
        = (((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.bvalid));
    if ((1U & (~ ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->trap))))) {
        if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr 
                = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                    | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc)
                    : (0xfffffffcU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlTOPp->res_n) & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
                                     & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready))));
    if (vlTOPp->res_n) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1));
    }
    if ((1U & ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->trap)))) {
        if ((1U & (~ (IData)(vlTOPp->res_n)))) {
            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready)))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
        }
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb 
                = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb) 
                   & VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 1U;
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr 
                    = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst));
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb = 0U;
                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 1U;
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr = 0U;
                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
                        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                            | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))
                            ? 0U : 3U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) {
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bvalid) 
           | (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.rvalid));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid)));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_debugger.bready 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)));
    }
    vlTOPp->trap = 0U;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = 0U;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
    }
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = ((IData)(vlTOPp->res_n) ? (VL_ULL(1) + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle)
            : VL_ULL(0));
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    if (vlTOPp->res_n) {
        if (((((((((0x80U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                vlTOPp->trap = 1U;
            } else {
                if ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                        = (1U & ((~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger)) 
                                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq))));
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd 
                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr 
                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc;
                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store)
                                ? (0xfffffffeU & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                                                   ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                                                   : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out))
                                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
                    }
                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 0U;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 0U;
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 0U;
                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) {
                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
                            = (VL_ULL(1) + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr);
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay 
                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active;
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                               + ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr)
                                   ? 2U : 4U));
                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                                = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                                   + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj);
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 1U;
                        } else {
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
                                = (1U & ((~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr)) 
                                         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq))));
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                        }
                    }
                } else {
                    if ((0x20U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 = 0U;
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 = 0U;
                        if ((((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap) 
                              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                             | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal))) {
                            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap) {
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                            } else {
                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle);
                                    } else {
                                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                = (IData)(
                                                          (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
                                                           >> 0x20U));
                                        } else {
                                            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                    = (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr);
                                            } else {
                                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                        = (IData)(
                                                                  (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                } else {
                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui)
                                                ? 0U
                                                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc);
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    }
                                }
                            }
                        } else {
                            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap)))) {
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 1U;
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2;
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                } else {
                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                            = (0x1fU 
                                               & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2);
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 2U;
                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                        } else {
                                            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                            } else {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                = (0x1fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2);
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val 
                                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 2U;
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                } else {
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                }
                            }
                        } else {
                            if ((8U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                    = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                                       + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = 0U;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done) {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    }
                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0) {
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch 
                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 1U;
                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                }
                            } else {
                                if ((4U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh))) {
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    } else {
                                        if ((4U <= (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh))) {
                                            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll))) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     << 4U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 4U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, 4U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(4U)));
                                        } else {
                                            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll))) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     << 1U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 1U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, 1U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(1U)));
                                        }
                                    }
                                } else {
                                    if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
                                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
                                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                            if (((~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
                                            if (((~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
                                                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word;
                                                } else {
                                                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh) {
                                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                            = 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0xffffU 
                                                                           & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word));
                                                    } else {
                                                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb) {
                                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                                = 
                                                                VL_EXTENDS_II(32,8, 
                                                                              (0xffU 
                                                                               & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word));
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                     | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu))) {
                                                    __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu))) {
                                                        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
                                                            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
                                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
                                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh;
                                                __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
                                                    = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr = VL_ULL(0);
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer = 0U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 0U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = 2U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = 0x10000U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
    }
    if (((IData)(vlTOPp->res_n) & ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata) 
                                   | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)))) {
            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
            __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlTOPp->res_n) & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & (0U != (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc)))) {
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlTOPp->res_n)) | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc = 0U;
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_memory.bready 
            = vlSymsp->TOP__top__DOT__if_axi_light_debugger.bready;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq = 0U;
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active = 0U;
    }
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out)
            : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out;
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 7U));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 0x14U));
    }
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata)));
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq 
        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           == vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu 
        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           < vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc0002U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc0102U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc8002U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc8102U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr 
            = ((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc0202U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh 
            = ((0x73U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc8202U == (0xfffffU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                        : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out);
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)))))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (4U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (6U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (7U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (2U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (4U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (2U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (2U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (3U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (4U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (6U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (7U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (((1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj
                : (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc))
                    ? (0xfffff000U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)
                    : (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (0xfffU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x14U)))
                        : ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm
                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0xbU)))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffff801U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffff7ffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 2U)));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfff00fffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffffffeU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                               >> 0xbU)))));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr 
            = ((0x67U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)) 
               & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                               >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (2U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (3U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (4U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (6U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and 
            = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (7U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (((1U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
    }
    if ((1U & (~ (IData)(vlTOPp->res_n)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or = 0U;
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger));
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata;
    }
    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)
                ? (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   - vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2)
                : (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                    = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or))) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                           | vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and))) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                            = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                               & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq) 
                                                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
        = __Vdly__top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr);
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata
            : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q);
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->debugger_ascii = (0x7fU & vlTOPp->top__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data);
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.bresp 
        = (((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.bresp));
    vlSymsp->TOP__top__DOT__if_axi_light_debugger.bvalid 
        = (((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.bvalid));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid)));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid)));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_debugger.bready 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->res_n) & (~ (IData)((0U 
                                                 != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata));
    if ((0U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata)));
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out)
            : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->res_n))))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq 
        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           == vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu 
        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           < vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2)
                : (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2));
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                        : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out);
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm
                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq) 
                                                        | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->res_n) & ((~ (IData)((0U 
                                                 != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)))) 
                                     & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                        | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))));
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bresp 
        = (((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.bresp));
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bvalid 
        = (((IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__axi_detector_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_debugger.bvalid));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_memory.bready 
            = vlSymsp->TOP__top__DOT__if_axi_light_debugger.bready;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                            = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)
                ? (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   - vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2)
                : (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   + vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare) {
            vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor))) {
                vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                    = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or))) {
                    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                        = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                           | vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and))) {
                        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                            = (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                               & vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr);
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready 
        = ((IData)(vlSymsp->TOP__top__DOT__if_axi_light_axi_detector.bvalid) 
           | (IData)(vlSymsp->TOP__top__DOT__if_axi_light_memory.rvalid));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__top__DOT__if_axi_light_memory.rdata
            : vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q);
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlTOPp->res_n) & ((((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) 
                                       & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) 
                                      & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                                          | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)) 
                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata))) 
                                     | ((3U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)) 
                                        & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))));
}

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->res_n) & (~ (IData)((0U 
                                                 != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->res_n))))) {
        vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->res_n) & ((~ (IData)((0U 
                                                 != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)))) 
                                     & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                        | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))));
    vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlTOPp->res_n) & ((((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) 
                                       & (0U != (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) 
                                      & (((IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                                          | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)) 
                                         | (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata))) 
                                     | ((3U == (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)) 
                                        & (IData)(vlTOPp->top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__top__DOT__if_axi_light_axi_detector._initial__TOP__top__DOT__if_axi_light_axi_detector__1(vlSymsp);
    vlSymsp->TOP__top__DOT__if_axi_light_debugger._initial__TOP__top__DOT__if_axi_light_debugger__2(vlSymsp);
    vlSymsp->TOP__top__DOT__if_axi_light_memory._initial__TOP__top__DOT__if_axi_light_debugger__2(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((res_n & 0xfeU))) {
        Verilated::overWidthError("res_n");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    res_n = VL_RAND_RESET_I(1);
    fin = VL_RAND_RESET_I(1);
    debugger_sig = VL_RAND_RESET_I(1);
    debugger_ascii = VL_RAND_RESET_I(7);
    w = VL_RAND_RESET_I(1);
    w_index = VL_RAND_RESET_I(32);
    trap = VL_RAND_RESET_I(1);
    ill_awaddr_out_of_range = VL_RAND_RESET_I(1);
    ill_araddr_out_of_range = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__irq = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__eoi = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_data = VL_RAND_RESET_Q(36);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_pending = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_retirq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_trace = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(5);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__data = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__state = 0;
    top__DOT__axi_detector_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__axi_detector_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__axi_detector_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__axi_detector_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__axi_detector_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__axi_detector_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__axi_detector_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__axi_detector_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__axi_detector_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__axi_detector_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__busy = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data = VL_RAND_RESET_I(32);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0;
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__memory_inst__DOT__state = 0;
    top__DOT__memory_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_inst__DOT__index = VL_RAND_RESET_I(32);
    top__DOT__memory_inst__DOT__status = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<120192; ++__Vi0) {
            top__DOT__memory_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__memory_inst__DOT__rdata_temp = VL_RAND_RESET_I(32);
    top__DOT__memory_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__memory_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    top__DOT__memory_inst__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    top__DOT__memory_inst__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    top__DOT__memory_inst__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1],0x0000006c,0x646d656d);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2],0x00000073,0x746d656d);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[4],0x00000073,0x68696674);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[5],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[6],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[7],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[8],0x65786563);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[9],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[10],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[11],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[12],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[13],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[14],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[15],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[16],0x00006c64,0x5f727332);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[17],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[18],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[19],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[20],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[21],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[22],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[23],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[24],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[25],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[26],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[27],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[28],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[29],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[30],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[31],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[32],0x00006c64,0x5f727331);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[33],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[34],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[35],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[36],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[37],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[38],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[39],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[40],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[41],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[42],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[43],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[44],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[45],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[46],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[47],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[48],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[49],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[50],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[51],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[52],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[53],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[54],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[55],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[56],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[57],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[58],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[59],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[60],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[61],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[62],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[63],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[64],0x00000066,0x65746368);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[65],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[66],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[67],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[68],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[69],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[70],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[71],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[72],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[73],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[74],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[75],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[76],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[77],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[78],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[79],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[80],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[81],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[82],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[83],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[84],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[85],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[86],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[87],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[88],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[89],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[90],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[91],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[92],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[93],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[94],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[95],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[96],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[97],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[98],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[99],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[100],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[101],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[102],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[103],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[104],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[105],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[106],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[107],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[108],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[109],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[110],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[111],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[112],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[113],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[114],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[115],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[116],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[117],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[118],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[119],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[120],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[121],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[122],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[123],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[124],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[125],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[126],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[127],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[128],0x74726170);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[129],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[130],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[131],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[132],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[133],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[134],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[135],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[136],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[137],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[138],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[139],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[140],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[141],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[142],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[143],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[144],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[145],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[146],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[147],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[148],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[149],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[150],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[151],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[152],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[153],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[154],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[155],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[156],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[157],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[158],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[159],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[160],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[161],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[162],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[163],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[164],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[165],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[166],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[167],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[168],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[169],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[170],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[171],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[172],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[173],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[174],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[175],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[176],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[177],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[178],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[179],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[180],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[181],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[182],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[183],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[184],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[185],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[186],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[187],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[188],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[189],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[190],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[191],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[192],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[193],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[194],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[195],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[196],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[197],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[198],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[199],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[200],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[201],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[202],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[203],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[204],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[205],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[206],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[207],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[208],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[209],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[210],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[211],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[212],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[213],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[214],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[215],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[216],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[217],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[218],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[219],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[220],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[221],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[222],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[223],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[224],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[225],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[226],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[227],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[228],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[229],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[230],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[231],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[232],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[233],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[234],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[235],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[236],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[237],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[238],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[239],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[240],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[241],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[242],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[243],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[244],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[245],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[246],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[247],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[248],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[249],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[250],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[251],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[252],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[253],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[254],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[255],0x00000000);
    __Vm_traceActivity = 0;
}