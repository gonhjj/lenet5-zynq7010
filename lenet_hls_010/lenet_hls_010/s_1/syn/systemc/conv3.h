// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv3_HH_
#define _conv3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lenet_mac_muladd_eOg.h"
#include "conv3_K3_W_V.h"
#include "conv3_K3_B_V.h"

namespace ap_rtl {

struct conv3 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > out_0_0_V_address0;
    sc_out< sc_logic > out_0_0_V_ce0;
    sc_out< sc_logic > out_0_0_V_we0;
    sc_out< sc_lv<16> > out_0_0_V_d0;
    sc_in< sc_lv<16> > out_0_0_V_q0;
    sc_out< sc_lv<9> > P2_out_V_address0;
    sc_out< sc_logic > P2_out_V_ce0;
    sc_in< sc_lv<16> > P2_out_V_q0;


    // Module declarations
    conv3(sc_module_name name);
    SC_HAS_PROCESS(conv3);

    ~conv3();

    sc_trace_file* mVcdFile;

    conv3_K3_W_V* K3_W_V_U;
    conv3_K3_B_V* K3_B_V_U;
    lenet_mac_muladd_eOg<1,1,8,16,26,26>* lenet_mac_muladd_eOg_U19;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<16> > K3_W_V_address0;
    sc_signal< sc_logic > K3_W_V_ce0;
    sc_signal< sc_lv<8> > K3_W_V_q0;
    sc_signal< sc_lv<7> > K3_B_V_address0;
    sc_signal< sc_logic > K3_B_V_ce0;
    sc_signal< sc_lv<8> > K3_B_V_q0;
    sc_signal< sc_lv<3> > add_ln148_fu_236_p2;
    sc_signal< sc_lv<3> > add_ln148_reg_559;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > zext_ln158_fu_242_p1;
    sc_signal< sc_lv<64> > zext_ln158_reg_564;
    sc_signal< sc_lv<1> > icmp_ln148_fu_230_p2;
    sc_signal< sc_lv<6> > add_ln1116_fu_262_p2;
    sc_signal< sc_lv<6> > add_ln1116_reg_569;
    sc_signal< sc_lv<3> > add_ln150_fu_274_p2;
    sc_signal< sc_lv<3> > add_ln150_reg_577;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<17> > zext_ln1116_2_fu_280_p1;
    sc_signal< sc_lv<17> > zext_ln1116_2_reg_582;
    sc_signal< sc_lv<1> > icmp_ln150_fu_268_p2;
    sc_signal< sc_lv<10> > tmp_19_cast_fu_293_p3;
    sc_signal< sc_lv<10> > tmp_19_cast_reg_587;
    sc_signal< sc_lv<4> > add_ln152_fu_307_p2;
    sc_signal< sc_lv<4> > add_ln152_reg_595;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<7> > shl_ln1_fu_313_p3;
    sc_signal< sc_lv<7> > shl_ln1_reg_600;
    sc_signal< sc_lv<1> > icmp_ln152_fu_301_p2;
    sc_signal< sc_lv<4> > add_ln154_fu_331_p2;
    sc_signal< sc_lv<4> > add_ln154_reg_608;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<12> > zext_ln1265_fu_355_p1;
    sc_signal< sc_lv<12> > zext_ln1265_reg_613;
    sc_signal< sc_lv<1> > icmp_ln154_fu_325_p2;
    sc_signal< sc_lv<7> > out_0_0_V_addr_2_reg_618;
    sc_signal< sc_lv<5> > add_ln156_fu_365_p2;
    sc_signal< sc_lv<5> > add_ln156_reg_626;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<17> > add_ln1117_4_fu_433_p2;
    sc_signal< sc_lv<17> > add_ln1117_4_reg_631;
    sc_signal< sc_lv<1> > icmp_ln156_fu_359_p2;
    sc_signal< sc_lv<10> > add_ln1116_2_fu_438_p2;
    sc_signal< sc_lv<10> > add_ln1116_2_reg_636;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > trunc_ln_reg_651;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > add_ln171_fu_482_p2;
    sc_signal< sc_lv<4> > add_ln171_reg_659;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<7> > shl_ln_fu_488_p3;
    sc_signal< sc_lv<7> > shl_ln_reg_664;
    sc_signal< sc_lv<1> > icmp_ln171_fu_476_p2;
    sc_signal< sc_lv<4> > add_ln173_fu_506_p2;
    sc_signal< sc_lv<4> > add_ln173_reg_672;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<7> > out_0_0_V_addr_reg_677;
    sc_signal< sc_lv<1> > icmp_ln173_fu_500_p2;
    sc_signal< sc_lv<7> > out_0_0_V_addr_1_reg_687;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<3> > x_0_0_0_reg_152;
    sc_signal< sc_lv<3> > y_0_0_0_reg_163;
    sc_signal< sc_lv<4> > set_0_0_0_reg_174;
    sc_signal< sc_lv<4> > k_0_0_0_reg_185;
    sc_signal< sc_lv<5> > c_0_0_0_reg_196;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<4> > set3_0_0_0_reg_207;
    sc_signal< sc_lv<4> > k4_0_0_0_reg_218;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<64> > zext_ln158_1_fu_342_p1;
    sc_signal< sc_lv<64> > zext_ln1117_7_fu_443_p1;
    sc_signal< sc_lv<64> > zext_ln1116_4_fu_447_p1;
    sc_signal< sc_lv<64> > zext_ln175_fu_517_p1;
    sc_signal< sc_lv<64> > zext_ln176_fu_534_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<16> > add_ln703_fu_527_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_539_p3;
    sc_signal< sc_lv<5> > tmp_s_fu_250_p3;
    sc_signal< sc_lv<6> > zext_ln1116_fu_246_p1;
    sc_signal< sc_lv<6> > zext_ln1116_1_fu_258_p1;
    sc_signal< sc_lv<6> > zext_ln1116_3_fu_284_p1;
    sc_signal< sc_lv<6> > add_ln1116_1_fu_288_p2;
    sc_signal< sc_lv<7> > zext_ln154_fu_321_p1;
    sc_signal< sc_lv<7> > add_ln158_fu_337_p2;
    sc_signal< sc_lv<11> > tmp_2_fu_347_p3;
    sc_signal< sc_lv<12> > zext_ln1117_4_fu_375_p1;
    sc_signal< sc_lv<12> > add_ln1117_fu_379_p2;
    sc_signal< sc_lv<14> > tmp_12_fu_388_p3;
    sc_signal< sc_lv<64> > zext_ln1117_5_fu_384_p1;
    sc_signal< sc_lv<64> > zext_ln1117_6_fu_396_p1;
    sc_signal< sc_lv<64> > add_ln1117_1_fu_400_p2;
    sc_signal< sc_lv<64> > add_ln1117_2_fu_406_p2;
    sc_signal< sc_lv<15> > trunc_ln1117_1_fu_415_p1;
    sc_signal< sc_lv<17> > trunc_ln1117_fu_411_p1;
    sc_signal< sc_lv<17> > p_shl1_cast_fu_419_p3;
    sc_signal< sc_lv<17> > add_ln1117_3_fu_427_p2;
    sc_signal< sc_lv<10> > zext_ln1117_fu_371_p1;
    sc_signal< sc_lv<26> > grp_fu_547_p3;
    sc_signal< sc_lv<7> > zext_ln173_fu_496_p1;
    sc_signal< sc_lv<7> > add_ln175_fu_512_p2;
    sc_signal< sc_lv<16> > sext_ln1265_fu_523_p1;
    sc_signal< sc_lv<26> > grp_fu_547_p2;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_fsm_state1;
    static const sc_lv<14> ap_ST_fsm_state2;
    static const sc_lv<14> ap_ST_fsm_state3;
    static const sc_lv<14> ap_ST_fsm_state4;
    static const sc_lv<14> ap_ST_fsm_state5;
    static const sc_lv<14> ap_ST_fsm_state6;
    static const sc_lv<14> ap_ST_fsm_state7;
    static const sc_lv<14> ap_ST_fsm_state8;
    static const sc_lv<14> ap_ST_fsm_state9;
    static const sc_lv<14> ap_ST_fsm_state10;
    static const sc_lv<14> ap_ST_fsm_state11;
    static const sc_lv<14> ap_ST_fsm_state12;
    static const sc_lv<14> ap_ST_fsm_state13;
    static const sc_lv<14> ap_ST_fsm_state14;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_K3_B_V_address0();
    void thread_K3_B_V_ce0();
    void thread_K3_W_V_address0();
    void thread_K3_W_V_ce0();
    void thread_P2_out_V_address0();
    void thread_P2_out_V_ce0();
    void thread_add_ln1116_1_fu_288_p2();
    void thread_add_ln1116_2_fu_438_p2();
    void thread_add_ln1116_fu_262_p2();
    void thread_add_ln1117_1_fu_400_p2();
    void thread_add_ln1117_2_fu_406_p2();
    void thread_add_ln1117_3_fu_427_p2();
    void thread_add_ln1117_4_fu_433_p2();
    void thread_add_ln1117_fu_379_p2();
    void thread_add_ln148_fu_236_p2();
    void thread_add_ln150_fu_274_p2();
    void thread_add_ln152_fu_307_p2();
    void thread_add_ln154_fu_331_p2();
    void thread_add_ln156_fu_365_p2();
    void thread_add_ln158_fu_337_p2();
    void thread_add_ln171_fu_482_p2();
    void thread_add_ln173_fu_506_p2();
    void thread_add_ln175_fu_512_p2();
    void thread_add_ln703_fu_527_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_547_p2();
    void thread_icmp_ln148_fu_230_p2();
    void thread_icmp_ln150_fu_268_p2();
    void thread_icmp_ln152_fu_301_p2();
    void thread_icmp_ln154_fu_325_p2();
    void thread_icmp_ln156_fu_359_p2();
    void thread_icmp_ln171_fu_476_p2();
    void thread_icmp_ln173_fu_500_p2();
    void thread_out_0_0_V_address0();
    void thread_out_0_0_V_ce0();
    void thread_out_0_0_V_d0();
    void thread_out_0_0_V_we0();
    void thread_p_shl1_cast_fu_419_p3();
    void thread_sext_ln1265_fu_523_p1();
    void thread_shl_ln1_fu_313_p3();
    void thread_shl_ln_fu_488_p3();
    void thread_tmp_11_fu_539_p3();
    void thread_tmp_12_fu_388_p3();
    void thread_tmp_19_cast_fu_293_p3();
    void thread_tmp_2_fu_347_p3();
    void thread_tmp_s_fu_250_p3();
    void thread_trunc_ln1117_1_fu_415_p1();
    void thread_trunc_ln1117_fu_411_p1();
    void thread_zext_ln1116_1_fu_258_p1();
    void thread_zext_ln1116_2_fu_280_p1();
    void thread_zext_ln1116_3_fu_284_p1();
    void thread_zext_ln1116_4_fu_447_p1();
    void thread_zext_ln1116_fu_246_p1();
    void thread_zext_ln1117_4_fu_375_p1();
    void thread_zext_ln1117_5_fu_384_p1();
    void thread_zext_ln1117_6_fu_396_p1();
    void thread_zext_ln1117_7_fu_443_p1();
    void thread_zext_ln1117_fu_371_p1();
    void thread_zext_ln1265_fu_355_p1();
    void thread_zext_ln154_fu_321_p1();
    void thread_zext_ln158_1_fu_342_p1();
    void thread_zext_ln158_fu_242_p1();
    void thread_zext_ln173_fu_496_p1();
    void thread_zext_ln175_fu_517_p1();
    void thread_zext_ln176_fu_534_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
