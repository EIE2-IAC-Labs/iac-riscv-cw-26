// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_memory__Syms.h"


void Vtop_memory___024root__trace_chg_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_memory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_memory___024root__trace_chg_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[0]));
        bufp->chgBit(oldp+1,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[1]));
        bufp->chgBit(oldp+2,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[2]));
        bufp->chgBit(oldp+3,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[3]));
        bufp->chgBit(oldp+4,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[4]));
        bufp->chgBit(oldp+5,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[5]));
        bufp->chgBit(oldp+6,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[6]));
        bufp->chgBit(oldp+7,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[7]));
        bufp->chgBit(oldp+8,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[8]));
        bufp->chgBit(oldp+9,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[9]));
        bufp->chgBit(oldp+10,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[10]));
        bufp->chgBit(oldp+11,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[11]));
        bufp->chgBit(oldp+12,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[12]));
        bufp->chgBit(oldp+13,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[13]));
        bufp->chgBit(oldp+14,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[14]));
        bufp->chgBit(oldp+15,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[15]));
        bufp->chgBit(oldp+16,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[16]));
        bufp->chgBit(oldp+17,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[17]));
        bufp->chgBit(oldp+18,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[18]));
        bufp->chgBit(oldp+19,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[19]));
        bufp->chgBit(oldp+20,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[20]));
        bufp->chgBit(oldp+21,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[21]));
        bufp->chgBit(oldp+22,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[22]));
        bufp->chgBit(oldp+23,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[23]));
        bufp->chgBit(oldp+24,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[24]));
        bufp->chgBit(oldp+25,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[25]));
        bufp->chgBit(oldp+26,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[26]));
        bufp->chgBit(oldp+27,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[27]));
        bufp->chgBit(oldp+28,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[28]));
        bufp->chgBit(oldp+29,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[29]));
        bufp->chgBit(oldp+30,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[30]));
        bufp->chgBit(oldp+31,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[31]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+32,(vlSelf->top_memory__DOT__loadIns));
        bufp->chgBit(oldp+33,(vlSelf->top_memory__DOT__storeIns));
        bufp->chgBit(oldp+34,(vlSelf->top_memory__DOT__cache_hit));
        bufp->chgBit(oldp+35,(vlSelf->top_memory__DOT__cache_evict));
        bufp->chgIData(oldp+36,(vlSelf->top_memory__DOT__cache_out),32);
        bufp->chgIData(oldp+37,(vlSelf->top_memory__DOT__cache_addr_out),32);
        bufp->chgIData(oldp+38,(vlSelf->top_memory__DOT__ram_out),32);
        bufp->chgIData(oldp+39,(vlSelf->top_memory__DOT__memory_out),32);
        bufp->chgQData(oldp+40,(vlSelf->top_memory__DOT__cache__DOT__cache_out1),59);
        bufp->chgQData(oldp+42,(vlSelf->top_memory__DOT__cache__DOT__cache_out2),59);
        bufp->chgQData(oldp+44,(vlSelf->top_memory__DOT__cache__DOT__cache_out),59);
        bufp->chgIData(oldp+46,(vlSelf->top_memory__DOT__cache__DOT__tag_out1),25);
        bufp->chgIData(oldp+47,(vlSelf->top_memory__DOT__cache__DOT__tag_out2),25);
        bufp->chgIData(oldp+48,(vlSelf->top_memory__DOT__cache__DOT__tag_out),25);
        bufp->chgBit(oldp+49,(vlSelf->top_memory__DOT__cache__DOT__target_way));
        bufp->chgBit(oldp+50,(vlSelf->top_memory__DOT__cache__DOT__matching_tag));
        bufp->chgBit(oldp+51,(vlSelf->top_memory__DOT__cache__DOT__valid));
        bufp->chgBit(oldp+52,(vlSelf->top_memory__DOT__cache__DOT__dirty_bit));
        bufp->chgCData(oldp+53,(vlSelf->top_memory__DOT__cache__DOT__set),5);
        bufp->chgIData(oldp+54,(vlSelf->top_memory__DOT__cache__DOT__tag_in),25);
        bufp->chgIData(oldp+55,(vlSelf->top_memory__DOT__cache__DOT__din),32);
        bufp->chgIData(oldp+56,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
        bufp->chgIData(oldp+57,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
        bufp->chgSData(oldp+58,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
        bufp->chgCData(oldp+59,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
        bufp->chgBit(oldp+60,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
        bufp->chgBit(oldp+61,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
        bufp->chgCData(oldp+62,((0xffU & vlSelf->top_memory__DOT__cache_out)),8);
        bufp->chgCData(oldp+63,((0xffU & (vlSelf->top_memory__DOT__cache_out 
                                          >> 8U))),8);
        bufp->chgCData(oldp+64,((0xffU & (vlSelf->top_memory__DOT__cache_out 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+65,((vlSelf->top_memory__DOT__cache_out 
                                 >> 0x18U)),8);
    }
    bufp->chgBit(oldp+66,(vlSelf->clk));
    bufp->chgBit(oldp+67,(vlSelf->sw));
    bufp->chgBit(oldp+68,(vlSelf->sh));
    bufp->chgBit(oldp+69,(vlSelf->sb));
    bufp->chgBit(oldp+70,(vlSelf->lw));
    bufp->chgBit(oldp+71,(vlSelf->lh));
    bufp->chgBit(oldp+72,(vlSelf->lb));
    bufp->chgBit(oldp+73,(vlSelf->s));
    bufp->chgIData(oldp+74,(vlSelf->ALUResult_M),32);
    bufp->chgIData(oldp+75,(vlSelf->writeData_M),32);
    bufp->chgIData(oldp+76,(vlSelf->readData_M),32);
    bufp->chgIData(oldp+77,(((IData)(vlSelf->sw) ? vlSelf->writeData_M
                              : ((IData)(vlSelf->sh)
                                  ? ((2U & vlSelf->ALUResult_M)
                                      ? ((2U & vlSelf->ALUResult_M)
                                          ? ((0xffff0000U 
                                              & vlSelf->writeData_M) 
                                             | (0xffffU 
                                                & vlSelf->top_memory__DOT__memory_out))
                                          : 0U) : (
                                                   (0xffff0000U 
                                                    & vlSelf->top_memory__DOT__memory_out) 
                                                   | (0xffffU 
                                                      & vlSelf->writeData_M)))
                                  : ((IData)(vlSelf->sb)
                                      ? ((2U & vlSelf->ALUResult_M)
                                          ? ((1U & vlSelf->ALUResult_M)
                                              ? ((vlSelf->writeData_M 
                                                  << 0x18U) 
                                                 | (0xffffffU 
                                                    & vlSelf->top_memory__DOT__memory_out))
                                              : ((0xff000000U 
                                                  & vlSelf->top_memory__DOT__memory_out) 
                                                 | ((0xff0000U 
                                                     & (vlSelf->writeData_M 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & vlSelf->top_memory__DOT__memory_out))))
                                          : ((1U & vlSelf->ALUResult_M)
                                              ? ((0xffff0000U 
                                                  & vlSelf->top_memory__DOT__memory_out) 
                                                 | ((0xff00U 
                                                     & (vlSelf->writeData_M 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSelf->top_memory__DOT__memory_out)))
                                              : ((0xffffff00U 
                                                  & vlSelf->top_memory__DOT__memory_out) 
                                                 | (0xffU 
                                                    & vlSelf->writeData_M))))
                                      : 0U)))),32);
    bufp->chgCData(oldp+78,((3U & vlSelf->ALUResult_M)),2);
    bufp->chgIData(oldp+79,((0xfffffffcU & vlSelf->ALUResult_M)),32);
}

void Vtop_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_cleanup\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
