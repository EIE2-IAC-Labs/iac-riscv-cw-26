// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsign_extend.h for the primary calling header

#ifndef VERILATED_VSIGN_EXTEND___024ROOT_H_
#define VERILATED_VSIGN_EXTEND___024ROOT_H_  // guard

#include "verilated.h"

class Vsign_extend__Syms;

class Vsign_extend___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ImmSrcD,2,0);
    SData/*11:0*/ sign_extend__DOT__unnamedblk1__DOT__imm_type_1;
    VL_IN(InstrD,31,0);
    VL_OUT(ImmExtD,31,0);
    IData/*19:0*/ sign_extend__DOT__unnamedblk1__DOT__imm_type_lui;
    IData/*19:0*/ sign_extend__DOT__unnamedblk1__DOT__imm_type_jal;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsign_extend__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsign_extend___024root(Vsign_extend__Syms* symsp, const char* name);
    ~Vsign_extend___024root();
    VL_UNCOPYABLE(Vsign_extend___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
