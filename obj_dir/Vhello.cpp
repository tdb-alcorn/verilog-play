// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "Vhello.h"            // For This
#include "Vhello__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vhello) {
    Vhello__Syms* __restrict vlSymsp = __VlSymsp = new Vhello__Syms(this, name());
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vhello::__Vconfigure(Vhello__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vhello::~Vhello() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vhello::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhello::eval\n"); );
    Vhello__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vhello::_eval_initial_loop(Vhello__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vhello::_initial__TOP__1(Vhello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_initial__TOP__1\n"); );
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at hello.v:2
    VL_WRITEF("Hello World\n");
    VL_FINISH_MT("hello.v",2,"");
}

void Vhello::_eval(Vhello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_eval\n"); );
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhello::_eval_initial(Vhello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_eval_initial\n"); );
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vhello::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::final\n"); );
    // Variables
    Vhello__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vhello::_eval_settle(Vhello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_eval_settle\n"); );
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vhello::_change_request(Vhello__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_change_request\n"); );
    Vhello* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vhello::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Vhello::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello::_ctor_var_reset\n"); );
}
