// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv2_K2_B_V_H__
#define __conv2_K2_B_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv2_K2_B_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv2_K2_B_V_ram) {
        ram[0] = "0b00011001";
        ram[1] = "0b00000101";
        ram[2] = "0b00100000";
        ram[3] = "0b00011101";
        ram[4] = "0b01011010";
        ram[5] = "0b00100111";
        ram[6] = "0b10110001";
        ram[7] = "0b00001110";
        ram[8] = "0b11100011";
        ram[9] = "0b11100011";
        ram[10] = "0b01010101";
        ram[11] = "0b00001100";
        ram[12] = "0b11100111";
        ram[13] = "0b00010111";
        ram[14] = "0b00110001";
        ram[15] = "0b01101011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv2_K2_B_V) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv2_K2_B_V_ram* meminst;


SC_CTOR(conv2_K2_B_V) {
meminst = new conv2_K2_B_V_ram("conv2_K2_B_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv2_K2_B_V() {
    delete meminst;
}


};//endmodule
#endif
