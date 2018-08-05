// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_top__Syms.h"


//======================

void Vcounter_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vcounter_top::traceInit, &Vcounter_top::traceFull, &Vcounter_top::traceChg, this);
}
void Vcounter_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vcounter_top* t=(Vcounter_top*)userthis;
    Vcounter_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vcounter_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcounter_top* t=(Vcounter_top*)userthis;
    Vcounter_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vcounter_top::traceInitThis(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vcounter_top::traceFullThis(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcounter_top::traceInitThis__1(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"CONTROL",-1);
	vcdp->declBit  (c+2,"CLOCK",-1);
	vcdp->declBit  (c+3,"RESET",-1);
	vcdp->declBus  (c+4,"OUT",-1,7,0);
	vcdp->declBit  (c+1,"counter CONTROL",-1);
	vcdp->declBit  (c+2,"counter CLOCK",-1);
	vcdp->declBit  (c+3,"counter RESET",-1);
	vcdp->declBus  (c+4,"counter OUT",-1,7,0);
    }
}

void Vcounter_top::traceFullThis__1(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CONTROL));
	vcdp->fullBit  (c+2,(vlTOPp->CLOCK));
	vcdp->fullBit  (c+3,(vlTOPp->RESET));
	vcdp->fullBus  (c+4,(vlTOPp->OUT),8);
    }
}
