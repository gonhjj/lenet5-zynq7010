// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_13_0_H__
#define __lenet_K2_W_V_13_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_13_0_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_13_0_ram) {
        ram[0] = "0b11001110";
        ram[1] = "0b10111010";
        ram[2] = "0b00011101";
        ram[3] = "0b10100110";
        ram[4] = "0b00110010";
        ram[5] = "0b11010000";
        ram[6] = "0b00110011";
        ram[7] = "0b11101101";
        ram[8] = "0b11110100";
        ram[9] = "0b00001101";
        ram[10] = "0b00001011";
        ram[11] = "0b11100001";
        ram[12] = "0b11010000";
        ram[13] = "0b00000000";
        ram[14] = "0b00100101";
        ram[15] = "0b01010001";
        ram[16] = "0b11101010";
        ram[17] = "0b01101110";
        ram[18] = "0b01111000";
        ram[19] = "0b11011111";
        ram[20] = "0b00101000";
        ram[21] = "0b10101011";
        ram[22] = "0b10000010";
        ram[23] = "0b11010100";
        ram[24] = "0b01100011";


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


SC_MODULE(lenet_K2_W_V_13_0) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_13_0_ram* meminst;


SC_CTOR(lenet_K2_W_V_13_0) {
meminst = new lenet_K2_W_V_13_0_ram("lenet_K2_W_V_13_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_13_0() {
    delete meminst;
}


};//endmodule
#endif
