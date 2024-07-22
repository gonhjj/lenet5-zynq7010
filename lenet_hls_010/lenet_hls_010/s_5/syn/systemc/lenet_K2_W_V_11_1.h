// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_11_1_H__
#define __lenet_K2_W_V_11_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_11_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
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


   SC_CTOR(lenet_K2_W_V_11_1_ram) {
        ram[0] = "0b000000010";
        ram[1] = "0b000001011";
        ram[2] = "0b001000100";
        ram[3] = "0b000100100";
        ram[4] = "0b000101001";
        ram[5] = "0b000100101";
        ram[6] = "0b000110101";
        ram[7] = "0b000010001";
        ram[8] = "0b000011010";
        ram[9] = "0b000010101";
        ram[10] = "0b000110010";
        ram[11] = "0b010000001";
        ram[12] = "0b000101001";
        ram[13] = "0b111111000";
        ram[14] = "0b001000010";
        ram[15] = "0b000111011";
        ram[16] = "0b001111000";
        ram[17] = "0b010000011";
        ram[18] = "0b001101010";
        ram[19] = "0b001100110";
        ram[20] = "0b000101101";
        ram[21] = "0b000000110";
        ram[22] = "0b001001011";
        ram[23] = "0b001100111";
        ram[24] = "0b000011000";


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


SC_MODULE(lenet_K2_W_V_11_1) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_11_1_ram* meminst;


SC_CTOR(lenet_K2_W_V_11_1) {
meminst = new lenet_K2_W_V_11_1_ram("lenet_K2_W_V_11_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_11_1() {
    delete meminst;
}


};//endmodule
#endif
