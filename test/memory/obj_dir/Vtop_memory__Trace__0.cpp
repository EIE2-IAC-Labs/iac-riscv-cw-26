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
        bufp->chgBit(oldp+0,(vlSelf->top_memory__DOT__storeIns));
        bufp->chgBit(oldp+1,(vlSelf->top_memory__DOT__cache_hit));
        bufp->chgIData(oldp+2,(vlSelf->top_memory__DOT__cache_out),32);
        bufp->chgIData(oldp+3,(vlSelf->top_memory__DOT__ram_out),32);
        bufp->chgIData(oldp+4,(vlSelf->top_memory__DOT__memory_out),32);
        bufp->chgQData(oldp+5,(vlSelf->top_memory__DOT__cache__DOT__cache_out),57);
        bufp->chgBit(oldp+7,(vlSelf->top_memory__DOT__cache__DOT__valid));
        bufp->chgIData(oldp+8,(vlSelf->top_memory__DOT__cache__DOT__tag_out),24);
        bufp->chgIData(oldp+9,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
        bufp->chgIData(oldp+10,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
        bufp->chgSData(oldp+11,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
        bufp->chgCData(oldp+12,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
        bufp->chgBit(oldp+13,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
        bufp->chgBit(oldp+14,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
        bufp->chgIData(oldp+15,(vlSelf->top_memory__DOT__ram__DOT__offset_a),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+16,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[0]),57);
        bufp->chgQData(oldp+18,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[1]),57);
        bufp->chgQData(oldp+20,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[2]),57);
        bufp->chgQData(oldp+22,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[3]),57);
        bufp->chgQData(oldp+24,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[4]),57);
        bufp->chgQData(oldp+26,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[5]),57);
        bufp->chgQData(oldp+28,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[6]),57);
        bufp->chgQData(oldp+30,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[7]),57);
        bufp->chgQData(oldp+32,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[8]),57);
        bufp->chgQData(oldp+34,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[9]),57);
        bufp->chgQData(oldp+36,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[10]),57);
        bufp->chgQData(oldp+38,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[11]),57);
        bufp->chgQData(oldp+40,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[12]),57);
        bufp->chgQData(oldp+42,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[13]),57);
        bufp->chgQData(oldp+44,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[14]),57);
        bufp->chgQData(oldp+46,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[15]),57);
    }
    bufp->chgBit(oldp+48,(vlSelf->clk));
    bufp->chgBit(oldp+49,(vlSelf->sw));
    bufp->chgBit(oldp+50,(vlSelf->sh));
    bufp->chgBit(oldp+51,(vlSelf->sb));
    bufp->chgBit(oldp+52,(vlSelf->lw));
    bufp->chgBit(oldp+53,(vlSelf->lh));
    bufp->chgBit(oldp+54,(vlSelf->lb));
    bufp->chgBit(oldp+55,(vlSelf->s));
    bufp->chgIData(oldp+56,(vlSelf->ALUResult_M),32);
    bufp->chgIData(oldp+57,(vlSelf->writeData_M),32);
    bufp->chgIData(oldp+58,(vlSelf->readData_M),32);
    bufp->chgBit(oldp+59,((((IData)(vlSelf->lw) | (IData)(vlSelf->lh)) 
                           | (IData)(vlSelf->lb))));
    bufp->chgBit(oldp+60,(((IData)(vlSelf->top_memory__DOT__storeIns) 
                           | ((((IData)(vlSelf->lw) 
                                | (IData)(vlSelf->lh)) 
                               | (IData)(vlSelf->lb)) 
                              & (~ (IData)(vlSelf->top_memory__DOT__cache_hit))))));
    bufp->chgIData(oldp+61,(((IData)(vlSelf->top_memory__DOT__storeIns)
                              ? ((IData)(vlSelf->sw)
                                  ? vlSelf->writeData_M
                                  : ((IData)(vlSelf->sh)
                                      ? ((2U & vlSelf->ALUResult_M)
                                          ? ((2U & vlSelf->ALUResult_M)
                                              ? ((0xffff0000U 
                                                  & vlSelf->writeData_M) 
                                                 | (0xffffU 
                                                    & vlSelf->top_memory__DOT__cache_out))
                                              : 0U)
                                          : ((0xffff0000U 
                                              & vlSelf->top_memory__DOT__cache_out) 
                                             | (0xffffU 
                                                & vlSelf->writeData_M)))
                                      : ((IData)(vlSelf->sb)
                                          ? ((2U & vlSelf->ALUResult_M)
                                              ? ((1U 
                                                  & vlSelf->ALUResult_M)
                                                  ? 
                                                 ((vlSelf->writeData_M 
                                                   << 0x18U) 
                                                  | (0xffffffU 
                                                     & vlSelf->top_memory__DOT__cache_out))
                                                  : 
                                                 ((0xff000000U 
                                                   & vlSelf->top_memory__DOT__cache_out) 
                                                  | ((0xff0000U 
                                                      & (vlSelf->writeData_M 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & vlSelf->top_memory__DOT__cache_out))))
                                              : ((1U 
                                                  & vlSelf->ALUResult_M)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSelf->top_memory__DOT__cache_out) 
                                                  | ((0xff00U 
                                                      & (vlSelf->writeData_M 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->top_memory__DOT__cache_out)))
                                                  : 
                                                 ((0xffffff00U 
                                                   & vlSelf->top_memory__DOT__cache_out) 
                                                  | (0xffU 
                                                     & vlSelf->writeData_M))))
                                          : 0U))) : vlSelf->top_memory__DOT__ram_out)),32);
    bufp->chgIData(oldp+62,(((IData)(vlSelf->sw) ? vlSelf->writeData_M
                              : ((IData)(vlSelf->sh)
                                  ? ((2U & vlSelf->ALUResult_M)
                                      ? ((2U & vlSelf->ALUResult_M)
                                          ? ((0xffff0000U 
                                              & vlSelf->writeData_M) 
                                             | (0xffffU 
                                                & vlSelf->top_memory__DOT__cache_out))
                                          : 0U) : (
                                                   (0xffff0000U 
                                                    & vlSelf->top_memory__DOT__cache_out) 
                                                   | (0xffffU 
                                                      & vlSelf->writeData_M)))
                                  : ((IData)(vlSelf->sb)
                                      ? ((2U & vlSelf->ALUResult_M)
                                          ? ((1U & vlSelf->ALUResult_M)
                                              ? ((vlSelf->writeData_M 
                                                  << 0x18U) 
                                                 | (0xffffffU 
                                                    & vlSelf->top_memory__DOT__cache_out))
                                              : ((0xff000000U 
                                                  & vlSelf->top_memory__DOT__cache_out) 
                                                 | ((0xff0000U 
                                                     & (vlSelf->writeData_M 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & vlSelf->top_memory__DOT__cache_out))))
                                          : ((1U & vlSelf->ALUResult_M)
                                              ? ((0xffff0000U 
                                                  & vlSelf->top_memory__DOT__cache_out) 
                                                 | ((0xff00U 
                                                     & (vlSelf->writeData_M 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSelf->top_memory__DOT__cache_out)))
                                              : ((0xffffff00U 
                                                  & vlSelf->top_memory__DOT__cache_out) 
                                                 | (0xffU 
                                                    & vlSelf->writeData_M))))
                                      : 0U)))),32);
    bufp->chgCData(oldp+63,((0xffU & vlSelf->writeData_M)),8);
    bufp->chgCData(oldp+64,((0xffU & (vlSelf->writeData_M 
                                      >> 8U))),8);
    bufp->chgCData(oldp+65,((0xffU & (vlSelf->writeData_M 
                                      >> 0x10U))),8);
    bufp->chgCData(oldp+66,((vlSelf->writeData_M >> 0x18U)),8);
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
