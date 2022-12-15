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
}

void Vcontrol_unit___024root___combo__TOP__0(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_settle\n"); );
    // Body
    Vcontrol_unit___024root___combo__TOP__0(vlSelf);
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
    vlSelf->ALUsrcD = VL_RAND_RESET_I(1);
    vlSelf->ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->BranchD = VL_RAND_RESET_I(1);
    vlSelf->JumpD = VL_RAND_RESET_I(1);
    vlSelf->R_size = VL_RAND_RESET_I(3);
    vlSelf->DMem_size = VL_RAND_RESET_I(3);
    vlSelf->ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->jalr = VL_RAND_RESET_I(1);
    vlSelf->lui = VL_RAND_RESET_I(1);
    vlSelf->load_extend_s = VL_RAND_RESET_I(1);
    vlSelf->control_unit__DOT__main_control__DOT__instr = 0;
}
