// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_decoder.h for the primary calling header

#ifndef VERILATED_VALU_DECODER___024ROOT_H_
#define VERILATED_VALU_DECODER___024ROOT_H_  // guard

#include "verilated.h"

class VALU_decoder__Syms;

class VALU_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ALUOp,1,0);
    VL_IN8(funct3,2,0);
    VL_IN8(funct7_bit,0,0);
    VL_OUT8(ALUControlD,3,0);

    // INTERNAL VARIABLES
    VALU_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU_decoder___024root(VALU_decoder__Syms* symsp, const char* name);
    ~VALU_decoder___024root();
    VL_UNCOPYABLE(VALU_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
