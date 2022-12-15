// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_execute__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                         ? vlSelf->ImmOp
                                         : vlSelf->RD2);
    if ((4U & (IData)(vlSelf->ALUctrl))) {
        if ((2U & (IData)(vlSelf->ALUctrl))) {
            if ((1U & (IData)(vlSelf->ALUctrl))) {
                vlSelf->ALUout = ((0x1fU >= vlSelf->top_execute__DOT__ALUop2)
                                   ? (vlSelf->RD1 << vlSelf->top_execute__DOT__ALUop2)
                                   : 0U);
                vlSelf->top_execute__DOT__EQ = (vlSelf->RD1 
                                                >= vlSelf->top_execute__DOT__ALUop2);
            } else {
                vlSelf->ALUout = ((8U & (IData)(vlSelf->ALUctrl))
                                   ? ((0x1fU >= vlSelf->top_execute__DOT__ALUop2)
                                       ? (vlSelf->RD1 
                                          >> vlSelf->top_execute__DOT__ALUop2)
                                       : 0U) : ((0x1fU 
                                                 >= vlSelf->top_execute__DOT__ALUop2)
                                                 ? 
                                                (vlSelf->RD1 
                                                 >> vlSelf->top_execute__DOT__ALUop2)
                                                 : 0U));
                vlSelf->top_execute__DOT__EQ = (vlSelf->RD1 
                                                < vlSelf->top_execute__DOT__ALUop2);
            }
        } else if ((1U & (IData)(vlSelf->ALUctrl))) {
            vlSelf->ALUout = ((vlSelf->RD1 < vlSelf->top_execute__DOT__ALUop2)
                               ? 1U : 0U);
            vlSelf->top_execute__DOT__EQ = VL_GTES_III(32, vlSelf->RD1, vlSelf->top_execute__DOT__ALUop2);
        } else {
            vlSelf->ALUout = (vlSelf->RD1 ^ vlSelf->top_execute__DOT__ALUop2);
            vlSelf->top_execute__DOT__EQ = VL_LTS_III(32, vlSelf->RD1, vlSelf->top_execute__DOT__ALUop2);
        }
    } else {
        vlSelf->ALUout = ((2U & (IData)(vlSelf->ALUctrl))
                           ? ((1U & (IData)(vlSelf->ALUctrl))
                               ? (vlSelf->RD1 | vlSelf->top_execute__DOT__ALUop2)
                               : (vlSelf->RD1 & vlSelf->top_execute__DOT__ALUop2))
                           : ((1U & (IData)(vlSelf->ALUctrl))
                               ? ((0x1fU >= vlSelf->top_execute__DOT__ALUop2)
                                   ? (vlSelf->RD1 << vlSelf->top_execute__DOT__ALUop2)
                                   : 0U) : ((8U & (IData)(vlSelf->ALUctrl))
                                             ? (vlSelf->RD1 
                                                - vlSelf->top_execute__DOT__ALUop2)
                                             : (vlSelf->RD1 
                                                + vlSelf->top_execute__DOT__ALUop2))));
        if ((1U & (~ ((IData)(vlSelf->ALUctrl) >> 1U)))) {
            vlSelf->top_execute__DOT__EQ = ((1U & (IData)(vlSelf->ALUctrl))
                                             ? (vlSelf->RD1 
                                                != vlSelf->top_execute__DOT__ALUop2)
                                             : (vlSelf->RD1 
                                                == vlSelf->top_execute__DOT__ALUop2));
        }
    }
    vlSelf->top_execute__DOT__pc_src__DOT__and_result 
        = ((IData)(vlSelf->branch_E) & (IData)(vlSelf->top_execute__DOT__EQ));
    vlSelf->PCsrc_E = ((IData)(vlSelf->top_execute__DOT__pc_src__DOT__and_result) 
                       | (IData)(vlSelf->jump_E));
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf0U))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->jump_E & 0xfeU))) {
        Verilated::overWidthError("jump_E");}
    if (VL_UNLIKELY((vlSelf->branch_E & 0xfeU))) {
        Verilated::overWidthError("branch_E");}
}
#endif  // VL_DEBUG
