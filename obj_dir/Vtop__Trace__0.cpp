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
        bufp->chgBit(oldp+7,(((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                              | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr))));
        bufp->chgCData(oldp+8,((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)),2);
        bufp->chgCData(oldp+9,((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)),3);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 7U))),5);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__RD1_E),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__RD2_E),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ImmExt_E),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__PCPlus4_E),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__PC_E),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__regWrite_E));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__memWrite_E));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__jump_E));
        bufp->chgBit(oldp+19,(((IData)(vlSelf->top__DOT__jump_E) 
                               | ((1U == (IData)(vlSelf->top__DOT__branch_E)) 
                                  & (vlSelf->top__DOT__RD1_E 
                                     != vlSelf->top__DOT__top_execute__DOT__ALUop2)))));
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__resultSrc_E),2);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__branch_E),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E),4);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__Rd_E),5);
        bufp->chgBit(oldp+24,((vlSelf->top__DOT__RD1_E 
                               == vlSelf->top__DOT__top_execute__DOT__ALUop2)));
        bufp->chgIData(oldp+25,(((4U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                  ? ((2U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                      ? vlSelf->top__DOT__RD1_E
                                      : ((1U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                          ? ((0x1fU 
                                              >= vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                              ? (vlSelf->top__DOT__RD1_E 
                                                 << vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                              : 0U)
                                          : vlSelf->top__DOT__RD1_E))
                                  : ((2U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                      ? ((1U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                          ? (vlSelf->top__DOT__RD1_E 
                                             | vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                          : (vlSelf->top__DOT__RD1_E 
                                             & vlSelf->top__DOT__top_execute__DOT__ALUop2))
                                      : ((1U & (IData)(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E))
                                          ? (vlSelf->top__DOT__RD1_E 
                                             - vlSelf->top__DOT__top_execute__DOT__ALUop2)
                                          : (vlSelf->top__DOT__RD1_E 
                                             + vlSelf->top__DOT__top_execute__DOT__ALUop2))))),32);
        bufp->chgIData(oldp+26,((vlSelf->top__DOT__PC_E 
                                 + (vlSelf->top__DOT__ImmExt_E 
                                    << 1U))),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ALUResult_M),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__writeData_M),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__PCPlus4_M),32);
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__regWrite_M));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__memWrite_M));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__resultSrc_M),2);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__Rd_M),5);
        bufp->chgIData(oldp+34,(((0x270fU >= (0x3fffU 
                                              & vlSelf->top__DOT__ALUResult_M))
                                  ? vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                 [(0x3fffU & vlSelf->top__DOT__ALUResult_M)]
                                  : 0U)),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__ALUResult_W),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__readData_W),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__PCPlus4_W),32);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__regWrite_W));
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__resultSrc_W),2);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__Rd_W),5);
        bufp->chgIData(oldp+41,(((0U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                  ? vlSelf->top__DOT__ALUResult_W
                                  : ((1U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                      ? vlSelf->top__DOT__readData_W
                                      : ((2U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                          ? vlSelf->top__DOT__PCPlus4_W
                                          : 0U)))),32);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT____Vcellout__decode_execute_reg__ALUctrl_E),3);
        bufp->chgBit(oldp+43,((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)));
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm),12);
        bufp->chgCData(oldp+45,((7U & (vlSelf->top__DOT__instr_D 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->top__DOT__instr_D)),7);
        bufp->chgBit(oldp+47,((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)));
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr),32);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+50,((0x1fU & (vlSelf->top__DOT__instr_D 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
        bufp->chgIData(oldp+52,((((IData)(vlSelf->top__DOT__jump_E) 
                                  | ((1U == (IData)(vlSelf->top__DOT__branch_E)) 
                                     & (vlSelf->top__DOT__RD1_E 
                                        != vlSelf->top__DOT__top_execute__DOT__ALUop2)))
                                  ? (vlSelf->top__DOT__PC_E 
                                     + (vlSelf->top__DOT__ImmExt_E 
                                        << 1U)) : ((IData)(4U) 
                                                   + vlSelf->top__DOT__PC_F))),32);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[31]),32);
    }
    bufp->chgBit(oldp+89,(vlSelf->clk));
    bufp->chgBit(oldp+90,(vlSelf->rst));
    bufp->chgIData(oldp+91,(vlSelf->a0),32);
    bufp->chgIData(oldp+92,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                            [(0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+93,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                            [(0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0x14U))]),32);
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
