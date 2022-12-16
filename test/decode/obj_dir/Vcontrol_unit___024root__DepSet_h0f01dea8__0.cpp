// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "verilated.h"

#include "Vcontrol_unit___024root.h"

extern const VlUnpacked<IData/*31:0*/, 1024> Vcontrol_unit__ConstPool__TABLE_h23a0d96f_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vcontrol_unit__ConstPool__TABLE_h4fb9e2bf_0;

VL_INLINE_OPT void Vcontrol_unit___024root___combo__TOP__0(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___combo__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->funct3) << 7U) 
                    | (IData)(vlSelf->opcode));
    vlSelf->control_unit__DOT__main_control__DOT__instr 
        = Vcontrol_unit__ConstPool__TABLE_h23a0d96f_0
        [__Vtableidx1];
    vlSelf->lui = (5U == vlSelf->control_unit__DOT__main_control__DOT__instr);
    vlSelf->JumpD = ((8U == vlSelf->control_unit__DOT__main_control__DOT__instr) 
                     | (9U == vlSelf->control_unit__DOT__main_control__DOT__instr));
    vlSelf->BranchD = (7U == vlSelf->control_unit__DOT__main_control__DOT__instr);
    vlSelf->ImmSrcD = ((5U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                        ? 1U : ((6U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                 ? 2U : ((7U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                          ? 3U : ((8U 
                                                   == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                                   ? 4U
                                                   : 0U))));
    vlSelf->ALUsrcD = (((((2U == vlSelf->control_unit__DOT__main_control__DOT__instr) 
                          | (3U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                         | (4U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                        | (5U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                       | (6U == vlSelf->control_unit__DOT__main_control__DOT__instr));
    if ((4U == vlSelf->control_unit__DOT__main_control__DOT__instr)) {
        vlSelf->ResultSrcD = 1U;
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
        vlSelf->ResultSrcD = ((8U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                               ? 2U : ((9U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                        ? 2U : 0U));
        vlSelf->R_size = ((6U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                           ? ((2U == (IData)(vlSelf->funct3))
                               ? 4U : ((1U == (IData)(vlSelf->funct3))
                                        ? 2U : ((0U 
                                                 == (IData)(vlSelf->funct3))
                                                 ? 1U
                                                 : 0U)))
                           : 0U);
        vlSelf->DMem_size = 4U;
    }
    vlSelf->jalr = (9U == vlSelf->control_unit__DOT__main_control__DOT__instr);
    vlSelf->RegWriteD = (((((((1U == vlSelf->control_unit__DOT__main_control__DOT__instr) 
                              | (2U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                             | (3U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                            | (4U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                           | (5U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                          | (8U == vlSelf->control_unit__DOT__main_control__DOT__instr)) 
                         | (9U == vlSelf->control_unit__DOT__main_control__DOT__instr));
    __Vtableidx2 = ((0x20U & (IData)(vlSelf->funct7)) 
                    | (((IData)(vlSelf->funct3) << 2U) 
                       | ((4U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                           ? 0U : ((6U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                    ? 0U : ((7U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                             ? 1U : 
                                            ((1U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                              ? 2U : 3U))))));
    vlSelf->ALUControlD = Vcontrol_unit__ConstPool__TABLE_h4fb9e2bf_0
        [__Vtableidx2];
}

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    // Body
    Vcontrol_unit___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->opcode & 0x80U))) {
        Verilated::overWidthError("opcode");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
    if (VL_UNLIKELY((vlSelf->funct7 & 0x80U))) {
        Verilated::overWidthError("funct7");}
}
#endif  // VL_DEBUG
