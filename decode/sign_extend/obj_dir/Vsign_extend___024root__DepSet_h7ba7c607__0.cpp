// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_extend.h for the primary calling header

#include "verilated.h"

#include "Vsign_extend___024root.h"

VL_INLINE_OPT void Vsign_extend___024root___combo__TOP__0(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1 = 0U;
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui = 0U;
    vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal = 0U;
    if ((0U == (IData)(vlSelf->ImmSrcD))) {
        vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1 
            = (vlSelf->InstrD >> 0x14U);
    } else if ((1U == (IData)(vlSelf->ImmSrcD))) {
        vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui 
            = (vlSelf->InstrD >> 0xcU);
    } else if ((2U == (IData)(vlSelf->ImmSrcD))) {
        vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1 
            = ((0xfe0U & (vlSelf->InstrD >> 0x14U)) 
               | (0x1fU & (vlSelf->InstrD >> 7U)));
    } else if ((3U == (IData)(vlSelf->ImmSrcD))) {
        vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1 
            = ((0x800U & (vlSelf->InstrD >> 0x14U)) 
               | ((0x400U & (vlSelf->InstrD << 3U)) 
                  | ((0x3f0U & (vlSelf->InstrD >> 0x15U)) 
                     | (0xfU & (vlSelf->InstrD >> 8U)))));
    } else if ((4U == (IData)(vlSelf->ImmSrcD))) {
        vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal 
            = ((0x80000U & (vlSelf->InstrD >> 0xcU)) 
               | ((0x7f800U & (vlSelf->InstrD >> 1U)) 
                  | ((0x400U & (vlSelf->InstrD >> 0xaU)) 
                     | (0x3ffU & (vlSelf->InstrD >> 0x15U)))));
    }
    vlSelf->ImmExtD = ((((0U == (IData)(vlSelf->ImmSrcD)) 
                         | (2U == (IData)(vlSelf->ImmSrcD))) 
                        | (3U == (IData)(vlSelf->ImmSrcD)))
                        ? ((0x800U & (IData)(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1))
                            ? (0xfffff000U | (IData)(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1))
                            : (IData)(vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_1))
                        : ((4U == (IData)(vlSelf->ImmSrcD))
                            ? ((0x80000U & vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal)
                                ? (0xfff00000U | vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal)
                                : vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_jal)
                            : ((1U == (IData)(vlSelf->ImmSrcD))
                                ? (vlSelf->sign_extend__DOT__unnamedblk1__DOT__imm_type_lui 
                                   << 0xcU) : 0U)));
}

void Vsign_extend___024root___eval(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval\n"); );
    // Body
    Vsign_extend___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vsign_extend___024root___eval_debug_assertions(Vsign_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ImmSrcD & 0xf8U))) {
        Verilated::overWidthError("ImmSrcD");}
}
#endif  // VL_DEBUG
