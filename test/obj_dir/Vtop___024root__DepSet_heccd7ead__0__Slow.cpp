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
    VlWide<6>/*191:0*/ __Vtemp_h0f1f9bc8__0;
    VlWide<5>/*159:0*/ __Vtemp_h332f9a87__0;
    // Body
    VL_WRITEF("Loading instructions.\n");
    __Vtemp_h0f1f9bc8__0[0U] = 0x2e686578U;
    __Vtemp_h0f1f9bc8__0[1U] = 0x6e746572U;
    __Vtemp_h0f1f9bc8__0[2U] = 0x2f636f75U;
    __Vtemp_h0f1f9bc8__0[3U] = 0x74657374U;
    __Vtemp_h0f1f9bc8__0[4U] = 0x7465725fU;
    __Vtemp_h0f1f9bc8__0[5U] = 0x636f756eU;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(6, __Vtemp_h0f1f9bc8__0)
                 ,  &(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Loading data memory.\n");
    __Vtemp_h332f9a87__0[0U] = 0x2e6d656dU;
    __Vtemp_h332f9a87__0[1U] = 0x6172616dU;
    __Vtemp_h332f9a87__0[2U] = 0x2f646174U;
    __Vtemp_h332f9a87__0[3U] = 0x6d6f7279U;
    __Vtemp_h332f9a87__0[4U] = 0x6d65U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h332f9a87__0)
                 ,  &(vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array)
                 , 0x10000U, ~0ULL);
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr = 0U;
}

