// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vhello__Syms_H_
#define _Vhello__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vhello.h"

// SYMS CLASS
class Vhello__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vhello*                        TOPp;
    
    // CREATORS
    Vhello__Syms(Vhello* topp, const char* namep);
    ~Vhello__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
