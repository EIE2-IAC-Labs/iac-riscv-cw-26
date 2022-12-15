// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_DECODER__SYMS_H_
#define VERILATED_VALU_DECODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VALU_decoder.h"

// INCLUDE MODULE CLASSES
#include "VALU_decoder___024root.h"

// SYMS CLASS (contains all model state)
class VALU_decoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VALU_decoder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VALU_decoder___024root         TOP;

    // CONSTRUCTORS
    VALU_decoder__Syms(VerilatedContext* contextp, const char* namep, VALU_decoder* modelp);
    ~VALU_decoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
