// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_memory.h for the primary calling header

#ifndef VERILATED_VTOP_MEMORY___024ROOT_H_
#define VERILATED_VTOP_MEMORY___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_memory__Syms;

class Vtop_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(sw,0,0);
    VL_IN8(sh,0,0);
    VL_IN8(sb,0,0);
    VL_IN8(lw,0,0);
    VL_IN8(lh,0,0);
    VL_IN8(lb,0,0);
    VL_IN8(s,0,0);
    CData/*0:0*/ top_memory__DOT__hbw__DOT__s_e__DOT__sign;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ALUResult_M,31,0);
    VL_IN(writeData_M,31,0);
    VL_OUT(readData_M,31,0);
    IData/*31:0*/ top_memory__DOT__dout;
    IData/*31:0*/ top_memory__DOT__hbw__DOT__be;
    VlUnpacked<CData/*7:0*/, 131072> top_memory__DOT__ram__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_memory___024root(Vtop_memory__Syms* symsp, const char* name);
    ~Vtop_memory___024root();
    VL_UNCOPYABLE(Vtop_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
