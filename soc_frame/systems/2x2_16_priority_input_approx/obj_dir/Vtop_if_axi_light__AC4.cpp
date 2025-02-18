// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_if_axi_light__AC4.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop_if_axi_light__AC4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_if_axi_light__AC4::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_if_axi_light__AC4::~Vtop_if_axi_light__AC4() {
}

void Vtop_if_axi_light__AC4::_initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_if_axi_light__AC4::_initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->w_addr_collected = 0U;
    this->w_data_collected = 0U;
}

void Vtop_if_axi_light__AC4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_if_axi_light__AC4::_ctor_var_reset\n"); );
    // Body
    awready = VL_RAND_RESET_I(1);
    wready = VL_RAND_RESET_I(1);
    bvalid = VL_RAND_RESET_I(1);
    w_addr_collected = VL_RAND_RESET_I(1);
    w_data_collected = VL_RAND_RESET_I(1);
}
