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
    CData/*5:0*/ __Vdlyvdim0__top_memory__DOT__cache__DOT__cache_array__v0;
    QData/*58:0*/ __Vdlyvval__top_memory__DOT__cache__DOT__cache_array__v0;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__cache__DOT__cache_array__v0;
    CData/*4:0*/ __Vdlyvdim0__top_memory__DOT__cache__DOT__LRU_array__v0;
    CData/*0:0*/ __Vdlyvval__top_memory__DOT__cache__DOT__LRU_array__v0;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__cache__DOT__LRU_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
    // Body
    __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top_memory__DOT__cache__DOT__LRU_array__v0 = 0U;
    __Vdlyvset__top_memory__DOT__cache__DOT__cache_array__v0 = 0U;
    if (vlSelf->top_memory__DOT__cache_evict) {
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0xffU & vlSelf->top_memory__DOT__cache_out);
        __Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0x1ffffU & vlSelf->top_memory__DOT__cache_addr_out);
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0xffU & (vlSelf->top_memory__DOT__cache_out 
                        >> 8U));
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top_memory__DOT__cache_addr_out));
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0xffU & (vlSelf->top_memory__DOT__cache_out 
                        >> 0x10U));
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top_memory__DOT__cache_addr_out));
        __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3 
            = (vlSelf->top_memory__DOT__cache_out >> 0x18U);
        __Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top_memory__DOT__cache_addr_out));
    }
    if (((IData)(vlSelf->top_memory__DOT__loadIns) 
         | (IData)(vlSelf->top_memory__DOT__storeIns))) {
        __Vdlyvval__top_memory__DOT__cache__DOT__LRU_array__v0 
            = vlSelf->top_memory__DOT__cache__DOT__target_way;
        __Vdlyvset__top_memory__DOT__cache__DOT__LRU_array__v0 = 1U;
        __Vdlyvdim0__top_memory__DOT__cache__DOT__LRU_array__v0 
            = (0x1fU & (vlSelf->ALUResult_M >> 2U));
    }
    if ((((IData)(vlSelf->top_memory__DOT__loadIns) 
          & (~ (IData)(vlSelf->top_memory__DOT__cache_hit))) 
         | (IData)(vlSelf->top_memory__DOT__storeIns))) {
        __Vdlyvval__top_memory__DOT__cache__DOT__cache_array__v0 
            = (0x400000000000000ULL | (((QData)((IData)(vlSelf->top_memory__DOT__storeIns)) 
                                        << 0x39U) | 
                                       (((QData)((IData)(vlSelf->top_memory__DOT__cache__DOT__tag_in)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_memory__DOT__cache__DOT__din)))));
        __Vdlyvset__top_memory__DOT__cache__DOT__cache_array__v0 = 1U;
        __Vdlyvdim0__top_memory__DOT__cache__DOT__cache_array__v0 
            = (((IData)(vlSelf->top_memory__DOT__cache__DOT__set) 
                << 1U) | (IData)(vlSelf->top_memory__DOT__cache__DOT__target_way));
    }
    if (__Vdlyvset__top_memory__DOT__ram__DOT__ram_array__v0) {
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v0;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v1] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v1;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v2] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v2;
        vlSelf->top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top_memory__DOT__ram__DOT__ram_array__v3] 
            = __Vdlyvval__top_memory__DOT__ram__DOT__ram_array__v3;
    }
    if (__Vdlyvset__top_memory__DOT__cache__DOT__LRU_array__v0) {
        vlSelf->top_memory__DOT__cache__DOT__LRU_array[__Vdlyvdim0__top_memory__DOT__cache__DOT__LRU_array__v0] 
            = __Vdlyvval__top_memory__DOT__cache__DOT__LRU_array__v0;
    }
    if (__Vdlyvset__top_memory__DOT__cache__DOT__cache_array__v0) {
        vlSelf->top_memory__DOT__cache__DOT__cache_array[__Vdlyvdim0__top_memory__DOT__cache__DOT__cache_array__v0] 
            = __Vdlyvval__top_memory__DOT__cache__DOT__cache_array__v0;
    }
}

