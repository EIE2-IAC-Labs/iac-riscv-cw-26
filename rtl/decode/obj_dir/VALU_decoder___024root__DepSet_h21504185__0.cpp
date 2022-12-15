// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_decoder.h for the primary calling header

#include "verilated.h"

#include "VALU_decoder___024root.h"

VL_INLINE_OPT void VALU_decoder___024root___combo__TOP__0(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ALUControlD = ((0U == (IData)(vlSelf->ALUOp))
                            ? 0U : ((1U == (IData)(vlSelf->ALUOp))
                                     ? (IData)(vlSelf->funct3)
                                     : ((4U & (IData)(vlSelf->funct3))
                                         ? ((2U & (IData)(vlSelf->funct3))
                                             ? ((1U 
                                                 & (IData)(vlSelf->funct3))
                                                 ? 
                                                (2U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U))
                                                 : 
                                                (3U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U)))
                                             : ((1U 
                                                 & (IData)(vlSelf->funct3))
                                                 ? 
                                                (6U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U))
                                                 : 
                                                (4U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U))))
                                         : ((2U & (IData)(vlSelf->funct3))
                                             ? ((1U 
                                                 & (IData)(vlSelf->funct3))
                                                 ? 
                                                (7U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U))
                                                 : 
                                                (5U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U)))
                                             : ((1U 
                                                 & (IData)(vlSelf->funct3))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->funct7_bit) 
                                                    << 3U))
                                                 : 
                                                ((IData)(vlSelf->funct7_bit) 
                                                 << 3U))))));
    VL_WRITEF("ALUOP = %b \nFunct3 = %b \nFunct7 = %b \nALUControlD = %b \n \n",
              2,vlSelf->ALUOp,3,(IData)(vlSelf->funct3),
              1,vlSelf->funct7_bit,4,(IData)(vlSelf->ALUControlD));
}

void VALU_decoder___024root___eval(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___eval\n"); );
    // Body
    VALU_decoder___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VALU_decoder___024root___eval_debug_assertions(VALU_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_decoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUOp & 0xfcU))) {
        Verilated::overWidthError("ALUOp");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelf->funct7_bit & 0xfeU))) {
        Verilated::overWidthError("funct7_bit");}
}
#endif  // VL_DEBUG