extern const VlUnpacked<IData/*31:0*/, 1024> Vtop__ConstPool__TABLE_h23a0d96f_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_h4fb9e2bf_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
        [9U];
    vlSelf->top__DOT__top_execute__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc_E)
                                                   ? vlSelf->top__DOT__ImmExt_E
                                                   : vlSelf->top__DOT__RD2_E);
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__instr_D 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__instr_D));
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr 
        = Vtop__ConstPool__TABLE_h23a0d96f_0[__Vtableidx1];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & vlSelf->top__DOT__PC_F)];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(1U) + vlSelf->top__DOT__PC_F))];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(2U) + vlSelf->top__DOT__PC_F))];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__PC_F))];
    vlSelf->top__DOT__instr_F = (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4) 
                                  << 0x18U) | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1))));
    vlSelf->top__DOT__top_memory__DOT__dout = ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__ALUResult_M))] 
                                                << 0x18U) 
                                               | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->top__DOT__ALUResult_M))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->top__DOT__ALUResult_M))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->top__DOT__ALUResult_M)])));
    if ((4U & (IData)(vlSelf->top__DOT__ALUctrl_E))) {
        if ((2U & (IData)(vlSelf->top__DOT__ALUctrl_E))) {
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl_E))) {
                vlSelf->top__DOT__top_execute__DOT__ALUout1 
                    = ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        ? (vlSelf->top__DOT__RD1_E 
                           << vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        : 0U);
                vlSelf->top__DOT__top_execute__DOT__EQ 
                    = (vlSelf->top__DOT__RD1_E >= vlSelf->top__DOT__top_execute__DOT__ALUop2);
            } else {
                vlSelf->top__DOT__top_execute__DOT__ALUout1 
                    = ((8U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                        ? ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                            ? (vlSelf->top__DOT__RD1_E 
                               >> vlSelf->top__DOT__top_execute__DOT__ALUop2)
                            : 0U) : ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                      ? (vlSelf->top__DOT__RD1_E 
                                         >> vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                      : 0U));
                vlSelf->top__DOT__top_execute__DOT__EQ 
                    = (vlSelf->top__DOT__RD1_E < vlSelf->top__DOT__top_execute__DOT__ALUop2);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl_E))) {
            vlSelf->top__DOT__top_execute__DOT__ALUout1 
                = ((vlSelf->top__DOT__RD1_E < vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    ? 1U : 0U);
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = VL_GTES_III(32, vlSelf->top__DOT__RD1_E, vlSelf->top__DOT__top_execute__DOT__ALUop2);
        } else {
            vlSelf->top__DOT__top_execute__DOT__ALUout1 
                = (vlSelf->top__DOT__RD1_E ^ vlSelf->top__DOT__top_execute__DOT__ALUop2);
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = VL_LTS_III(32, vlSelf->top__DOT__RD1_E, vlSelf->top__DOT__top_execute__DOT__ALUop2);
        }
    } else {
        vlSelf->top__DOT__top_execute__DOT__ALUout1 
            = ((2U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                    ? (vlSelf->top__DOT__RD1_E | vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    : (vlSelf->top__DOT__RD1_E & vlSelf->top__DOT__top_execute__DOT__ALUop2))
                : ((1U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                    ? ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        ? (vlSelf->top__DOT__RD1_E 
                           << vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        : 0U) : ((8U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                                  ? (vlSelf->top__DOT__RD1_E 
                                     - vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                  : (vlSelf->top__DOT__RD1_E 
                                     + vlSelf->top__DOT__top_execute__DOT__ALUop2))));
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ALUctrl_E) 
                      >> 1U)))) {
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = ((1U & (IData)(vlSelf->top__DOT__ALUctrl_E))
                    ? (vlSelf->top__DOT__RD1_E != vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    : (vlSelf->top__DOT__RD1_E == vlSelf->top__DOT__top_execute__DOT__ALUop2));
        }
    }
    if ((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) {
        vlSelf->top__DOT__load_extend_s_D = ((1U == 
                                              (7U & 
                                               (vlSelf->top__DOT__instr_D 
                                                >> 0xcU))) 
                                             | (0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__instr_D 
                                                    >> 0xcU))));
    }
    __Vtableidx2 = ((0x20U & (vlSelf->top__DOT__instr_D 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->top__DOT__instr_D 
                                                >> 0xaU)) 
                                            | ((4U 
                                                == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                ? 0U
                                                : (
                                                   (6U 
                                                    == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((7U 
                                                     == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                      ? 2U
                                                      : 3U))))));
    vlSelf->top__DOT__ALUctrl_D = Vtop__ConstPool__TABLE_h4fb9e2bf_0
        [__Vtableidx2];
    vlSelf->top__DOT__top_decode__DOT__ImmSrc_D = (
                                                   (5U 
                                                    == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                     ? 2U
                                                     : 
                                                    ((7U 
                                                      == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                       ? 4U
                                                       : 0U))));
    if (vlSelf->top__DOT__load_extend_s_M) {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign 
            = (1U & (vlSelf->top__DOT__top_memory__DOT__dout 
                     >> 0xfU));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he 
            = ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign)
                ? (0xffff0000U | (0xffffU & vlSelf->top__DOT__top_memory__DOT__dout))
                : ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign)
                    ? (0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)
                    : (0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign 
            = (1U & (vlSelf->top__DOT__top_memory__DOT__dout 
                     >> 7U));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be 
            = ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign)
                ? (0xffffff00U | (0xffU & vlSelf->top__DOT__top_memory__DOT__dout))
                : ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign)
                    ? (0xffU & vlSelf->top__DOT__top_memory__DOT__dout)
                    : (0xffU & vlSelf->top__DOT__top_memory__DOT__dout)));
    } else {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he 
            = (0xffffU & vlSelf->top__DOT__top_memory__DOT__dout);
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be 
            = (0xffU & vlSelf->top__DOT__top_memory__DOT__dout);
    }
    vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result 
        = ((IData)(vlSelf->top__DOT__branch_E) & (IData)(vlSelf->top__DOT__top_execute__DOT__EQ));
    vlSelf->top__DOT__PCsrc_E = ((IData)(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result) 
                                 | (IData)(vlSelf->top__DOT__jump_E));
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 = 0U;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui = 0U;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D)))) {
                vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal 
                    = ((0x80000U & (vlSelf->top__DOT__instr_D 
                                    >> 0xcU)) | ((0x7f800U 
                                                  & (vlSelf->top__DOT__instr_D 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT__instr_D 
                                                        >> 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelf->top__DOT__instr_D 
                                                          >> 0x15U)))));
            }
        }
        vlSelf->top__DOT__ImmExt_D = ((2U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))
                                                ? 0U
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal 
                                                                   >> 0x13U)))) 
                                                    << 0x14U) 
                                                   | vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal)));
    } else if ((2U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
            vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
                = ((0x800U & (vlSelf->top__DOT__instr_D 
                              >> 0x14U)) | ((0x400U 
                                             & (vlSelf->top__DOT__instr_D 
                                                << 3U)) 
                                            | ((0x3f0U 
                                                & (vlSelf->top__DOT__instr_D 
                                                   >> 0x15U)) 
                                               | (0xfU 
                                                  & (vlSelf->top__DOT__instr_D 
                                                     >> 8U)))));
            vlSelf->top__DOT__ImmExt_D = (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                          >> 0xbU)))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
        } else {
            vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
                = ((0xfe0U & (vlSelf->top__DOT__instr_D 
                              >> 0x14U)) | (0x1fU & 
                                            (vlSelf->top__DOT__instr_D 
                                             >> 7U)));
            vlSelf->top__DOT__ImmExt_D = (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                          >> 0xbU)))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui 
            = (vlSelf->top__DOT__instr_D >> 0xcU);
        vlSelf->top__DOT__ImmExt_D = (vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui 
                                      << 0xcU);
    } else {
        vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
            = (vlSelf->top__DOT__instr_D >> 0x14U);
        vlSelf->top__DOT__ImmExt_D = (((- (IData)((1U 
                                                   & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                      >> 0xbU)))) 
                                       << 0xcU) | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
    }
    vlSelf->top__DOT__top_fetch__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc_E)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__jalr_E)
                                                   ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                                   : 
                                                  (vlSelf->top__DOT__PC_E 
                                                   + 
                                                   (vlSelf->top__DOT__ImmExt_E 
                                                    << 1U)))
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->top__DOT__instr_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExt_D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__load_extend_s_D = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUctrl_D = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__RD1_E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2_E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExt_E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4_E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regWrite_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jump_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrc_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsrc_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalr_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lui_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load_extend_s_E = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultSrc_E = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__R_size_E = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DMem_size_E = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALUctrl_E = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Rd_E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ALUResult_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writeData_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4_M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regWrite_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load_extend_s_M = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultSrc_M = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__R_size_M = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__DMem_size_M = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Rd_M = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ALUResult_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__readData_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4_W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regWrite_W = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resultSrc_W = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Rd_W = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__top_fetch__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_decode__DOT__ImmSrc_D = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__top_decode__DOT__register__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_decode__DOT__register__DOT____Vlvbound_hdb85cb42__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr = 0;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__top_execute__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__top_execute__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_execute__DOT__ALUout1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__top_memory__DOT__dout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
