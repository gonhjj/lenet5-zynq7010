// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_15_1_H__
#define __lenet_K2_W_V_15_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_15_1_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_15_1_ram) {
        ram[0] = "0b11001101";
        ram[1] = "0b00101010";
        ram[2] = "0b11001101";
        ram[3] = "0b11000110";
        ram[4] = "0b00001110";
        ram[5] = "0b00111100";
        ram[6] = "0b00010010";
        ram[7] = "0b11101010";
        ram[8] = "0b11011110";
        ram[9] = "0b11010001";
        ram[10] = "0b00000111";
        ram[11] = "0b11010111";
        ram[12] = "0b11011000";
        ram[13] = "0b00011001";
        ram[14] = "0b01101110";
        ram[15] = "0b11011111";
        ram[16] = "0b01000010";
        ram[17] = "0b11100100";
        ram[18] = "0b10101001";
        ram[19] = "0b11110110";
        ram[20] = "0b00001100";
        ram[21] = "0b01011111";
        ram[22] = "0b01010000";
        ram[23] = "0b10110101";
        ram[24] = "0b10110111";


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


SC_MODULE(lenet_K2_W_V_15_1) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_15_1_ram* meminst;


SC_CTOR(lenet_K2_W_V_15_1) {
meminst = new lenet_K2_W_V_15_1_ram("lenet_K2_W_V_15_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_15_1() {
    delete meminst;
}


};//endmodule
#endif
