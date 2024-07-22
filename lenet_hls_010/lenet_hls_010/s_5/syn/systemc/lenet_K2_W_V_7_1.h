// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_7_1_H__
#define __lenet_K2_W_V_7_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_7_1_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_7_1_ram) {
        ram[0] = "0b01000100";
        ram[1] = "0b11001111";
        ram[2] = "0b00010000";
        ram[3] = "0b00000111";
        ram[4] = "0b00101101";
        ram[5] = "0b11001111";
        ram[6] = "0b00001101";
        ram[7] = "0b11100000";
        ram[8] = "0b00110111";
        ram[9] = "0b10111011";
        ram[10] = "0b00010010";
        ram[11] = "0b10100010";
        ram[12] = "0b10100010";
        ram[13] = "0b00110100";
        ram[14] = "0b11111010";
        ram[15] = "0b10011010";
        ram[16] = "0b11011001";
        ram[17] = "0b11000111";
        ram[18] = "0b00011111";
        ram[19] = "0b01001000";
        ram[20] = "0b11010100";
        ram[21] = "0b10111010";
        ram[22] = "0b00001011";
        ram[23] = "0b11100110";
        ram[24] = "0b01101001";


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


SC_MODULE(lenet_K2_W_V_7_1) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_7_1_ram* meminst;


SC_CTOR(lenet_K2_W_V_7_1) {
meminst = new lenet_K2_W_V_7_1_ram("lenet_K2_W_V_7_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_7_1() {
    delete meminst;
}


};//endmodule
#endif
