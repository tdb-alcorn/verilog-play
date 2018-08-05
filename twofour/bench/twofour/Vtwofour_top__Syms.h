// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtwofour_top__Syms_H_
#define _Vtwofour_top__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtwofour_top.h"

// SYMS CLASS
class Vtwofour_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtwofour_top*                  TOPp;
    
    // CREATORS
    Vtwofour_top__Syms(Vtwofour_top* topp, const char* namep);
    ~Vtwofour_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
