// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_unit__Syms.h"


VL_ATTR_COLD void Vcontrol_unit___024root__trace_init_sub__TOP__0(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"opcode", false,-1, 6,0);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBit(c+7,"RegWriteD", false,-1);
    tracep->declBus(c+8,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+9,"MemWriteD", false,-1);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+11,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+12,"BranchD", false,-1, 2,0);
    tracep->declBit(c+13,"JumpD", false,-1);
    tracep->declBus(c+14,"R_size", false,-1, 2,0);
    tracep->declBus(c+15,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+16,"ALUControlD", false,-1, 3,0);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+4,"opcode", false,-1, 6,0);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBus(c+6,"funct7", false,-1, 6,0);
    tracep->declBit(c+7,"RegWriteD", false,-1);
    tracep->declBus(c+8,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+9,"MemWriteD", false,-1);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+11,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+12,"BranchD", false,-1, 2,0);
    tracep->declBit(c+13,"JumpD", false,-1);
    tracep->declBus(c+14,"R_size", false,-1, 2,0);
    tracep->declBus(c+15,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+16,"ALUControlD", false,-1, 3,0);
    tracep->declBus(c+1,"instr_type", false,-1, 1,0);
    tracep->pushNamePrefix("alu_control ");
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+5,"funct3", false,-1, 2,0);
    tracep->declBit(c+17,"funct7_bit", false,-1);
    tracep->declBus(c+16,"ALUControlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_control ");
    tracep->declBus(c+5,"funct3", false,-1, 14,12);
    tracep->declBus(c+4,"opcode", false,-1, 6,0);
    tracep->declBit(c+7,"RegWriteD", false,-1);
    tracep->declBus(c+8,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+9,"MemWriteD", false,-1);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+11,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+2,"BranchD", false,-1);
    tracep->declBit(c+13,"JumpD", false,-1);
    tracep->declBus(c+1,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+14,"R_size", false,-1, 2,0);
    tracep->declBus(c+15,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+3,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_init_top(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_init_top\n"); );
    // Body
    Vcontrol_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcontrol_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcontrol_unit___024root__trace_register(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcontrol_unit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcontrol_unit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcontrol_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_full_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcontrol_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_full_top_0\n"); );
    // Init
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcontrol_unit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_full_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((4U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                              ? 0U : ((6U == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                       ? 0U : ((7U 
                                                == vlSelf->control_unit__DOT__main_control__DOT__instr)
                                                ? 1U
                                                : 2U)))),2);
    bufp->fullBit(oldp+2,((7U == vlSelf->control_unit__DOT__main_control__DOT__instr)));
    bufp->fullIData(oldp+3,(vlSelf->control_unit__DOT__main_control__DOT__instr),32);
    bufp->fullCData(oldp+4,(vlSelf->opcode),7);
    bufp->fullCData(oldp+5,(vlSelf->funct3),3);
    bufp->fullCData(oldp+6,(vlSelf->funct7),7);
    bufp->fullBit(oldp+7,(vlSelf->RegWriteD));
    bufp->fullCData(oldp+8,(vlSelf->ResultSrcD),2);
    bufp->fullBit(oldp+9,(vlSelf->MemWriteD));
    bufp->fullBit(oldp+10,(vlSelf->ALUsrcD));
    bufp->fullCData(oldp+11,(vlSelf->ImmSrcD),3);
    bufp->fullCData(oldp+12,(vlSelf->BranchD),3);
    bufp->fullBit(oldp+13,(vlSelf->JumpD));
    bufp->fullCData(oldp+14,(vlSelf->R_size),3);
    bufp->fullCData(oldp+15,(vlSelf->DMem_size),3);
    bufp->fullCData(oldp+16,(vlSelf->ALUControlD),4);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->funct7) 
                                  >> 5U))));
}
