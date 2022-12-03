// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hbc5d0c3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h988c0e14__0;
    // Body
    VL_WRITEF("Loading instructions.\n");
    __Vtemp_hbc5d0c3d__0[0U] = 0x2e6d656dU;
    __Vtemp_hbc5d0c3d__0[1U] = 0x696f6e73U;
    __Vtemp_hbc5d0c3d__0[2U] = 0x72756374U;
    __Vtemp_hbc5d0c3d__0[3U] = 0x696e7374U;
    __Vtemp_hbc5d0c3d__0[4U] = 0x7463682fU;
    __Vtemp_hbc5d0c3d__0[5U] = 0x6665U;
    VL_READMEM_N(true, 8, 28, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hbc5d0c3d__0)
                 ,  &(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loading data memory.\n");
    __Vtemp_h988c0e14__0[0U] = 0x2e6d656dU;
    __Vtemp_h988c0e14__0[1U] = 0x6172616dU;
    __Vtemp_h988c0e14__0[2U] = 0x2f646174U;
    __Vtemp_h988c0e14__0[3U] = 0x616c75U;
    VL_READMEM_N(true, 32, 10000, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h988c0e14__0)
                 ,  &(vlSelf->top__DOT__aluTop__DOT__ram__DOT__ram_array)
                 , 0, ~0ULL);
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
        [0xaU];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1 
        = ((0x1bU >= (0x1fU & vlSelf->top__DOT__PC_F))
            ? vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
           [(0x1fU & vlSelf->top__DOT__PC_F)] : 0U);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2 
        = ((0x1bU >= (0x1fU & ((IData)(1U) + vlSelf->top__DOT__PC_F)))
            ? vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
           [(0x1fU & ((IData)(1U) + vlSelf->top__DOT__PC_F))]
            : 0U);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3 
        = ((0x1bU >= (0x1fU & ((IData)(2U) + vlSelf->top__DOT__PC_F)))
            ? vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
           [(0x1fU & ((IData)(2U) + vlSelf->top__DOT__PC_F))]
            : 0U);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4 
        = ((0x1bU >= (0x1fU & ((IData)(3U) + vlSelf->top__DOT__PC_F)))
            ? vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
           [(0x1fU & ((IData)(3U) + vlSelf->top__DOT__PC_F))]
            : 0U);
    vlSelf->top__DOT__instr_F = (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1) 
                                  << 0x18U) | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4))));
    vlSelf->top__DOT__RD1_D = vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr_F >> 0xfU))];
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr 
        = ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__instr_F)))
            ? 1U : ((IData)((0x1063U == (0x707fU & vlSelf->top__DOT__instr_F)))
                     ? 2U : ((IData)((0x2003U == (0x707fU 
                                                  & vlSelf->top__DOT__instr_F)))
                              ? 3U : 0U)));
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm 
        = (0xfffU & ((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)
                      ? ((0x800U & (vlSelf->top__DOT__instr_F 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlSelf->top__DOT__instr_F 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlSelf->top__DOT__instr_F 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlSelf->top__DOT__instr_F 
                                                           >> 8U)))))
                      : (vlSelf->top__DOT__instr_F 
                         >> 0x14U)));
    vlSelf->top__DOT__ImmExt_D = ((0x800U & (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm))
                                   ? (0xfffff000U | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm))
                                   : (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm));
    vlSelf->top__DOT__aluTop__DOT__ALUop2 = (((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                                              | (3U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr))
                                              ? vlSelf->top__DOT__ImmExt_D
                                              : vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                             [(0x1fU 
                                               & (vlSelf->top__DOT__instr_F 
                                                  >> 0x14U))]);
    vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__RD1_D 
                                   + vlSelf->top__DOT__aluTop__DOT__ALUop2);
    vlSelf->top__DOT__top_fetch__DOT__next_PC = (((2U 
                                                   == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                                                  & (vlSelf->top__DOT__RD1_D 
                                                     != vlSelf->top__DOT__aluTop__DOT__ALUop2))
                                                  ? 
                                                 (vlSelf->top__DOT__PC_F 
                                                  + 
                                                  (vlSelf->top__DOT__ImmExt_D 
                                                   << 1U))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC_F));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExt_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_fetch__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr = 0;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__aluTop__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<10000; ++__Vi0) {
        vlSelf->top__DOT__aluTop__DOT__ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
