// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__ram__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ram__DOT__ram_array__v0;
    // Body
    __Vdlyvset__top__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 = 0U;
    if (vlSelf->top__DOT__memWrite_D) {
        vlSelf->top__DOT__ram__DOT____Vlvbound_h844a59a0__0 
            = vlSelf->top__DOT__writeData;
        if ((0x270fU >= (0x3fffU & vlSelf->top__DOT__ALUResult_E))) {
            __Vdlyvval__top__DOT__ram__DOT__ram_array__v0 
                = vlSelf->top__DOT__ram__DOT____Vlvbound_h844a59a0__0;
            __Vdlyvset__top__DOT__ram__DOT__ram_array__v0 = 1U;
            __Vdlyvdim0__top__DOT__ram__DOT__ram_array__v0 
                = (0x3fffU & vlSelf->top__DOT__ALUResult_E);
        }
    }
    vlSelf->top__DOT__PC_F = ((IData)(vlSelf->rst) ? 0U
                               : vlSelf->top__DOT__top_fetch__DOT__next_PC);
    if (((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
         | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr))) {
        __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 
            = ((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)
                ? ((0x270fU >= (0x3fffU & vlSelf->top__DOT__ALUResult_E))
                    ? vlSelf->top__DOT__ram__DOT__ram_array
                   [(0x3fffU & vlSelf->top__DOT__ALUResult_E)]
                    : 0U) : vlSelf->top__DOT__ALUResult_E);
        __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->top__DOT__instr_F >> 7U));
    }
    if (__Vdlyvset__top__DOT__ram__DOT__ram_array__v0) {
        vlSelf->top__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__top__DOT__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[__Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v0] 
            = __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v0;
    }
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
    vlSelf->top__DOT__top_execute__DOT__ALUop2 = ((
                                                   (1U 
                                                    == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                                                   | (3U 
                                                      == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr))
                                                   ? vlSelf->top__DOT__ImmExt_D
                                                   : 
                                                  vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__instr_F 
                                                      >> 0x14U))]);
    vlSelf->top__DOT__ALUResult_E = (vlSelf->top__DOT__RD1_D 
                                     + vlSelf->top__DOT__top_execute__DOT__ALUop2);
    vlSelf->top__DOT__PCsrc = ((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                               & (vlSelf->top__DOT__RD1_D 
                                  != vlSelf->top__DOT__top_execute__DOT__ALUop2));
    vlSelf->top__DOT__top_fetch__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                                  ? 
                                                 (vlSelf->top__DOT__PC_F 
                                                  + 
                                                  (vlSelf->top__DOT__ImmExt_D 
                                                   << 1U))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC_F));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
