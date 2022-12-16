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
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"sw", false,-1);
    tracep->declBit(c+69,"sh", false,-1);
    tracep->declBit(c+70,"sb", false,-1);
    tracep->declBit(c+71,"lw", false,-1);
    tracep->declBit(c+72,"lh", false,-1);
    tracep->declBit(c+73,"lb", false,-1);
    tracep->declBit(c+74,"s", false,-1);
    tracep->declBus(c+75,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+76,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+77,"readData_M", false,-1, 31,0);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+81,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"sw", false,-1);
    tracep->declBit(c+69,"sh", false,-1);
    tracep->declBit(c+70,"sb", false,-1);
    tracep->declBit(c+71,"lw", false,-1);
    tracep->declBit(c+72,"lh", false,-1);
    tracep->declBit(c+73,"lb", false,-1);
    tracep->declBit(c+74,"s", false,-1);
    tracep->declBus(c+75,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+76,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+77,"readData_M", false,-1, 31,0);
    tracep->declBit(c+33,"loadIns", false,-1);
    tracep->declBit(c+34,"storeIns", false,-1);
    tracep->declBit(c+35,"cache_hit", false,-1);
    tracep->declBit(c+36,"cache_evict", false,-1);
    tracep->declBus(c+37,"cache_out", false,-1, 31,0);
    tracep->declBus(c+78,"cache_store", false,-1, 31,0);
    tracep->declBus(c+38,"cache_addr_out", false,-1, 31,0);
    tracep->declBus(c+39,"ram_out", false,-1, 31,0);
    tracep->declBus(c+40,"memory_out", false,-1, 31,0);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+81,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+83,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"CACHE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+33,"loadIns", false,-1);
    tracep->declBit(c+34,"storeIns", false,-1);
    tracep->declBus(c+75,"addr_in", false,-1, 31,0);
    tracep->declBus(c+78,"cache_store", false,-1, 31,0);
    tracep->declBus(c+39,"ram_out", false,-1, 31,0);
    tracep->declBit(c+35,"hit", false,-1);
    tracep->declBit(c+36,"evict", false,-1);
    tracep->declBus(c+38,"addr_out", false,-1, 31,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+1+i*1,"LRU_array", true,(i+0));
    }
    tracep->declQuad(c+41,"cache_out1", false,-1, 58,0);
    tracep->declQuad(c+43,"cache_out2", false,-1, 58,0);
    tracep->declQuad(c+45,"cache_out", false,-1, 58,0);
    tracep->declBus(c+47,"tag_out1", false,-1, 24,0);
    tracep->declBus(c+48,"tag_out2", false,-1, 24,0);
    tracep->declBus(c+49,"tag_out", false,-1, 24,0);
    tracep->declBit(c+50,"target_way", false,-1);
    tracep->declBit(c+51,"matching_tag", false,-1);
    tracep->declBit(c+52,"valid", false,-1);
    tracep->declBit(c+53,"dirty_bit", false,-1);
    tracep->declBus(c+54,"set", false,-1, 4,0);
    tracep->declBus(c+55,"tag_in", false,-1, 24,0);
    tracep->declBus(c+56,"din", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_store_input ");
    tracep->declBus(c+81,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"sw", false,-1);
    tracep->declBit(c+69,"sh", false,-1);
    tracep->declBit(c+70,"sb", false,-1);
    tracep->declBus(c+76,"din", false,-1, 31,0);
    tracep->declBus(c+75,"addr", false,-1, 31,0);
    tracep->declBus(c+40,"mem_out", false,-1, 31,0);
    tracep->declBus(c+78,"cache_store", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+81,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+85,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+86,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+71,"lw", false,-1);
    tracep->declBit(c+73,"lb", false,-1);
    tracep->declBit(c+72,"lh", false,-1);
    tracep->declBit(c+74,"s", false,-1);
    tracep->declBus(c+79,"offset", false,-1, 1,0);
    tracep->declBus(c+40,"data", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->declBus(c+57,"he", false,-1, 31,0);
    tracep->declBus(c+58,"be", false,-1, 31,0);
    tracep->declBus(c+59,"h", false,-1, 15,0);
    tracep->declBus(c+60,"b", false,-1, 7,0);
    tracep->pushNamePrefix("h_e ");
    tracep->declBus(c+81,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+85,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+59,"din", false,-1, 15,0);
    tracep->declBit(c+74,"s", false,-1);
    tracep->declBus(c+57,"dout", false,-1, 31,0);
    tracep->declBit(c+61,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_e ");
    tracep->declBus(c+81,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+86,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+60,"din", false,-1, 7,0);
    tracep->declBit(c+74,"s", false,-1);
    tracep->declBus(c+58,"dout", false,-1, 31,0);
    tracep->declBit(c+62,"sign", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+81,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+86,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+37,"wd", false,-1, 31,0);
    tracep->declBit(c+36,"sw", false,-1);
    tracep->declBit(c+87,"sh", false,-1);
    tracep->declBit(c+87,"sb", false,-1);
    tracep->declBus(c+38,"w_a", false,-1, 31,0);
    tracep->declBus(c+75,"r_a", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+39,"rd", false,-1, 31,0);
    tracep->declBus(c+80,"offset_ra", false,-1, 31,0);
    tracep->declBus(c+63,"d0", false,-1, 7,0);
    tracep->declBus(c+64,"d1", false,-1, 7,0);
    tracep->declBus(c+65,"d2", false,-1, 7,0);
    tracep->declBus(c+66,"d3", false,-1, 7,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[0]));
    bufp->fullBit(oldp+2,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[1]));
    bufp->fullBit(oldp+3,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[2]));
    bufp->fullBit(oldp+4,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[3]));
    bufp->fullBit(oldp+5,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[4]));
    bufp->fullBit(oldp+6,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[5]));
    bufp->fullBit(oldp+7,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[6]));
    bufp->fullBit(oldp+8,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[7]));
    bufp->fullBit(oldp+9,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[8]));
    bufp->fullBit(oldp+10,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[9]));
    bufp->fullBit(oldp+11,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[10]));
    bufp->fullBit(oldp+12,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[11]));
    bufp->fullBit(oldp+13,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[12]));
    bufp->fullBit(oldp+14,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[13]));
    bufp->fullBit(oldp+15,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[14]));
    bufp->fullBit(oldp+16,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[15]));
    bufp->fullBit(oldp+17,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[16]));
    bufp->fullBit(oldp+18,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[17]));
    bufp->fullBit(oldp+19,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[18]));
    bufp->fullBit(oldp+20,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[19]));
    bufp->fullBit(oldp+21,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[20]));
    bufp->fullBit(oldp+22,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[21]));
    bufp->fullBit(oldp+23,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[22]));
    bufp->fullBit(oldp+24,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[23]));
    bufp->fullBit(oldp+25,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[24]));
    bufp->fullBit(oldp+26,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[25]));
    bufp->fullBit(oldp+27,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[26]));
    bufp->fullBit(oldp+28,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[27]));
    bufp->fullBit(oldp+29,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[28]));
    bufp->fullBit(oldp+30,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[29]));
    bufp->fullBit(oldp+31,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[30]));
    bufp->fullBit(oldp+32,(vlSelf->top_memory__DOT__cache__DOT__LRU_array[31]));
    bufp->fullBit(oldp+33,(vlSelf->top_memory__DOT__loadIns));
    bufp->fullBit(oldp+34,(vlSelf->top_memory__DOT__storeIns));
    bufp->fullBit(oldp+35,(vlSelf->top_memory__DOT__cache_hit));
    bufp->fullBit(oldp+36,(vlSelf->top_memory__DOT__cache_evict));
    bufp->fullIData(oldp+37,(vlSelf->top_memory__DOT__cache_out),32);
    bufp->fullIData(oldp+38,(vlSelf->top_memory__DOT__cache_addr_out),32);
    bufp->fullIData(oldp+39,(vlSelf->top_memory__DOT__ram_out),32);
    bufp->fullIData(oldp+40,(vlSelf->top_memory__DOT__memory_out),32);
    bufp->fullQData(oldp+41,(vlSelf->top_memory__DOT__cache__DOT__cache_out1),59);
    bufp->fullQData(oldp+43,(vlSelf->top_memory__DOT__cache__DOT__cache_out2),59);
    bufp->fullQData(oldp+45,(vlSelf->top_memory__DOT__cache__DOT__cache_out),59);
    bufp->fullIData(oldp+47,(vlSelf->top_memory__DOT__cache__DOT__tag_out1),25);
    bufp->fullIData(oldp+48,(vlSelf->top_memory__DOT__cache__DOT__tag_out2),25);
    bufp->fullIData(oldp+49,(vlSelf->top_memory__DOT__cache__DOT__tag_out),25);
    bufp->fullBit(oldp+50,(vlSelf->top_memory__DOT__cache__DOT__target_way));
    bufp->fullBit(oldp+51,(vlSelf->top_memory__DOT__cache__DOT__matching_tag));
    bufp->fullBit(oldp+52,(vlSelf->top_memory__DOT__cache__DOT__valid));
    bufp->fullBit(oldp+53,(vlSelf->top_memory__DOT__cache__DOT__dirty_bit));
    bufp->fullCData(oldp+54,(vlSelf->top_memory__DOT__cache__DOT__set),5);
    bufp->fullIData(oldp+55,(vlSelf->top_memory__DOT__cache__DOT__tag_in),25);
    bufp->fullIData(oldp+56,(vlSelf->top_memory__DOT__cache__DOT__din),32);
    bufp->fullIData(oldp+57,(vlSelf->top_memory__DOT__hbw__DOT__he),32);
    bufp->fullIData(oldp+58,(vlSelf->top_memory__DOT__hbw__DOT__be),32);
    bufp->fullSData(oldp+59,(vlSelf->top_memory__DOT__hbw__DOT__h),16);
    bufp->fullCData(oldp+60,(vlSelf->top_memory__DOT__hbw__DOT__b),8);
    bufp->fullBit(oldp+61,(vlSelf->top_memory__DOT__hbw__DOT__h_e__DOT__sign));
    bufp->fullBit(oldp+62,(vlSelf->top_memory__DOT__hbw__DOT__s_e__DOT__sign));
    bufp->fullCData(oldp+63,((0xffU & vlSelf->top_memory__DOT__cache_out)),8);
    bufp->fullCData(oldp+64,((0xffU & (vlSelf->top_memory__DOT__cache_out 
                                       >> 8U))),8);
    bufp->fullCData(oldp+65,((0xffU & (vlSelf->top_memory__DOT__cache_out 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+66,((vlSelf->top_memory__DOT__cache_out 
                              >> 0x18U)),8);
    bufp->fullBit(oldp+67,(vlSelf->clk));
    bufp->fullBit(oldp+68,(vlSelf->sw));
    bufp->fullBit(oldp+69,(vlSelf->sh));
    bufp->fullBit(oldp+70,(vlSelf->sb));
    bufp->fullBit(oldp+71,(vlSelf->lw));
    bufp->fullBit(oldp+72,(vlSelf->lh));
    bufp->fullBit(oldp+73,(vlSelf->lb));
    bufp->fullBit(oldp+74,(vlSelf->s));
    bufp->fullIData(oldp+75,(vlSelf->ALUResult_M),32);
    bufp->fullIData(oldp+76,(vlSelf->writeData_M),32);
    bufp->fullIData(oldp+77,(vlSelf->readData_M),32);
    bufp->fullIData(oldp+78,(((IData)(vlSelf->sw) ? vlSelf->writeData_M
                               : ((IData)(vlSelf->sh)
                                   ? ((2U & vlSelf->ALUResult_M)
                                       ? ((2U & vlSelf->ALUResult_M)
                                           ? ((0xffff0000U 
                                               & vlSelf->writeData_M) 
                                              | (0xffffU 
                                                 & vlSelf->top_memory__DOT__memory_out))
                                           : 0U) : 
                                      ((0xffff0000U 
                                        & vlSelf->top_memory__DOT__memory_out) 
                                       | (0xffffU & vlSelf->writeData_M)))
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
    bufp->fullCData(oldp+79,((3U & vlSelf->ALUResult_M)),2);
    bufp->fullIData(oldp+80,((0xfffffffcU & vlSelf->ALUResult_M)),32);
    bufp->fullIData(oldp+81,(0x20U),32);
    bufp->fullIData(oldp+82,(5U),32);
    bufp->fullIData(oldp+83,(0x19U),32);
    bufp->fullIData(oldp+84,(0x3bU),32);
    bufp->fullIData(oldp+85,(0x10U),32);
    bufp->fullIData(oldp+86,(8U),32);
    bufp->fullBit(oldp+87,(0U));
}
