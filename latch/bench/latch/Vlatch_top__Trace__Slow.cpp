// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlatch_top__Syms.h"


//======================

void Vlatch_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vlatch_top::traceInit, &Vlatch_top::traceFull, &Vlatch_top::traceChg, this);
}
void Vlatch_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vlatch_top* t=(Vlatch_top*)userthis;
    Vlatch_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vlatch_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vlatch_top* t=(Vlatch_top*)userthis;
    Vlatch_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vlatch_top::traceInitThis(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vlatch_top::traceFullThis(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vlatch_top::traceInitThis__1(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"CLOCK",-1);
	vcdp->declBit  (c+2,"WRITE",-1);
	vcdp->declBit  (c+3,"DATA",-1);
	vcdp->declBit  (c+4,"OUT",-1);
	vcdp->declBit  (c+1,"state CLOCK",-1);
	vcdp->declBit  (c+2,"state WRITE",-1);
	vcdp->declBit  (c+3,"state DATA",-1);
	vcdp->declBit  (c+4,"state OUT",-1);
    }
}

void Vlatch_top::traceFullThis__1(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CLOCK));
	vcdp->fullBit  (c+2,(vlTOPp->WRITE));
	vcdp->fullBit  (c+3,(vlTOPp->DATA));
	vcdp->fullBit  (c+4,(vlTOPp->OUT));
    }
}
