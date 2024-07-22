// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_13_2_H__
#define __lenet_K2_W_V_13_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_13_2_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_13_2_ram) {
        ram[0] = "0b000010010";
        ram[1] = "0b111110110";
        ram[2] = "0b111100100";
        ram[3] = "0b000010101";
        ram[4] = "0b000011101";
        ram[5] = "0b000110110";
        ram[6] = "0b000111011";
        ram[7] = "0b110011101";
        ram[8] = "0b110100010";
        ram[9] = "0b111101001";
        ram[10] = "0b000110111";
        ram[11] = "0b111100110";
        ram[12] = "0b111000001";
        ram[13] = "0b000001000";
        ram[14] = "0b010000101";
        ram[15] = "0b111010000";
        ram[16] = "0b111000100";
        ram[17] = "0b000101000";
        ram[18] = "0b001110111";
        ram[19] = "0b000000010";
        ram[20] = "0b110011011";
        ram[21] = "0b000011100";
        ram[22] = "0b111000101";
        ram[23] = "0b111010011";
        ram[24] = "0b000111011";


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


SC_MODULE(lenet_K2_W_V_13_2) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_13_2_ram* meminst;


SC_CTOR(lenet_K2_W_V_13_2) {
meminst = new lenet_K2_W_V_13_2_ram("lenet_K2_W_V_13_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_13_2() {
    delete meminst;
}


};//endmodule
#endif
