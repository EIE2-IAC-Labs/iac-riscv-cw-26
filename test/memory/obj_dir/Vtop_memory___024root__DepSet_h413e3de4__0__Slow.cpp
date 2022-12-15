// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_memory.h for the primary calling header

#include "verilated.h"

#include "Vtop_memory___024root.h"

VL_ATTR_COLD void Vtop_memory___024root___initial__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb95b3628__0;
    // Body
    VL_WRITEF("Loading data memory.\n");
    __Vtemp_hb95b3628__0[0U] = 0x2e6d656dU;
    __Vtemp_hb95b3628__0[1U] = 0x6172616dU;
    __Vtemp_hb95b3628__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hb95b3628__0)
                 ,  &(vlSelf->top_memory__DOT__ram__DOT__ram_array)
                 , 0x10000U, ~0ULL);
}

VL_ATTR_COLD void Vtop_memory___024root___settle__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top_memory__DOT__ram__DOT__offset_a = ((IData)(1U) 
                                                   + 
                                                   (vlSelf->ALUResult_M 
                                                    - 
                                                    (3U 
                                                     & vlSelf->ALUResult_M)));
    vlSelf->top_memory__DOT__dout = ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelf->top_memory__DOT__ram__DOT__offset_a))] 
                                      << 0x18U) | (
                                                   (vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->top_memory__DOT__ram__DOT__offset_a))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->top_memory__DOT__ram__DOT__offset_a))] 
                                                       << 8U) 
                                                      | vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->top_memory__DOT__ram__DOT__offset_a)])));
    if ((1U == (IData)(vlSelf->offset))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 8U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 8U));
    } else if ((2U == (IData)(vlSelf->offset))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 0x10U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelf->offset))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 0x10U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__dout 
                                                   >> 0x18U));
    } else {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & vlSelf->top_memory__DOT__dout);
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & vlSelf->top_memory__DOT__dout);
    }
    if (vlSelf->s) {
        vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign 
            = (1U & ((IData)(vlSelf->top_memory__DOT__hbw__DOT__h) 
                     >> 0xfU));
        vlSelf->top_memory__DOT__hbw__DOT__he = ((IData)(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign)
                                                  ? 
                                                 (0xffff0000U 
                                                  | (IData)(vlSelf->top_memory__DOT__hbw__DOT__h))
                                                  : (IData)(vlSelf->top_memory__DOT__hbw__DOT__h));
        vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign 
            = (1U & ((IData)(vlSelf->top_memory__DOT__hbw__DOT__b) 
                     >> 7U));
        vlSelf->top_memory__DOT__hbw__DOT__be = ((IData)(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign)
                                                  ? 
                                                 (0xffffff00U 
                                                  | (IData)(vlSelf->top_memory__DOT__hbw__DOT__b))
                                                  : (IData)(vlSelf->top_memory__DOT__hbw__DOT__b));
    } else {
        vlSelf->top_memory__DOT__hbw__DOT__he = vlSelf->top_memory__DOT__hbw__DOT__h;
        vlSelf->top_memory__DOT__hbw__DOT__be = vlSelf->top_memory__DOT__hbw__DOT__b;
    }
    vlSelf->readData_M = ((IData)(vlSelf->lh) ? vlSelf->top_memory__DOT__hbw__DOT__he
                           : ((IData)(vlSelf->lb) ? vlSelf->top_memory__DOT__hbw__DOT__be
                               : ((IData)(vlSelf->lw)
                                   ? vlSelf->top_memory__DOT__dout
                                   : 0U)));
}

VL_ATTR_COLD void Vtop_memory___024root___eval_initial(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___eval_initial\n"); );
    // Body
    Vtop_memory___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_memory___024root___eval_settle(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___eval_settle\n"); );
    // Body
    Vtop_memory___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop_memory___024root___final(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_memory___024root___ctor_var_reset(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->sw = VL_RAND_RESET_I(1);
    vlSelf->sh = VL_RAND_RESET_I(1);
    vlSelf->sb = VL_RAND_RESET_I(1);
    vlSelf->lw = VL_RAND_RESET_I(1);
    vlSelf->lh = VL_RAND_RESET_I(1);
    vlSelf->lb = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->offset = VL_RAND_RESET_I(2);
    vlSelf->ALUResult_M = VL_RAND_RESET_I(32);
    vlSelf->writeData_M = VL_RAND_RESET_I(32);
    vlSelf->readData_M = VL_RAND_RESET_I(32);
    vlSelf->top_memory__DOT__dout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_memory__DOT__ram__DOT__offset_a = VL_RAND_RESET_I(32);
    vlSelf->top_memory__DOT__hbw__DOT__he = VL_RAND_RESET_I(32);
    vlSelf->top_memory__DOT__hbw__DOT__be = VL_RAND_RESET_I(32);
    vlSelf->top_memory__DOT__hbw__DOT__h = VL_RAND_RESET_I(16);
    vlSelf->top_memory__DOT__hbw__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
