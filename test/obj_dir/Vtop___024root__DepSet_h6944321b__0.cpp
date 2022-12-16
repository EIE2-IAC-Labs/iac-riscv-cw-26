// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<IData/*31:0*/, 1024> Vtop__ConstPool__TABLE_h025c9579_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_h4b62dad7_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6;
    // Body
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 = 0U;
    if ((1U & (IData)(vlSelf->top__DOT__R_size))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0xffU & vlSelf->top__DOT__RD2);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
    } else if ((2U & (IData)(vlSelf->top__DOT__R_size))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0xffU & vlSelf->top__DOT__RD2);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0xffU & (vlSelf->top__DOT__RD2 >> 8U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
    } else if ((4U & (IData)(vlSelf->top__DOT__R_size))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0xffU & vlSelf->top__DOT__RD2);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0xffU & (vlSelf->top__DOT__RD2 >> 8U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0xffU & (vlSelf->top__DOT__RD2 >> 0x10U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6 
            = (vlSelf->top__DOT__RD2 >> 0x18U);
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult));
    }
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__top_fetch__DOT__next_PC);
    if (__Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0) {
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1) {
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1;
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2;
    }
    if (__Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3) {
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3;
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4;
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5;
        vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array[__Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6] 
            = __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6;
    }
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & vlSelf->top__DOT__PC)];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(1U) + vlSelf->top__DOT__PC))];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(2U) + vlSelf->top__DOT__PC))];
    vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4 
        = vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array
        [(0xfffU & ((IData)(3U) + vlSelf->top__DOT__PC))];
    vlSelf->top__DOT__instr = (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4) 
                                << 0x18U) | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2) 
                                                 << 8U) 
                                                | (IData)(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1))));
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__instr 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__instr));
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr 
        = Vtop__ConstPool__TABLE_h025c9579_0[__Vtableidx1];
    if ((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) {
        vlSelf->top__DOT__resultSrc = 1U;
        vlSelf->top__DOT__DMem_size = ((0x4000U & vlSelf->top__DOT__instr)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__instr)
                                            ? 4U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__instr)
                                             ? 2U : 1U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__instr)
                                            ? 4U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__instr)
                                             ? 2U : 1U)));
        vlSelf->top__DOT__R_size = 0U;
        vlSelf->top__DOT__load_extend_s = ((1U == (7U 
                                                   & (vlSelf->top__DOT__instr 
                                                      >> 0xcU))) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU))));
    } else {
        vlSelf->top__DOT__resultSrc = ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 2U : ((9U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 2U
                                                 : 0U));
        vlSelf->top__DOT__DMem_size = 4U;
        vlSelf->top__DOT__R_size = ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                     ? ((2U == (7U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xcU)))
                                         ? 4U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 1U
                                                   : 0U)))
                                     : 0U);
    }
    __Vtableidx2 = ((0x20U & (vlSelf->top__DOT__instr 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->top__DOT__instr 
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
    vlSelf->top__DOT__ALUctrl = Vtop__ConstPool__TABLE_h4b62dad7_0
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
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 = 0U;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui = 0U;
    vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D)))) {
                vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal 
                    = ((0x80000U & (vlSelf->top__DOT__instr 
                                    >> 0xcU)) | ((0x7f800U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 1U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelf->top__DOT__instr 
                                                          >> 0x15U)))));
            }
        }
        vlSelf->top__DOT__ImmExt = ((2U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal 
                                                              >> 0x13U)))) 
                                               << 0x14U) 
                                              | vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal)));
    } else if ((2U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        if ((1U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
            vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
                = ((0x800U & (vlSelf->top__DOT__instr 
                              >> 0x14U)) | ((0x400U 
                                             & (vlSelf->top__DOT__instr 
                                                << 3U)) 
                                            | ((0x3f0U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0x15U)) 
                                               | (0xfU 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 8U)))));
            vlSelf->top__DOT__ImmExt = (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                        >> 0xbU)))) 
                                         << 0xcU) | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
        } else {
            vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
                = ((0xfe0U & (vlSelf->top__DOT__instr 
                              >> 0x14U)) | (0x1fU & 
                                            (vlSelf->top__DOT__instr 
                                             >> 7U)));
            vlSelf->top__DOT__ImmExt = (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                        >> 0xbU)))) 
                                         << 0xcU) | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D))) {
        vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui 
            = (vlSelf->top__DOT__instr >> 0xcU);
        vlSelf->top__DOT__ImmExt = (vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui 
                                    << 0xcU);
    } else {
        vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1 
            = (vlSelf->top__DOT__instr >> 0x14U);
        vlSelf->top__DOT__ImmExt = (((- (IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1) 
                                                    >> 0xbU)))) 
                                     << 0xcU) | (IData)(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v31;
    IData/*31:0*/ __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v31;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v31;
    // Body
    __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 = 0U;
    __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 = 0U;
    if (vlSelf->rst) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__i = 0x20U;
        __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0 = 1U;
    } else if (((((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                      | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                     | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                    | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                   | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                  | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                 | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                & (0U != (0x1fU & (vlSelf->top__DOT__instr 
                                   >> 7U))))) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT____Vlvbound_h20c3b2fb__0 
            = ((0U == (IData)(vlSelf->top__DOT__resultSrc))
                ? vlSelf->top__DOT__ALUResult : ((1U 
                                                  == (IData)(vlSelf->top__DOT__resultSrc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__DMem_size))
                                                   ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__DMem_size))
                                                    ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__DMem_size))
                                                     ? vlSelf->top__DOT__top_memory__DOT__dout
                                                     : 0U)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__resultSrc))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__PC)
                                                   : 0U)));
        if ((0x1eU >= (0x1fU & ((vlSelf->top__DOT__instr 
                                 >> 7U) - (IData)(1U))))) {
            __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 
                = vlSelf->top__DOT__top_decode__DOT__register__DOT____Vlvbound_h20c3b2fb__0;
            __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 = 1U;
            __Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 
                = (0x1fU & ((vlSelf->top__DOT__instr 
                             >> 7U) - (IData)(1U)));
        }
    }
    if (__Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v0) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xaU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xbU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xcU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xdU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xeU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0xfU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x10U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x11U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x12U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x13U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x14U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x15U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x16U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x17U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x18U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x19U] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x1aU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x1bU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x1cU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x1dU] = 0U;
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0x1eU] = 0U;
    }
    if (__Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v31) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[__Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v31] 
            = __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v31;
    }
    vlSelf->a0 = vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
        [9U];
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__0\n"); );
    // Body
    if ((0U == (0x1fU & (vlSelf->top__DOT__instr >> 0xfU)))) {
        vlSelf->top__DOT__RD1 = 0U;
        vlSelf->top__DOT__RD2 = 0U;
    } else {
        vlSelf->top__DOT__RD1 = ((0x1eU >= (0x1fU & 
                                            ((vlSelf->top__DOT__instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                  ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                 [(0x1fU & ((vlSelf->top__DOT__instr 
                                             >> 0xfU) 
                                            - (IData)(1U)))]
                                  : 0U);
        vlSelf->top__DOT__RD2 = ((0x1eU >= (0x1fU & 
                                            ((vlSelf->top__DOT__instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                  ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                 [(0x1fU & ((vlSelf->top__DOT__instr 
                                             >> 0x14U) 
                                            - (IData)(1U)))]
                                  : 0U);
    }
    vlSelf->top__DOT__top_execute__DOT__ALUop2 = ((
                                                   ((((2U 
                                                       == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                                      | (3U 
                                                         == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                                     | (4U 
                                                        == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                                    | (5U 
                                                       == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                                   | (6U 
                                                      == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))
                                                   ? vlSelf->top__DOT__ImmExt
                                                   : vlSelf->top__DOT__RD2);
    if ((4U & (IData)(vlSelf->top__DOT__ALUctrl))) {
        if ((2U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
                vlSelf->top__DOT__top_execute__DOT__EQ 
                    = (vlSelf->top__DOT__RD1 >= vlSelf->top__DOT__top_execute__DOT__ALUop2);
                vlSelf->top__DOT__top_execute__DOT__ALUout1 
                    = ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        ? (vlSelf->top__DOT__RD1 << vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        : 0U);
            } else {
                vlSelf->top__DOT__top_execute__DOT__EQ 
                    = (vlSelf->top__DOT__RD1 < vlSelf->top__DOT__top_execute__DOT__ALUop2);
                vlSelf->top__DOT__top_execute__DOT__ALUout1 
                    = ((8U & (IData)(vlSelf->top__DOT__ALUctrl))
                        ? ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                            ? (vlSelf->top__DOT__RD1 
                               >> vlSelf->top__DOT__top_execute__DOT__ALUop2)
                            : 0U) : ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                      ? (vlSelf->top__DOT__RD1 
                                         >> vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                      : 0U));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ALUctrl))) {
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__top_execute__DOT__ALUop2);
            vlSelf->top__DOT__top_execute__DOT__ALUout1 
                = ((vlSelf->top__DOT__RD1 < vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    ? 1U : 0U);
        } else {
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__top_execute__DOT__ALUop2);
            vlSelf->top__DOT__top_execute__DOT__ALUout1 
                = (vlSelf->top__DOT__RD1 ^ vlSelf->top__DOT__top_execute__DOT__ALUop2);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ALUctrl) 
                      >> 1U)))) {
            vlSelf->top__DOT__top_execute__DOT__EQ 
                = ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                    ? (vlSelf->top__DOT__RD1 != vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    : (vlSelf->top__DOT__RD1 == vlSelf->top__DOT__top_execute__DOT__ALUop2));
        }
        vlSelf->top__DOT__top_execute__DOT__ALUout1 
            = ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                    ? (vlSelf->top__DOT__RD1 | vlSelf->top__DOT__top_execute__DOT__ALUop2)
                    : (vlSelf->top__DOT__RD1 & vlSelf->top__DOT__top_execute__DOT__ALUop2))
                : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                    ? ((0x1fU >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        ? (vlSelf->top__DOT__RD1 << vlSelf->top__DOT__top_execute__DOT__ALUop2)
                        : 0U) : ((8U & (IData)(vlSelf->top__DOT__ALUctrl))
                                  ? (vlSelf->top__DOT__RD1 
                                     - vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                  : (vlSelf->top__DOT__RD1 
                                     + vlSelf->top__DOT__top_execute__DOT__ALUop2))));
    }
    vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result 
        = ((7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
           & (IData)(vlSelf->top__DOT__top_execute__DOT__EQ));
    vlSelf->top__DOT__PCsrc = ((IData)(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result) 
                               | ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                  | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    vlSelf->top__DOT__ALUResult = ((5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                    ? vlSelf->top__DOT__ImmExt
                                    : vlSelf->top__DOT__top_execute__DOT__ALUout1);
    vlSelf->top__DOT__top_fetch__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                                  ? 
                                                 ((9U 
                                                   == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                   ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                                   : 
                                                  (vlSelf->top__DOT__PC 
                                                   + 
                                                   (vlSelf->top__DOT__ImmExt 
                                                    << 1U)))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
    vlSelf->top__DOT__top_memory__DOT__dout = ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__ALUResult))] 
                                                << 0x18U) 
                                               | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->top__DOT__ALUResult))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->top__DOT__ALUResult))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & vlSelf->top__DOT__ALUResult)])));
    if (vlSelf->top__DOT__load_extend_s) {
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
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
