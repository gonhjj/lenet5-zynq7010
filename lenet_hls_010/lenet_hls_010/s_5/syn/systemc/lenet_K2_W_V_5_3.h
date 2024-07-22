// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_5_3_H__
#define __lenet_K2_W_V_5_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_5_3_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_5_3_ram) {
        ram[0] = "0b111000011";
        ram[1] = "0b101011100";
        ram[2] = "0b101100001";
        ram[3] = "0b000000010";
        ram[4] = "0b001110000";
        ram[5] = "0b110000101";
        ram[6] = "0b101000001";
        ram[7] = "0b101100000";
        ram[8] = "0b001001010";
        ram[9] = "0b001000000";
        ram[10] = "0b110001111";
        ram[11] = "0b110111010";
        ram[12] = "0b110110010";
        ram[13] = "0b000101111";
        ram[14] = "0b000111000";
        ram[15] = "0b111011100";
        ram[16] = "0b110010011";
        ram[17] = "0b001101111";
        ram[18] = "0b010010100";
        ram[19] = "0b000011100";
        ram[20] = "0b111011110";
        ram[21] = "0b001010100";
        ram[22] = "0b000110111";
        ram[23] = "0b111111110";
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


SC_MODULE(lenet_K2_W_V_5_3) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_5_3_ram* meminst;


SC_CTOR(lenet_K2_W_V_5_3) {
meminst = new lenet_K2_W_V_5_3_ram("lenet_K2_W_V_5_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_5_3() {
    delete meminst;
}


};//endmodule
#endif
