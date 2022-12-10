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
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v2;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v4;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v5;
    SData/*12:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v6;
    // Body
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v2 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v4 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v5 = 0U;
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v6 = 0U;
    if (vlSelf->sb) {
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__0 
            = (0xffU & vlSelf->writeData_M);
        if ((0xfffU >= (0x1fffU & (vlSelf->ALUResult_M 
                                   - (IData)(0x1000U))))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__0;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0 
                = (0x1fffU & (vlSelf->ALUResult_M - (IData)(0x1000U)));
        }
    } else if (vlSelf->sh) {
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__1 
            = (0xffU & vlSelf->writeData_M);
        if ((0xfffU >= (0x1fffU & (vlSelf->ALUResult_M 
                                   - (IData)(0x1000U))))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__1;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1 
                = (0x1fffU & (vlSelf->ALUResult_M - (IData)(0x1000U)));
        }
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h159ea9a8__0 
            = (0xffU & (vlSelf->writeData_M >> 8U));
        if ((0xfffU >= (0x1fffU & ((IData)(0x1001U) 
                                   + vlSelf->ALUResult_M)))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h159ea9a8__0;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v2 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2 
                = (0x1fffU & ((IData)(0x1001U) + vlSelf->ALUResult_M));
        }
    } else if (vlSelf->sw) {
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__2 
            = (0xffU & vlSelf->writeData_M);
        if ((0xfffU >= (0x1fffU & (vlSelf->ALUResult_M 
                                   - (IData)(0x1000U))))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_ha0ce625e__2;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3 
                = (0x1fffU & (vlSelf->ALUResult_M - (IData)(0x1000U)));
        }
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h159ea9a8__1 
            = (0xffU & (vlSelf->writeData_M >> 8U));
        if ((0xfffU >= (0x1fffU & ((IData)(0x1001U) 
                                   + vlSelf->ALUResult_M)))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h159ea9a8__1;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v4 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4 
                = (0x1fffU & ((IData)(0x1001U) + vlSelf->ALUResult_M));
        }
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h1550fc18__0 
            = (0xffU & (vlSelf->writeData_M >> 0x10U));
        if ((0xfffU >= (0x1fffU & ((IData)(0x1002U) 
                                   + vlSelf->ALUResult_M)))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h1550fc18__0;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v5 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5 
                = (0x1fffU & ((IData)(0x1002U) + vlSelf->ALUResult_M));
        }
        vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h15512b87__0 
            = (vlSelf->writeData_M >> 0x18U);
        if ((0xfffU >= (0x1fffU & ((IData)(0x1003U) 
                                   + vlSelf->ALUResult_M)))) {
            __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6 
                = vlSelf->top_memory__DOT__ram__DOT____Vlvbound_h15512b87__0;
            __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v6 = 1U;
            __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6 
                = (0x1fffU & ((IData)(0x1003U) + vlSelf->ALUResult_M));
        }
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v1) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v2) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v3) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v4) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v4] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v4;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v5) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v5] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v5;
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v6) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v6] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v6;
    }
}

VL_INLINE_OPT void Vtop_memory___024root___combo__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_memory__DOT__dout = ((((0xfffU >= (0x1fffU 
                                                   & ((IData)(0x1003U) 
                                                      + vlSelf->ALUResult_M)))
                                        ? vlSelf->top_memory__DOT__ram__DOT__ram_array
                                       [(0x1fffU & 
                                         ((IData)(0x1003U) 
                                          + vlSelf->ALUResult_M))]
                                        : 0U) << 0x18U) 
                                     | ((((0xfffU >= 
                                           (0x1fffU 
                                            & ((IData)(0x1002U) 
                                               + vlSelf->ALUResult_M)))
                                           ? vlSelf->top_memory__DOT__ram__DOT__ram_array
                                          [(0x1fffU 
                                            & ((IData)(0x1002U) 
                                               + vlSelf->ALUResult_M))]
                                           : 0U) << 0x10U) 
                                        | ((((0xfffU 
                                              >= (0x1fffU 
                                                  & ((IData)(0x1001U) 
                                                     + vlSelf->ALUResult_M)))
                                              ? vlSelf->top_memory__DOT__ram__DOT__ram_array
                                             [(0x1fffU 
                                               & ((IData)(0x1001U) 
                                                  + vlSelf->ALUResult_M))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0xfffU 
                                               >= (0x1fffU 
                                                   & (vlSelf->ALUResult_M 
                                                      - (IData)(0x1000U))))
                                               ? vlSelf->top_memory__DOT__ram__DOT__ram_array
                                              [(0x1fffU 
                                                & (vlSelf->ALUResult_M 
                                                   - (IData)(0x1000U)))]
                                               : 0U))));
    vlSelf->readData_M = ((IData)(vlSelf->lh) ? (0xffffU 
                                                 & vlSelf->top_memory__DOT__dout)
                           : ((IData)(vlSelf->lb) ? 
                              (0xffU & vlSelf->top_memory__DOT__dout)
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
}
#endif  // VL_DEBUG
