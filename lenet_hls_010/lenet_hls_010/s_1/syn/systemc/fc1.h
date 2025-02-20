// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fc1_HH_
#define _fc1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lenet_mac_muladd_fYi.h"
#include "fc1_FC1_W_V.h"
#include "fc1_FC1_B_V.h"

namespace ap_rtl {

struct fc1 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > out_V_address0;
    sc_out< sc_logic > out_V_ce0;
    sc_out< sc_logic > out_V_we0;
    sc_out< sc_lv<16> > out_V_d0;
    sc_in< sc_lv<16> > out_V_q0;
    sc_out< sc_lv<7> > Re_out_V_address0;
    sc_out< sc_logic > Re_out_V_ce0;
    sc_in< sc_lv<16> > Re_out_V_q0;


    // Module declarations
    fc1(sc_module_name name);
    SC_HAS_PROCESS(fc1);

    ~fc1();

    sc_trace_file* mVcdFile;

    fc1_FC1_W_V* FC1_W_V_U;
    fc1_FC1_B_V* FC1_B_V_U;
    lenet_mac_muladd_fYi<1,1,16,9,26,26>* lenet_mac_muladd_fYi_U25;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > FC1_W_V_address0;
    sc_signal< sc_logic > FC1_W_V_ce0;
    sc_signal< sc_lv<9> > FC1_W_V_q0;
    sc_signal< sc_lv<7> > FC1_B_V_address0;
    sc_signal< sc_logic > FC1_B_V_ce0;
    sc_signal< sc_lv<8> > FC1_B_V_q0;
    sc_signal< sc_lv<7> > i_fu_159_p2;
    sc_signal< sc_lv<7> > i_reg_331;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<15> > sub_ln1117_fu_194_p2;
    sc_signal< sc_lv<15> > sub_ln1117_reg_336;
    sc_signal< sc_lv<1> > icmp_ln198_fu_153_p2;
    sc_signal< sc_lv<7> > out_V_addr_reg_341;
    sc_signal< sc_lv<7> > j_fu_206_p2;
    sc_signal< sc_lv<7> > j_reg_349;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln201_fu_200_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<7> > i_4_fu_262_p2;
    sc_signal< sc_lv<7> > i_4_reg_372;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<7> > out_V_addr_2_reg_377;
    sc_signal< sc_lv<1> > icmp_ln207_fu_256_p2;
    sc_signal< sc_lv<7> > i_0_reg_107;
    sc_signal< sc_lv<16> > p_Val2_9_reg_118;
    sc_signal< sc_lv<7> > j_0_reg_131;
    sc_signal< sc_lv<7> > i1_0_reg_142;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > zext_ln200_fu_165_p1;
    sc_signal< sc_lv<64> > sext_ln1117_fu_226_p1;
    sc_signal< sc_lv<64> > zext_ln203_fu_212_p1;
    sc_signal< sc_lv<64> > zext_ln209_fu_268_p1;
    sc_signal< sc_lv<16> > zext_ln210_fu_314_p1;
    sc_signal< sc_lv<14> > tmp_fu_170_p3;
    sc_signal< sc_lv<10> > tmp_s_fu_182_p3;
    sc_signal< sc_lv<15> > zext_ln1117_fu_178_p1;
    sc_signal< sc_lv<15> > zext_ln1117_2_fu_190_p1;
    sc_signal< sc_lv<15> > zext_ln1117_3_fu_217_p1;
    sc_signal< sc_lv<15> > add_ln1117_fu_221_p2;
    sc_signal< sc_lv<26> > grp_fu_319_p3;
    sc_signal< sc_lv<8> > sext_ln1265_fu_274_p0;
    sc_signal< sc_lv<8> > sext_ln703_fu_278_p0;
    sc_signal< sc_lv<16> > sext_ln1265_fu_274_p1;
    sc_signal< sc_lv<15> > trunc_ln703_fu_282_p1;
    sc_signal< sc_lv<15> > sext_ln703_fu_278_p1;
    sc_signal< sc_lv<16> > add_ln703_fu_286_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_298_p3;
    sc_signal< sc_lv<15> > add_ln1495_fu_292_p2;
    sc_signal< sc_lv<15> > select_ln210_fu_306_p3;
    sc_signal< sc_lv<26> > grp_fu_319_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<7> ap_const_lv7_54;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<7> ap_const_lv7_78;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<15> ap_const_lv15_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_FC1_B_V_address0();
    void thread_FC1_B_V_ce0();
    void thread_FC1_W_V_address0();
    void thread_FC1_W_V_ce0();
    void thread_Re_out_V_address0();
    void thread_Re_out_V_ce0();
    void thread_add_ln1117_fu_221_p2();
    void thread_add_ln1495_fu_292_p2();
    void thread_add_ln703_fu_286_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_319_p2();
    void thread_i_4_fu_262_p2();
    void thread_i_fu_159_p2();
    void thread_icmp_ln198_fu_153_p2();
    void thread_icmp_ln201_fu_200_p2();
    void thread_icmp_ln207_fu_256_p2();
    void thread_j_fu_206_p2();
    void thread_out_V_address0();
    void thread_out_V_ce0();
    void thread_out_V_d0();
    void thread_out_V_we0();
    void thread_select_ln210_fu_306_p3();
    void thread_sext_ln1117_fu_226_p1();
    void thread_sext_ln1265_fu_274_p0();
    void thread_sext_ln1265_fu_274_p1();
    void thread_sext_ln703_fu_278_p0();
    void thread_sext_ln703_fu_278_p1();
    void thread_sub_ln1117_fu_194_p2();
    void thread_tmp_10_fu_298_p3();
    void thread_tmp_fu_170_p3();
    void thread_tmp_s_fu_182_p3();
    void thread_trunc_ln703_fu_282_p1();
    void thread_zext_ln1117_2_fu_190_p1();
    void thread_zext_ln1117_3_fu_217_p1();
    void thread_zext_ln1117_fu_178_p1();
    void thread_zext_ln200_fu_165_p1();
    void thread_zext_ln203_fu_212_p1();
    void thread_zext_ln209_fu_268_p1();
    void thread_zext_ln210_fu_314_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
