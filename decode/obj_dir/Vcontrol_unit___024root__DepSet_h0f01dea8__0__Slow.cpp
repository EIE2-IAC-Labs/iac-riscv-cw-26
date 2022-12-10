// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "verilated.h"

#include "Vcontrol_unit___024root.h"

VL_ATTR_COLD void Vcontrol_unit___024root___initial__TOP__0(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->control_unit__DOT__main_control__DOT__instr = 0U;
}

VL_ATTR_COLD void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_initial\n"); );
    // Body
    Vcontrol_unit___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcontrol_unit___024root___combo__TOP__0(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    // Body
    Vcontrol_unit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcontrol_unit___024root___final(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___final\n"); );
}

VL_ATTR_COLD void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->ALUsrcD = VL_RAND_RESET_I(1);
    vlSelf->ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->BranchD = VL_RAND_RESET_I(3);
    vlSelf->JumpD = VL_RAND_RESET_I(1);
    vlSelf->R_size = VL_RAND_RESET_I(3);
    vlSelf->DMem_size = VL_RAND_RESET_I(3);
    vlSelf->ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->control_unit__DOT__main_control__DOT__instr = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
