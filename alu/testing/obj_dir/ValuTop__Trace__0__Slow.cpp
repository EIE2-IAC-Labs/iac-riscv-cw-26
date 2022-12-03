// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "ValuTop__Syms.h"


VL_ATTR_COLD void ValuTop___024root__trace_init_sub__TOP__0(ValuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBit(c+37,"ALUctrl", false,-1);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+40,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->declBus(c+42,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("aluTop ");
    tracep->declBus(c+49,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBit(c+37,"ALUctrl", false,-1);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+40,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->declBus(c+42,"a0", false,-1, 31,0);
    tracep->declBus(c+43,"ALUout", false,-1, 31,0);
    tracep->declBus(c+1,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+2,"regOp2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+49,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+45,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+43,"SUM", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+49,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBus(c+2,"regOp2", false,-1, 31,0);
    tracep->declBus(c+40,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+50,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+38,"Instr", false,-1, 31,0);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBus(c+43,"WD3", false,-1, 31,0);
    tracep->declBus(c+1,"RD1", false,-1, 31,0);
    tracep->declBus(c+2,"RD2", false,-1, 31,0);
    tracep->declBus(c+42,"a0", false,-1, 31,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void ValuTop___024root__trace_init_top(ValuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_init_top\n"); );
    // Body
    ValuTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void ValuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void ValuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void ValuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void ValuTop___024root__trace_register(ValuTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&ValuTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&ValuTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&ValuTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void ValuTop___024root__trace_full_sub_0(ValuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void ValuTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_full_top_0\n"); );
    // Init
    ValuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<ValuTop___024root*>(voidSelf);
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    ValuTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void ValuTop___024root__trace_full_sub_0(ValuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->aluTop__DOT__ALUop1),32);
    bufp->fullIData(oldp+2,(vlSelf->aluTop__DOT__regOp2),32);
    bufp->fullIData(oldp+3,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[31]),32);
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullBit(oldp+36,(vlSelf->ALUsrc));
    bufp->fullBit(oldp+37,(vlSelf->ALUctrl));
    bufp->fullIData(oldp+38,(vlSelf->Instr),32);
    bufp->fullBit(oldp+39,(vlSelf->RegWrite));
    bufp->fullIData(oldp+40,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+41,(vlSelf->EQ));
    bufp->fullIData(oldp+42,(vlSelf->a0),32);
    bufp->fullIData(oldp+43,(((4U & (IData)(vlSelf->ALUctrl))
                               ? ((2U & (IData)(vlSelf->ALUctrl))
                                   ? vlSelf->aluTop__DOT__ALUop1
                                   : ((IData)(vlSelf->ALUctrl)
                                       ? (vlSelf->aluTop__DOT__ALUop1 
                                          < vlSelf->aluTop__DOT__ALUop2)
                                       : vlSelf->aluTop__DOT__ALUop1))
                               : ((2U & (IData)(vlSelf->ALUctrl))
                                   ? ((IData)(vlSelf->ALUctrl)
                                       ? (vlSelf->aluTop__DOT__ALUop1 
                                          | vlSelf->aluTop__DOT__ALUop2)
                                       : (vlSelf->aluTop__DOT__ALUop1 
                                          & vlSelf->aluTop__DOT__ALUop2))
                                   : ((IData)(vlSelf->ALUctrl)
                                       ? (vlSelf->aluTop__DOT__ALUop1 
                                          - vlSelf->aluTop__DOT__ALUop2)
                                       : (vlSelf->aluTop__DOT__ALUop1 
                                          + vlSelf->aluTop__DOT__ALUop2))))),32);
    bufp->fullIData(oldp+44,(vlSelf->aluTop__DOT__ALUop2),32);
    bufp->fullCData(oldp+45,(vlSelf->ALUctrl),3);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+49,(0x20U),32);
    bufp->fullIData(oldp+50,(5U),32);
}
