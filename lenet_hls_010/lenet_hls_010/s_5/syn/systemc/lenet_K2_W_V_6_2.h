// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_6_2_H__
#define __lenet_K2_W_V_6_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_6_2_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_6_2_ram) {
        ram[0] = "0b000100001";
        ram[1] = "0b010000010";
        ram[2] = "0b000011101";
        ram[3] = "0b110110101";
        ram[4] = "0b110001101";
        ram[5] = "0b001000101";
        ram[6] = "0b010000111";
        ram[7] = "0b000101101";
        ram[8] = "0b101110101";
        ram[9] = "0b111101111";
        ram[10] = "0b001101111";
        ram[11] = "0b010001011";
        ram[12] = "0b101110010";
        ram[13] = "0b000001100";
        ram[14] = "0b000010011";
        ram[15] = "0b010111011";
        ram[16] = "0b111111101";
        ram[17] = "0b111010100";
        ram[18] = "0b111100001";
        ram[19] = "0b110110001";
        ram[20] = "0b001000101";
        ram[21] = "0b110100001";
        ram[22] = "0b000011111";
        ram[23] = "0b111101000";
        ram[24] = "0b111011111";


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


SC_MODULE(lenet_K2_W_V_6_2) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_6_2_ram* meminst;


SC_CTOR(lenet_K2_W_V_6_2) {
meminst = new lenet_K2_W_V_6_2_ram("lenet_K2_W_V_6_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_6_2() {
    delete meminst;
}


};//endmodule
#endif
