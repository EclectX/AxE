// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========
WData/*127:0*/ Vtop::__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[256][4];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__top__DOT__if_connect_node_empty, Vtop_if_connect);
    VL_CELL(__PVT__top__DOT__if_connect_node_0, Vtop_if_connect);
    VL_CELL(__PVT__top__DOT__if_connect_node_1, Vtop_if_connect);
    VL_CELL(__PVT__top__DOT__if_connect_memory, Vtop_if_connect);
    VL_CELL(__PVT__top__DOT__if_axi_light_controller, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger, Vtop_if_axi_light__AC4);
    VL_CELL(__PVT__top__DOT__controller_inst__DOT__if_axi_light_debugger_to_offset, Vtop_if_axi_light__AC4);
    VL_CELL(__PVT__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst, Vtop_picorv32_axi__S9c40_EF1_EH1);
    VL_CELL(__PVT__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector, Vtop_if_axi_light__AC4);
    VL_CELL(__PVT__top__DOT__node_0__DOT__if_axi_light_detector_to_offset, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_0__DOT__if_axi_light_offset_to_mux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector, Vtop_if_axi_light__AC4);
    VL_CELL(__PVT__top__DOT__node_1__DOT__if_axi_light_detector_to_offset, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_1__DOT__if_axi_light_offset_to_mux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst, Vtop_picorv32_axi__S9c40_EF1_EH1);
    VL_CELL(__PVT__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__memory_controller_inst__DOT__if_axi_light_demux, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__memory_controller_inst__DOT__if_axi_light_memory, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__memory_controller_inst__DOT__if_axi_light_control, Vtop_if_axi_light);
    VL_CELL(__PVT__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core, Vtop_mkIQRouterCoreSimple);
    VL_CELL(__PVT__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1, Vtop_mkIQRouterCoreSimple);
    VL_CELL(__PVT__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2, Vtop_mkIQRouterCoreSimple);
    VL_CELL(__PVT__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3, Vtop_mkIQRouterCoreSimple);
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
            VL_FATAL_MT("top.sv", 105, "",
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
            VL_FATAL_MT("top.sv", 105, "",
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
    WData/*639:0*/ __Vtemp1[20];
    WData/*639:0*/ __Vtemp2[20];
    WData/*639:0*/ __Vtemp3[20];
    WData/*639:0*/ __Vtemp4[20];
    WData/*639:0*/ __Vtemp5[20];
    WData/*639:0*/ __Vtemp6[20];
    WData/*639:0*/ __Vtemp7[20];
    WData/*639:0*/ __Vtemp8[20];
    WData/*639:0*/ __Vtemp9[20];
    WData/*639:0*/ __Vtemp10[20];
    WData/*639:0*/ __Vtemp11[20];
    WData/*639:0*/ __Vtemp12[20];
    WData/*639:0*/ __Vtemp13[20];
    WData/*639:0*/ __Vtemp14[20];
    WData/*639:0*/ __Vtemp15[20];
    WData/*639:0*/ __Vtemp16[20];
    WData/*639:0*/ __Vtemp17[20];
    WData/*639:0*/ __Vtemp18[20];
    WData/*639:0*/ __Vtemp19[20];
    WData/*639:0*/ __Vtemp20[20];
    WData/*223:0*/ __Vtemp21[7];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x6e675f31U;
    __Vtemp1[2U] = 0x6f757469U;
    __Vtemp1[3U] = 0x6f6c5f72U;
    __Vtemp1[4U] = 0x50657243U;
    __Vtemp1[5U] = 0x32525473U;
    __Vtemp1[6U] = 0x526f775fU;
    __Vtemp1[7U] = 0x73506572U;
    __Vtemp1[8U] = 0x5f325254U;
    __Vtemp1[9U] = 0x6c6c6f63U;
    __Vtemp1[0xaU] = 0x62696e41U;
    __Vtemp1[0xbU] = 0x6e64526fU;
    __Vtemp1[0xcU] = 0x46526f75U;
    __Vtemp1[0xdU] = 0x53657049U;
    __Vtemp1[0xeU] = 0x3644575fU;
    __Vtemp1[0xfU] = 0x42445f31U;
    __Vtemp1[0x10U] = 0x43735f38U;
    __Vtemp1[0x11U] = 0x735f3256U;
    __Vtemp1[0x12U] = 0x5f345254U;
    __Vtemp1[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp1)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_1__DOT__arr
                 , 0U, 3U);
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x6e675f31U;
    __Vtemp2[2U] = 0x6f757469U;
    __Vtemp2[3U] = 0x6f6c5f72U;
    __Vtemp2[4U] = 0x50657243U;
    __Vtemp2[5U] = 0x32525473U;
    __Vtemp2[6U] = 0x526f775fU;
    __Vtemp2[7U] = 0x73506572U;
    __Vtemp2[8U] = 0x5f325254U;
    __Vtemp2[9U] = 0x6c6c6f63U;
    __Vtemp2[0xaU] = 0x62696e41U;
    __Vtemp2[0xbU] = 0x6e64526fU;
    __Vtemp2[0xcU] = 0x46526f75U;
    __Vtemp2[0xdU] = 0x53657049U;
    __Vtemp2[0xeU] = 0x3644575fU;
    __Vtemp2[0xfU] = 0x42445f31U;
    __Vtemp2[0x10U] = 0x43735f38U;
    __Vtemp2[0x11U] = 0x735f3256U;
    __Vtemp2[0x12U] = 0x5f345254U;
    __Vtemp2[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp2)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_4__DOT__arr
                 , 0U, 3U);
    __Vtemp3[0U] = 0x2e686578U;
    __Vtemp3[1U] = 0x6e675f32U;
    __Vtemp3[2U] = 0x6f757469U;
    __Vtemp3[3U] = 0x6f6c5f72U;
    __Vtemp3[4U] = 0x50657243U;
    __Vtemp3[5U] = 0x32525473U;
    __Vtemp3[6U] = 0x526f775fU;
    __Vtemp3[7U] = 0x73506572U;
    __Vtemp3[8U] = 0x5f325254U;
    __Vtemp3[9U] = 0x6c6c6f63U;
    __Vtemp3[0xaU] = 0x62696e41U;
    __Vtemp3[0xbU] = 0x6e64526fU;
    __Vtemp3[0xcU] = 0x46526f75U;
    __Vtemp3[0xdU] = 0x53657049U;
    __Vtemp3[0xeU] = 0x3644575fU;
    __Vtemp3[0xfU] = 0x42445f31U;
    __Vtemp3[0x10U] = 0x43735f38U;
    __Vtemp3[0x11U] = 0x735f3256U;
    __Vtemp3[0x12U] = 0x5f345254U;
    __Vtemp3[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp3)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_2__DOT__arr
                 , 0U, 3U);
    __Vtemp4[0U] = 0x2e686578U;
    __Vtemp4[1U] = 0x6e675f32U;
    __Vtemp4[2U] = 0x6f757469U;
    __Vtemp4[3U] = 0x6f6c5f72U;
    __Vtemp4[4U] = 0x50657243U;
    __Vtemp4[5U] = 0x32525473U;
    __Vtemp4[6U] = 0x526f775fU;
    __Vtemp4[7U] = 0x73506572U;
    __Vtemp4[8U] = 0x5f325254U;
    __Vtemp4[9U] = 0x6c6c6f63U;
    __Vtemp4[0xaU] = 0x62696e41U;
    __Vtemp4[0xbU] = 0x6e64526fU;
    __Vtemp4[0xcU] = 0x46526f75U;
    __Vtemp4[0xdU] = 0x53657049U;
    __Vtemp4[0xeU] = 0x3644575fU;
    __Vtemp4[0xfU] = 0x42445f31U;
    __Vtemp4[0x10U] = 0x43735f38U;
    __Vtemp4[0x11U] = 0x735f3256U;
    __Vtemp4[0x12U] = 0x5f345254U;
    __Vtemp4[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp4)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_3__DOT__arr
                 , 0U, 3U);
    __Vtemp5[0U] = 0x2e686578U;
    __Vtemp5[1U] = 0x6e675f33U;
    __Vtemp5[2U] = 0x6f757469U;
    __Vtemp5[3U] = 0x6f6c5f72U;
    __Vtemp5[4U] = 0x50657243U;
    __Vtemp5[5U] = 0x32525473U;
    __Vtemp5[6U] = 0x526f775fU;
    __Vtemp5[7U] = 0x73506572U;
    __Vtemp5[8U] = 0x5f325254U;
    __Vtemp5[9U] = 0x6c6c6f63U;
    __Vtemp5[0xaU] = 0x62696e41U;
    __Vtemp5[0xbU] = 0x6e64526fU;
    __Vtemp5[0xcU] = 0x46526f75U;
    __Vtemp5[0xdU] = 0x53657049U;
    __Vtemp5[0xeU] = 0x3644575fU;
    __Vtemp5[0xfU] = 0x42445f31U;
    __Vtemp5[0x10U] = 0x43735f38U;
    __Vtemp5[0x11U] = 0x735f3256U;
    __Vtemp5[0x12U] = 0x5f345254U;
    __Vtemp5[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp5)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_1__DOT__arr
                 , 0U, 3U);
    __Vtemp6[0U] = 0x2e686578U;
    __Vtemp6[1U] = 0x6e675f33U;
    __Vtemp6[2U] = 0x6f757469U;
    __Vtemp6[3U] = 0x6f6c5f72U;
    __Vtemp6[4U] = 0x50657243U;
    __Vtemp6[5U] = 0x32525473U;
    __Vtemp6[6U] = 0x526f775fU;
    __Vtemp6[7U] = 0x73506572U;
    __Vtemp6[8U] = 0x5f325254U;
    __Vtemp6[9U] = 0x6c6c6f63U;
    __Vtemp6[0xaU] = 0x62696e41U;
    __Vtemp6[0xbU] = 0x6e64526fU;
    __Vtemp6[0xcU] = 0x46526f75U;
    __Vtemp6[0xdU] = 0x53657049U;
    __Vtemp6[0xeU] = 0x3644575fU;
    __Vtemp6[0xfU] = 0x42445f31U;
    __Vtemp6[0x10U] = 0x43735f38U;
    __Vtemp6[0x11U] = 0x735f3256U;
    __Vtemp6[0x12U] = 0x5f345254U;
    __Vtemp6[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp6)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_2__DOT__arr
                 , 0U, 3U);
    __Vtemp7[0U] = 0x2e686578U;
    __Vtemp7[1U] = 0x6e675f30U;
    __Vtemp7[2U] = 0x6f757469U;
    __Vtemp7[3U] = 0x6f6c5f72U;
    __Vtemp7[4U] = 0x50657243U;
    __Vtemp7[5U] = 0x32525473U;
    __Vtemp7[6U] = 0x526f775fU;
    __Vtemp7[7U] = 0x73506572U;
    __Vtemp7[8U] = 0x5f325254U;
    __Vtemp7[9U] = 0x6c6c6f63U;
    __Vtemp7[0xaU] = 0x62696e41U;
    __Vtemp7[0xbU] = 0x6e64526fU;
    __Vtemp7[0xcU] = 0x46526f75U;
    __Vtemp7[0xdU] = 0x53657049U;
    __Vtemp7[0xeU] = 0x3644575fU;
    __Vtemp7[0xfU] = 0x42445f31U;
    __Vtemp7[0x10U] = 0x43735f38U;
    __Vtemp7[0x11U] = 0x735f3256U;
    __Vtemp7[0x12U] = 0x5f345254U;
    __Vtemp7[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp7)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_3__DOT__arr
                 , 0U, 3U);
    __Vtemp8[0U] = 0x2e686578U;
    __Vtemp8[1U] = 0x6e675f30U;
    __Vtemp8[2U] = 0x6f757469U;
    __Vtemp8[3U] = 0x6f6c5f72U;
    __Vtemp8[4U] = 0x50657243U;
    __Vtemp8[5U] = 0x32525473U;
    __Vtemp8[6U] = 0x526f775fU;
    __Vtemp8[7U] = 0x73506572U;
    __Vtemp8[8U] = 0x5f325254U;
    __Vtemp8[9U] = 0x6c6c6f63U;
    __Vtemp8[0xaU] = 0x62696e41U;
    __Vtemp8[0xbU] = 0x6e64526fU;
    __Vtemp8[0xcU] = 0x46526f75U;
    __Vtemp8[0xdU] = 0x53657049U;
    __Vtemp8[0xeU] = 0x3644575fU;
    __Vtemp8[0xfU] = 0x42445f31U;
    __Vtemp8[0x10U] = 0x43735f38U;
    __Vtemp8[0x11U] = 0x735f3256U;
    __Vtemp8[0x12U] = 0x5f345254U;
    __Vtemp8[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp8)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_4__DOT__arr
                 , 0U, 3U);
    __Vtemp9[0U] = 0x2e686578U;
    __Vtemp9[1U] = 0x6e675f31U;
    __Vtemp9[2U] = 0x6f757469U;
    __Vtemp9[3U] = 0x6f6c5f72U;
    __Vtemp9[4U] = 0x50657243U;
    __Vtemp9[5U] = 0x32525473U;
    __Vtemp9[6U] = 0x526f775fU;
    __Vtemp9[7U] = 0x73506572U;
    __Vtemp9[8U] = 0x5f325254U;
    __Vtemp9[9U] = 0x6c6c6f63U;
    __Vtemp9[0xaU] = 0x62696e41U;
    __Vtemp9[0xbU] = 0x6e64526fU;
    __Vtemp9[0xcU] = 0x46526f75U;
    __Vtemp9[0xdU] = 0x53657049U;
    __Vtemp9[0xeU] = 0x3644575fU;
    __Vtemp9[0xfU] = 0x42445f31U;
    __Vtemp9[0x10U] = 0x43735f38U;
    __Vtemp9[0x11U] = 0x735f3256U;
    __Vtemp9[0x12U] = 0x5f345254U;
    __Vtemp9[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp9)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_2__DOT__arr
                 , 0U, 3U);
    __Vtemp10[0U] = 0x2e686578U;
    __Vtemp10[1U] = 0x6e675f31U;
    __Vtemp10[2U] = 0x6f757469U;
    __Vtemp10[3U] = 0x6f6c5f72U;
    __Vtemp10[4U] = 0x50657243U;
    __Vtemp10[5U] = 0x32525473U;
    __Vtemp10[6U] = 0x526f775fU;
    __Vtemp10[7U] = 0x73506572U;
    __Vtemp10[8U] = 0x5f325254U;
    __Vtemp10[9U] = 0x6c6c6f63U;
    __Vtemp10[0xaU] = 0x62696e41U;
    __Vtemp10[0xbU] = 0x6e64526fU;
    __Vtemp10[0xcU] = 0x46526f75U;
    __Vtemp10[0xdU] = 0x53657049U;
    __Vtemp10[0xeU] = 0x3644575fU;
    __Vtemp10[0xfU] = 0x42445f31U;
    __Vtemp10[0x10U] = 0x43735f38U;
    __Vtemp10[0x11U] = 0x735f3256U;
    __Vtemp10[0x12U] = 0x5f345254U;
    __Vtemp10[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp10)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_3__DOT__arr
                 , 0U, 3U);
    __Vtemp11[0U] = 0x2e686578U;
    __Vtemp11[1U] = 0x6e675f32U;
    __Vtemp11[2U] = 0x6f757469U;
    __Vtemp11[3U] = 0x6f6c5f72U;
    __Vtemp11[4U] = 0x50657243U;
    __Vtemp11[5U] = 0x32525473U;
    __Vtemp11[6U] = 0x526f775fU;
    __Vtemp11[7U] = 0x73506572U;
    __Vtemp11[8U] = 0x5f325254U;
    __Vtemp11[9U] = 0x6c6c6f63U;
    __Vtemp11[0xaU] = 0x62696e41U;
    __Vtemp11[0xbU] = 0x6e64526fU;
    __Vtemp11[0xcU] = 0x46526f75U;
    __Vtemp11[0xdU] = 0x53657049U;
    __Vtemp11[0xeU] = 0x3644575fU;
    __Vtemp11[0xfU] = 0x42445f31U;
    __Vtemp11[0x10U] = 0x43735f38U;
    __Vtemp11[0x11U] = 0x735f3256U;
    __Vtemp11[0x12U] = 0x5f345254U;
    __Vtemp11[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp11)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_1__DOT__arr
                 , 0U, 3U);
    __Vtemp12[0U] = 0x2e686578U;
    __Vtemp12[1U] = 0x6e675f32U;
    __Vtemp12[2U] = 0x6f757469U;
    __Vtemp12[3U] = 0x6f6c5f72U;
    __Vtemp12[4U] = 0x50657243U;
    __Vtemp12[5U] = 0x32525473U;
    __Vtemp12[6U] = 0x526f775fU;
    __Vtemp12[7U] = 0x73506572U;
    __Vtemp12[8U] = 0x5f325254U;
    __Vtemp12[9U] = 0x6c6c6f63U;
    __Vtemp12[0xaU] = 0x62696e41U;
    __Vtemp12[0xbU] = 0x6e64526fU;
    __Vtemp12[0xcU] = 0x46526f75U;
    __Vtemp12[0xdU] = 0x53657049U;
    __Vtemp12[0xeU] = 0x3644575fU;
    __Vtemp12[0xfU] = 0x42445f31U;
    __Vtemp12[0x10U] = 0x43735f38U;
    __Vtemp12[0x11U] = 0x735f3256U;
    __Vtemp12[0x12U] = 0x5f345254U;
    __Vtemp12[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp12)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_4__DOT__arr
                 , 0U, 3U);
    __Vtemp13[0U] = 0x2e686578U;
    __Vtemp13[1U] = 0x6e675f33U;
    __Vtemp13[2U] = 0x6f757469U;
    __Vtemp13[3U] = 0x6f6c5f72U;
    __Vtemp13[4U] = 0x50657243U;
    __Vtemp13[5U] = 0x32525473U;
    __Vtemp13[6U] = 0x526f775fU;
    __Vtemp13[7U] = 0x73506572U;
    __Vtemp13[8U] = 0x5f325254U;
    __Vtemp13[9U] = 0x6c6c6f63U;
    __Vtemp13[0xaU] = 0x62696e41U;
    __Vtemp13[0xbU] = 0x6e64526fU;
    __Vtemp13[0xcU] = 0x46526f75U;
    __Vtemp13[0xdU] = 0x53657049U;
    __Vtemp13[0xeU] = 0x3644575fU;
    __Vtemp13[0xfU] = 0x42445f31U;
    __Vtemp13[0x10U] = 0x43735f38U;
    __Vtemp13[0x11U] = 0x735f3256U;
    __Vtemp13[0x12U] = 0x5f345254U;
    __Vtemp13[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp13)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_3__DOT__arr
                 , 0U, 3U);
    __Vtemp14[0U] = 0x2e686578U;
    __Vtemp14[1U] = 0x6e675f33U;
    __Vtemp14[2U] = 0x6f757469U;
    __Vtemp14[3U] = 0x6f6c5f72U;
    __Vtemp14[4U] = 0x50657243U;
    __Vtemp14[5U] = 0x32525473U;
    __Vtemp14[6U] = 0x526f775fU;
    __Vtemp14[7U] = 0x73506572U;
    __Vtemp14[8U] = 0x5f325254U;
    __Vtemp14[9U] = 0x6c6c6f63U;
    __Vtemp14[0xaU] = 0x62696e41U;
    __Vtemp14[0xbU] = 0x6e64526fU;
    __Vtemp14[0xcU] = 0x46526f75U;
    __Vtemp14[0xdU] = 0x53657049U;
    __Vtemp14[0xeU] = 0x3644575fU;
    __Vtemp14[0xfU] = 0x42445f31U;
    __Vtemp14[0x10U] = 0x43735f38U;
    __Vtemp14[0x11U] = 0x735f3256U;
    __Vtemp14[0x12U] = 0x5f345254U;
    __Vtemp14[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp14)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_4__DOT__arr
                 , 0U, 3U);
    __Vtemp15[0U] = 0x2e686578U;
    __Vtemp15[1U] = 0x6e675f30U;
    __Vtemp15[2U] = 0x6f757469U;
    __Vtemp15[3U] = 0x6f6c5f72U;
    __Vtemp15[4U] = 0x50657243U;
    __Vtemp15[5U] = 0x32525473U;
    __Vtemp15[6U] = 0x526f775fU;
    __Vtemp15[7U] = 0x73506572U;
    __Vtemp15[8U] = 0x5f325254U;
    __Vtemp15[9U] = 0x6c6c6f63U;
    __Vtemp15[0xaU] = 0x62696e41U;
    __Vtemp15[0xbU] = 0x6e64526fU;
    __Vtemp15[0xcU] = 0x46526f75U;
    __Vtemp15[0xdU] = 0x53657049U;
    __Vtemp15[0xeU] = 0x3644575fU;
    __Vtemp15[0xfU] = 0x42445f31U;
    __Vtemp15[0x10U] = 0x43735f38U;
    __Vtemp15[0x11U] = 0x735f3256U;
    __Vtemp15[0x12U] = 0x5f345254U;
    __Vtemp15[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp15)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_1__DOT__arr
                 , 0U, 3U);
    __Vtemp16[0U] = 0x2e686578U;
    __Vtemp16[1U] = 0x6e675f30U;
    __Vtemp16[2U] = 0x6f757469U;
    __Vtemp16[3U] = 0x6f6c5f72U;
    __Vtemp16[4U] = 0x50657243U;
    __Vtemp16[5U] = 0x32525473U;
    __Vtemp16[6U] = 0x526f775fU;
    __Vtemp16[7U] = 0x73506572U;
    __Vtemp16[8U] = 0x5f325254U;
    __Vtemp16[9U] = 0x6c6c6f63U;
    __Vtemp16[0xaU] = 0x62696e41U;
    __Vtemp16[0xbU] = 0x6e64526fU;
    __Vtemp16[0xcU] = 0x46526f75U;
    __Vtemp16[0xdU] = 0x53657049U;
    __Vtemp16[0xeU] = 0x3644575fU;
    __Vtemp16[0xfU] = 0x42445f31U;
    __Vtemp16[0x10U] = 0x43735f38U;
    __Vtemp16[0x11U] = 0x735f3256U;
    __Vtemp16[0x12U] = 0x5f345254U;
    __Vtemp16[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp16)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_2__DOT__arr
                 , 0U, 3U);
    __Vtemp17[0U] = 0x2e686578U;
    __Vtemp17[1U] = 0x6e675f31U;
    __Vtemp17[2U] = 0x6f757469U;
    __Vtemp17[3U] = 0x6f6c5f72U;
    __Vtemp17[4U] = 0x50657243U;
    __Vtemp17[5U] = 0x32525473U;
    __Vtemp17[6U] = 0x526f775fU;
    __Vtemp17[7U] = 0x73506572U;
    __Vtemp17[8U] = 0x5f325254U;
    __Vtemp17[9U] = 0x6c6c6f63U;
    __Vtemp17[0xaU] = 0x62696e41U;
    __Vtemp17[0xbU] = 0x6e64526fU;
    __Vtemp17[0xcU] = 0x46526f75U;
    __Vtemp17[0xdU] = 0x53657049U;
    __Vtemp17[0xeU] = 0x3644575fU;
    __Vtemp17[0xfU] = 0x42445f31U;
    __Vtemp17[0x10U] = 0x43735f38U;
    __Vtemp17[0x11U] = 0x735f3256U;
    __Vtemp17[0x12U] = 0x5f345254U;
    __Vtemp17[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp17)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf__DOT__arr
                 , 0U, 3U);
    __Vtemp18[0U] = 0x2e686578U;
    __Vtemp18[1U] = 0x6e675f32U;
    __Vtemp18[2U] = 0x6f757469U;
    __Vtemp18[3U] = 0x6f6c5f72U;
    __Vtemp18[4U] = 0x50657243U;
    __Vtemp18[5U] = 0x32525473U;
    __Vtemp18[6U] = 0x526f775fU;
    __Vtemp18[7U] = 0x73506572U;
    __Vtemp18[8U] = 0x5f325254U;
    __Vtemp18[9U] = 0x6c6c6f63U;
    __Vtemp18[0xaU] = 0x62696e41U;
    __Vtemp18[0xbU] = 0x6e64526fU;
    __Vtemp18[0xcU] = 0x46526f75U;
    __Vtemp18[0xdU] = 0x53657049U;
    __Vtemp18[0xeU] = 0x3644575fU;
    __Vtemp18[0xfU] = 0x42445f31U;
    __Vtemp18[0x10U] = 0x43735f38U;
    __Vtemp18[0x11U] = 0x735f3256U;
    __Vtemp18[0x12U] = 0x5f345254U;
    __Vtemp18[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp18)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf__DOT__arr
                 , 0U, 3U);
    __Vtemp19[0U] = 0x2e686578U;
    __Vtemp19[1U] = 0x6e675f33U;
    __Vtemp19[2U] = 0x6f757469U;
    __Vtemp19[3U] = 0x6f6c5f72U;
    __Vtemp19[4U] = 0x50657243U;
    __Vtemp19[5U] = 0x32525473U;
    __Vtemp19[6U] = 0x526f775fU;
    __Vtemp19[7U] = 0x73506572U;
    __Vtemp19[8U] = 0x5f325254U;
    __Vtemp19[9U] = 0x6c6c6f63U;
    __Vtemp19[0xaU] = 0x62696e41U;
    __Vtemp19[0xbU] = 0x6e64526fU;
    __Vtemp19[0xcU] = 0x46526f75U;
    __Vtemp19[0xdU] = 0x53657049U;
    __Vtemp19[0xeU] = 0x3644575fU;
    __Vtemp19[0xfU] = 0x42445f31U;
    __Vtemp19[0x10U] = 0x43735f38U;
    __Vtemp19[0x11U] = 0x735f3256U;
    __Vtemp19[0x12U] = 0x5f345254U;
    __Vtemp19[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp19)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf__DOT__arr
                 , 0U, 3U);
    __Vtemp20[0U] = 0x2e686578U;
    __Vtemp20[1U] = 0x6e675f30U;
    __Vtemp20[2U] = 0x6f757469U;
    __Vtemp20[3U] = 0x6f6c5f72U;
    __Vtemp20[4U] = 0x50657243U;
    __Vtemp20[5U] = 0x32525473U;
    __Vtemp20[6U] = 0x526f775fU;
    __Vtemp20[7U] = 0x73506572U;
    __Vtemp20[8U] = 0x5f325254U;
    __Vtemp20[9U] = 0x6c6c6f63U;
    __Vtemp20[0xaU] = 0x62696e41U;
    __Vtemp20[0xbU] = 0x6e64526fU;
    __Vtemp20[0xcU] = 0x46526f75U;
    __Vtemp20[0xdU] = 0x53657049U;
    __Vtemp20[0xeU] = 0x3644575fU;
    __Vtemp20[0xfU] = 0x42445f31U;
    __Vtemp20[0x10U] = 0x43735f38U;
    __Vtemp20[0x11U] = 0x735f3256U;
    __Vtemp20[0x12U] = 0x5f345254U;
    __Vtemp20[0x13U] = 0x6d657368U;
    VL_READMEM_N(true, 3, 4, 0, VL_CVT_PACK_STR_NW(20, __Vtemp20)
                 , vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf__DOT__arr
                 , 0U, 3U);
    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done = 0U;
    __Vtemp21[0U] = 0x2e686578U;
    __Vtemp21[1U] = 0x2f6d656dU;
    __Vtemp21[2U] = 0x72616d65U;
    __Vtemp21[3U] = 0x6f635f66U;
    __Vtemp21[4U] = 0x65722f73U;
    __Vtemp21[5U] = 0x652f7573U;
    __Vtemp21[6U] = 0x2f686f6dU;
    VL_READMEM_N(true, 32, 70000, 0, VL_CVT_PACK_STR_NW(7, __Vtemp21)
                 , vlTOPp->top__DOT__memory_controller_inst__DOT__bram_inst__DOT__mem
                 , 0U, ~VL_ULL(0));
    vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 0U;
    vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 0U;
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_empty.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_empty.put_flit 
                   >> 0x11U))]);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vtask_write_req_wait__2__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__2__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__2__done;
    CData/*2:0*/ __Vtask_write_req__3__t_awprot;
    CData/*3:0*/ __Vtask_write_req__3__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__3__done;
    CData/*2:0*/ __Vtask_read_req__22__t_arprot;
    CData/*0:0*/ __Vtask_read_req__22__done;
    CData/*1:0*/ __Vtask_read_resp_wait__23__t_rresp;
    CData/*0:0*/ __Vtask_read_resp_wait__23__done;
    CData/*2:0*/ __Vtask_write_req__24__t_awprot;
    CData/*3:0*/ __Vtask_write_req__24__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__24__done;
    CData/*1:0*/ __Vtask_write_resp_wait__25__t_bresp;
    CData/*0:0*/ __Vtask_write_resp_wait__25__done;
    CData/*2:0*/ __Vtask_write_req_wait__27__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__27__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__27__done;
    CData/*2:0*/ __Vtask_read_req_wait__28__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__28__done;
    CData/*1:0*/ __Vtask_write_resp__29__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__29__done;
    CData/*1:0*/ __Vtask_read_resp__30__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__30__done;
    CData/*2:0*/ __Vtask_read_req__36__t_arprot;
    CData/*0:0*/ __Vtask_read_req__36__done;
    CData/*1:0*/ __Vtask_read_resp_wait__37__t_rresp;
    CData/*0:0*/ __Vtask_read_resp_wait__37__done;
    CData/*2:0*/ __Vtask_write_req__38__t_awprot;
    CData/*3:0*/ __Vtask_write_req__38__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__38__done;
    CData/*1:0*/ __Vtask_write_resp_wait__39__t_bresp;
    CData/*0:0*/ __Vtask_write_resp_wait__39__done;
    CData/*2:0*/ __Vtask_write_req_wait__41__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__41__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__41__done;
    CData/*2:0*/ __Vtask_read_req_wait__42__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__42__done;
    CData/*1:0*/ __Vtask_write_resp__43__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__43__done;
    CData/*1:0*/ __Vtask_read_resp__44__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__44__done;
    CData/*2:0*/ __Vtask_write_req__46__t_awprot;
    CData/*3:0*/ __Vtask_write_req__46__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__46__done;
    CData/*2:0*/ __Vtask_read_req__47__t_arprot;
    CData/*0:0*/ __Vtask_read_req__47__done;
    CData/*1:0*/ __Vtask_write_resp_wait__48__t_bresp;
    CData/*0:0*/ __Vtask_write_resp_wait__48__done;
    CData/*1:0*/ __Vtask_read_resp_wait__49__t_rresp;
    CData/*0:0*/ __Vtask_read_resp_wait__49__done;
    CData/*2:0*/ __Vtask_write_req_wait__53__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__53__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__53__done;
    CData/*2:0*/ __Vtask_write_req_wait__54__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__54__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__54__done;
    CData/*2:0*/ __Vtask_read_req_wait__55__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__55__done;
    CData/*2:0*/ __Vtask_read_req_wait__56__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__56__done;
    CData/*2:0*/ __Vtask_write_req__57__t_awprot;
    CData/*3:0*/ __Vtask_write_req__57__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__57__done;
    CData/*2:0*/ __Vtask_read_req__58__t_arprot;
    CData/*0:0*/ __Vtask_read_req__58__done;
    CData/*1:0*/ __Vtask_write_resp_wait__59__t_bresp;
    CData/*0:0*/ __Vtask_write_resp_wait__59__done;
    CData/*1:0*/ __Vtask_read_resp_wait__60__t_rresp;
    CData/*0:0*/ __Vtask_read_resp_wait__60__done;
    CData/*1:0*/ __Vtask_write_resp__61__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__61__done;
    CData/*1:0*/ __Vtask_write_resp__62__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__62__done;
    CData/*1:0*/ __Vtask_read_resp__63__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__63__done;
    CData/*1:0*/ __Vtask_read_resp__64__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__64__done;
    CData/*2:0*/ __Vtask_write_req_wait__69__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__69__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__69__done;
    CData/*2:0*/ __Vtask_read_req_wait__70__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__70__done;
    CData/*2:0*/ __Vtask_write_req__71__t_awprot;
    CData/*3:0*/ __Vtask_write_req__71__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__71__done;
    CData/*2:0*/ __Vtask_read_req__72__t_arprot;
    CData/*0:0*/ __Vtask_read_req__72__done;
    CData/*2:0*/ __Vtask_write_req_wait__74__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__74__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__74__done;
    CData/*2:0*/ __Vtask_read_req_wait__75__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__75__done;
    CData/*1:0*/ __Vtask_write_resp__76__t_bresp;
    CData/*0:0*/ __Vtask_write_resp__76__done;
    CData/*1:0*/ __Vtask_read_resp__77__t_rresp;
    CData/*0:0*/ __Vtask_read_resp__77__done;
    CData/*2:0*/ __Vtask_write_req_wait__79__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__79__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__79__done;
    CData/*2:0*/ __Vtask_read_req_wait__80__t_arprot;
    CData/*0:0*/ __Vtask_read_req_wait__80__done;
    CData/*0:0*/ __Vtask_write_resp__81__done;
    CData/*0:0*/ __Vtask_read_resp__82__done;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v0;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v1;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v2;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v3;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v4;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v5;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v6;
    CData/*0:0*/ __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v7;
    IData/*31:0*/ __Vtask_write_req_wait__2__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__2__t_wdata;
    IData/*31:0*/ __Vtask_write_req__3__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__3__t_wdata;
    IData/*31:0*/ __Vtask_read_req__22__t_araddr;
    IData/*31:0*/ __Vtask_read_resp_wait__23__t_rdata;
    IData/*31:0*/ __Vtask_write_req__24__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__27__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__27__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__28__t_araddr;
    IData/*31:0*/ __Vtask_read_resp__30__t_rdata;
    IData/*31:0*/ __Vtask_read_req__36__t_araddr;
    IData/*31:0*/ __Vtask_read_resp_wait__37__t_rdata;
    IData/*31:0*/ __Vtask_write_req__38__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__41__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__41__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__42__t_araddr;
    IData/*31:0*/ __Vtask_read_resp__44__t_rdata;
    IData/*31:0*/ __Vtask_write_req__46__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__46__t_wdata;
    IData/*31:0*/ __Vtask_read_req__47__t_araddr;
    IData/*31:0*/ __Vtask_read_resp_wait__49__t_rdata;
    IData/*31:0*/ __Vtask_write_req_wait__53__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__53__t_wdata;
    IData/*31:0*/ __Vtask_write_req_wait__54__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__54__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__55__t_araddr;
    IData/*31:0*/ __Vtask_read_req_wait__56__t_araddr;
    IData/*31:0*/ __Vtask_write_req__57__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__57__t_wdata;
    IData/*31:0*/ __Vtask_read_req__58__t_araddr;
    IData/*31:0*/ __Vtask_read_resp_wait__60__t_rdata;
    IData/*31:0*/ __Vtask_read_resp__63__t_rdata;
    IData/*31:0*/ __Vtask_read_resp__64__t_rdata;
    IData/*31:0*/ __Vtask_write_req_wait__69__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__69__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__70__t_araddr;
    IData/*31:0*/ __Vtask_write_req__71__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__71__t_wdata;
    IData/*31:0*/ __Vtask_read_req__72__t_araddr;
    IData/*31:0*/ __Vtask_write_req_wait__74__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__74__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__75__t_araddr;
    IData/*31:0*/ __Vtask_read_resp__77__t_rdata;
    IData/*31:0*/ __Vtask_write_req_wait__79__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__79__t_wdata;
    IData/*31:0*/ __Vtask_read_req_wait__80__t_araddr;
    IData/*31:0*/ __Vtask_read_resp__82__t_rdata;
    WData/*95:0*/ __Vtemp39[3];
    WData/*95:0*/ __Vtemp40[3];
    WData/*95:0*/ __Vtemp48[3];
    WData/*95:0*/ __Vtemp49[3];
    // Body
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_1_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_1_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_1__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_1_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_2_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_2_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_2__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_2_getFlit 
                   >> 0x11U))]);
    vlSymsp->TOP__top__DOT__if_connect_node_0.en_get_non_full_VCs = 0U;
    vlSymsp->TOP__top__DOT__if_connect_node_1.en_get_non_full_VCs = 0U;
    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__i = 2U;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_awaddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_wdata = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_araddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_awaddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_wdata = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_araddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__i = 4U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__if_connect_memory.en_get_non_full_VCs = 1U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__if_connect_memory.en_get = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_awaddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_awprot = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_wdata = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_wstrb = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_araddr = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_arprot = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__index = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rresp = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__w_res_n_syn)))) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_bresp = 0U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done = 0U;
        if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_read) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done = 1U;
        } else {
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_write) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done = 1U;
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done = 0U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_read) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_rdata 
                = ((0x1116fU >= (0x1ffffU & (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                                             >> 2U)))
                    ? vlTOPp->top__DOT__memory_controller_inst__DOT__bram_inst__DOT__mem
                   [(0x1ffffU & (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                                 >> 2U))] : 0U);
        } else {
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_write) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__bram_inst__DOT____Vlvbound1 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_wdata;
                if ((0x1116fU >= (0x1ffffU & (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                                              >> 2U)))) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_inst__DOT__mem[(0x1ffffU 
                                                                                & (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                                                                                >> 2U))] 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_inst__DOT____Vlvbound1;
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_rdata = 0U;
    }
    vlTOPp->buffer_out_valid = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (vlTOPp->top__DOT__w_ascii_s_0) {
            vlTOPp->top__DOT__ring_buffer_inst__DOT____Vlvbound1 
                = (0x7fU & vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data);
            if ((0x95U >= (0xffU & vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in))) {
                vlTOPp->top__DOT__ring_buffer_inst__DOT__buffer[(0xffU 
                                                                 & vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in)] 
                    = vlTOPp->top__DOT__ring_buffer_inst__DOT____Vlvbound1;
            }
            if (vlTOPp->top__DOT__ring_buffer_inst__DOT__empty) {
                vlTOPp->top__DOT__ring_buffer_inst__DOT__empty = 0U;
            }
            vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in 
                = ((0x95U == vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in)
                    ? 0U : ((IData)(1U) + vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in));
            if ((vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in 
                 == vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out)) {
                vlTOPp->top__DOT__ring_buffer_inst__DOT__full_r = 1U;
            }
        }
        if ((1U & (~ (IData)(vlTOPp->top__DOT__ring_buffer_inst__DOT__empty)))) {
            if (vlTOPp->top__DOT__ring_buffer_inst__DOT__cooldown) {
                vlTOPp->top__DOT__ring_buffer_inst__DOT__cooldown = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->buffer_recv_busy)))) {
                    if (vlTOPp->top__DOT__ring_buffer_inst__DOT__full_r) {
                        vlTOPp->top__DOT__ring_buffer_inst__DOT__full_r = 0U;
                    }
                    vlTOPp->top__DOT__ring_buffer_inst__DOT__cooldown = 1U;
                    vlTOPp->buffer_out_data = ((0x95U 
                                                >= 
                                                (0xffU 
                                                 & vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out))
                                                ? vlTOPp->top__DOT__ring_buffer_inst__DOT__buffer
                                               [(0xffU 
                                                 & vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out)]
                                                : 0U);
                    vlTOPp->buffer_out_valid = 1U;
                    vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out 
                        = ((0x95U == vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out)
                            ? 0U : ((IData)(1U) + vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out));
                    if ((vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out 
                         == vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in)) {
                        vlTOPp->top__DOT__ring_buffer_inst__DOT__empty = 1U;
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__ring_buffer_inst__DOT__i = 0U;
        vlTOPp->top__DOT__ring_buffer_inst__DOT__p_in = 0U;
        vlTOPp->top__DOT__ring_buffer_inst__DOT__p_out = 0U;
        vlTOPp->top__DOT__ring_buffer_inst__DOT__empty = 1U;
        vlTOPp->top__DOT__ring_buffer_inst__DOT__full_r = 0U;
        vlTOPp->top__DOT__ring_buffer_inst__DOT__cooldown = 0U;
        while (VL_GTS_III(1,32,32, 0x96U, vlTOPp->top__DOT__ring_buffer_inst__DOT__i)) {
            vlTOPp->top__DOT__ring_buffer_inst__DOT____Vlvbound2 = 0U;
            if (VL_LIKELY((0x95U >= (0xffU & vlTOPp->top__DOT__ring_buffer_inst__DOT__i)))) {
                vlTOPp->top__DOT__ring_buffer_inst__DOT__buffer[(0xffU 
                                                                 & vlTOPp->top__DOT__ring_buffer_inst__DOT__i)] 
                    = vlTOPp->top__DOT__ring_buffer_inst__DOT____Vlvbound2;
            }
            vlTOPp->top__DOT__ring_buffer_inst__DOT__i 
                = ((IData)(1U) + vlTOPp->top__DOT__ring_buffer_inst__DOT__i);
        }
    }
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rready = 0U;
    vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_avail = 0U;
    vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_taken = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_avail) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_taken = 1U;
                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U] 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[0U];
                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[1U];
                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[2U];
                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                if ((1U & vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U])) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_arprot 
                        = (7U & (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                                 >> 5U));
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 3U;
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_araddr 
                        = ((vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                            << 0x1fU) | (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                                         >> 1U));
                } else {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awprot 
                        = (7U & (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                                 >> 5U));
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 2U;
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wstrb 
                        = (0xfU & (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                                   >> 1U));
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awaddr 
                        = ((vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                            << 0x1fU) | (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                                         >> 1U));
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wdata 
                        = ((vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                            << 0x1fU) | (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U] 
                                         >> 1U));
                }
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                    __Vtask_write_req__46__t_wstrb 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wstrb;
                    __Vtask_write_req__46__t_wdata 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wdata;
                    __Vtask_write_req__46__t_awprot 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awprot;
                    __Vtask_write_req__46__t_awaddr 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awaddr;
                    __Vtask_write_req__46__done = 0U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awaddr 
                        = __Vtask_write_req__46__t_awaddr;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awprot 
                        = __Vtask_write_req__46__t_awprot;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wdata 
                        = __Vtask_write_req__46__t_wdata;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wstrb 
                        = __Vtask_write_req__46__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awready) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wready) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_sent = 0U;
                        __Vtask_write_req__46__done = 1U;
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done 
                        = __Vtask_write_req__46__done;
                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 4U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                        __Vtask_read_req__47__t_arprot 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_arprot;
                        __Vtask_read_req__47__t_araddr 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_araddr;
                        __Vtask_read_req__47__done = 0U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arvalid = 1U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.araddr 
                            = __Vtask_read_req__47__t_araddr;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arprot 
                            = __Vtask_read_req__47__t_arprot;
                        if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arready) {
                            __Vtask_read_req__47__done = 1U;
                        }
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done 
                            = __Vtask_read_req__47__done;
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                            __Vtask_write_resp_wait__48__done = 0U;
                            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bvalid) {
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bready = 1U;
                                __Vtask_write_resp_wait__48__t_bresp 
                                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bresp;
                                __Vtask_write_resp_wait__48__done = 1U;
                            }
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp 
                                = __Vtask_write_resp_wait__48__t_bresp;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done 
                                = __Vtask_write_resp_wait__48__done;
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__w_merge = 1U;
                                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 5U;
                            }
                            __Vtask_read_resp_wait__49__done = 0U;
                            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rvalid) {
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rready = 1U;
                                __Vtask_read_resp_wait__49__t_rdata 
                                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rdata;
                                __Vtask_read_resp_wait__49__t_rresp 
                                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rresp;
                                __Vtask_read_resp_wait__49__done = 1U;
                            }
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rdata 
                                = __Vtask_read_resp_wait__49__t_rdata;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp 
                                = __Vtask_read_resp_wait__49__t_rresp;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done 
                                = __Vtask_read_resp_wait__49__done;
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__r_merge = 1U;
                                vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 5U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                                if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__w_merge) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U] = 0U;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                                        = (0xfffffffeU 
                                           & ((IData)((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp))) 
                                              << 1U));
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                                        = ((1U & ((IData)((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp))) 
                                                  >> 0x1fU)) 
                                           | (0xfffffffeU 
                                              & ((IData)(
                                                         ((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp)) 
                                                          >> 0x20U)) 
                                                 << 1U)));
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__w_merge = 0U;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 6U;
                                } else {
                                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__r_merge) {
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U] 
                                            = (IData)(
                                                      (VL_ULL(1) 
                                                       | ((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rdata)) 
                                                          << 1U)));
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] 
                                            = ((0xfffffffeU 
                                                & ((IData)((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp))) 
                                                   << 1U)) 
                                               | (IData)(
                                                         ((VL_ULL(1) 
                                                           | ((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rdata)) 
                                                              << 1U)) 
                                                          >> 0x20U)));
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] 
                                            = ((1U 
                                                & ((IData)((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp))) 
                                                   >> 0x1fU)) 
                                               | (0xfffffffeU 
                                                  & ((IData)(
                                                             ((QData)((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp)) 
                                                              >> 0x20U)) 
                                                     << 1U)));
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__r_merge = 0U;
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 6U;
                                    }
                                }
                            } else {
                                if ((6U == vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state)) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[0U] 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U];
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[1U] 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U];
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[2U] 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U];
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_avail = 1U;
                                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_taken) {
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request[2U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awaddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wstrb = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_araddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_arprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__w_merge = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__r_merge = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_taken = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_avail = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[2U] = 0U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awready = 0U;
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wready = 0U;
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arready = 0U;
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bvalid = 0U;
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rvalid = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_read = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_write = 0U;
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__status = 0U;
            __Vtask_write_req_wait__74__done = 0U;
            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arready = 1U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awvalid) {
                __Vtask_write_req_wait__74__t_awaddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awaddr;
                __Vtask_write_req_wait__74__t_awprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awprot;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wvalid) {
                __Vtask_write_req_wait__74__t_wdata 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wdata;
                __Vtask_write_req_wait__74__t_wstrb 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wstrb;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_data_collected))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.w_data_collected = 0U;
                __Vtask_write_req_wait__74__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__74__t_awaddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__74__t_awprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__74__t_wdata;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__74__t_wstrb;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done 
                = __Vtask_write_req_wait__74__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 1U;
            }
            __Vtask_read_req_wait__75__done = 0U;
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arvalid) {
                __Vtask_read_req_wait__75__t_araddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.araddr;
                __Vtask_read_req_wait__75__t_arprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arprot;
                __Vtask_read_req_wait__75__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_araddr 
                = __Vtask_read_req_wait__75__t_araddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_arprot 
                = __Vtask_read_req_wait__75__t_arprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done 
                = __Vtask_read_req_wait__75__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 5U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_read = 1U;
                vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awaddr;
                if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_rdata;
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 2U;
                }
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                    if ((1U & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb))) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp 
                            = ((0xffffff00U & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp) 
                               | (0xffU & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata));
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 3U;
                    if ((2U & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb))) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp 
                            = ((0xffff00ffU & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp) 
                               | (0xff00U & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata));
                    }
                    if ((4U & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb))) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp 
                            = ((0xff00ffffU & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp) 
                               | (0xff0000U & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata));
                    }
                    if ((8U & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb))) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp 
                            = ((0xffffffU & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp) 
                               | (0xff000000U & vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata));
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_write = 1U;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awaddr;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_wdata 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp;
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                            __Vtask_write_resp__76__t_bresp 
                                = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__status;
                            __Vtask_write_resp__76__done = 0U;
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bvalid = 1U;
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bresp 
                                = __Vtask_write_resp__76__t_bresp;
                            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bready) {
                                __Vtask_write_resp__76__done = 1U;
                            }
                            vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done 
                                = __Vtask_write_resp__76__done;
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_read = 1U;
                                vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_addr 
                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_araddr;
                                if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_done) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__rdata_temp 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__w_bram_rdata;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 6U;
                                }
                            } else {
                                if ((6U == vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state)) {
                                    __Vtask_read_resp__77__t_rresp 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__status;
                                    __Vtask_read_resp__77__t_rdata 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__rdata_temp;
                                    __Vtask_read_resp__77__done = 0U;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rvalid = 1U;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rresp 
                                        = __Vtask_read_resp__77__t_rresp;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rdata 
                                        = __Vtask_read_resp__77__t_rdata;
                                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rready) {
                                        __Vtask_read_resp__77__done = 1U;
                                    }
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done 
                                        = __Vtask_read_resp__77__done;
                                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done) {
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__status = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__rdata_temp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done = 0U;
    }
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rvalid = 0U;
    vlTOPp->spoon_taken = 0U;
    vlTOPp->request_pixel = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global 
            = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global);
        if ((1U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active)) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[0U] 
                = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters
                   [0U]);
        }
        if ((2U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active)) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[1U] 
                = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters
                   [1U]);
        }
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
            __Vtask_write_req_wait__79__done = 0U;
            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arready = 1U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awvalid) {
                __Vtask_write_req_wait__79__t_awaddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awaddr;
                __Vtask_write_req_wait__79__t_awprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awprot;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wvalid) {
                __Vtask_write_req_wait__79__t_wdata 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wdata;
                __Vtask_write_req_wait__79__t_wstrb 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wstrb;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_data_collected))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.w_data_collected = 0U;
                __Vtask_write_req_wait__79__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__79__t_awaddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__79__t_awprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__79__t_wdata;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__79__t_wstrb;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done 
                = __Vtask_write_req_wait__79__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 1U;
            }
            __Vtask_read_req_wait__80__done = 0U;
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arvalid) {
                __Vtask_read_req_wait__80__t_araddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.araddr;
                __Vtask_read_req_wait__80__t_arprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arprot;
                __Vtask_read_req_wait__80__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr 
                = __Vtask_read_req_wait__80__t_araddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_arprot 
                = __Vtask_read_req_wait__80__t_arprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done 
                = __Vtask_read_req_wait__80__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 2U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel 
                    = (1U & (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr 
                             >> 2U));
                if ((0x80U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr)) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__axi_offsets[vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel] 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata;
                    if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata)) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active 
                            = ((~ ((IData)(1U) << (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel))) 
                               & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active);
                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active 
                            = (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active 
                               - (IData)(1U));
                    } else {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active 
                            = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active);
                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel] = 0U;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active 
                            = (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active 
                               | ((IData)(1U) << (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel)));
                    }
                } else {
                    if ((0x40000U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr)) {
                        vlTOPp->leds_status = (0xffU 
                                               & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata);
                    } else {
                        if ((0x80000U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr)) {
                            vlTOPp->triggers = (0xffU 
                                                & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata);
                        }
                    }
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 4U;
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel 
                        = (1U & (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr 
                                 >> 2U));
                    if ((0x40000000U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                        vlTOPp->addr_pixel = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr;
                        vlTOPp->request_pixel = 1U;
                    } else {
                        if ((0x80U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__axi_offsets
                                [vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel];
                        } else {
                            if ((0x100U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active;
                            } else {
                                if ((0x200U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters
                                        [vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel];
                                } else {
                                    if ((0x400U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                                        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                            = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global;
                                    } else {
                                        if ((0x100000U 
                                             & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                                            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                                = vlTOPp->spoon_feed;
                                            vlTOPp->spoon_taken = 1U;
                                        } else {
                                            if ((0x8000U 
                                                 & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)) {
                                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global;
                                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state 
                        = ((0x40000000U & vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr)
                            ? 3U : 5U);
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
                        if (vlTOPp->pixel_avail) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata 
                                = vlTOPp->pixel;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 5U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
                            __Vtask_write_resp__81__done = 0U;
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bvalid = 1U;
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bresp = 0U;
                            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bready) {
                                __Vtask_write_resp__81__done = 1U;
                            }
                            vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done 
                                = __Vtask_write_resp__81__done;
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state)) {
                                __Vtask_read_resp__82__t_rdata 
                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata;
                                __Vtask_read_resp__82__done = 0U;
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rvalid = 1U;
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rresp = 0U;
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rdata 
                                    = __Vtask_read_resp__82__t_rdata;
                                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rready) {
                                    __Vtask_read_resp__82__done = 1U;
                                }
                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done 
                                    = __Vtask_read_resp__82__done;
                                if (vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->addr_pixel = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__axi_offsets[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__done = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__active = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global = 1U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__axi_offsets[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[1U] = 0U;
    }
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awvalid = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wvalid = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arvalid = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rready = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
            __Vtask_read_req__22__t_arprot = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_arprot;
            __Vtask_read_req__22__t_araddr = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id;
            __Vtask_read_req__22__done = 0U;
            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arvalid = 1U;
            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.araddr 
                = __Vtask_read_req__22__t_araddr;
            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arprot 
                = __Vtask_read_req__22__t_arprot;
            if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arready) {
                __Vtask_read_req__22__done = 1U;
            }
            vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done 
                = __Vtask_read_req__22__done;
            if (vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done) {
                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
                __Vtask_read_resp_wait__23__done = 0U;
                if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rvalid) {
                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rready = 1U;
                    __Vtask_read_resp_wait__23__t_rdata 
                        = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rdata;
                    __Vtask_read_resp_wait__23__t_rresp 
                        = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rresp;
                    __Vtask_read_resp_wait__23__done = 1U;
                }
                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rdata 
                    = __Vtask_read_resp_wait__23__t_rdata;
                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rresp 
                    = __Vtask_read_resp_wait__23__t_rresp;
                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done 
                    = __Vtask_read_resp_wait__23__done;
                if (vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done) {
                    vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 2U;
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
                    if ((0U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rdata)) {
                        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 0U;
                    } else {
                        vlTOPp->top__DOT__node_0__DOT__w_activate = 1U;
                        vlTOPp->top__DOT__node_0__DOT__w_axi_offset 
                            = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rdata;
                        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
                        if (vlTOPp->top__DOT__node_0__DOT__w_fin) {
                            vlTOPp->top__DOT__node_0__DOT__w_activate = 0U;
                            vlTOPp->top__DOT__node_0__DOT__w_axi_offset = 0U;
                            vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
                            __Vtask_write_req__24__t_wstrb 
                                = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_wstrb;
                            __Vtask_write_req__24__t_awprot 
                                = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_awprot;
                            __Vtask_write_req__24__t_awaddr 
                                = vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id;
                            __Vtask_write_req__24__done = 0U;
                            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awaddr 
                                = __Vtask_write_req__24__t_awaddr;
                            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awprot 
                                = __Vtask_write_req__24__t_awprot;
                            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wdata = 0U;
                            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wstrb 
                                = __Vtask_write_req__24__t_wstrb;
                            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent)))) {
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awvalid = 1U;
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_data_sent)))) {
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wvalid = 1U;
                            }
                            if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awready) {
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent = 1U;
                            }
                            if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wready) {
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_data_sent = 1U;
                            }
                            if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent) 
                                 & (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_data_sent))) {
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent = 0U;
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.w_data_sent = 0U;
                                __Vtask_write_req__24__done = 1U;
                            }
                            vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done 
                                = __Vtask_write_req__24__done;
                            if (vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done) {
                                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 5U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state)) {
                                __Vtask_write_resp_wait__25__done = 0U;
                                if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bvalid) {
                                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bready = 1U;
                                    __Vtask_write_resp_wait__25__t_bresp 
                                        = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bresp;
                                    __Vtask_write_resp_wait__25__done = 1U;
                                }
                                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_bresp 
                                    = __Vtask_write_resp_wait__25__t_bresp;
                                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done 
                                    = __Vtask_write_resp_wait__25__done;
                                if (vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done) {
                                    vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_0__DOT__w_activate = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__done = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_bresp = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rresp = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rdata = 0U;
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id 
            = (0x80000000U | vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id);
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id 
            = (0x80U | vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id);
        vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id 
            = (0xffffff83U & vlTOPp->top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id);
    }
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awvalid = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wvalid = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arvalid = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rready = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
            __Vtask_read_req__36__t_arprot = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_arprot;
            __Vtask_read_req__36__t_araddr = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id;
            __Vtask_read_req__36__done = 0U;
            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arvalid = 1U;
            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.araddr 
                = __Vtask_read_req__36__t_araddr;
            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arprot 
                = __Vtask_read_req__36__t_arprot;
            if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arready) {
                __Vtask_read_req__36__done = 1U;
            }
            vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done 
                = __Vtask_read_req__36__done;
            if (vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done) {
                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
                __Vtask_read_resp_wait__37__done = 0U;
                if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rvalid) {
                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rready = 1U;
                    __Vtask_read_resp_wait__37__t_rdata 
                        = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rdata;
                    __Vtask_read_resp_wait__37__t_rresp 
                        = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rresp;
                    __Vtask_read_resp_wait__37__done = 1U;
                }
                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rdata 
                    = __Vtask_read_resp_wait__37__t_rdata;
                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rresp 
                    = __Vtask_read_resp_wait__37__t_rresp;
                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done 
                    = __Vtask_read_resp_wait__37__done;
                if (vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done) {
                    vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 2U;
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
                    if ((0U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rdata)) {
                        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 0U;
                    } else {
                        vlTOPp->top__DOT__node_1__DOT__w_activate = 1U;
                        vlTOPp->top__DOT__node_1__DOT__w_axi_offset 
                            = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rdata;
                        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
                        if (vlTOPp->top__DOT__node_1__DOT__w_fin) {
                            vlTOPp->top__DOT__node_1__DOT__w_activate = 0U;
                            vlTOPp->top__DOT__node_1__DOT__w_axi_offset = 0U;
                            vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
                            __Vtask_write_req__38__t_wstrb 
                                = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_wstrb;
                            __Vtask_write_req__38__t_awprot 
                                = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_awprot;
                            __Vtask_write_req__38__t_awaddr 
                                = vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id;
                            __Vtask_write_req__38__done = 0U;
                            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awaddr 
                                = __Vtask_write_req__38__t_awaddr;
                            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awprot 
                                = __Vtask_write_req__38__t_awprot;
                            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wdata = 0U;
                            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wstrb 
                                = __Vtask_write_req__38__t_wstrb;
                            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent)))) {
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awvalid = 1U;
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_data_sent)))) {
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wvalid = 1U;
                            }
                            if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awready) {
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent = 1U;
                            }
                            if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wready) {
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_data_sent = 1U;
                            }
                            if (((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent) 
                                 & (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_data_sent))) {
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_addr_sent = 0U;
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.w_data_sent = 0U;
                                __Vtask_write_req__38__done = 1U;
                            }
                            vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done 
                                = __Vtask_write_req__38__done;
                            if (vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done) {
                                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 5U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state)) {
                                __Vtask_write_resp_wait__39__done = 0U;
                                if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bvalid) {
                                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bready = 1U;
                                    __Vtask_write_resp_wait__39__t_bresp 
                                        = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bresp;
                                    __Vtask_write_resp_wait__39__done = 1U;
                                }
                                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_bresp 
                                    = __Vtask_write_resp_wait__39__t_bresp;
                                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done 
                                    = __Vtask_write_resp_wait__39__done;
                                if (vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done) {
                                    vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_1__DOT__w_activate = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__done = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_bresp = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rresp = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rdata = 0U;
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id 
            = (0x80000000U | vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id);
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id 
            = (0x80U | vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id);
        vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id 
            = (4U | (0xffffff83U & vlTOPp->top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id));
    }
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__69__done = 0U;
            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arready = 1U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awvalid) {
                __Vtask_write_req_wait__69__t_awaddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awaddr;
                __Vtask_write_req_wait__69__t_awprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awprot;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wvalid) {
                __Vtask_write_req_wait__69__t_wdata 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wdata;
                __Vtask_write_req_wait__69__t_wstrb 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wstrb;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_collected))) {
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_collected = 0U;
                __Vtask_write_req_wait__69__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__69__t_awaddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__69__t_awprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__69__t_wdata;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__69__t_wstrb;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done 
                = __Vtask_write_req_wait__69__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write = 1U;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 1U;
            }
            __Vtask_read_req_wait__70__done = 0U;
            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arvalid) {
                __Vtask_read_req_wait__70__t_araddr 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.araddr;
                __Vtask_read_req_wait__70__t_arprot 
                    = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arprot;
                __Vtask_read_req_wait__70__done = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_araddr 
                = __Vtask_read_req_wait__70__t_araddr;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_arprot 
                = __Vtask_read_req_wait__70__t_arprot;
            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done 
                = __Vtask_read_req_wait__70__done;
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write = 0U;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)
                        ? vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_araddr);
                if ((0x7ffffffeU < vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__detected) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux = 1U;
                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__data 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux = 0U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state 
                    = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)
                        ? 2U : 3U);
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
                    __Vtask_write_req__71__t_wstrb 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wstrb;
                    __Vtask_write_req__71__t_wdata 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wdata;
                    __Vtask_write_req__71__t_awprot 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awprot;
                    __Vtask_write_req__71__t_awaddr 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awaddr;
                    __Vtask_write_req__71__done = 0U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awaddr 
                        = __Vtask_write_req__71__t_awaddr;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awprot 
                        = __Vtask_write_req__71__t_awprot;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wdata 
                        = __Vtask_write_req__71__t_wdata;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wstrb 
                        = __Vtask_write_req__71__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awready) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wready) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.w_data_sent = 0U;
                        __Vtask_write_req__71__done = 1U;
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done 
                        = __Vtask_write_req__71__done;
                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
                        __Vtask_read_req__72__t_arprot 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_arprot;
                        __Vtask_read_req__72__t_araddr 
                            = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_araddr;
                        __Vtask_read_req__72__done = 0U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid = 1U;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.araddr 
                            = __Vtask_read_req__72__t_araddr;
                        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arprot 
                            = __Vtask_read_req__72__t_arprot;
                        if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arready) {
                            __Vtask_read_req__72__done = 1U;
                        }
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done 
                            = __Vtask_read_req__72__done;
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state)) {
                                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid = 0U;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
                                }
                            } else {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write = 0U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__if_connect_memory.en_put = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_avail = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_taken = 0U;
        if ((((8U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d828))
               ? ((0U == (7U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d828))) 
                  | (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672))
               : (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672)) 
             & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                 ? ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d832) 
                    >> 3U) : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                               ? ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d831) 
                                  >> 3U) : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                             ? ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d830) 
                                                >> 3U)
                                             : ((~ (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__outport_encoder___05F_d829) 
                                                   >> 3U))))))) {
            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr 
                = (3U & (((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                           ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                           : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                               ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                               : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                   : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                       ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                       : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))) 
                         >> 0xeU));
            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index 
                = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array
                [vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr];
            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound1 
                = (0x3fffU & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                               ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                               : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                   : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                       ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                       : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                           ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                           : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))));
            if ((5U >= (7U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index))) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__buffer_array[vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr][(7U 
                                                                                & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index)] 
                    = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound1;
            }
            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index)) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected 
                    = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected) 
                       | ((IData)(1U) << (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr)));
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr] = 0U;
            } else {
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr] 
                    = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index);
            }
        }
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
            if ((1U & ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected) 
                       >> (3U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select)))) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id 
                    = (3U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select);
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected 
                    = ((~ ((IData)(1U) << (3U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select))) 
                       & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected));
                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 1U;
            }
            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select 
                = ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select)
                    ? 0U : ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select));
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
                if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U] 
                        = ((0x3fU & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U]) 
                           | (0xffffffc0U & (((5U >= 
                                               (7U 
                                                & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index))
                                               ? (3U 
                                                  & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__buffer_array
                                                  [vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id]
                                                  [
                                                  (7U 
                                                   & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)])
                                               : 0U) 
                                             << 6U)));
                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 2U;
                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = 0U;
                } else {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound2 
                        = ((5U >= (7U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index))
                            ? vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__buffer_array
                           [vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id]
                           [(7U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)]
                            : 0U);
                    if ((0x47U >= (0x7fU & ((((IData)(0xeU) 
                                              * ((IData)(1U) 
                                                 + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                             - (IData)(1U)) 
                                            - (IData)(0xdU))))) {
                        VL_ASSIGNSEL_WIII(14,(0x7fU 
                                              & ((((IData)(0xeU) 
                                                   * 
                                                   ((IData)(1U) 
                                                    + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0xdU))), vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request, vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound2);
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index 
                        = ((IData)(1U) + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_avail = 1U;
                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[0U] 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[0U];
                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[1U] 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[1U];
                    vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[2U] 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U];
                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_taken) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_avail) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_taken = 1U;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[0U] 
                                = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[0U];
                            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[1U] 
                                = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[1U];
                            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U] 
                                = vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer[2U];
                            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = 0U;
                            vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 4U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound3 
                                    = (0xbffcU | (3U 
                                                  & (vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U] 
                                                     >> 6U)));
                                if ((5U >= (7U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index))) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_array[(7U 
                                                                                & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)] 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound3;
                                }
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 5U;
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = 0U;
                            } else {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound4 
                                    = (0x8000U | ((0x47U 
                                                   >= 
                                                   (0x7fU 
                                                    & ((((IData)(0xeU) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0xdU))))
                                                   ? 
                                                  (0x3fffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((((IData)(0xeU) 
                                                              * 
                                                              ((IData)(1U) 
                                                               + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0xdU))))
                                                        ? 0U
                                                        : 
                                                       (vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[
                                                        ((IData)(1U) 
                                                         + 
                                                         (3U 
                                                          & (((((IData)(0xeU) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0xdU)) 
                                                             >> 5U)))] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((((IData)(0xeU) 
                                                               * 
                                                               ((IData)(1U) 
                                                                + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0xdU)))))) 
                                                      | (vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[
                                                         (3U 
                                                          & (((((IData)(0xeU) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0xdU)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((((IData)(0xeU) 
                                                               * 
                                                               ((IData)(1U) 
                                                                + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0xdU))))))
                                                   : 0U));
                                if ((5U >= (7U & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index))) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_array[(7U 
                                                                                & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)] 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound4;
                                }
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index 
                                    = ((IData)(1U) 
                                       + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index);
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state)) {
                                if ((6U == vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = 0U;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 0U;
                                } else {
                                    vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
                                        = (0x100000U 
                                           | (((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id) 
                                               << 0x11U) 
                                              | ((5U 
                                                  >= 
                                                  (7U 
                                                   & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index))
                                                  ? 
                                                 vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_array
                                                 [(7U 
                                                   & vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index)]
                                                  : 0U)));
                                    vlSymsp->TOP__top__DOT__if_connect_memory.en_put = 1U;
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index 
                                        = ((IData)(1U) 
                                           + vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index);
                                }
                            } else {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request[2U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_to_bridge_avail = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_data_from_bridge_taken = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge[2U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[0U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[1U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[2U] = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[3U] = 0U;
    }
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.awready = 0U;
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.wready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.awvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.wvalid = 0U;
    vlTOPp->top__DOT__w_ascii_s_0 = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__2__done = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_awvalid) {
                __Vtask_write_req_wait__2__t_awaddr 
                    = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_addr;
                __Vtask_write_req_wait__2__t_awprot = 0U;
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_wvalid) {
                __Vtask_write_req_wait__2__t_wdata 
                    = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wdata;
                __Vtask_write_req_wait__2__t_wstrb 
                    = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb;
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_data_collected))) {
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.w_data_collected = 0U;
                __Vtask_write_req_wait__2__done = 1U;
            }
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__2__t_awaddr;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__2__t_awprot;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__2__t_wdata;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__2__t_wstrb;
            vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done 
                = __Vtask_write_req_wait__2__done;
            if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done) {
                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = 1U;
                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write)
                        ? vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr);
                if ((0U == vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected) {
                    vlTOPp->top__DOT__w_ascii_s_0 = 1U;
                    if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) {
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data 
                            = vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->top__DOT__w_ascii_s_0 = 0U;
                }
                if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected) {
                    vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 1U;
                    if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) {
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 1U;
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 4U;
                    } else {
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 1U;
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 5U;
                    }
                } else {
                    vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state 
                        = ((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write)
                            ? 2U : 3U);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                    __Vtask_write_req__3__t_wstrb = vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb;
                    __Vtask_write_req__3__t_wdata = vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata;
                    __Vtask_write_req__3__t_awprot 
                        = vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot;
                    __Vtask_write_req__3__t_awaddr 
                        = vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr;
                    __Vtask_write_req__3__done = 0U;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.awaddr 
                        = __Vtask_write_req__3__t_awaddr;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.awprot 
                        = __Vtask_write_req__3__t_awprot;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.wdata 
                        = __Vtask_write_req__3__t_wdata;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.wstrb 
                        = __Vtask_write_req__3__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_controller.awready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__if_axi_light_controller.wready) {
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_sent = 0U;
                        __Vtask_write_req__3__done = 1U;
                    }
                    vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done 
                        = __Vtask_write_req__3__done;
                    if (vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done) {
                        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U != vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                        if ((4U == vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__if_axi_light_controller.bready) {
                                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U != vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state)) {
                                vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__w_ascii_s_0 = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = 0U;
    }
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid = 0U;
    vlSymsp->TOP__top__DOT__if_connect_node_0.en_put = 0U;
    vlSymsp->TOP__top__DOT__if_connect_node_0.en_get = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
            __Vtask_write_req_wait__27__done = 0U;
            vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready = 1U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready = 1U;
            }
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                  ? (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awvalid))) {
                __Vtask_write_req_wait__27__t_awaddr 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awaddr 
                           + vlTOPp->top__DOT__node_0__DOT__w_axi_offset)
                        : vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awaddr);
                __Vtask_write_req_wait__27__t_awprot 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awprot)
                        : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awprot));
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected = 1U;
            }
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                  ? (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wvalid))) {
                __Vtask_write_req_wait__27__t_wdata 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wdata
                        : vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wdata);
                __Vtask_write_req_wait__27__t_wstrb 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wstrb)
                        : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wstrb));
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected = 0U;
                __Vtask_write_req_wait__27__done = 1U;
            }
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__27__t_awaddr;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__27__t_awprot;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__27__t_wdata;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__27__t_wstrb;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                = __Vtask_write_req_wait__27__done;
            if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 1U;
                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 1U;
            }
            __Vtask_read_req_wait__28__done = 0U;
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                  ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arvalid))) {
                __Vtask_read_req_wait__28__t_araddr 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr 
                           + vlTOPp->top__DOT__node_0__DOT__w_axi_offset)
                        : vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.araddr);
                __Vtask_read_req_wait__28__t_arprot 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                        ? ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr)
                            ? 4U : 0U) : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arprot));
                __Vtask_read_req_wait__28__done = 1U;
            }
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr 
                = __Vtask_read_req_wait__28__t_araddr;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot 
                = __Vtask_read_req_wait__28__t_arprot;
            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                = __Vtask_read_req_wait__28__done;
            if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 1U;
                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge) {
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                        = (0xfffffffeU & ((IData)((
                                                   ((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata)))) 
                                          << 1U));
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                        = ((1U & ((IData)((((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata)))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                        = ((0xffffffe0U & ((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot) 
                                           << 5U)) 
                           | ((0xfffffffeU & ((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb) 
                                              << 1U)) 
                              | (1U & ((IData)(((((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata))) 
                                                >> 0x20U)) 
                                       >> 0x1fU))));
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 0U;
                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 2U;
                } else {
                    if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge) {
                        __Vtemp39[0U] = (1U | (0xfffffffeU 
                                               & ((IData)(
                                                          ((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                           << 0x20U)) 
                                                  << 1U)));
                        __Vtemp39[1U] = ((1U & ((IData)(
                                                        ((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U)) 
                                                >> 0x1fU)) 
                                         | (0xfffffffeU 
                                            & ((IData)(
                                                       (((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U) 
                                                        >> 0x20U)) 
                                               << 1U)));
                        __Vtemp39[2U] = (1U & ((IData)(
                                                       (((QData)((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
                        VL_EXTEND_WW(69,65, __Vtemp40, __Vtemp39);
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                            = __Vtemp40[0U];
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                            = __Vtemp40[1U];
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                            = ((0xffffffe0U & ((IData)(vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot) 
                                               << 5U)) 
                               | __Vtemp40[2U]);
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 0U;
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 2U;
                    }
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                    if ((6U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 3U;
                    } else {
                        if ((5U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                = ((IData)(1U) + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                            vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                                = (0x143ffcU | (3U 
                                                & (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                                   >> 6U)));
                            vlSymsp->TOP__top__DOT__if_connect_node_0.en_put = 1U;
                            vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                                = (0x100000U | vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit);
                        } else {
                            vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                                = (0x140000U | ((0x47U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((((IData)(0xeU) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0xdU))))
                                                 ? 
                                                (0x3fffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((((IData)(0xeU) 
                                                            * 
                                                            ((IData)(1U) 
                                                             + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0xdU))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & (((((IData)(0xeU) 
                                                              * 
                                                              ((IData)(1U) 
                                                               + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0xdU)) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((((IData)(0xeU) 
                                                             * 
                                                             ((IData)(1U) 
                                                              + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0xdU)))))) 
                                                    | (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[
                                                       (3U 
                                                        & (((((IData)(0xeU) 
                                                              * 
                                                              ((IData)(1U) 
                                                               + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0xdU)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((((IData)(0xeU) 
                                                             * 
                                                             ((IData)(1U) 
                                                              + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0xdU))))))
                                                 : 0U));
                            vlSymsp->TOP__top__DOT__if_connect_node_0.en_put = 1U;
                            vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                                = (0x100000U | vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit);
                            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                = ((IData)(1U) + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                        }
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                        if ((6U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 4U;
                        } else {
                            vlSymsp->TOP__top__DOT__if_connect_node_0.en_get = 1U;
                            if ((((8U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d828))
                                   ? ((0U == (7U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d828))) 
                                      | (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672))
                                   : (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672)) 
                                 & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                     ? ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d832) 
                                        >> 3U) : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d831) 
                                                   >> 3U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d830) 
                                                    >> 3U)
                                                    : 
                                                   ((~ (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)) 
                                                    | ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__outport_encoder___05F_d829) 
                                                       >> 3U))))))) {
                                if ((5U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                        = ((0x3fU & 
                                            vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U]) 
                                           | (0xc0U 
                                              & (((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                    ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                     ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                                      ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                      : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))) 
                                                 << 6U)));
                                } else {
                                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1 
                                        = (0x3fffU 
                                           & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                               ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                               : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                    ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                                     ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                     : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))));
                                    if ((0x47U >= (0x7fU 
                                                   & ((((IData)(0xeU) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0xdU))))) {
                                        VL_ASSIGNSEL_WIII(14,
                                                          (0x7fU 
                                                           & ((((IData)(0xeU) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0xdU))), vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request, vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1);
                                    }
                                }
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                    = ((IData)(1U) 
                                       + vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                            }
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                            if ((1U & vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U])) {
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp 
                                    = (3U & ((vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                                >> 1U)));
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 6U;
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata 
                                    = ((vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                                        >> 1U));
                            } else {
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp 
                                    = (3U & ((vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                                >> 1U)));
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 5U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                                __Vtask_write_resp__29__t_bresp 
                                    = vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp;
                                __Vtask_write_resp__29__done = 0U;
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid = 1U;
                                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bresp 
                                    = __Vtask_write_resp__29__t_bresp;
                                if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                                      ? (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.bready)
                                      : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bready))) {
                                    __Vtask_write_resp__29__done = 1U;
                                }
                                vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                                    = __Vtask_write_resp__29__done;
                                if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                }
                            } else {
                                if ((6U == vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                                    __Vtask_read_resp__30__t_rresp 
                                        = vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp;
                                    __Vtask_read_resp__30__t_rdata 
                                        = vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata;
                                    __Vtask_read_resp__30__done = 0U;
                                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid = 1U;
                                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rresp 
                                        = __Vtask_read_resp__30__t_rresp;
                                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rdata 
                                        = __Vtask_read_resp__30__t_rdata;
                                    if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)
                                          ? ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)))))
                                          : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rready))) {
                                        __Vtask_read_resp__30__done = 1U;
                                    }
                                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                                        = __Vtask_read_resp__30__done;
                                    if (vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                                        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 0U;
        vlTOPp->top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done = 0U;
    }
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid = 0U;
    vlSymsp->TOP__top__DOT__if_connect_node_1.en_put = 0U;
    vlSymsp->TOP__top__DOT__if_connect_node_1.en_get = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
            __Vtask_write_req_wait__41__done = 0U;
            vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready = 1U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready = 1U;
            }
            if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                  ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awvalid))) {
                __Vtask_write_req_wait__41__t_awaddr 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awaddr 
                           + vlTOPp->top__DOT__node_1__DOT__w_axi_offset)
                        : vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awaddr);
                __Vtask_write_req_wait__41__t_awprot 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awprot)
                        : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awprot));
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected = 1U;
            }
            if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                  ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wvalid))) {
                __Vtask_write_req_wait__41__t_wdata 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wdata
                        : vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wdata);
                __Vtask_write_req_wait__41__t_wstrb 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wstrb)
                        : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wstrb));
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.w_data_collected = 0U;
                __Vtask_write_req_wait__41__done = 1U;
            }
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__41__t_awaddr;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__41__t_awprot;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__41__t_wdata;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__41__t_wstrb;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                = __Vtask_write_req_wait__41__done;
            if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 1U;
                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 1U;
            }
            __Vtask_read_req_wait__42__done = 0U;
            if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                  ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_arvalid)
                  : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arvalid))) {
                __Vtask_read_req_wait__42__t_araddr 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? (vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_addr 
                           + vlTOPp->top__DOT__node_1__DOT__w_axi_offset)
                        : vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.araddr);
                __Vtask_read_req_wait__42__t_arprot 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                        ? ((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_instr)
                            ? 4U : 0U) : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arprot));
                __Vtask_read_req_wait__42__done = 1U;
            }
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr 
                = __Vtask_read_req_wait__42__t_araddr;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot 
                = __Vtask_read_req_wait__42__t_arprot;
            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                = __Vtask_read_req_wait__42__done;
            if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 1U;
                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge) {
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                        = (0xfffffffeU & ((IData)((
                                                   ((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata)))) 
                                          << 1U));
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                        = ((1U & ((IData)((((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata)))) 
                                  >> 0x1fU)) | (0xfffffffeU 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                        = ((0xffffffe0U & ((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot) 
                                           << 5U)) 
                           | ((0xfffffffeU & ((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb) 
                                              << 1U)) 
                              | (1U & ((IData)(((((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata))) 
                                                >> 0x20U)) 
                                       >> 0x1fU))));
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 0U;
                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 2U;
                } else {
                    if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge) {
                        __Vtemp48[0U] = (1U | (0xfffffffeU 
                                               & ((IData)(
                                                          ((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                           << 0x20U)) 
                                                  << 1U)));
                        __Vtemp48[1U] = ((1U & ((IData)(
                                                        ((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U)) 
                                                >> 0x1fU)) 
                                         | (0xfffffffeU 
                                            & ((IData)(
                                                       (((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U) 
                                                        >> 0x20U)) 
                                               << 1U)));
                        __Vtemp48[2U] = (1U & ((IData)(
                                                       (((QData)((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr)) 
                                                         << 0x20U) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
                        VL_EXTEND_WW(69,65, __Vtemp49, __Vtemp48);
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                            = __Vtemp49[0U];
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                            = __Vtemp49[1U];
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                            = ((0xffffffe0U & ((IData)(vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot) 
                                               << 5U)) 
                               | __Vtemp49[2U]);
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 0U;
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 2U;
                    }
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                    if ((6U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 3U;
                    } else {
                        if ((5U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                = ((IData)(1U) + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                            vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                                = (0x147ffcU | (3U 
                                                & (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                                   >> 6U)));
                            vlSymsp->TOP__top__DOT__if_connect_node_1.en_put = 1U;
                            vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                                = (0x100000U | vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit);
                        } else {
                            vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                                = (0x144000U | ((0x47U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((((IData)(0xeU) 
                                                       * 
                                                       ((IData)(1U) 
                                                        + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0xdU))))
                                                 ? 
                                                (0x3fffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((((IData)(0xeU) 
                                                            * 
                                                            ((IData)(1U) 
                                                             + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0xdU))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & (((((IData)(0xeU) 
                                                              * 
                                                              ((IData)(1U) 
                                                               + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0xdU)) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((((IData)(0xeU) 
                                                             * 
                                                             ((IData)(1U) 
                                                              + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0xdU)))))) 
                                                    | (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[
                                                       (3U 
                                                        & (((((IData)(0xeU) 
                                                              * 
                                                              ((IData)(1U) 
                                                               + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0xdU)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((((IData)(0xeU) 
                                                             * 
                                                             ((IData)(1U) 
                                                              + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0xdU))))))
                                                 : 0U));
                            vlSymsp->TOP__top__DOT__if_connect_node_1.en_put = 1U;
                            vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                                = (0x100000U | vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit);
                            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                = ((IData)(1U) + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                        }
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                        if ((6U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
                            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 4U;
                        } else {
                            vlSymsp->TOP__top__DOT__if_connect_node_1.en_get = 1U;
                            if ((((8U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d828))
                                   ? ((0U == (7U & (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d828))) 
                                      | (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672))
                                   : (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_24_BIT_3_25_THEN_outport_en_ETC___05F_d672)) 
                                 & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                     ? ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d832) 
                                        >> 3U) : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d831) 
                                                   >> 3U)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d830) 
                                                    >> 3U)
                                                    : 
                                                   ((~ (IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)) 
                                                    | ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__outport_encoder___05F_d829) 
                                                       >> 3U))))))) {
                                if ((5U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) {
                                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                        = ((0x3fU & 
                                            vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U]) 
                                           | (0xc0U 
                                              & (((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                    ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                     ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                     : 
                                                    ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                                      ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                      : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))) 
                                                 << 6U)));
                                } else {
                                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1 
                                        = (0x3fffU 
                                           & ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d792)
                                               ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                               : ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d809)
                                                   ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_1__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                   : 
                                                  ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d810)
                                                    ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_2__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__IF_outport_encoder_45_BIT_3_46_THEN_NOT_outpor_ETC___05F_d811)
                                                     ? vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_3__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT
                                                     : vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.__PVT__flitBuffers_4__DOT__inputQueue_ifc_mf_ifc_fifoMem__024D_OUT)))));
                                    if ((0x47U >= (0x7fU 
                                                   & ((((IData)(0xeU) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0xdU))))) {
                                        VL_ASSIGNSEL_WIII(14,
                                                          (0x7fU 
                                                           & ((((IData)(0xeU) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0xdU))), vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request, vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1);
                                    }
                                }
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index 
                                    = ((IData)(1U) 
                                       + vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index);
                            }
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                            if ((1U & vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U])) {
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp 
                                    = (3U & ((vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                                >> 1U)));
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 6U;
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata 
                                    = ((vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                        << 0x1fU) | 
                                       (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] 
                                        >> 1U));
                            } else {
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp 
                                    = (3U & ((vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] 
                                              << 0x1fU) 
                                             | (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] 
                                                >> 1U)));
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 5U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                                __Vtask_write_resp__43__t_bresp 
                                    = vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp;
                                __Vtask_write_resp__43__done = 0U;
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid = 1U;
                                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bresp 
                                    = __Vtask_write_resp__43__t_bresp;
                                if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                                      ? (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.bready)
                                      : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bready))) {
                                    __Vtask_write_resp__43__done = 1U;
                                }
                                vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                                    = __Vtask_write_resp__43__done;
                                if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                }
                            } else {
                                if ((6U == vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state)) {
                                    __Vtask_read_resp__44__t_rresp 
                                        = vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp;
                                    __Vtask_read_resp__44__t_rdata 
                                        = vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata;
                                    __Vtask_read_resp__44__done = 0U;
                                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid = 1U;
                                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rresp 
                                        = __Vtask_read_resp__44__t_rresp;
                                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rdata 
                                        = __Vtask_read_resp__44__t_rdata;
                                    if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)
                                          ? ((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)))))
                                          : (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rready))) {
                                        __Vtask_read_resp__44__done = 1U;
                                    }
                                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done 
                                        = __Vtask_read_resp__44__done;
                                    if (vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done) {
                                        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[0U] = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[1U] = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request[2U] = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = 0U;
        vlTOPp->top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done = 0U;
    }
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.awready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.wready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.arready = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.bvalid = 0U;
    vlSymsp->TOP__top__DOT__if_axi_light_controller.rvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arvalid = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bready = 0U;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rready = 0U;
    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s = 0U;
    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m = 0U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if ((0U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector) {
                __Vtask_write_req_wait__53__done = 0U;
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_collected)))) {
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.awready = 1U;
                }
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_collected)))) {
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.wready = 1U;
                }
                if (vlSymsp->TOP__top__DOT__if_axi_light_controller.awvalid) {
                    __Vtask_write_req_wait__53__t_awaddr 
                        = vlSymsp->TOP__top__DOT__if_axi_light_controller.awaddr;
                    __Vtask_write_req_wait__53__t_awprot 
                        = vlSymsp->TOP__top__DOT__if_axi_light_controller.awprot;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_collected = 1U;
                }
                if (vlSymsp->TOP__top__DOT__if_axi_light_controller.wvalid) {
                    __Vtask_write_req_wait__53__t_wdata 
                        = vlSymsp->TOP__top__DOT__if_axi_light_controller.wdata;
                    __Vtask_write_req_wait__53__t_wstrb 
                        = vlSymsp->TOP__top__DOT__if_axi_light_controller.wstrb;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_collected = 1U;
                }
                if (((IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_collected) 
                     & (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_collected))) {
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.w_addr_collected = 0U;
                    vlSymsp->TOP__top__DOT__if_axi_light_controller.w_data_collected = 0U;
                    __Vtask_write_req_wait__53__done = 1U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awaddr 
                    = __Vtask_write_req_wait__53__t_awaddr;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awprot 
                    = __Vtask_write_req_wait__53__t_awprot;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wdata 
                    = __Vtask_write_req_wait__53__t_wdata;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wstrb 
                    = __Vtask_write_req_wait__53__t_wstrb;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                    = __Vtask_write_req_wait__53__done;
            } else {
                __Vtask_write_req_wait__54__done = 0U;
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_collected)))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awready = 1U;
                }
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_collected)))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wready = 1U;
                }
                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awvalid) {
                    __Vtask_write_req_wait__54__t_awaddr 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awaddr;
                    __Vtask_write_req_wait__54__t_awprot 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.awprot;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_collected = 1U;
                }
                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wvalid) {
                    __Vtask_write_req_wait__54__t_wdata 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wdata;
                    __Vtask_write_req_wait__54__t_wstrb 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.wstrb;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_collected = 1U;
                }
                if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_collected) 
                     & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_collected))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_addr_collected = 0U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.w_data_collected = 0U;
                    __Vtask_write_req_wait__54__done = 1U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awaddr 
                    = __Vtask_write_req_wait__54__t_awaddr;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awprot 
                    = __Vtask_write_req_wait__54__t_awprot;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wdata 
                    = __Vtask_write_req_wait__54__t_wdata;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wstrb 
                    = __Vtask_write_req_wait__54__t_wstrb;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                    = __Vtask_write_req_wait__54__done;
            }
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 1U;
            }
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector) {
                __Vtask_read_req_wait__55__done = 0U;
                vlSymsp->TOP__top__DOT__if_axi_light_controller.arready = 1U;
                if (vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_arvalid) {
                    __Vtask_read_req_wait__55__t_araddr 
                        = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_addr;
                    __Vtask_read_req_wait__55__t_arprot 
                        = ((IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_instr)
                            ? 4U : 0U);
                    __Vtask_read_req_wait__55__done = 1U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_araddr 
                    = __Vtask_read_req_wait__55__t_araddr;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_arprot 
                    = __Vtask_read_req_wait__55__t_arprot;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                    = __Vtask_read_req_wait__55__done;
            } else {
                __Vtask_read_req_wait__56__done = 0U;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arready = 1U;
                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arvalid) {
                    __Vtask_read_req_wait__56__t_araddr 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.araddr;
                    __Vtask_read_req_wait__56__t_arprot 
                        = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.arprot;
                    __Vtask_read_req_wait__56__done = 1U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_araddr 
                    = __Vtask_read_req_wait__56__t_araddr;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_arprot 
                    = __Vtask_read_req_wait__56__t_arprot;
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                    = __Vtask_read_req_wait__56__done;
            }
            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s) {
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 2U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                __Vtask_write_req__57__t_wstrb = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wstrb;
                __Vtask_write_req__57__t_wdata = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wdata;
                __Vtask_write_req__57__t_awprot = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awprot;
                __Vtask_write_req__57__t_awaddr = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awaddr;
                __Vtask_write_req__57__done = 0U;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awaddr 
                    = __Vtask_write_req__57__t_awaddr;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awprot 
                    = __Vtask_write_req__57__t_awprot;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wdata 
                    = __Vtask_write_req__57__t_wdata;
                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wstrb 
                    = __Vtask_write_req__57__t_wstrb;
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_sent)))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awvalid = 1U;
                }
                if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_sent)))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wvalid = 1U;
                }
                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.awready) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_sent = 1U;
                }
                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.wready) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_sent = 1U;
                }
                if (((IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_sent) 
                     & (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_sent))) {
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_addr_sent = 0U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.w_data_sent = 0U;
                    __Vtask_write_req__57__done = 1U;
                }
                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m 
                    = __Vtask_write_req__57__done;
                if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m) {
                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 3U;
                }
            } else {
                if ((2U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                    __Vtask_read_req__58__t_arprot 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_arprot;
                    __Vtask_read_req__58__t_araddr 
                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_araddr;
                    __Vtask_read_req__58__done = 0U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arvalid = 1U;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.araddr 
                        = __Vtask_read_req__58__t_araddr;
                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arprot 
                        = __Vtask_read_req__58__t_arprot;
                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.arready) {
                        __Vtask_read_req__58__done = 1U;
                    }
                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m 
                        = __Vtask_read_req__58__done;
                    if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m) {
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 3U;
                    }
                } else {
                    if ((3U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                        __Vtask_write_resp_wait__59__done = 0U;
                        if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bvalid) {
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bready = 1U;
                            __Vtask_write_resp_wait__59__t_bresp 
                                = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bresp;
                            __Vtask_write_resp_wait__59__done = 1U;
                        }
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_bresp 
                            = __Vtask_write_resp_wait__59__t_bresp;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m 
                            = __Vtask_write_resp_wait__59__done;
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 4U;
                        }
                        __Vtask_read_resp_wait__60__done = 0U;
                        if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rvalid) {
                            vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rready = 1U;
                            __Vtask_read_resp_wait__60__t_rdata 
                                = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rdata;
                            __Vtask_read_resp_wait__60__t_rresp 
                                = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rresp;
                            __Vtask_read_resp_wait__60__done = 1U;
                        }
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rdata 
                            = __Vtask_read_resp_wait__60__t_rdata;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rresp 
                            = __Vtask_read_resp_wait__60__t_rresp;
                        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m 
                            = __Vtask_read_resp_wait__60__done;
                        if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m) {
                            vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 5U;
                        }
                    } else {
                        if ((4U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector) {
                                __Vtask_write_resp__61__t_bresp 
                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_bresp;
                                __Vtask_write_resp__61__done = 0U;
                                vlSymsp->TOP__top__DOT__if_axi_light_controller.bvalid = 1U;
                                vlSymsp->TOP__top__DOT__if_axi_light_controller.bresp 
                                    = __Vtask_write_resp__61__t_bresp;
                                if (vlSymsp->TOP__top__DOT__if_axi_light_controller.bready) {
                                    __Vtask_write_resp__61__done = 1U;
                                }
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                                    = __Vtask_write_resp__61__done;
                            } else {
                                __Vtask_write_resp__62__t_bresp 
                                    = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_bresp;
                                __Vtask_write_resp__62__done = 0U;
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bvalid = 1U;
                                vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bresp 
                                    = __Vtask_write_resp__62__t_bresp;
                                if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.bready) {
                                    __Vtask_write_resp__62__done = 1U;
                                }
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                                    = __Vtask_write_resp__62__done;
                            }
                            if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s) {
                                vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 6U;
                            }
                        } else {
                            if ((5U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                                if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector) {
                                    __Vtask_read_resp__63__t_rresp 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rresp;
                                    __Vtask_read_resp__63__t_rdata 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rdata;
                                    __Vtask_read_resp__63__done = 0U;
                                    vlSymsp->TOP__top__DOT__if_axi_light_controller.rvalid = 1U;
                                    vlSymsp->TOP__top__DOT__if_axi_light_controller.rresp 
                                        = __Vtask_read_resp__63__t_rresp;
                                    vlSymsp->TOP__top__DOT__if_axi_light_controller.rdata 
                                        = __Vtask_read_resp__63__t_rdata;
                                    if (((IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)))))) {
                                        __Vtask_read_resp__63__done = 1U;
                                    }
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                                        = __Vtask_read_resp__63__done;
                                } else {
                                    __Vtask_read_resp__64__t_rresp 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rresp;
                                    __Vtask_read_resp__64__t_rdata 
                                        = vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rdata;
                                    __Vtask_read_resp__64__done = 0U;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rvalid = 1U;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rresp 
                                        = __Vtask_read_resp__64__t_rresp;
                                    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rdata 
                                        = __Vtask_read_resp__64__t_rdata;
                                    if (vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter.rready) {
                                        __Vtask_read_resp__64__done = 1U;
                                    }
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s 
                                        = __Vtask_read_resp__64__done;
                                }
                                if (vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 6U;
                                }
                            } else {
                                if ((6U == vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state)) {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector 
                                        = (1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector)));
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 0U;
                                } else {
                                    vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_arprot = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_bresp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rresp = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rdata = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m = 0U;
        vlTOPp->top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__w_res_n_gated = 0U;
    if ((0U == vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state)) {
        vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__i = 0U;
        if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
            vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 1U;
        }
    } else {
        if ((1U == vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state)) {
            vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__i 
                = ((IData)(1U) + vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__i);
            if ((0xaU == vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__i)) {
                vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 2U;
            }
        } else {
            if ((2U == vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state)) {
                vlTOPp->top__DOT__node_0__DOT__w_res_n_gated = 1U;
                if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
                    vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 0U;
                }
            } else {
                vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 0U;
            }
        }
    }
    vlTOPp->top__DOT__node_1__DOT__w_res_n_gated = 0U;
    if ((0U == vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state)) {
        vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__i = 0U;
        if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
            vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 1U;
        }
    } else {
        if ((1U == vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state)) {
            vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__i 
                = ((IData)(1U) + vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__i);
            if ((0xaU == vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__i)) {
                vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 2U;
            }
        } else {
            if ((2U == vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state)) {
                vlTOPp->top__DOT__node_1__DOT__w_res_n_gated = 1U;
                if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
                    vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 0U;
                }
            } else {
                vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 0U;
            }
        }
    }
    vlSymsp->TOP__top__DOT__if_connect_node_0.put_non_full_VCs = 3U;
    vlSymsp->TOP__top__DOT__if_connect_node_0.en_put_non_full_VCs = 1U;
    vlSymsp->TOP__top__DOT__if_connect_node_1.put_non_full_VCs = 3U;
    vlSymsp->TOP__top__DOT__if_connect_node_1.en_put_non_full_VCs = 1U;
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__if_connect_memory.put_non_full_VCs = 3U;
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        vlSymsp->TOP__top__DOT__if_connect_memory.en_put_non_full_VCs = 1U;
    }
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v0 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [6U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v1 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [5U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v2 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [4U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v3 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [3U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v4 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [2U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v5 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [1U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v6 
        = vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
        [0U];
    __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v7 
        = vlTOPp->res_n;
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.araddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.araddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awaddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awaddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wstrb 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wstrb;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wdata 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wdata;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awaddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awaddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.araddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.araddr;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wdata 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wstrb 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wstrb;
    }
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bresp 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bresp)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rdata 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rdata
            : vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rdata);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rresp 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rresp)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bvalid 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bvalid));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rvalid 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rvalid));
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
                   >> 0x11U))]);
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                   >> 0x11U))]);
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                   >> 0x11U))]);
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.bresp 
        = (((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.bresp));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bready;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
                  & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rready;
    }
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.bvalid 
        = (((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.bvalid));
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[7U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v0;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[6U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v1;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[5U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v2;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[4U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v3;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[3U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v4;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[2U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v5;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[1U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v6;
    vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg[0U] 
        = __Vdlyvval__top__DOT__res_n_syn_inst__DOT__shift_reg__v7;
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bresp 
        = (((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rdata 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rdata);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rresp 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bvalid 
        = (((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bvalid));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rvalid 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rvalid));
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready;
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_2_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_2_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_2__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_2_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_3_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_3_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_3__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_3_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_1_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_1_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_1__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_1_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_4_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_4_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_4__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_4_getFlit 
                   >> 0x11U))]);
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_controller.bready 
            = ((IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
               & (0U != (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)));
    }
    vlTOPp->trap = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.trap;
    vlTOPp->top__DOT__w_res_n_syn = (((((((vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                           [7U] & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                           [6U]) & 
                                          vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                          [5U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                         [4U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                        [3U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                       [2U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                      [1U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                     [0U]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_3_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_3_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_3__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_3_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_4_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_4_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_4__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_4_getFlit 
                   >> 0x11U))]);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY(((IData)(vlSymsp->TOP__top__DOT__if_connect_node_0.en_put) 
                         & (vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                            >> 0x14U)))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY(((IData)(vlSymsp->TOP__top__DOT__if_connect_node_1.en_put) 
                         & (vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                            >> 0x14U)))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY(((IData)(vlSymsp->TOP__top__DOT__if_connect_memory.en_put) 
                         & (vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
                            >> 0x14U)))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY(((IData)(vlSymsp->TOP__top__DOT__if_connect_node_empty.en_put) 
                         & (vlSymsp->TOP__top__DOT__if_connect_node_empty.put_flit 
                            >> 0x14U)))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_1_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_1_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_2_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_2_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_3_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_3_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_4_getFlit))) {
        }
    }
    if (vlTOPp->top__DOT__w_res_n_syn) {
        if (VL_UNLIKELY((0x100000U & vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_4_getFlit))) {
        }
    }
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.bresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bresp;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_1__DOT__w_activate)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux.rresp 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rresp;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.araddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.araddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awaddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awaddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wstrb 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wstrb;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wdata 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wdata;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awaddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awaddr;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.araddr 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.araddr;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awprot 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awprot;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wvalid 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wvalid;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wdata 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wdata;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wstrb 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wstrb;
    }
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.bresp 
        = (((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.bresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.arready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.arready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.arready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.wready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.wready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.wready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.awready 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.awready)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.awready));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bresp 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bresp)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rdata 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rdata
            : vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rdata);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rresp 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rresp)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bvalid 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bvalid));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rvalid 
        = ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)
            ? (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rvalid));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bready;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
                  & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rready;
    }
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger.bvalid 
        = (((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__if_axi_light_controller.bvalid));
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.bvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.bvalid;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rvalid 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rvalid;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__if_axi_light_controller.bready 
            = ((IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
               & (0U != (IData)(vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlTOPp->trap = vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.trap;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid)));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.bready 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)));
    }
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.bready 
            = ((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
               & (0U != (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlTOPp->trap_nodes = ((IData)(vlTOPp->top__DOT__trap_0) 
                          | (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.trap));
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out)
            : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated))))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq 
        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           == vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu 
        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           < vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__w_res_n_syn = (((((((vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                           [7U] & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                           [6U]) & 
                                          vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                          [5U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                         [4U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                        [3U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                       [2U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                      [1U]) & vlTOPp->top__DOT__res_n_syn_inst__DOT__shift_reg
                                     [0U]);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                        : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out);
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm
                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr) 
                                                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
           & ((~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)))) 
              & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                  | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))));
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_1.put_flit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_memory.put_flit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_empty.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_empty.put_flit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_0_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_connect_node_0.put_flit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__node_0__DOT__w_clk_gated = ((0U 
                                                   != vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state) 
                                                  & (IData)(vlTOPp->clk));
    vlTOPp->top__DOT__node_1__DOT__w_clk_gated = ((0U 
                                                   != vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state) 
                                                  & (IData)(vlTOPp->clk));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bresp 
        = (((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rdata 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rdata);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rresp 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? 0U : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rresp));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.bvalid 
        = (((IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bvalid));
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux.rvalid 
        = (((~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write)) 
            & (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from))
            ? (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid)
            : (IData)(vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rvalid));
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.bready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.bready;
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux)))) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready;
    }
    if (vlTOPp->top__DOT__memory_controller_inst__DOT__sig_demux) {
        vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control.rready 
            = vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux.rready;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready 
        = ((((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) 
             & (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from))
             ? (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid)
             : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bvalid)) 
           | (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rvalid));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)
                ? (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   - vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2)
                : (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                    = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or))) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                           | vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and))) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                            = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                               & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr);
    }
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata)));
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata
            : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
           & ((((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) 
                & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) 
               & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                   | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)) 
                  | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata))) 
              | ((3U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)) 
                 & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))));
}

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_3_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_3_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_3__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_3_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_4_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_4_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_4__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core.out_ports_4_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_1_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_1_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_1__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_1_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_4_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_4_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_4__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1.out_ports_4_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_2_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_2_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_2__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_2_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_3_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_3_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_3__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2.out_ports_3_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_1_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_1_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_1__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_1_getFlit 
                   >> 0x11U))]);
    vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_2_putRoutedFlit_flit_in 
        = ((vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_2_getFlit 
            << 3U) | vlTOPp->top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_2__DOT__arr
           [(3U & (vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3.out_ports_2_getFlit 
                   >> 0x11U))]);
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__node_0__DOT__w_clk_gated = ((0U 
                                                   != vlTOPp->top__DOT__node_0__DOT__clk_gater_inst__DOT__state) 
                                                  & (IData)(vlTOPp->clk));
    vlTOPp->top__DOT__node_1__DOT__w_clk_gated = ((0U 
                                                   != vlTOPp->top__DOT__node_1__DOT__clk_gater_inst__DOT__state) 
                                                  & (IData)(vlTOPp->clk));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vtask_write_req_wait__19__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__19__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__19__done;
    CData/*2:0*/ __Vtask_write_req__20__t_awprot;
    CData/*3:0*/ __Vtask_write_req__20__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__20__done;
    CData/*1:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    CData/*4:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    CData/*1:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    CData/*0:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    CData/*7:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    IData/*31:0*/ __Vtask_write_req_wait__19__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__19__t_wdata;
    IData/*31:0*/ __Vtask_write_req__20__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__20__t_wdata;
    IData/*31:0*/ __Vdlyvval__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    IData/*31:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    IData/*31:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    IData/*31:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    QData/*63:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    QData/*63:0*/ __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    // Body
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    __Vdlyvset__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.awready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.wready = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awvalid = 0U;
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wvalid = 0U;
    vlTOPp->top__DOT__node_0__DOT__w_fin = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) {
        if ((0U == vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__19__done = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.wready = 1U;
            }
            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid) {
                __Vtask_write_req_wait__19__t_awaddr 
                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr;
                __Vtask_write_req_wait__19__t_awprot = 0U;
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_addr_collected = 1U;
            }
            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid) {
                __Vtask_write_req_wait__19__t_wdata 
                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata;
                __Vtask_write_req_wait__19__t_wstrb 
                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb;
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_data_collected))) {
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.w_data_collected = 0U;
                __Vtask_write_req_wait__19__done = 1U;
            }
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__19__t_awaddr;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__19__t_awprot;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__19__t_wdata;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__19__t_wstrb;
            vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__done 
                = __Vtask_write_req_wait__19__done;
            if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__done) {
                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write = 1U;
                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write)
                        ? vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_araddr);
                if ((0xfffffcU == vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->top__DOT__node_0__DOT__w_fin = 1U;
                    if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__data 
                            = vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->top__DOT__node_0__DOT__w_fin = 0U;
                }
                if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from = 1U;
                    if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid = 1U;
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 4U;
                    } else {
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_rvalid = 1U;
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 5U;
                    }
                } else {
                    vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state 
                        = ((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write)
                            ? 2U : 3U);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
                    __Vtask_write_req__20__t_wstrb 
                        = vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wstrb;
                    __Vtask_write_req__20__t_wdata 
                        = vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wdata;
                    __Vtask_write_req__20__t_awprot 
                        = vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awprot;
                    __Vtask_write_req__20__t_awaddr 
                        = vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awaddr;
                    __Vtask_write_req__20__done = 0U;
                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awaddr 
                        = __Vtask_write_req__20__t_awaddr;
                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awprot 
                        = __Vtask_write_req__20__t_awprot;
                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wdata 
                        = __Vtask_write_req__20__t_wdata;
                    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wstrb 
                        = __Vtask_write_req__20__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.awready) {
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.wready) {
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.w_data_sent = 0U;
                        __Vtask_write_req__20__done = 1U;
                    }
                    vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__done 
                        = __Vtask_write_req__20__done;
                    if (vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__done) {
                        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U != vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
                        if ((4U == vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.bready) {
                                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U != vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state)) {
                                vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_0__DOT__w_fin = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__done = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_data = VL_ULL(0);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_valid = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0_q 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_insn = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (0x7ffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 0x15U)))))) 
               & (~ (IData)((0U != (0x1fffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 7U))))));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq = 0U;
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
               | (IData)(vlTOPp->top__DOT__trap_0)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
    } else {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
               | (IData)(vlTOPp->top__DOT__trap_0)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if ((((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
          & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd)))) {
        __Vdlyvval__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata;
        __Vdlyvset__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                : (0xffffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode));
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) {
        if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.awready) 
             & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.arready) 
             & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector.wready) 
             & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid))))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
    } else {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = 0U;
    }
    if (__Vdlyvset__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs[__Vdlyvdim0__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __Vdlyvval__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
                  | (IData)(vlTOPp->top__DOT__trap_0))))) {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata 
                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata;
        }
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
                  | (IData)(vlTOPp->top__DOT__trap_0))))) {
        if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr 
                = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                    | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc)
                    : (0xfffffffcU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 0xfU));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
           & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
              & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready))));
    if (vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode
                : ((3U == (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode)));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1));
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
               | (IData)(vlTOPp->top__DOT__trap_0)))) {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)))) {
            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
                   | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready)))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
        }
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb 
                = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb) 
                   & VL_NEGATE_I((IData)((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 1U;
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst));
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb = 0U;
                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 1U;
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr = 0U;
                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
                        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                            | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))
                            ? 0U : 3U);
                }
            } else {
                if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = 0U;
                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) {
                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) {
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
            & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb))) 
           & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid)));
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset.bready 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
               & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb)));
    }
    vlTOPp->top__DOT__trap_0 = 0U;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
    }
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)
            ? (VL_ULL(1) + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle)
            : VL_ULL(0));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = 0U;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) {
        if (((((((((0x80U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)))) {
            if (VL_UNLIKELY((0x80U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)))) {
                VL_WRITEF("trapppp\n");
                vlTOPp->top__DOT__trap_0 = 1U;
            } else {
                if ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                        = (1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger)) 
                                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq))));
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd 
                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr 
                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc;
                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store)
                                ? (0xfffffffeU & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                                                   ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                                                   : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out))
                                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
                    }
                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 0U;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 0U;
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 0U;
                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) {
                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
                            = (VL_ULL(1) + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr);
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay 
                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active;
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                               + ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr)
                                   ? 2U : 4U));
                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc 
                                = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc 
                                   + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj);
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 1U;
                        } else {
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
                                = (1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr)) 
                                         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr))));
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                        }
                    }
                } else {
                    if ((0x20U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 = 0U;
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 = 0U;
                        if ((((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap) 
                              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                             | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal))) {
                            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap) {
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                            } else {
                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle);
                                    } else {
                                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                = (IData)(
                                                          (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
                                                           >> 0x20U));
                                        } else {
                                            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                    = (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr);
                                            } else {
                                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                        = (IData)(
                                                                  (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                } else {
                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui)
                                                ? 0U
                                                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc);
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    }
                                }
                            }
                        } else {
                            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap)))) {
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 1U;
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2;
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                } else {
                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                    } else {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                            = (0x1fU 
                                               & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2);
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 2U;
                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                                        } else {
                                            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                            } else {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x10U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                = (0x1fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2);
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val 
                                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2;
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 2U;
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            } else {
                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 4U;
                                } else {
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 8U;
                                }
                            }
                        } else {
                            if ((8U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                    = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                                       + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = 0U;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done) {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    }
                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0) {
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                                    }
                                } else {
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch 
                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 1U;
                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                }
                            } else {
                                if ((4U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh))) {
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
                                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                    } else {
                                        if ((4U <= (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh))) {
                                            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll))) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     << 4U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 4U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, 4U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(4U)));
                                        } else {
                                            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll))) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     << 1U);
                                            } else {
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                     | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl))) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                        = 
                                                        (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                         >> 1U);
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                         | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra))) {
                                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,32, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, 1U);
                                                    }
                                                }
                                            }
                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
                                                = (0x1fU 
                                                   & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh) 
                                                      - (IData)(1U)));
                                        }
                                    }
                                } else {
                                    if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
                                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
                                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                            }
                                            if (((~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                            }
                                        }
                                    } else {
                                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
                                        if ((1U & (
                                                   (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                   | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
                                            if (((~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                                                 & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
                                                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word;
                                                } else {
                                                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh) {
                                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                            = 
                                                            VL_EXTENDS_II(32,16, 
                                                                          (0xffffU 
                                                                           & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word));
                                                    } else {
                                                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb) {
                                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
                                                                = 
                                                                VL_EXTENDS_II(32,8, 
                                                                              (0xffU 
                                                                               & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word));
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                                            }
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                    = 
                                                    (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                                                     + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
                                                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                                                if (
                                                    ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                     | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu))) {
                                                    __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                                                } else {
                                                    if (
                                                        ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                         | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu))) {
                                                        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                                                    } else {
                                                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
                                                            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                                                        }
                                                    }
                                                }
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
                                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
                                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh;
                                                __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
                                                    = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb;
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
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr = VL_ULL(0);
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer = 0U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_trace = 0U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_valid = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__eoi = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = 2U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = 0x9c40U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x40U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = 1U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
         & ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata) 
            | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)))) {
            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
            __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
          & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & (0U != (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc)))) {
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)) 
               | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done)))) {
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_pending 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc = 0U;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq = 0U;
    vlTOPp->__Vtableidx1 = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][0U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][1U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][2U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = vlTOPp->__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state
        [vlTOPp->__Vtableidx1][3U];
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
            & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch))
            ? (0xfffffffeU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out)
            : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out;
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 7U));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                        >> 0x14U));
    }
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                = ((0xffff0000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                   << 0x10U)) | (0xffffU 
                                                 & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata 
                    = ((0xff000000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                       << 0x18U)) | 
                       ((0xff0000U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                      << 0x10U)) | 
                        ((0xff00U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 
                                     << 8U)) | (0xffU 
                                                & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2))));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                = ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                    ? 0xcU : 3U);
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb 
                    = (0xfU & ((IData)(1U) << (3U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)));
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq 
        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           == vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(1,32,32, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1, vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu 
        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
           < vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc0002U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc0102U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh 
            = (((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (0xc8002U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0xcU)))) 
               | ((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
                  & (0xc8102U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                              >> 0xcU)))));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr 
            = ((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc0202U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh 
            = ((0x73U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (0xc8202U == (0xfffffU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                           >> 0xcU))));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store) 
                 & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch)))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata 
                    = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu)
                        ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q
                        : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out);
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs
           [vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2)
                : (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2));
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)))))));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (4U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (6U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (7U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (2U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (4U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (2U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (2U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (3U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (4U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (6U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (7U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                               >> 0xcU))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (((1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj
                : (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc))
                    ? (0xfffff000U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q)
                    : (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (0xfffU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x14U)))
                        : ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm
                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm);
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0xbU)))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffff801U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffff7ffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                     >> 0xbU))) 
                            << 2U)));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfff00fffU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj 
            = ((0xfffffffeU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                                               >> 0xbU)))));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr 
            = ((0x67U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle)) 
               & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
                               >> 0xcU))));
    }
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (0U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (2U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (3U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (4U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0x20U 
                                               == (0x7fU 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (6U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and 
            = (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
                & (7U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                >> 0xcU)))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U))));
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (((1U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                 >> 0xcU))) & (0U == 
                                               (0x7fU 
                                                & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                   >> 0x19U)))) 
                  | (((5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                    >> 0xcU))) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0x19U)))) 
                     | ((5U == (7U & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                      >> 0xcU))) & 
                        (0x20U == (0x7fU & (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
                                            >> 0x19U)))))));
    }
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or = 0U;
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger));
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle));
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq;
    } else {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq)));
        } else {
            if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                    = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts)));
            } else {
                if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                        = (1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu)));
                } else {
                    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                            = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts;
                    } else {
                        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
                            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 
                                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub)
                ? (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   - vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2)
                : (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                   + vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2));
    } else {
        if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare) {
            vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0;
        } else {
            if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                    = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                       ^ vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
            } else {
                if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                     | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or))) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                        = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                           | vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                } else {
                    if (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                         | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and))) {
                        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out 
                            = (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 
                               & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2);
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) 
                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) 
                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))))) 
                    | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) 
                       | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) 
                          | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) 
                             | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) 
                                | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) 
                                   | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) 
                                      | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                         | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) 
                                            | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                               | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) 
                                                  | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) 
                                                     | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr) 
                                                        | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) 
                                                           | ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) 
                                                              | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer))))))))))))))))));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0);
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c7569);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6175697063);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6a616c72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626571);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626e65);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c74);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626765);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x626c7475);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x62676575);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c62);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c68);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c77);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6275);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6c6875);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7362);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7368);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7377);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x61646469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c746975);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f7269);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f7269);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e6469);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c69);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c69);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726169);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616464);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737562);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c6c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c74);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x736c7475);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x786f72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73726c);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x737261);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6f72);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x616e64);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c65);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x72646379636c6568);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e737472);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x7264696e73747268);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x67657471);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x73657471);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x726574697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x6d61736b697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x77616974697271);
    }
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_ULL(0x74696d6572);
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst 
        = __Vdly__top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst;
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr 
            = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q)
                ? vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr
                : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr);
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vtask_write_req_wait__33__t_awprot;
    CData/*3:0*/ __Vtask_write_req_wait__33__t_wstrb;
    CData/*0:0*/ __Vtask_write_req_wait__33__done;
    CData/*2:0*/ __Vtask_write_req__34__t_awprot;
    CData/*3:0*/ __Vtask_write_req__34__t_wstrb;
    CData/*0:0*/ __Vtask_write_req__34__done;
    IData/*31:0*/ __Vtask_write_req_wait__33__t_awaddr;
    IData/*31:0*/ __Vtask_write_req_wait__33__t_wdata;
    IData/*31:0*/ __Vtask_write_req__34__t_awaddr;
    IData/*31:0*/ __Vtask_write_req__34__t_wdata;
    // Body
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.awready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.wready = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awvalid = 0U;
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wvalid = 0U;
    vlTOPp->top__DOT__node_1__DOT__w_fin = 0U;
    if (vlTOPp->top__DOT__node_1__DOT__w_res_n_gated) {
        if ((0U == vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from = 0U;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
            __Vtask_write_req_wait__33__done = 0U;
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_addr_collected)))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.awready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_data_collected)))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.wready = 1U;
            }
            if (vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_awvalid) {
                __Vtask_write_req_wait__33__t_awaddr 
                    = vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_addr;
                __Vtask_write_req_wait__33__t_awprot = 0U;
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_addr_collected = 1U;
            }
            if (vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.mem_axi_wvalid) {
                __Vtask_write_req_wait__33__t_wdata 
                    = vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wdata;
                __Vtask_write_req_wait__33__t_wstrb 
                    = vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb;
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_data_collected = 1U;
            }
            if (((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_addr_collected) 
                 & (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_data_collected))) {
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_addr_collected = 0U;
                vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector.w_data_collected = 0U;
                __Vtask_write_req_wait__33__done = 1U;
            }
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awaddr 
                = __Vtask_write_req_wait__33__t_awaddr;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awprot 
                = __Vtask_write_req_wait__33__t_awprot;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wdata 
                = __Vtask_write_req_wait__33__t_wdata;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wstrb 
                = __Vtask_write_req_wait__33__t_wstrb;
            vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__done 
                = __Vtask_write_req_wait__33__done;
            if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__done) {
                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write = 1U;
                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 1U;
            }
        } else {
            if ((1U == vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__detected = 0U;
                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__addr_to_check 
                    = ((IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write)
                        ? vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awaddr
                        : vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_araddr);
                if ((0xfffffcU == vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__addr_to_check)) {
                    vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__detected = 1U;
                }
                if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->top__DOT__node_1__DOT__w_fin = 1U;
                    if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__data 
                            = vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wdata;
                    }
                } else {
                    vlTOPp->top__DOT__node_1__DOT__w_fin = 0U;
                }
                if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__detected) {
                    vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from = 1U;
                    if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write) {
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_bvalid = 1U;
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 4U;
                    } else {
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_rvalid = 1U;
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 5U;
                    }
                } else {
                    vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state 
                        = ((IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write)
                            ? 2U : 3U);
                }
            } else {
                if ((2U == vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
                    __Vtask_write_req__34__t_wstrb 
                        = vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wstrb;
                    __Vtask_write_req__34__t_wdata 
                        = vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wdata;
                    __Vtask_write_req__34__t_awprot 
                        = vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awprot;
                    __Vtask_write_req__34__t_awaddr 
                        = vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awaddr;
                    __Vtask_write_req__34__done = 0U;
                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awaddr 
                        = __Vtask_write_req__34__t_awaddr;
                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awprot 
                        = __Vtask_write_req__34__t_awprot;
                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wdata 
                        = __Vtask_write_req__34__t_wdata;
                    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wstrb 
                        = __Vtask_write_req__34__t_wstrb;
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_addr_sent)))) {
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.awvalid = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_data_sent)))) {
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.wvalid = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.awready) {
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_addr_sent = 1U;
                    }
                    if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.wready) {
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_data_sent = 1U;
                    }
                    if (((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_addr_sent) 
                         & (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_data_sent))) {
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_addr_sent = 0U;
                        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.w_data_sent = 0U;
                        __Vtask_write_req__34__done = 1U;
                    }
                    vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__done 
                        = __Vtask_write_req__34__done;
                    if (vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__done) {
                        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 0U;
                    }
                } else {
                    if ((3U != vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
                        if ((4U == vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
                            if (vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.bready) {
                                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
                                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        } else {
                            if ((5U != vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state)) {
                                vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awaddr = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_araddr = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awprot = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wdata = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wstrb = 0U;
        vlTOPp->top__DOT__node_1__DOT__w_fin = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__done = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_bvalid = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__r_rvalid = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__detected = 0U;
        vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write = 0U;
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__write) 
                  & (IData)(vlTOPp->top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from))))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset.bready 
            = ((IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_valid) 
               & (0U != (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.__PVT__mem_wstrb)));
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if (vlTOPp->top__DOT__node_0__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.arready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.arready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.awready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.awready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.wready 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.wready;
    }
    if (vlTOPp->top__DOT__node_1__DOT__w_activate) {
        vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_offset_to_mux.rdata 
            = vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge.rdata;
    }
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready 
        = ((((IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__write) 
             & (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from))
             ? (IData)(vlTOPp->top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid)
             : (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.bvalid)) 
           | (IData)(vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rvalid));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write 
        = (((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
            & (~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))))) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated))))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
           & ((~ (IData)((0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)))) 
              & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                  | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                 | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata))));
    if ((0U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata;
    } else {
        if ((1U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
            if ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                if ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)) {
                    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                        = (0xffffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                      >> 0x10U));
                }
            } else {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (0xffffU & vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata);
            }
        } else {
            if ((2U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize))) {
                vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word 
                    = ((2U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                        ? ((1U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                            ? (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                        >> 0x18U)) : 
                           (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                     >> 0x10U))) : 
                       ((1U & vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1)
                         ? (0xffU & (vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata 
                                     >> 8U)) : (0xffU 
                                                & vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata)));
            }
        }
    }
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid) 
           & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready));
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_offset_to_mux.rdata
            : vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q);
    vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlTOPp->top__DOT__node_0__DOT__w_res_n_gated) 
           & ((((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer) 
                & (0U != (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state))) 
               & (((IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst) 
                   | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata)) 
                  | (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata))) 
              | ((3U == (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state)) 
                 & (IData)(vlTOPp->top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst))));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__13\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->trap_nodes = ((IData)(vlTOPp->top__DOT__trap_0) 
                          | (IData)(vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst.trap));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__5(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__6(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__7(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__8(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__9(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__10(vlSymsp);
        vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__2(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__11(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__12(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__13(vlSymsp);
        vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._sequent__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__3(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__14(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__15(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__16(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__17(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__18(vlSymsp);
        vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._sequent__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__19(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->top__DOT__node_0__DOT__w_clk_gated) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_0__DOT__w_clk_gated)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->top__DOT__node_1__DOT__w_clk_gated) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_1__DOT__w_clk_gated)))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._sequent__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._sequent__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__7(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->top__DOT__node_0__DOT__w_clk_gated) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_0__DOT__w_clk_gated))))) {
        vlTOPp->_multiclk__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->top__DOT__node_1__DOT__w_clk_gated) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_1__DOT__w_clk_gated))))) {
        vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._multiclk__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->top__DOT__node_0__DOT__w_clk_gated) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_0__DOT__w_clk_gated))) 
         | ((IData)(vlTOPp->top__DOT__node_1__DOT__w_clk_gated) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__top__DOT__node_1__DOT__w_clk_gated))))) {
        vlTOPp->_multiclk__TOP__13(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__top__DOT__node_0__DOT__w_clk_gated 
        = vlTOPp->top__DOT__node_0__DOT__w_clk_gated;
    vlTOPp->__Vclklast__TOP__top__DOT__node_1__DOT__w_clk_gated 
        = vlTOPp->top__DOT__node_1__DOT__w_clk_gated;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._initial__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__1(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._initial__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__2(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._initial__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__3(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._initial__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__4(vlSymsp);
    vlSymsp->TOP__top__DOT__if_axi_light_controller._initial__TOP__top__DOT__if_axi_light_controller__1(vlSymsp);
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_self_awareness_to_mux._initial__TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset__11(vlSymsp);
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge._initial__TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge__3(vlSymsp);
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_self_awareness_to_mux._initial__TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset__11(vlSymsp);
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_mux_to_slave_bridge._initial__TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge__3(vlSymsp);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_bridge_to_arbiter._initial__TOP__top__DOT__if_axi_light_controller__1(vlSymsp);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_arbiter_to_detect_demux._initial__TOP__top__DOT__if_axi_light_controller__1(vlSymsp);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_demux._initial__TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset__11(vlSymsp);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_memory._initial__TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge__3(vlSymsp);
    vlSymsp->TOP__top__DOT__memory_controller_inst__DOT__if_axi_light_control._initial__TOP__top__DOT__node_0__DOT__if_axi_light_mux_to_slave_bridge__3(vlSymsp);
    vlSymsp->TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger._initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1(vlSymsp);
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset._initial__TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset__11(vlSymsp);
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_detector_to_offset._initial__TOP__top__DOT__node_0__DOT__if_axi_light_detector_to_offset__11(vlSymsp);
    vlSymsp->TOP__top__DOT__node_0__DOT__if_axi_light_cpu_to_detector._initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1(vlSymsp);
    vlSymsp->TOP__top__DOT__node_1__DOT__if_axi_light_cpu_to_detector._initial__TOP__top__DOT__controller_inst__DOT__if_axi_light_cpu_to_debugger__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__top__DOT__node_0__DOT__w_clk_gated 
        = vlTOPp->top__DOT__node_0__DOT__w_clk_gated;
    vlTOPp->__Vclklast__TOP__top__DOT__node_1__DOT__w_clk_gated 
        = vlTOPp->top__DOT__node_1__DOT__w_clk_gated;
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
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._settle__TOP__top__DOT__controller_inst__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__4(vlSymsp);
    vlSymsp->TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst._settle__TOP__top__DOT__node_1__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__5(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__20(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__21(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__22(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__23(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__24(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__25(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__26(vlSymsp);
    vlSymsp->TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3._settle__TOP__top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__27(vlSymsp);
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
    if (VL_UNLIKELY((buffer_recv_busy & 0xfeU))) {
        Verilated::overWidthError("buffer_recv_busy");}
    if (VL_UNLIKELY((pixel_avail & 0xfeU))) {
        Verilated::overWidthError("pixel_avail");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    res_n = VL_RAND_RESET_I(1);
    buffer_out_data = VL_RAND_RESET_I(7);
    buffer_out_valid = VL_RAND_RESET_I(1);
    buffer_recv_busy = VL_RAND_RESET_I(1);
    trap = VL_RAND_RESET_I(1);
    trap_nodes = VL_RAND_RESET_I(1);
    leds_status = VL_RAND_RESET_I(8);
    triggers = VL_RAND_RESET_I(8);
    spoon_feed = VL_RAND_RESET_I(32);
    spoon_taken = VL_RAND_RESET_I(1);
    addr_pixel = VL_RAND_RESET_I(32);
    request_pixel = VL_RAND_RESET_I(1);
    pixel = VL_RAND_RESET_I(32);
    pixel_avail = VL_RAND_RESET_I(1);
    top__DOT__w_res_n_syn = VL_RAND_RESET_I(1);
    top__DOT__w_ascii_s_0 = VL_RAND_RESET_I(1);
    top__DOT__trap_0 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__res_n_syn_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<150; ++__Vi0) {
            top__DOT__ring_buffer_inst__DOT__buffer[__Vi0] = VL_RAND_RESET_I(7);
    }}
    top__DOT__ring_buffer_inst__DOT__p_in = VL_RAND_RESET_I(32);
    top__DOT__ring_buffer_inst__DOT__p_out = VL_RAND_RESET_I(32);
    top__DOT__ring_buffer_inst__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__ring_buffer_inst__DOT__cooldown = VL_RAND_RESET_I(1);
    top__DOT__ring_buffer_inst__DOT__empty = VL_RAND_RESET_I(1);
    top__DOT__ring_buffer_inst__DOT__full_r = VL_RAND_RESET_I(1);
    top__DOT__ring_buffer_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(7);
    top__DOT__ring_buffer_inst__DOT____Vlvbound2 = VL_RAND_RESET_I(7);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__busy = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT____Vcellout__axi_detector_debugger_inst__data = VL_RAND_RESET_I(32);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__state = 0;
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__controller_inst__DOT__debugger_inst__DOT__axi_detector_debugger_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__w_activate = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__w_axi_offset = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__w_fin = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__w_clk_gated = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__w_res_n_gated = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__clk_gater_inst__DOT__state = 0;
    top__DOT__node_0__DOT__clk_gater_inst__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_arvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_wvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT____Vcellout__picorv32_axi_inst__mem_axi_awvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__irq = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__eoi = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__trace_data = VL_RAND_RESET_Q(36);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_addr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_instr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__mem_ready = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_delay = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_pending = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoded_imm_uj = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_next = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_trace = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(5);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_eq = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_ltu = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__alu_lts = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__data = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__state = 0;
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__axi_detector_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__state = 0;
    top__DOT__node_0__DOT__self_awareness_inst__DOT__addr_id = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_bresp = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rresp = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__latched_rdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__self_awareness_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0;
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp = VL_RAND_RESET_I(2);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata = VL_RAND_RESET_I(32);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_0__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(14);
    top__DOT__node_1__DOT__w_activate = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__w_axi_offset = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__w_fin = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__w_clk_gated = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__w_res_n_gated = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__clk_gater_inst__DOT__state = 0;
    top__DOT__node_1__DOT__clk_gater_inst__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__data = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__state = 0;
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__axi_detector_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__state = 0;
    top__DOT__node_1__DOT__self_awareness_inst__DOT__addr_id = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_bresp = VL_RAND_RESET_I(2);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rresp = VL_RAND_RESET_I(2);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__latched_rdata = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__self_awareness_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__state = 0;
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__flit_index = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__merged_request);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_bresp = VL_RAND_RESET_I(2);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rresp = VL_RAND_RESET_I(2);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__extracted_rdata = VL_RAND_RESET_I(32);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__w_merge = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__r_merge = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__node_1__DOT__bridge_slave_inst__DOT__genblk2__DOT__bridge_slave_missing_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(14);
    top__DOT__memory_controller_inst__DOT__w_data_to_bridge_avail = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_data_to_bridge_taken = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_data_from_bridge_avail = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_data_from_bridge_taken = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, top__DOT__memory_controller_inst__DOT__w_merged_request_buffer_to_bridge);
    VL_RAND_RESET_W(72, top__DOT__memory_controller_inst__DOT__w_merged_request_bridge_to_buffer);
    top__DOT__memory_controller_inst__DOT__selector = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__sig_demux = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_bram_addr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__w_bram_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__w_bram_rdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__w_bram_read = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_bram_write = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__w_bram_done = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__state = 0;
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_array[__Vi0] = VL_RAND_RESET_I(16);
    }}
    VL_RAND_RESET_W(72, top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__merged_request);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<6; ++__Vi1) {
                    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__buffer_array[__Vi0][__Vi1] = VL_RAND_RESET_I(14);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flit_index_array[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__curr_flit_index = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__flits_collected_select = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__recv_id_curr = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(14);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound2 = VL_RAND_RESET_I(14);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound3 = VL_RAND_RESET_I(16);
    top__DOT__memory_controller_inst__DOT__flit_buffer_inst__DOT__genblk2__DOT__flit_buffer_missing_inst__DOT____Vlvbound4 = VL_RAND_RESET_I(16);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__state = 0;
    VL_RAND_RESET_W(72, top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__merged_request);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_bresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__latched_rdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__extracted_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__w_merge = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__r_merge = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__bridge_master_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__state = 0;
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_bresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__latched_rdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_s = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__done_m = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_arbiter_inst__DOT__selector = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__data = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__state = 0;
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__addr_to_check = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__resp_from = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_bvalid = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__r_rvalid = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__detected = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__axi_detector_demux_inst__DOT__write = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__state = 0;
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__index = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__status = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__wdata_temp = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__rdata_temp = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__bram_controller_inst__DOT__done = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<70000; ++__Vi0) {
            top__DOT__memory_controller_inst__DOT__bram_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__memory_controller_inst__DOT__bram_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__state = 0;
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awaddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_awprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_wstrb = VL_RAND_RESET_I(4);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_araddr = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_arprot = VL_RAND_RESET_I(3);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_bresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rresp = VL_RAND_RESET_I(2);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__latched_rdata = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__done = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__node_sel = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__active = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__memory_controller_inst__DOT__control_inst__DOT__axi_offsets[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__trigger_a_reg = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__trigger_b_reg = VL_RAND_RESET_I(1);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__counter_global = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            top__DOT__memory_controller_inst__DOT__control_inst__DOT__counters[__Vi0] = VL_RAND_RESET_I(32);
    }}
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__memory_controller_inst__DOT__control_inst__DOT__num_active = VL_RAND_RESET_I(32);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_0_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_1_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core__024in_ports_2_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_0_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_2_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_1__024in_ports_3_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_0_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_1_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_2__024in_ports_4_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_0_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_3_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_router_core_3__024in_ports_4_putRoutedFlit_flit_in = VL_RAND_RESET_I(24);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_1__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_2__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_3__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_1_rt_ifc_banks_banks_rf_4__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_1__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_2__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_3__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_2_rt_ifc_banks_banks_rf_4__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_1__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_2__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_3__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_3_rt_ifc_banks_banks_rf_4__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_1__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_2__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_3__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            top__DOT__if_wrapper_noc_2x2_16_inst__DOT__mkNetworkSimple_inst__DOT__net_routers_routeTable_rt_ifc_banks_banks_rf_4__DOT__arr[__Vi0] = VL_RAND_RESET_I(3);
    }}
    __Vtableidx1 = 0;
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[0],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[1],0x0000006c,0x646d656d);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[2],0x00000073,0x746d656d);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[3],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[4],0x00000073,0x68696674);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[5],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[6],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[7],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[8],0x65786563);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[9],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[10],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[11],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[12],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[13],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[14],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[15],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[16],0x00006c64,0x5f727332);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[17],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[18],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[19],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[20],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[21],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[22],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[23],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[24],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[25],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[26],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[27],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[28],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[29],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[30],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[31],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[32],0x00006c64,0x5f727331);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[33],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[34],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[35],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[36],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[37],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[38],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[39],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[40],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[41],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[42],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[43],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[44],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[45],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[46],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[47],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[48],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[49],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[50],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[51],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[52],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[53],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[54],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[55],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[56],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[57],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[58],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[59],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[60],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[61],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[62],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[63],0x00000000);
    VL_CONST_W_2X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[64],0x00000066,0x65746368);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[65],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[66],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[67],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[68],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[69],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[70],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[71],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[72],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[73],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[74],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[75],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[76],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[77],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[78],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[79],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[80],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[81],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[82],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[83],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[84],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[85],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[86],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[87],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[88],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[89],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[90],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[91],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[92],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[93],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[94],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[95],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[96],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[97],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[98],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[99],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[100],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[101],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[102],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[103],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[104],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[105],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[106],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[107],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[108],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[109],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[110],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[111],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[112],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[113],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[114],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[115],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[116],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[117],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[118],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[119],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[120],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[121],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[122],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[123],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[124],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[125],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[126],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[127],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[128],0x74726170);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[129],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[130],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[131],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[132],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[133],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[134],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[135],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[136],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[137],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[138],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[139],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[140],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[141],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[142],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[143],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[144],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[145],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[146],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[147],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[148],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[149],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[150],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[151],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[152],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[153],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[154],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[155],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[156],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[157],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[158],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[159],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[160],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[161],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[162],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[163],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[164],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[165],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[166],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[167],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[168],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[169],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[170],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[171],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[172],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[173],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[174],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[175],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[176],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[177],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[178],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[179],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[180],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[181],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[182],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[183],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[184],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[185],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[186],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[187],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[188],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[189],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[190],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[191],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[192],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[193],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[194],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[195],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[196],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[197],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[198],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[199],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[200],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[201],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[202],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[203],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[204],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[205],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[206],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[207],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[208],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[209],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[210],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[211],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[212],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[213],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[214],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[215],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[216],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[217],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[218],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[219],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[220],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[221],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[222],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[223],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[224],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[225],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[226],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[227],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[228],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[229],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[230],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[231],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[232],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[233],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[234],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[235],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[236],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[237],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[238],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[239],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[240],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[241],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[242],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[243],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[244],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[245],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[246],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[247],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[248],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[249],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[250],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[251],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[252],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[253],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[254],0x00000000);
    VL_CONST_W_1X(128,__Vtable1_top__DOT__node_0__DOT__picorv32_if_wrapper_inst__DOT__picorv32_axi_inst__DOT__picorv32_core__DOT__dbg_ascii_state[255],0x00000000);
    __Vm_traceActivity = 0;
}