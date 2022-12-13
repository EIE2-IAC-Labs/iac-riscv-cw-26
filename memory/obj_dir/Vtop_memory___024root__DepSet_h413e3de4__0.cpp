// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_memory.h for the primary calling header

#include "verilated.h"

#include "Vtop_memory___024root.h"

VL_INLINE_OPT void Vtop_memory___024root___sequent__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6;
    // Body
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3 = 0U;
    if (vlSelf->sb) {
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0xffU & vlSelf->writeData_M);
        __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0x1ffffU & vlSelf->ALUResult_M);
    } else if (vlSelf->sh) {
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0xffU & vlSelf->writeData_M);
        __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1 = 1U;
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0x1ffffU & vlSelf->ALUResult_M);
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0xffU & (vlSelf->writeData_M >> 8U));
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->ALUResult_M));
    } else if (vlSelf->sw) {
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0xffU & vlSelf->writeData_M);
        __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3 = 1U;
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0x1ffffU & vlSelf->ALUResult_M);
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0xffU & (vlSelf->writeData_M >> 8U));
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0x1ffffU & ((IData)(1U) + vlSelf->ALUResult_M));
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0xffU & (vlSelf->writeData_M >> 0x10U));
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0x1ffffU & ((IData)(2U) + vlSelf->ALUResult_M));
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6 
            = (vlSelf->writeData_M >> 0x18U);
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6 
            = (0x1ffffU & ((IData)(3U) + vlSelf->ALUResult_M));
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6;
    }
}

VL_INLINE_OPT void Vtop_memory___024root___combo__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_memory__DOT__dout = ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlSelf->ALUResult_M))] 
                                      << 0x18U) | (
                                                   (vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->ALUResult_M))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->ALUResult_M))] 
                                                       << 8U) 
                                                      | vlSelf->top_memory__DOT__ram__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->ALUResult_M)])));
    if (vlSelf->s) {
        vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign 
            = (1U & (vlSelf->top_memory__DOT__dout 
                     >> 7U));
        vlSelf->top_memory__DOT__hbw__DOT__be = (((- (IData)((IData)(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top_memory__DOT__dout));
    } else {
        vlSelf->top_memory__DOT__hbw__DOT__be = (0xffU 
                                                 & vlSelf->top_memory__DOT__dout);
    }
    vlSelf->readData_M = ((IData)(vlSelf->lh) ? (0xffffU 
                                                 & vlSelf->top_memory__DOT__dout)
                           : ((IData)(vlSelf->lb) ? vlSelf->top_memory__DOT__hbw__DOT__be
                               : ((IData)(vlSelf->lw)
                                   ? vlSelf->top_memory__DOT__dout
                                   : 0U)));
}

void Vtop_memory___024root___eval(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_memory___024root___sequent__TOP__0(vlSelf);
    }
    Vtop_memory___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop_memory___024root___eval_debug_assertions(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->sw & 0xfeU))) {
        Verilated::overWidthError("sw");}
    if (VL_UNLIKELY((vlSelf->sh & 0xfeU))) {
        Verilated::overWidthError("sh");}
    if (VL_UNLIKELY((vlSelf->sb & 0xfeU))) {
        Verilated::overWidthError("sb");}
    if (VL_UNLIKELY((vlSelf->lw & 0xfeU))) {
        Verilated::overWidthError("lw");}
    if (VL_UNLIKELY((vlSelf->lh & 0xfeU))) {
        Verilated::overWidthError("lh");}
    if (VL_UNLIKELY((vlSelf->lb & 0xfeU))) {
        Verilated::overWidthError("lb");}
    if (VL_UNLIKELY((vlSelf->s & 0xfeU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
