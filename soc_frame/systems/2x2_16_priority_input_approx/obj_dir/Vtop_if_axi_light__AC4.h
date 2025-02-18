// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_IF_AXI_LIGHT__AC4_H_
#define _VTOP_IF_AXI_LIGHT__AC4_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop_if_axi_light__AC4) {
  public:
    
    // LOCAL SIGNALS
    CData/*0:0*/ awready;
    CData/*0:0*/ wready;
    CData/*0:0*/ bvalid;
    CData/*0:0*/ w_addr_collected;
    CData/*0:0*/ w_data_collected;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_if_axi_light__AC4);  ///< Copying not allowed
  public:
    Vtop_if_axi_light__AC4(const char* name = "TOP");
    ~Vtop_if_axi_light__AC4();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
