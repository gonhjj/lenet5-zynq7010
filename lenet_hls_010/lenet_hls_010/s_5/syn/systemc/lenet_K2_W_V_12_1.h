// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_12_1_H__
#define __lenet_K2_W_V_12_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_12_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 25;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(lenet_K2_W_V_12_1_ram) {
        ram[0] = "0b01000001";
        ram[1] = "0b10111110";
        ram[2] = "0b00111100";
        ram[3] = "0b00010110";
        ram[4] = "0b00101011";
        ram[5] = "0b10110011";
        ram[6] = "0b01001010";
        ram[7] = "0b00111001";
        ram[8] = "0b01010110";
        ram[9] = "0b11111001";
        ram[10] = "0b11100000";
        ram[11] = "0b01000100";
        ram[12] = "0b00100001";
        ram[13] = "0b00011010";
        ram[14] = "0b00001000";
        ram[15] = "0b11000000";
        ram[16] = "0b11011011";
        ram[17] = "0b01000001";
        ram[18] = "0b01010000";
        ram[19] = "0b11110111";
        ram[20] = "0b11010110";
        ram[21] = "0b11110011";
        ram[22] = "0b00011111";
        ram[23] = "0b11111000";
        ram[24] = "0b00101000";


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


SC_MODULE(lenet_K2_W_V_12_1) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_12_1_ram* meminst;


SC_CTOR(lenet_K2_W_V_12_1) {
meminst = new lenet_K2_W_V_12_1_ram("lenet_K2_W_V_12_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_12_1() {
    delete meminst;
}


};//endmodule
#endif
