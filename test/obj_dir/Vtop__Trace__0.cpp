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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__instr),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__ImmExt),32);
        bufp->chgBit(oldp+4,((((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                   | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                  | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                 | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+5,(((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                              | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+6,((((((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                 | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                                | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
        bufp->chgBit(oldp+7,((7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+8,((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+9,((5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__load_extend_s));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__resultSrc),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__R_size),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__DMem_size),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__ALUctrl),4);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D),3);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1),12);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui),20);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal),20);
        bufp->chgCData(oldp+20,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgCData(oldp+21,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+22,((vlSelf->top__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+23,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
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
        bufp->chgBit(oldp+24,((1U & (vlSelf->top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr),32);
        bufp->chgCData(oldp+26,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+27,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->top__DOT__R_size) 
                                     >> 2U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__R_size) 
                                     >> 1U))));
        bufp->chgBit(oldp+34,((1U & (IData)(vlSelf->top__DOT__R_size))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->top__DOT__DMem_size) 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__DMem_size) 
                                     >> 1U))));
        bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->top__DOT__DMem_size))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__top_decode__DOT__register__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__RD1),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__RD2),32);
        bufp->chgBit(oldp+72,(vlSelf->top__DOT__PCsrc));
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__top_execute__DOT__EQ));
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__top_execute__DOT__ALUout1),32);
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result));
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__top_memory__DOT__dout),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be),32);
        bufp->chgSData(oldp+81,((0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)),16);
        bufp->chgCData(oldp+82,((0xffU & vlSelf->top__DOT__top_memory__DOT__dout)),8);
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign));
        bufp->chgCData(oldp+85,((0xffU & vlSelf->top__DOT__RD2)),8);
        bufp->chgCData(oldp+86,((0xffU & (vlSelf->top__DOT__RD2 
                                          >> 8U))),8);
        bufp->chgCData(oldp+87,((0xffU & (vlSelf->top__DOT__RD2 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+88,((vlSelf->top__DOT__RD2 
                                 >> 0x18U)),8);
    }
    bufp->chgBit(oldp+89,(vlSelf->clk));
    bufp->chgBit(oldp+90,(vlSelf->rst));
    bufp->chgIData(oldp+91,(vlSelf->a0),32);
    bufp->chgIData(oldp+92,(((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                              ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                              : (vlSelf->top__DOT__PC 
                                 + (vlSelf->top__DOT__ImmExt 
                                    << 1U)))),32);
    bufp->chgIData(oldp+93,(((2U & (IData)(vlSelf->top__DOT__DMem_size))
                              ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                              : ((1U & (IData)(vlSelf->top__DOT__DMem_size))
                                  ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                  : ((4U & (IData)(vlSelf->top__DOT__DMem_size))
                                      ? vlSelf->top__DOT__top_memory__DOT__dout
                                      : 0U)))),32);
    bufp->chgIData(oldp+94,(((0U == (IData)(vlSelf->top__DOT__resultSrc))
                              ? vlSelf->top__DOT__ALUResult
                              : ((1U == (IData)(vlSelf->top__DOT__resultSrc))
                                  ? ((2U & (IData)(vlSelf->top__DOT__DMem_size))
                                      ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                                      : ((1U & (IData)(vlSelf->top__DOT__DMem_size))
                                          ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                          : ((4U & (IData)(vlSelf->top__DOT__DMem_size))
                                              ? vlSelf->top__DOT__top_memory__DOT__dout
                                              : 0U)))
                                  : ((2U == (IData)(vlSelf->top__DOT__resultSrc))
                                      ? ((IData)(4U) 
                                         + vlSelf->top__DOT__PC)
                                      : 0U)))),32);
    bufp->chgIData(oldp+95,(((IData)(vlSelf->top__DOT__PCsrc)
                              ? ((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                  ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                  : (vlSelf->top__DOT__PC 
                                     + (vlSelf->top__DOT__ImmExt 
                                        << 1U))) : 
                             ((IData)(4U) + vlSelf->top__DOT__PC))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
