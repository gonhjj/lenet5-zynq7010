// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_FC1_B_V_H__
#define __lenet_FC1_B_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct lenet_FC1_B_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 120;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(lenet_FC1_B_V_ram) {
        ram[0] = "0b11110100";
        ram[1] = "0b01010100";
        ram[2] = "0b00011111";
        ram[3] = "0b10111110";
        ram[4] = "0b11001000";
        ram[5] = "0b01001111";
        ram[6] = "0b10111010";
        ram[7] = "0b00101001";
        ram[8] = "0b10111111";
        ram[9] = "0b10101000";
        ram[10] = "0b10111100";
        ram[11] = "0b11111000";
        ram[12] = "0b10100101";
        ram[13] = "0b10111110";
        ram[14] = "0b01000010";
        ram[15] = "0b11111011";
        ram[16] = "0b11000110";
        ram[17] = "0b11001001";
        ram[18] = "0b11111101";
        ram[19] = "0b10101000";
        ram[20] = "0b11010010";
        ram[21] = "0b10111111";
        ram[22] = "0b00100110";
        ram[23] = "0b11010011";
        ram[24] = "0b00111101";
        ram[25] = "0b00010101";
        ram[26] = "0b01001110";
        ram[27] = "0b00001111";
        ram[28] = "0b01011011";
        ram[29] = "0b00110001";
        ram[30] = "0b10110111";
        ram[31] = "0b01011110";
        ram[32] = "0b00001110";
        ram[33] = "0b11100011";
        ram[34] = "0b10101111";
        ram[35] = "0b01011011";
        ram[36] = "0b00110101";
        ram[37] = "0b11110101";
        ram[38] = "0b11110001";
        ram[39] = "0b01001100";
        ram[40] = "0b11000110";
        ram[41] = "0b10111100";
        ram[42] = "0b11010001";
        ram[43] = "0b11010010";
        ram[44] = "0b11100010";
        ram[45] = "0b00100000";
        ram[46] = "0b00101011";
        ram[47] = "0b11000101";
        ram[48] = "0b10100011";
        ram[49] = "0b11110001";
        ram[50] = "0b11111100";
        ram[51] = "0b00100000";
        ram[52] = "0b11100000";
        ram[53] = "0b11010001";
        ram[54] = "0b11110111";
        ram[55] = "0b10111100";
        ram[56] = "0b01011101";
        ram[57] = "0b10101000";
        ram[58] = "0b10100010";
        ram[59] = "0b11001110";
        ram[60] = "0b11110000";
        ram[61] = "0b11011000";
        ram[62] = "0b01100110";
        ram[63] = "0b01011011";
        ram[64] = "0b11100110";
        ram[65] = "0b01001111";
        ram[66] = "0b01100101";
        ram[67] = "0b11100001";
        ram[68] = "0b00111011";
        ram[69] = "0b00000100";
        ram[70] = "0b11011100";
        ram[71] = "0b10101111";
        ram[72] = "0b01100000";
        ram[73] = "0b11001110";
        ram[74] = "0b00110010";
        ram[75] = "0b01000010";
        ram[76] = "0b11001010";
        ram[77] = "0b00101110";
        ram[78] = "0b01001111";
        ram[79] = "0b11001111";
        ram[80] = "0b01001110";
        ram[81] = "0b01100110";
        ram[82] = "0b11110000";
        ram[83] = "0b10010110";
        for (unsigned i = 84; i < 120 ; i = i + 1) {
            ram[i] = "0b00000000";
        }


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


SC_MODULE(lenet_FC1_B_V) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


lenet_FC1_B_V_ram* meminst;


SC_CTOR(lenet_FC1_B_V) {
meminst = new lenet_FC1_B_V_ram("lenet_FC1_B_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~lenet_FC1_B_V() {
    delete meminst;
}


};//endmodule
#endif