VL_INLINE_OPT void Vtop_memory___024root___combo__TOP__0(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_memory__DOT__loadIns = (((IData)(vlSelf->lw) 
                                         | (IData)(vlSelf->lh)) 
                                        | (IData)(vlSelf->lb));
    vlSelf->top_memory__DOT__storeIns = (((IData)(vlSelf->sw) 
                                          | (IData)(vlSelf->sh)) 
                                         | (IData)(vlSelf->sb));
    vlSelf->top_memory__DOT__ram_out = ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + (0x1fffcU 
                                                 & vlSelf->ALUResult_M)))] 
                                         << 0x18U) 
                                        | ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                            [(0x1ffffU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0x1fffcU 
                                                  & vlSelf->ALUResult_M)))] 
                                            << 0x10U) 
                                           | ((vlSelf->top_memory__DOT__ram__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->ALUResult_M)))] 
                                               << 8U) 
                                              | vlSelf->top_memory__DOT__ram__DOT__ram_array
                                              [(0x1fffcU 
                                                & vlSelf->ALUResult_M)])));
    vlSelf->top_memory__DOT__cache__DOT__set = (0x1fU 
                                                & (vlSelf->ALUResult_M 
                                                   >> 2U));
    vlSelf->top_memory__DOT__cache__DOT__tag_in = (vlSelf->ALUResult_M 
                                                   >> 7U);
    vlSelf->top_memory__DOT__cache__DOT__cache_out1 
        = vlSelf->top_memory__DOT__cache__DOT__cache_array
        [((IData)(vlSelf->top_memory__DOT__cache__DOT__set) 
          << 1U)];
    vlSelf->top_memory__DOT__cache__DOT__cache_out2 
        = vlSelf->top_memory__DOT__cache__DOT__cache_array
        [(1U | ((IData)(vlSelf->top_memory__DOT__cache__DOT__set) 
                << 1U))];
    vlSelf->top_memory__DOT__cache__DOT__tag_out1 = 
        (0x1ffffffU & (IData)((vlSelf->top_memory__DOT__cache__DOT__cache_out1 
                               >> 0x20U)));
    vlSelf->top_memory__DOT__cache__DOT__tag_out2 = 
        (0x1ffffffU & (IData)((vlSelf->top_memory__DOT__cache__DOT__cache_out2 
                               >> 0x20U)));
    if ((vlSelf->top_memory__DOT__cache__DOT__tag_out1 
         == vlSelf->top_memory__DOT__cache__DOT__tag_in)) {
        vlSelf->top_memory__DOT__cache__DOT__matching_tag = 1U;
        vlSelf->top_memory__DOT__cache__DOT__target_way = 0U;
    } else if ((vlSelf->top_memory__DOT__cache__DOT__tag_out2 
                == vlSelf->top_memory__DOT__cache__DOT__tag_in)) {
        vlSelf->top_memory__DOT__cache__DOT__matching_tag = 1U;
        vlSelf->top_memory__DOT__cache__DOT__target_way = 1U;
    } else {
        vlSelf->top_memory__DOT__cache__DOT__matching_tag = 0U;
        vlSelf->top_memory__DOT__cache__DOT__target_way 
            = (1U & (~ vlSelf->top_memory__DOT__cache__DOT__LRU_array
                     [(0x1fU & (vlSelf->ALUResult_M 
                                >> 2U))]));
    }
    if (vlSelf->top_memory__DOT__cache__DOT__target_way) {
        vlSelf->top_memory__DOT__cache__DOT__cache_out 
            = vlSelf->top_memory__DOT__cache__DOT__cache_out2;
        vlSelf->top_memory__DOT__cache__DOT__tag_out 
            = vlSelf->top_memory__DOT__cache__DOT__tag_out2;
    } else {
        vlSelf->top_memory__DOT__cache__DOT__cache_out 
            = vlSelf->top_memory__DOT__cache__DOT__cache_out1;
        vlSelf->top_memory__DOT__cache__DOT__tag_out 
            = vlSelf->top_memory__DOT__cache__DOT__tag_out1;
    }
    vlSelf->top_memory__DOT__cache__DOT__valid = (1U 
                                                  & (IData)(
                                                            (vlSelf->top_memory__DOT__cache__DOT__cache_out 
                                                             >> 0x3aU)));
    vlSelf->top_memory__DOT__cache__DOT__dirty_bit 
        = (1U & (IData)((vlSelf->top_memory__DOT__cache__DOT__cache_out 
                         >> 0x39U)));
    vlSelf->top_memory__DOT__cache_out = (IData)(vlSelf->top_memory__DOT__cache__DOT__cache_out);
    vlSelf->top_memory__DOT__cache_hit = ((IData)(vlSelf->top_memory__DOT__cache__DOT__matching_tag) 
                                          & (IData)(vlSelf->top_memory__DOT__cache__DOT__valid));
    vlSelf->top_memory__DOT__cache_evict = ((((~ (IData)(vlSelf->top_memory__DOT__cache__DOT__matching_tag)) 
                                              & (IData)(vlSelf->top_memory__DOT__cache__DOT__valid)) 
                                             & (IData)(vlSelf->top_memory__DOT__cache__DOT__dirty_bit)) 
                                            & ((IData)(vlSelf->top_memory__DOT__loadIns) 
                                               | (IData)(vlSelf->top_memory__DOT__storeIns)));
    vlSelf->top_memory__DOT__cache_addr_out = ((vlSelf->top_memory__DOT__cache__DOT__tag_out 
                                                << 7U) 
                                               | ((IData)(vlSelf->top_memory__DOT__cache__DOT__set) 
                                                  << 2U));
    vlSelf->top_memory__DOT__memory_out = ((IData)(vlSelf->top_memory__DOT__cache_hit)
                                            ? vlSelf->top_memory__DOT__cache_out
                                            : vlSelf->top_memory__DOT__ram_out);
    vlSelf->top_memory__DOT__cache__DOT__din = ((IData)(vlSelf->top_memory__DOT__storeIns)
                                                 ? 
                                                ((IData)(vlSelf->sw)
                                                  ? vlSelf->writeData_M
                                                  : 
                                                 ((IData)(vlSelf->sh)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ALUResult_M)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ALUResult_M)
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->writeData_M) 
                                                     | (0xffffU 
                                                        & vlSelf->top_memory__DOT__memory_out))
                                                     : 0U)
                                                    : 
                                                   ((0xffff0000U 
                                                     & vlSelf->top_memory__DOT__memory_out) 
                                                    | (0xffffU 
                                                       & vlSelf->writeData_M)))
                                                   : 
                                                  ((IData)(vlSelf->sb)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ALUResult_M)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ALUResult_M)
                                                      ? 
                                                     ((vlSelf->writeData_M 
                                                       << 0x18U) 
                                                      | (0xffffffU 
                                                         & vlSelf->top_memory__DOT__memory_out))
                                                      : 
                                                     ((0xff000000U 
                                                       & vlSelf->top_memory__DOT__memory_out) 
                                                      | ((0xff0000U 
                                                          & (vlSelf->writeData_M 
                                                             << 0x10U)) 
                                                         | (0xffffU 
                                                            & vlSelf->top_memory__DOT__memory_out))))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->ALUResult_M)
                                                      ? 
                                                     ((0xffff0000U 
                                                       & vlSelf->top_memory__DOT__memory_out) 
                                                      | ((0xff00U 
                                                          & (vlSelf->writeData_M 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & vlSelf->top_memory__DOT__memory_out)))
                                                      : 
                                                     ((0xffffff00U 
                                                       & vlSelf->top_memory__DOT__memory_out) 
                                                      | (0xffU 
                                                         & vlSelf->writeData_M))))
                                                    : 0U)))
                                                 : vlSelf->top_memory__DOT__ram_out);
    if ((0U == (3U & vlSelf->ALUResult_M))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & vlSelf->top_memory__DOT__memory_out);
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & vlSelf->top_memory__DOT__memory_out);
    } else if ((1U == (3U & vlSelf->ALUResult_M))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 8U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 8U));
    } else if ((2U == (3U & vlSelf->ALUResult_M))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 0x10U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 0x10U));
    } else if ((3U == (3U & vlSelf->ALUResult_M))) {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 0x10U));
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & (vlSelf->top_memory__DOT__memory_out 
                                                   >> 0x18U));
    } else {
        vlSelf->top_memory__DOT__hbw__DOT__h = (0xffffU 
                                                & 0U);
        vlSelf->top_memory__DOT__hbw__DOT__b = (0xffU 
                                                & 0U);
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
                                   ? vlSelf->top_memory__DOT__memory_out
                                   : 0U)));
}

void Vtop_memory___024root___eval(Vtop_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_memory___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop_memory___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
