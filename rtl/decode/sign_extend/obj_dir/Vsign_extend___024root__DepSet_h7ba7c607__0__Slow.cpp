// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_extend.h for the primary calling header

#include "verilated.h"

#include "Vsign_extend___024root.h"

VL_ATTR_COLD void Vsign_extend___024root___eval_initial(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval_initial\n"); );
}

void Vsign_extend___024root___combo__TOP__0(Vsign_extend___024root* vlSelf);

VL_ATTR_COLD void Vsign_extend___024root___eval_settle(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval_settle\n"); );
    // Body
    Vsign_extend___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsign_extend___024root___final(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___final\n"); );
}

VL_ATTR_COLD void Vsign_extend___024root___ctor_var_reset(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->InstrD = VL_RAND_RESET_I(32);
    vlSelf->ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1 = VL_RAND_RESET_I(12);
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui = VL_RAND_RESET_I(20);
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal = VL_RAND_RESET_I(20);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
