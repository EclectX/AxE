// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_IF_AXI_LIGHT_H_
#define _VTOP_IF_AXI_LIGHT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop_if_axi_light) {
  public:
    
    // LOCAL SIGNALS
    CData/*0:0*/ awvalid;
    CData/*0:0*/ awready;
    CData/*2:0*/ awprot;
    CData/*0:0*/ wvalid;
    CData/*0:0*/ wready;
    CData/*3:0*/ wstrb;
    CData/*0:0*/ bvalid;
    CData/*0:0*/ bready;
    CData/*0:0*/ arready;
    CData/*0:0*/ rvalid;
    CData/*0:0*/ w_addr_collected;
    CData/*0:0*/ w_data_collected;
    CData/*0:0*/ w_addr_sent;
    CData/*0:0*/ w_data_sent;
    IData/*31:0*/ awaddr;
    IData/*31:0*/ wdata;
    IData/*31:0*/ rdata;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_if_axi_light);  ///< Copying not allowed
  public:
    Vtop_if_axi_light(const char* name = "TOP");
    ~Vtop_if_axi_light();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__top__DOT__if_axi_light_axi_detector__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _initial__TOP__top__DOT__if_axi_light_debugger__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
