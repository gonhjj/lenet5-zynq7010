// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_K2_W_V_9_1_H__
#define __lenet_K2_W_V_9_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_K2_W_V_9_1_ram : public sc_core::sc_module {

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


   SC_CTOR(lenet_K2_W_V_9_1_ram) {
        ram[0] = "0b00000111";
        ram[1] = "0b01000001";
        ram[2] = "0b11010011";
        ram[3] = "0b10000000";
        ram[4] = "0b10101000";
        ram[5] = "0b00110100";
        ram[6] = "0b01010110";
        ram[7] = "0b11100010";
        ram[8] = "0b10101100";
        ram[9] = "0b00010011";
        ram[10] = "0b00111011";
        ram[11] = "0b01000010";
        ram[12] = "0b00010001";
        ram[13] = "0b00011011";
        ram[14] = "0b00101000";
        ram[15] = "0b00110000";
        ram[16] = "0b00111011";
        ram[17] = "0b00010101";
        ram[18] = "0b00011010";
        ram[19] = "0b00010000";
        ram[20] = "0b00101010";
        ram[21] = "0b11011011";
        ram[22] = "0b01011111";
        ram[23] = "0b00100101";
        ram[24] = "0b11111011";


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


SC_MODULE(lenet_K2_W_V_9_1) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 25;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_K2_W_V_9_1_ram* meminst;


SC_CTOR(lenet_K2_W_V_9_1) {
meminst = new lenet_K2_W_V_9_1_ram("lenet_K2_W_V_9_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_K2_W_V_9_1() {
    delete meminst;
}


};//endmodule
#endif
