// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_11_4_H__
#define __lenet_K2_W_V_11_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_11_4_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_11_4_ram) {
        ram[0] = "0b001110011";
        ram[1] = "0b111100001";
        ram[2] = "0b001100011";
        ram[3] = "0b000010010";
        ram[4] = "0b001010011";
        ram[5] = "0b111101011";
        ram[6] = "0b001100100";
        ram[7] = "0b000111111";
        ram[8] = "0b111011111";
        ram[9] = "0b111000001";
        ram[10] = "0b000101011";
        ram[11] = "0b001101001";
        ram[12] = "0b000011101";
        ram[13] = "0b111110010";
        ram[14] = "0b111100110";
        ram[15] = "0b001011110";
        ram[16] = "0b111101110";
        ram[17] = "0b010000110";
        ram[18] = "0b000101000";
        ram[19] = "0b111111110";
        ram[20] = "0b110111100";
        ram[21] = "0b000101110";
        ram[22] = "0b001011110";
        ram[23] = "0b001001100";
        ram[24] = "0b001101001";


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


SC_MODULE(lenet_K2_W_V_11_4) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_11_4_ram* meminst;


SC_CTOR(lenet_K2_W_V_11_4) {
meminst = new lenet_K2_W_V_11_4_ram("lenet_K2_W_V_11_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_11_4() {
    delete meminst;
}


};//endmodule
#endif
