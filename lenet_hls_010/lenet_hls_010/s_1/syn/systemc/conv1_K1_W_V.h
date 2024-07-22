// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv1_K1_W_V_H__
#define __conv1_K1_W_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv1_K1_W_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
  static const unsigned AddressRange = 150;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv1_K1_W_V_ram) {
        ram[0] = "0b11101010011";
        ram[1] = "0b00010010111";
        ram[2] = "0b00010111000";
        ram[3] = "0b00010011010";
        ram[4] = "0b00011001010";
        ram[5] = "0b00010111100";
        ram[6] = "0b00000010001";
        ram[7] = "0b00100101001";
        ram[8] = "0b00011101011";
        ram[9] = "0b11110000100";
        ram[10] = "0b00011001101";
        ram[11] = "0b00110010111";
        ram[12] = "0b00011100000";
        ram[13] = "0b11110101011";
        ram[14] = "0b11010111000";
        ram[15] = "0b00011011100";
        ram[16] = "0b00111100100";
        ram[17] = "0b00110010000";
        ram[18] = "0b11111011100";
        ram[19] = "0b11110110101";
        ram[20] = "0b00100010010";
        ram[21] = "0b00110100010";
        ram[22] = "0b00110000110";
        ram[23] = "0b11111110011";
        ram[24] = "0b00001100100";
        ram[25] = "0b11111010000";
        ram[26] = "0b11100001101";
        ram[27] = "0b11011001110";
        ram[28] = "0b11110000011";
        ram[29] = "0b11111010011";
        ram[30] = "0b11100111101";
        ram[31] = "0b11011000101";
        ram[32] = "0b00000010101";
        ram[33] = "0b11010111011";
        ram[34] = "0b11100110001";
        ram[35] = "0b11111010100";
        ram[36] = "0b11110010001";
        ram[37] = "0b11111000111";
        ram[38] = "0b11100001101";
        ram[39] = "0b11100001011";
        ram[40] = "0b00100001111";
        ram[41] = "0b11110001111";
        ram[42] = "0b11100110001";
        ram[43] = "0b11110101100";
        ram[44] = "0b11101010100";
        ram[45] = "0b00110000101";
        ram[46] = "0b00000100010";
        ram[47] = "0b00010000010";
        ram[48] = "0b11111000001";
        ram[49] = "0b11110101100";
        ram[50] = "0b00000001010";
        ram[51] = "0b11011001001";
        ram[52] = "0b00001011001";
        ram[53] = "0b00011101011";
        ram[54] = "0b00011111101";
        ram[55] = "0b11101010100";
        ram[56] = "0b11010001011";
        ram[57] = "0b11110010011";
        ram[58] = "0b00100000011";
        ram[59] = "0b00011100110";
        ram[60] = "0b11010111100";
        ram[61] = "0b11111000100";
        ram[62] = "0b11110010101";
        ram[63] = "0b00101111001";
        ram[64] = "0b00001011011";
        ram[65] = "0b00011010001";
        ram[66] = "0b11110010011";
        ram[67] = "0b00101100101";
        ram[68] = "0b00010110010";
        ram[69] = "0b00001001001";
        ram[70] = "0b00001100101";
        ram[71] = "0b00011011000";
        ram[72] = "0b11111100110";
        ram[73] = "0b00110001011";
        ram[74] = "0b00100000100";
        ram[75] = "0b00001011111";
        ram[76] = "0b00011101110";
        ram[77] = "0b11111000011";
        ram[78] = "0b11010010000";
        ram[79] = "0b11101111001";
        ram[80] = "0b00011001000";
        ram[81] = "0b00101000110";
        ram[82] = "0b11101100100";
        ram[83] = "0b11100110110";
        ram[84] = "0b11000011100";
        ram[85] = "0b00010011000";
        ram[86] = "0b00011011111";
        ram[87] = "0b11110011110";
        ram[88] = "0b11100101011";
        ram[89] = "0b11111010100";
        ram[90] = "0b00111000100";
        ram[91] = "0b00100001100";
        ram[92] = "0b11111001100";
        ram[93] = "0b11110111001";
        ram[94] = "0b11110101110";
        ram[95] = "0b00100100101";
        ram[96] = "0b00111011001";
        ram[97] = "0b00010010101";
        ram[98] = "0b00100111110";
        ram[99] = "0b00011101111";
        ram[100] = "0b11110010100";
        ram[101] = "0b11110111001";
        ram[102] = "0b11101101111";
        ram[103] = "0b11111110011";
        ram[104] = "0b11101000101";
        ram[105] = "0b11110100111";
        ram[106] = "0b11101010010";
        ram[107] = "0b11110001110";
        ram[108] = "0b00000111011";
        ram[109] = "0b11011101111";
        ram[110] = "0b11110111110";
        ram[111] = "0b11101001101";
        ram[112] = "0b11100001101";
        ram[113] = "0b00001011111";
        ram[114] = "0b11110011000";
        ram[115] = "0b11110110110";
        ram[116] = "0b11100101010";
        ram[117] = "0b11111111101";
        ram[118] = "0b11110100001";
        ram[119] = "0b11101100010";
        ram[120] = "0b11111001000";
        ram[121] = "0b00000010010";
        ram[122] = "0b11100110011";
        ram[123] = "0b11111000101";
        ram[124] = "0b11100010100";
        ram[125] = "0b00101010110";
        ram[126] = "0b00000011101";
        ram[127] = "0b00000000100";
        ram[128] = "0b11011001001";
        ram[129] = "0b11011010010";
        ram[130] = "0b00010000100";
        ram[131] = "0b00110010000";
        ram[132] = "0b00000000111";
        ram[133] = "0b00001101111";
        ram[134] = "0b11111010100";
        ram[135] = "0b00001101001";
        ram[136] = "0b00101010000";
        ram[137] = "0b00001101110";
        ram[138] = "0b11111111100";
        ram[139] = "0b11110011100";
        ram[140] = "0b00100010010";
        ram[141] = "0b01000001001";
        ram[142] = "0b00011100101";
        ram[143] = "0b00000111000";
        ram[144] = "0b00000101000";
        ram[145] = "0b00011001111";
        ram[146] = "0b00110000101";
        ram[147] = "0b00110010111";
        ram[148] = "0b00100010000";
        ram[149] = "0b00110001000";


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


SC_MODULE(conv1_K1_W_V) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 150;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv1_K1_W_V_ram* meminst;


SC_CTOR(conv1_K1_W_V) {
meminst = new conv1_K1_W_V_ram("conv1_K1_W_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv1_K1_W_V() {
    delete meminst;
}


};//endmodule
#endif
