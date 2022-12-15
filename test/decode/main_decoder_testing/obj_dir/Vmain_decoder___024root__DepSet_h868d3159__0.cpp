// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_decoder.h for the primary calling header

#include "verilated.h"

#include "Vmain_decoder___024root.h"

extern const VlUnpacked<IData/*31:0*/, 1024> Vmain_decoder__ConstPool__TABLE_h23a0d96f_0;

VL_INLINE_OPT void Vmain_decoder___024root___combo__TOP__0(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___combo__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->funct3) << 7U) 
                    | (IData)(vlSelf->opcode));
    vlSelf->main_decoder__DOT__instr = Vmain_decoder__ConstPool__TABLE_h23a0d96f_0
        [__Vtableidx1];
    vlSelf->lui_o = (5U == vlSelf->main_decoder__DOT__instr);
    vlSelf->JumpD = ((8U == vlSelf->main_decoder__DOT__instr) 
                     | (9U == vlSelf->main_decoder__DOT__instr));
    vlSelf->BranchD = (7U == vlSelf->main_decoder__DOT__instr);
    vlSelf->ImmSrcD = ((5U == vlSelf->main_decoder__DOT__instr)
                        ? 1U : ((6U == vlSelf->main_decoder__DOT__instr)
                                 ? 2U : ((7U == vlSelf->main_decoder__DOT__instr)
                                          ? 3U : ((8U 
                                                   == vlSelf->main_decoder__DOT__instr)
                                                   ? 4U
                                                   : 0U))));
    vlSelf->ALUsrcD = (((((2U == vlSelf->main_decoder__DOT__instr) 
                          | (3U == vlSelf->main_decoder__DOT__instr)) 
                         | (4U == vlSelf->main_decoder__DOT__instr)) 
                        | (5U == vlSelf->main_decoder__DOT__instr)) 
                       | (6U == vlSelf->main_decoder__DOT__instr));
    if ((4U == vlSelf->main_decoder__DOT__instr)) {
        vlSelf->ResultSrcD = 1U;
        vlSelf->ALUOp = 0U;
        vlSelf->R_size = 0U;
        vlSelf->DMem_size = ((4U & (IData)(vlSelf->funct3))
                              ? ((2U & (IData)(vlSelf->funct3))
                                  ? 4U : ((1U & (IData)(vlSelf->funct3))
                                           ? 2U : 1U))
                              : ((2U & (IData)(vlSelf->funct3))
                                  ? 4U : ((1U & (IData)(vlSelf->funct3))
                                           ? 2U : 1U)));
        vlSelf->load_extend_s = ((1U == (IData)(vlSelf->funct3)) 
                                 | (0U == (IData)(vlSelf->funct3)));
    } else {
        vlSelf->ResultSrcD = ((8U == vlSelf->main_decoder__DOT__instr)
                               ? 2U : ((9U == vlSelf->main_decoder__DOT__instr)
                                        ? 2U : 0U));
        if ((6U == vlSelf->main_decoder__DOT__instr)) {
            vlSelf->ALUOp = 0U;
            vlSelf->R_size = ((2U == (IData)(vlSelf->funct3))
                               ? 4U : ((1U == (IData)(vlSelf->funct3))
                                        ? 2U : ((0U 
                                                 == (IData)(vlSelf->funct3))
                                                 ? 1U
                                                 : 0U)));
        } else {
            vlSelf->ALUOp = ((7U == vlSelf->main_decoder__DOT__instr)
                              ? 1U : ((1U == vlSelf->main_decoder__DOT__instr)
                                       ? 2U : 3U));
            vlSelf->R_size = 0U;
        }
        vlSelf->DMem_size = 4U;
    }
    vlSelf->jalr_o = (9U == vlSelf->main_decoder__DOT__instr);
    vlSelf->RegWriteD = (((((((1U == vlSelf->main_decoder__DOT__instr) 
                              | (2U == vlSelf->main_decoder__DOT__instr)) 
                             | (3U == vlSelf->main_decoder__DOT__instr)) 
                            | (4U == vlSelf->main_decoder__DOT__instr)) 
                           | (5U == vlSelf->main_decoder__DOT__instr)) 
                          | (8U == vlSelf->main_decoder__DOT__instr)) 
                         | (9U == vlSelf->main_decoder__DOT__instr));
}

void Vmain_decoder___024root___eval(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval\n"); );
    // Body
    Vmain_decoder___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vmain_decoder___024root___eval_debug_assertions(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
}
#endif  // VL_DEBUG
