// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_decoder.h for the primary calling header

#include "verilated.h"

#include "Vmain_decoder___024root.h"

VL_ATTR_COLD void Vmain_decoder___024root___initial__TOP__0(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->main_decoder__DOT__instr = 0U;
}

VL_ATTR_COLD void Vmain_decoder___024root___eval_initial(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_initial\n"); );
    // Body
    Vmain_decoder___024root___initial__TOP__0(vlSelf);
}

void Vmain_decoder___024root___combo__TOP__0(Vmain_decoder___024root* vlSelf);

VL_ATTR_COLD void Vmain_decoder___024root___eval_settle(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_settle\n"); );
    // Body
    Vmain_decoder___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmain_decoder___024root___final(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___final\n"); );
}

VL_ATTR_COLD void Vmain_decoder___024root___ctor_var_reset(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->ALUsrcD = VL_RAND_RESET_I(1);
    vlSelf->ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->BranchD = VL_RAND_RESET_I(1);
    vlSelf->JumpD = VL_RAND_RESET_I(1);
    vlSelf->ALUOp = VL_RAND_RESET_I(2);
    vlSelf->R_size = VL_RAND_RESET_I(3);
    vlSelf->DMem_size = VL_RAND_RESET_I(3);
    vlSelf->jalr_o = VL_RAND_RESET_I(1);
    vlSelf->lui_o = VL_RAND_RESET_I(1);
    vlSelf->load_extend_s = VL_RAND_RESET_I(1);
    vlSelf->main_decoder__DOT__instr = 0;
}
