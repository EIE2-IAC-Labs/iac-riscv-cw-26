// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_memory__Syms.h"


VL_ATTR_COLD void Vtop_memory___024root__trace_init_sub__TOP__0(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"sw", false,-1);
    tracep->declBit(c+51,"sh", false,-1);
    tracep->declBit(c+52,"sb", false,-1);
    tracep->declBit(c+53,"lw", false,-1);
    tracep->declBit(c+54,"lh", false,-1);
    tracep->declBit(c+55,"lb", false,-1);
    tracep->declBit(c+56,"s", false,-1);
    tracep->declBus(c+57,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+58,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+59,"readData_M", false,-1, 31,0);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+68,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+50,"sw", false,-1);
    tracep->declBit(c+51,"sh", false,-1);
    tracep->declBit(c+52,"sb", false,-1);
    tracep->declBit(c+53,"lw", false,-1);
    tracep->declBit(c+54,"lh", false,-1);
    tracep->declBit(c+55,"lb", false,-1);
    tracep->declBit(c+56,"s", false,-1);
    tracep->declBus(c+57,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+58,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+59,"readData_M", false,-1, 31,0);
    tracep->declBit(c+60,"loadIns", false,-1);
    tracep->declBit(c+1,"storeIns", false,-1);
    tracep->declBit(c+2,"cache_hit", false,-1);
    tracep->declBit(c+61,"cache_wen", false,-1);
    tracep->declBus(c+3,"cache_out", false,-1, 31,0);
    tracep->declBus(c+62,"cache_in", false,-1, 31,0);
    tracep->declBus(c+63,"cache_store", false,-1, 31,0);
    tracep->declBus(c+4,"ram_out", false,-1, 31,0);
    tracep->declBus(c+5,"memory_out", false,-1, 31,0);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"CACHE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->declBus(c+57,"addr", false,-1, 31,0);
    tracep->declBus(c+62,"din", false,-1, 31,0);
    tracep->declBit(c+2,"hit", false,-1);
    tracep->declBus(c+3,"dout", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+17+i*2,"cache_subarray", true,(i+0), 56,0);
    }
    tracep->declQuad(c+6,"cache_out", false,-1, 56,0);
    tracep->declBit(c+8,"valid", false,-1);
    tracep->declBus(c+9,"tag_out", false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_store_input ");
    tracep->declBus(c+68,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+50,"sw", false,-1);
    tracep->declBit(c+51,"sh", false,-1);
    tracep->declBit(c+52,"sb", false,-1);
    tracep->declBus(c+58,"din", false,-1, 31,0);
    tracep->declBus(c+57,"addr", false,-1, 31,0);
    tracep->declBus(c+3,"cache_out", false,-1, 31,0);
    tracep->declBus(c+63,"cache_store", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+68,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+72,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+53,"lw", false,-1);
    tracep->declBit(c+55,"lb", false,-1);
    tracep->declBit(c+54,"lh", false,-1);
    tracep->declBit(c+56,"s", false,-1);
    tracep->declBus(c+74,"offset", false,-1, 1,0);
    tracep->declBus(c+5,"data", false,-1, 31,0);
    tracep->declBus(c+59,"dout", false,-1, 31,0);
    tracep->declBus(c+10,"he", false,-1, 31,0);
    tracep->declBus(c+11,"be", false,-1, 31,0);
    tracep->declBus(c+12,"h", false,-1, 15,0);
    tracep->declBus(c+13,"b", false,-1, 7,0);
    tracep->pushNamePrefix("h_e ");
    tracep->declBus(c+68,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+72,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+12,"din", false,-1, 15,0);
    tracep->declBit(c+56,"s", false,-1);
    tracep->declBus(c+10,"dout", false,-1, 31,0);
    tracep->declBit(c+14,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_e ");
    tracep->declBus(c+68,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+73,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+13,"din", false,-1, 7,0);
    tracep->declBit(c+56,"s", false,-1);
    tracep->declBus(c+11,"dout", false,-1, 31,0);
    tracep->declBit(c+15,"sign", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+68,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+73,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+58,"wd", false,-1, 31,0);
    tracep->declBit(c+50,"sw", false,-1);
    tracep->declBit(c+51,"sh", false,-1);
    tracep->declBit(c+52,"sb", false,-1);
    tracep->declBus(c+57,"a", false,-1, 31,0);
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBus(c+4,"rd", false,-1, 31,0);
    tracep->declBus(c+16,"offset_a", false,-1, 31,0);
    tracep->declBus(c+64,"d0", false,-1, 7,0);
    tracep->declBus(c+65,"d1", false,-1, 7,0);
    tracep->declBus(c+66,"d2", false,-1, 7,0);
    tracep->declBus(c+67,"d3", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_init_top(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_init_top\n"); );
    // Body
    Vtop_memory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_memory___024root__trace_register(Vtop_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_memory___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_memory___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_memory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_full_top_0\n"); );
    // Init
    Vtop_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_memory___024root*>(voidSelf);
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_memory___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_memory___024root__trace_full_sub_0(Vtop_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_memory___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top_memory__DOT__storeIns));
    bufp->fullBit(oldp+2,(vlSelf->top_memory__DOT__cache_hit));
    bufp->fullIData(oldp+3,(vlSelf->top_memory__DOT__cache_out),32);
    bufp->fullIData(oldp+4,(vlSelf->top_memory__DOT__ram_out),32);
    bufp->fullIData(oldp+5,(vlSelf->top_memory__DOT__memory_out),32);
    bufp->fullQData(oldp+6,(vlSelf->top_memory__DOT__cache__DOT__cache_out),57);
    bufp->fullBit(oldp+8,(vlSelf->top_memory__DOT__cache__DOT__valid));
    bufp->fullIData(oldp+9,(vlSelf->top_memory__DOT__cache__DOT__tag_out),24);
    bufp->fullIData(oldp+10,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
    bufp->fullIData(oldp+11,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
    bufp->fullSData(oldp+12,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
    bufp->fullCData(oldp+13,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
    bufp->fullBit(oldp+14,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
    bufp->fullBit(oldp+15,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
    bufp->fullIData(oldp+16,(vlSelf->top_memory__DOT__ram__DOT__offset_a),32);
    bufp->fullQData(oldp+17,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[0]),57);
    bufp->fullQData(oldp+19,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[1]),57);
    bufp->fullQData(oldp+21,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[2]),57);
    bufp->fullQData(oldp+23,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[3]),57);
    bufp->fullQData(oldp+25,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[4]),57);
    bufp->fullQData(oldp+27,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[5]),57);
    bufp->fullQData(oldp+29,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[6]),57);
    bufp->fullQData(oldp+31,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[7]),57);
    bufp->fullQData(oldp+33,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[8]),57);
    bufp->fullQData(oldp+35,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[9]),57);
    bufp->fullQData(oldp+37,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[10]),57);
    bufp->fullQData(oldp+39,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[11]),57);
    bufp->fullQData(oldp+41,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[12]),57);
    bufp->fullQData(oldp+43,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[13]),57);
    bufp->fullQData(oldp+45,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[14]),57);
    bufp->fullQData(oldp+47,(vlSelf->top_memory__DOT__cache__DOT__cache_subarray[15]),57);
    bufp->fullBit(oldp+49,(vlSelf->clk));
    bufp->fullBit(oldp+50,(vlSelf->sw));
    bufp->fullBit(oldp+51,(vlSelf->sh));
    bufp->fullBit(oldp+52,(vlSelf->sb));
    bufp->fullBit(oldp+53,(vlSelf->lw));
    bufp->fullBit(oldp+54,(vlSelf->lh));
    bufp->fullBit(oldp+55,(vlSelf->lb));
    bufp->fullBit(oldp+56,(vlSelf->s));
    bufp->fullIData(oldp+57,(vlSelf->ALUResult_M),32);
    bufp->fullIData(oldp+58,(vlSelf->writeData_M),32);
    bufp->fullIData(oldp+59,(vlSelf->readData_M),32);
    bufp->fullBit(oldp+60,((((IData)(vlSelf->lw) | (IData)(vlSelf->lh)) 
                            | (IData)(vlSelf->lb))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->top_memory__DOT__storeIns) 
                            | ((((IData)(vlSelf->lw) 
                                 | (IData)(vlSelf->lh)) 
                                | (IData)(vlSelf->lb)) 
                               & (~ (IData)(vlSelf->top_memory__DOT__cache_hit))))));
    bufp->fullIData(oldp+62,(((IData)(vlSelf->top_memory__DOT__storeIns)
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
    bufp->fullIData(oldp+63,(((IData)(vlSelf->sw) ? vlSelf->writeData_M
                               : ((IData)(vlSelf->sh)
                                   ? ((2U & vlSelf->ALUResult_M)
                                       ? ((2U & vlSelf->ALUResult_M)
                                           ? ((0xffff0000U 
                                               & vlSelf->writeData_M) 
                                              | (0xffffU 
                                                 & vlSelf->top_memory__DOT__cache_out))
                                           : 0U) : 
                                      ((0xffff0000U 
                                        & vlSelf->top_memory__DOT__cache_out) 
                                       | (0xffffU & vlSelf->writeData_M)))
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
    bufp->fullCData(oldp+64,((0xffU & vlSelf->writeData_M)),8);
    bufp->fullCData(oldp+65,((0xffU & (vlSelf->writeData_M 
                                       >> 8U))),8);
    bufp->fullCData(oldp+66,((0xffU & (vlSelf->writeData_M 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+67,((vlSelf->writeData_M >> 0x18U)),8);
    bufp->fullIData(oldp+68,(0x20U),32);
    bufp->fullIData(oldp+69,(6U),32);
    bufp->fullIData(oldp+70,(0x18U),32);
    bufp->fullIData(oldp+71,(0x39U),32);
    bufp->fullIData(oldp+72,(0x10U),32);
    bufp->fullIData(oldp+73,(8U),32);
    bufp->fullCData(oldp+74,(vlSelf->top_memory__DOT__hbw__DOT__offset),2);
}
