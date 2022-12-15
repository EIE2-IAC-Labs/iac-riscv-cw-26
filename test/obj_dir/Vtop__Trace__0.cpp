// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__instr_F),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__PC_F),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->top__DOT__PC_F)),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__instr_D),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__PC_D),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__PCPlus4_D),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ImmExt_D),32);
        bufp->chgBit(oldp+7,((((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                   | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                  | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                 | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+8,(((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                              | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+9,((((((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                 | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+10,((7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+11,((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+12,((5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__load_extend_s_D));
        bufp->chgCData(oldp+14,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                  ? 1U : ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                           ? 2U : (
                                                   (9U 
                                                    == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                    ? 2U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+15,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                  ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
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
                                           : 0U))),3);
        bufp->chgCData(oldp+16,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                  ? ((0x4000U & vlSelf->top__DOT__instr_D)
                                      ? ((0x2000U & vlSelf->top__DOT__instr_D)
                                          ? 0U : ((0x1000U 
                                                   & vlSelf->top__DOT__instr_D)
                                                   ? 2U
                                                   : 1U))
                                      : ((0x2000U & vlSelf->top__DOT__instr_D)
                                          ? ((0x1000U 
                                              & vlSelf->top__DOT__instr_D)
                                              ? 0U : 4U)
                                          : ((0x1000U 
                                              & vlSelf->top__DOT__instr_D)
                                              ? 2U : 1U)))
                                  : 0U)),3);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ALUctrl_D),4);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 7U))),5);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__RD1_E),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__RD2_E),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__ImmExt_E),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__PCPlus4_E),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__PC_E),32);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__regWrite_E));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__jump_E));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__ALUsrc_E));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__PCsrc_E));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__branch_E));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__jalr_E));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__lui_E));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__load_extend_s_E));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__resultSrc_E),2);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__R_size_E),3);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__DMem_size_E),3);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__ALUctrl_E),4);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__Rd_E),5);
        bufp->chgIData(oldp+37,(((IData)(vlSelf->top__DOT__lui_E)
                                  ? vlSelf->top__DOT__ImmExt_E
                                  : vlSelf->top__DOT__top_execute__DOT__ALUout1)),32);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->top__DOT__jalr_E)
                                  ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                  : (vlSelf->top__DOT__PC_E 
                                     + (vlSelf->top__DOT__ImmExt_E 
                                        << 1U)))),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ALUResult_M),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__writeData_M),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__PCPlus4_M),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__regWrite_M));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__load_extend_s_M));
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__resultSrc_M),2);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__R_size_M),3);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__DMem_size_M),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__Rd_M),5);
        bufp->chgIData(oldp+48,(((2U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                  ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                                  : ((1U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                      ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                      : ((4U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                          ? vlSelf->top__DOT__top_memory__DOT__memory_out
                                          : 0U)))),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__ALUResult_W),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__readData_W),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__PCPlus4_W),32);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__regWrite_W));
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__resultSrc_W),2);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__Rd_W),5);
        bufp->chgIData(oldp+55,(((0U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                  ? vlSelf->top__DOT__ALUResult_W
                                  : ((1U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                      ? vlSelf->top__DOT__readData_W
                                      : ((2U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                          ? vlSelf->top__DOT__PCPlus4_W
                                          : 0U)))),32);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D),3);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1),12);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui),20);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal),20);
        bufp->chgCData(oldp+60,((0x7fU & vlSelf->top__DOT__instr_D)),7);
        bufp->chgCData(oldp+61,((7U & (vlSelf->top__DOT__instr_D 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+62,((vlSelf->top__DOT__instr_D 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+63,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                  ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                           ? 0U : (
                                                   (7U 
                                                    == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                     ? 2U
                                                     : 3U))))),2);
        bufp->chgBit(oldp+64,((1U & (vlSelf->top__DOT__instr_D 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr),32);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+67,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__top_execute__DOT__EQ));
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__top_execute__DOT__ALUout1),32);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result));
        bufp->chgIData(oldp+72,(((IData)(vlSelf->top__DOT__PCsrc_E)
                                  ? ((IData)(vlSelf->top__DOT__jalr_E)
                                      ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                      : (vlSelf->top__DOT__PC_E 
                                         + (vlSelf->top__DOT__ImmExt_E 
                                            << 1U)))
                                  : ((IData)(4U) + vlSelf->top__DOT__PC_F))),32);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                     >> 2U))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                     >> 1U))));
        bufp->chgBit(oldp+79,((1U & (IData)(vlSelf->top__DOT__R_size_M))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                     >> 2U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                     >> 1U))));
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->top__DOT__DMem_size_M))));
        bufp->chgBit(oldp+83,((IData)((0U != (IData)(vlSelf->top__DOT__DMem_size_M)))));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__top_memory__DOT__storeIns));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__top_memory__DOT__cache_hit));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns) 
                                     | ((IData)((0U 
                                                 != (IData)(vlSelf->top__DOT__DMem_size_M))) 
                                        & (~ (IData)(vlSelf->top__DOT__top_memory__DOT__cache_hit)))))));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__top_memory__DOT__cache_out),32);
        bufp->chgIData(oldp+88,(((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns)
                                  ? vlSelf->top__DOT__top_memory__DOT__cache_store
                                  : vlSelf->top__DOT__top_memory__DOT__ram_out)),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__top_memory__DOT__cache_store),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__top_memory__DOT__ram_out),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__top_memory__DOT__memory_out),32);
        bufp->chgQData(oldp+92,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0]),57);
        bufp->chgQData(oldp+94,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[1]),57);
        bufp->chgQData(oldp+96,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[2]),57);
        bufp->chgQData(oldp+98,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[3]),57);
        bufp->chgQData(oldp+100,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[4]),57);
        bufp->chgQData(oldp+102,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[5]),57);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[6]),57);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[7]),57);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[8]),57);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[9]),57);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[10]),57);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[11]),57);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[12]),57);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[13]),57);
        bufp->chgQData(oldp+120,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[14]),57);
        bufp->chgQData(oldp+122,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[15]),57);
        bufp->chgQData(oldp+124,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out),57);
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__valid));
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__tag_out),24);
        bufp->chgCData(oldp+128,((3U & vlSelf->top__DOT__ALUResult_M)),2);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be),32);
        bufp->chgSData(oldp+131,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h),16);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b),8);
        bufp->chgBit(oldp+133,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign));
        bufp->chgIData(oldp+135,((0xfffffffcU & vlSelf->top__DOT__ALUResult_M)),32);
        bufp->chgCData(oldp+136,((0xffU & vlSelf->top__DOT__writeData_M)),8);
        bufp->chgCData(oldp+137,((0xffU & (vlSelf->top__DOT__writeData_M 
                                           >> 8U))),8);
        bufp->chgCData(oldp+138,((0xffU & (vlSelf->top__DOT__writeData_M 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+139,((vlSelf->top__DOT__writeData_M 
                                  >> 0x18U)),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__top_decode__DOT__register__DOT__i),32);
    }
    bufp->chgBit(oldp+172,(vlSelf->clk));
    bufp->chgBit(oldp+173,(vlSelf->rst));
    bufp->chgIData(oldp+174,(vlSelf->a0),32);
    bufp->chgIData(oldp+175,(((0U == (0x1fU & (vlSelf->top__DOT__instr_D 
                                               >> 0xfU)))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((vlSelf->top__DOT__instr_D 
                                                      >> 0xfU) 
                                                     - (IData)(1U))))
                                        ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                       [(0x1fU & ((vlSelf->top__DOT__instr_D 
                                                   >> 0xfU) 
                                                  - (IData)(1U)))]
                                        : 0U))),32);
    bufp->chgIData(oldp+176,(((0U == (0x1fU & (vlSelf->top__DOT__instr_D 
                                               >> 0xfU)))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((vlSelf->top__DOT__instr_D 
                                                      >> 0x14U) 
                                                     - (IData)(1U))))
                                        ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                       [(0x1fU & ((vlSelf->top__DOT__instr_D 
                                                   >> 0x14U) 
                                                  - (IData)(1U)))]
                                        : 0U))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
