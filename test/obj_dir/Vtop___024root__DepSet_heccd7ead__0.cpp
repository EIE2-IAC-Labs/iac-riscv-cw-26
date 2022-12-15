// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<IData/*31:0*/, 1024> Vtop__ConstPool__TABLE_h23a0d96f_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_h4fb9e2bf_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0;
    QData/*56:0*/ __Vdlyvval__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0;
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
    __Vdlyvset__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0 = 0U;
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 = 0U;
    vlSelf->top__DOT__load_extend_s_M = ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->top__DOT__load_extend_s_E));
    vlSelf->top__DOT__jalr_E = ((~ (IData)(vlSelf->rst)) 
                                & (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr));
    vlSelf->top__DOT__jump_E = ((~ (IData)(vlSelf->rst)) 
                                & ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                   | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    vlSelf->top__DOT__branch_E = ((~ (IData)(vlSelf->rst)) 
                                  & (7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr));
    vlSelf->top__DOT__regWrite_W = ((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__regWrite_M));
    vlSelf->top__DOT__ALUsrc_E = ((~ (IData)(vlSelf->rst)) 
                                  & (((((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                        | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                       | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                      | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                     | (6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    if ((1U & ((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns) 
               | ((IData)((0U != (IData)(vlSelf->top__DOT__DMem_size_M))) 
                  & (~ (IData)(vlSelf->top__DOT__top_memory__DOT__cache_hit)))))) {
        __Vdlyvval__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0 
            = (0x100000000000000ULL | (((QData)((IData)(
                                                        (vlSelf->top__DOT__ALUResult_M 
                                                         >> 8U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns)
                                                                      ? vlSelf->top__DOT__top_memory__DOT__cache_store
                                                                      : vlSelf->top__DOT__top_memory__DOT__ram_out)))));
        __Vdlyvset__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0 
            = (0x3fU & (vlSelf->top__DOT__ALUResult_M 
                        >> 2U));
    }
    if ((1U & (IData)(vlSelf->top__DOT__R_size_M))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0xffU & vlSelf->top__DOT__writeData_M);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult_M);
    } else if ((2U & (IData)(vlSelf->top__DOT__R_size_M))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0xffU & vlSelf->top__DOT__writeData_M);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v1 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult_M);
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0xffU & (vlSelf->top__DOT__writeData_M 
                        >> 8U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v2 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult_M));
    } else if ((4U & (IData)(vlSelf->top__DOT__R_size_M))) {
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0xffU & vlSelf->top__DOT__writeData_M);
        __Vdlyvset__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 = 1U;
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v3 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult_M);
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0xffU & (vlSelf->top__DOT__writeData_M 
                        >> 8U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v4 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult_M));
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0xffU & (vlSelf->top__DOT__writeData_M 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v5 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult_M));
        __Vdlyvval__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6 
            = (vlSelf->top__DOT__writeData_M >> 0x18U);
        __Vdlyvdim0__top__DOT__top_memory__DOT__ram__DOT__ram_array__v6 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult_M));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__PC_E = 0U;
        vlSelf->top__DOT__resultSrc_W = 0U;
        vlSelf->top__DOT__ALUctrl_E = 0U;
        vlSelf->top__DOT__PCPlus4_W = 0U;
        vlSelf->top__DOT__Rd_W = 0U;
        vlSelf->top__DOT__RD1_E = 0U;
        vlSelf->top__DOT__readData_W = 0U;
        vlSelf->top__DOT__ALUResult_W = 0U;
        vlSelf->top__DOT__PC_D = 0U;
        vlSelf->top__DOT__resultSrc_M = 0U;
        vlSelf->top__DOT__PCPlus4_M = 0U;
        vlSelf->top__DOT__Rd_M = 0U;
        vlSelf->top__DOT__DMem_size_M = 0U;
        vlSelf->top__DOT__R_size_M = 0U;
        vlSelf->top__DOT__writeData_M = 0U;
        vlSelf->top__DOT__ALUResult_M = 0U;
        vlSelf->top__DOT__resultSrc_E = 0U;
        vlSelf->top__DOT__PCPlus4_E = 0U;
        vlSelf->top__DOT__Rd_E = 0U;
        vlSelf->top__DOT__DMem_size_E = 0U;
        vlSelf->top__DOT__R_size_E = 0U;
        vlSelf->top__DOT__RD2_E = 0U;
        vlSelf->top__DOT__ImmExt_E = 0U;
        vlSelf->top__DOT__PCPlus4_D = 0U;
        vlSelf->top__DOT__instr_D = 0U;
        vlSelf->top__DOT__PC_F = 0U;
    } else {
        vlSelf->top__DOT__PC_E = vlSelf->top__DOT__PC_D;
        vlSelf->top__DOT__resultSrc_W = vlSelf->top__DOT__resultSrc_M;
        vlSelf->top__DOT__ALUctrl_E = vlSelf->top__DOT__ALUctrl_D;
        vlSelf->top__DOT__PCPlus4_W = vlSelf->top__DOT__PCPlus4_M;
        vlSelf->top__DOT__Rd_W = vlSelf->top__DOT__Rd_M;
        vlSelf->top__DOT__readData_W = ((2U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                         ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                                         : ((1U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                             ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__DMem_size_M))
                                                 ? vlSelf->top__DOT__top_memory__DOT__memory_out
                                                 : 0U)));
        vlSelf->top__DOT__ALUResult_W = vlSelf->top__DOT__ALUResult_M;
        vlSelf->top__DOT__PC_D = vlSelf->top__DOT__PC_F;
        vlSelf->top__DOT__resultSrc_M = vlSelf->top__DOT__resultSrc_E;
        vlSelf->top__DOT__PCPlus4_M = vlSelf->top__DOT__PCPlus4_E;
        vlSelf->top__DOT__Rd_M = vlSelf->top__DOT__Rd_E;
        vlSelf->top__DOT__DMem_size_M = vlSelf->top__DOT__DMem_size_E;
        vlSelf->top__DOT__R_size_M = vlSelf->top__DOT__R_size_E;
        vlSelf->top__DOT__writeData_M = vlSelf->top__DOT__RD2_E;
        if ((0U == (0x1fU & (vlSelf->top__DOT__instr_D 
                             >> 0xfU)))) {
            vlSelf->top__DOT__RD1_E = 0U;
            vlSelf->top__DOT__RD2_E = 0U;
        } else {
            vlSelf->top__DOT__RD1_E = ((0x1eU >= (0x1fU 
                                                  & ((vlSelf->top__DOT__instr_D 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                        ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                       [(0x1fU & ((vlSelf->top__DOT__instr_D 
                                                   >> 0xfU) 
                                                  - (IData)(1U)))]
                                        : 0U);
            vlSelf->top__DOT__RD2_E = ((0x1eU >= (0x1fU 
                                                  & ((vlSelf->top__DOT__instr_D 
                                                      >> 0x14U) 
                                                     - (IData)(1U))))
                                        ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                       [(0x1fU & ((vlSelf->top__DOT__instr_D 
                                                   >> 0x14U) 
                                                  - (IData)(1U)))]
                                        : 0U);
        }
        vlSelf->top__DOT__ALUResult_M = ((IData)(vlSelf->top__DOT__lui_E)
                                          ? vlSelf->top__DOT__ImmExt_E
                                          : vlSelf->top__DOT__top_execute__DOT__ALUout1);
        if ((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) {
            vlSelf->top__DOT__resultSrc_E = 1U;
            vlSelf->top__DOT__DMem_size_E = ((0x4000U 
                                              & vlSelf->top__DOT__instr_D)
                                              ? ((0x2000U 
                                                  & vlSelf->top__DOT__instr_D)
                                                  ? 4U
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__instr_D)
                                                   ? 2U
                                                   : 1U))
                                              : ((0x2000U 
                                                  & vlSelf->top__DOT__instr_D)
                                                  ? 4U
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__instr_D)
                                                   ? 2U
                                                   : 1U)));
            vlSelf->top__DOT__R_size_E = 0U;
        } else {
            vlSelf->top__DOT__resultSrc_E = ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                              ? 2U : 
                                             ((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                               ? 2U
                                               : 0U));
            vlSelf->top__DOT__DMem_size_E = 4U;
            vlSelf->top__DOT__R_size_E = ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                           ? ((2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__instr_D 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__instr_D 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__instr_D 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 0U)))
                                           : 0U);
        }
        vlSelf->top__DOT__PCPlus4_E = vlSelf->top__DOT__PCPlus4_D;
        vlSelf->top__DOT__Rd_E = (0x1fU & (vlSelf->top__DOT__instr_D 
                                           >> 7U));
        vlSelf->top__DOT__ImmExt_E = vlSelf->top__DOT__ImmExt_D;
        vlSelf->top__DOT__PCPlus4_D = ((IData)(4U) 
                                       + vlSelf->top__DOT__PC_F);
        vlSelf->top__DOT__instr_D = vlSelf->top__DOT__instr_F;
        vlSelf->top__DOT__PC_F = vlSelf->top__DOT__top_fetch__DOT__next_PC;
    }
    if (__Vdlyvset__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0) {
        vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array[__Vdlyvdim0__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0] 
            = __Vdlyvval__top__DOT__top_memory__DOT__cache__DOT__cache_array__v0;
    }
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
    vlSelf->top__DOT__load_extend_s_E = ((~ (IData)(vlSelf->rst)) 
                                         & (IData)(vlSelf->top__DOT__load_extend_s_D));
    vlSelf->top__DOT__regWrite_M = ((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__regWrite_E));
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xfU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xfU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xeU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xeU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xdU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xdU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xcU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xcU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xbU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xbU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0xaU] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0xaU];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[9U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [9U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[8U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [8U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[7U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [7U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[6U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [6U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[5U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [5U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[4U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [4U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[3U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [3U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[2U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [2U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[1U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [1U];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0U] 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [0U];
    vlSelf->top__DOT__regWrite_E = ((~ (IData)(vlSelf->rst)) 
                                    & (((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                            | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                           | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                          | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                         | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                        | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                       | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    vlSelf->top__DOT__top_memory__DOT__storeIns = (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->top__DOT__R_size_M)));
    vlSelf->top__DOT__lui_E = ((~ (IData)(vlSelf->rst)) 
                               & (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr));
    vlSelf->top__DOT__top_memory__DOT__ram__DOT__offset_a 
        = ((IData)(1U) + (vlSelf->top__DOT__ALUResult_M 
                          - (3U & vlSelf->top__DOT__ALUResult_M)));
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out 
        = vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_array
        [(0x3fU & (vlSelf->top__DOT__ALUResult_M >> 2U))];
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__valid 
        = (1U & (IData)((vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out 
                         >> 0x38U)));
    vlSelf->top__DOT__top_memory__DOT__cache__DOT__tag_out 
        = (0xffffffU & (IData)((vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out 
                                >> 0x20U)));
    vlSelf->top__DOT__top_memory__DOT__cache_hit = 
        ((IData)(vlSelf->top__DOT__top_memory__DOT__cache__DOT__valid) 
         & (vlSelf->top__DOT__top_memory__DOT__cache__DOT__tag_out 
            == (vlSelf->top__DOT__ALUResult_M >> 8U)));
    vlSelf->top__DOT__top_memory__DOT__cache_out = (IData)(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out);
    vlSelf->top__DOT__top_memory__DOT__ram_out = ((
                                                   vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->top__DOT__top_memory__DOT__ram__DOT__offset_a))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__top_memory__DOT__ram__DOT__offset_a))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->top__DOT__top_memory__DOT__ram__DOT__offset_a))] 
                                                         << 8U) 
                                                        | vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__top_memory__DOT__ram__DOT__offset_a)])));
    vlSelf->top__DOT__top_memory__DOT__cache_store 
        = ((4U & (IData)(vlSelf->top__DOT__R_size_M))
            ? vlSelf->top__DOT__writeData_M : ((2U 
                                                & (IData)(vlSelf->top__DOT__R_size_M))
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__ALUResult_M)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->top__DOT__ALUResult_M)
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelf->top__DOT__writeData_M) 
                                                     | (0xffffU 
                                                        & vlSelf->top__DOT__top_memory__DOT__cache_out))
                                                     : 0U)
                                                    : 
                                                   ((0xffff0000U 
                                                     & vlSelf->top__DOT__top_memory__DOT__cache_out) 
                                                    | (0xffffU 
                                                       & vlSelf->top__DOT__writeData_M)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__R_size_M))
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->top__DOT__ALUResult_M)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__ALUResult_M)
                                                      ? 
                                                     ((vlSelf->top__DOT__writeData_M 
                                                       << 0x18U) 
                                                      | (0xffffffU 
                                                         & vlSelf->top__DOT__top_memory__DOT__cache_out))
                                                      : 
                                                     ((0xff000000U 
                                                       & vlSelf->top__DOT__top_memory__DOT__cache_out) 
                                                      | ((0xff0000U 
                                                          & (vlSelf->top__DOT__writeData_M 
                                                             << 0x10U)) 
                                                         | (0xffffU 
                                                            & vlSelf->top__DOT__top_memory__DOT__cache_out))))
                                                     : 
                                                    ((1U 
                                                      & vlSelf->top__DOT__ALUResult_M)
                                                      ? 
                                                     ((0xffff0000U 
                                                       & vlSelf->top__DOT__top_memory__DOT__cache_out) 
                                                      | ((0xff00U 
                                                          & (vlSelf->top__DOT__writeData_M 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & vlSelf->top__DOT__top_memory__DOT__cache_out)))
                                                      : 
                                                     ((0xffffff00U 
                                                       & vlSelf->top__DOT__top_memory__DOT__cache_out) 
                                                      | (0xffU 
                                                         & vlSelf->top__DOT__writeData_M))))
                                                    : 0U)));
    vlSelf->top__DOT__top_execute__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc_E)
                                                   ? vlSelf->top__DOT__ImmExt_E
                                                   : vlSelf->top__DOT__RD2_E);
    vlSelf->top__DOT__top_memory__DOT__memory_out = 
        ((IData)(vlSelf->top__DOT__top_memory__DOT__cache_hit)
          ? vlSelf->top__DOT__top_memory__DOT__cache_out
          : vlSelf->top__DOT__top_memory__DOT__ram_out);
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
    if ((1U == (3U & vlSelf->top__DOT__ALUResult_M))) {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h 
            = (0xffffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                          >> 8U));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b 
            = (0xffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                        >> 8U));
    } else if ((2U == (3U & vlSelf->top__DOT__ALUResult_M))) {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h 
            = (0xffffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                          >> 0x10U));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b 
            = (0xffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                        >> 0x10U));
    } else if ((3U == (3U & vlSelf->top__DOT__ALUResult_M))) {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h 
            = (0xffffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                          >> 0x10U));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b 
            = (0xffU & (vlSelf->top__DOT__top_memory__DOT__memory_out 
                        >> 0x18U));
    } else {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h 
            = (0xffffU & vlSelf->top__DOT__top_memory__DOT__memory_out);
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b 
            = (0xffU & vlSelf->top__DOT__top_memory__DOT__memory_out);
    }
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__instr_D 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__instr_D));
    vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr 
        = Vtop__ConstPool__TABLE_h23a0d96f_0[__Vtableidx1];
    vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result 
        = ((IData)(vlSelf->top__DOT__branch_E) & (IData)(vlSelf->top__DOT__top_execute__DOT__EQ));
    vlSelf->top__DOT__PCsrc_E = ((IData)(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result) 
                                 | (IData)(vlSelf->top__DOT__jump_E));
    if (vlSelf->top__DOT__load_extend_s_M) {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign 
            = (1U & ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h) 
                     >> 0xfU));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he 
            = ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign)
                ? (0xffff0000U | (IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h))
                : (IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign 
            = (1U & ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b) 
                     >> 7U));
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be 
            = ((IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign)
                ? (0xffffff00U | (IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b))
                : (IData)(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b));
    } else {
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he 
            = vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h;
        vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be 
            = vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b;
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
    } else if (((IData)(vlSelf->top__DOT__regWrite_W) 
                & (0U != (IData)(vlSelf->top__DOT__Rd_W)))) {
        vlSelf->top__DOT__top_decode__DOT__register__DOT____Vlvbound_hdb85cb42__0 
            = ((0U == (IData)(vlSelf->top__DOT__resultSrc_W))
                ? vlSelf->top__DOT__ALUResult_W : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__resultSrc_W))
                                                    ? vlSelf->top__DOT__readData_W
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__resultSrc_W))
                                                     ? vlSelf->top__DOT__PCPlus4_W
                                                     : 0U)));
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->top__DOT__Rd_W) 
                                - (IData)(1U))))) {
            __Vdlyvval__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 
                = vlSelf->top__DOT__top_decode__DOT__register__DOT____Vlvbound_hdb85cb42__0;
            __Vdlyvset__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 = 1U;
            __Vdlyvdim0__top__DOT__top_decode__DOT__register__DOT__reg_array__v31 
                = (0x1fU & ((IData)(vlSelf->top__DOT__Rd_W) 
                            - (IData)(1U)));
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
