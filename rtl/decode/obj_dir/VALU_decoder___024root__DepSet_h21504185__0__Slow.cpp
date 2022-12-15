// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_decoder.h for the primary calling header

#include "verilated.h"

#include "VALU_decoder___024root.h"

VL_ATTR_COLD void VALU_decoder___024root___eval_initial(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___eval_initial\n"); );
}

void VALU_decoder___024root___combo__TOP__0(VALU_decoder___024root* vlSelf);

VL_ATTR_COLD void VALU_decoder___024root___eval_settle(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___eval_settle\n"); );
    // Body
    VALU_decoder___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VALU_decoder___024root___final(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___final\n"); );
}

VL_ATTR_COLD void VALU_decoder___024root___ctor_var_reset(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ALUOp = VL_RAND_RESET_I(2);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7_bit = VL_RAND_RESET_I(1);
    vlSelf->ALUControlD = VL_RAND_RESET_I(4);
}
