#include "lenet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lenet::thread_grp_fu_4165_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4165_p1 =  (sc_lv<16>) (sext_ln158_14_fu_25324_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4165_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4165_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
    } else {
        grp_fu_4165_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4165_p2() {
    grp_fu_4165_p2 = (!grp_fu_4165_p0.read().is_01() || !grp_fu_4165_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4165_p0.read()) * sc_bigint<16>(grp_fu_4165_p1.read());
}

void lenet::thread_grp_fu_4166_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4166_p0 =  (sc_lv<9>) (sext_ln728_76_fu_20739_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4166_p0 =  (sc_lv<9>) (sext_ln1265_8_fu_20177_p1.read());
        } else {
            grp_fu_4166_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4166_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4166_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4166_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4166_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4166_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4166_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4166_p2() {
    grp_fu_4166_p2 = (!grp_fu_4166_p0.read().is_01() || !grp_fu_4166_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4166_p0.read()) * sc_bigint<16>(grp_fu_4166_p1.read());
}

void lenet::thread_grp_fu_4167_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4167_p0 =  (sc_lv<9>) (sext_ln728_11_fu_20569_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4167_p0 =  (sc_lv<9>) (sext_ln1265_13_fu_20227_p1.read());
        } else {
            grp_fu_4167_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4167_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4167_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4167_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4167_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4167_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4167_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4167_p2() {
    grp_fu_4167_p2 = (!grp_fu_4167_p0.read().is_01() || !grp_fu_4167_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4167_p0.read()) * sc_bigint<16>(grp_fu_4167_p1.read());
}

void lenet::thread_grp_fu_4168_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        grp_fu_4168_p0 =  (sc_lv<10>) (sext_ln1192_126_fu_25117_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4168_p0 =  (sc_lv<10>) (sext_ln728_19_fu_21055_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4168_p0 =  (sc_lv<10>) (zext_ln1118_2_fu_18155_p1.read());
    } else {
        grp_fu_4168_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4168_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage6.read(), ap_const_boolean_0))) {
        grp_fu_4168_p1 =  (sc_lv<16>) (sext_ln158_9_fu_25033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4168_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4168_p1 =  (sc_lv<16>) (sext_ln1117_9_fu_18148_p1.read());
    } else {
        grp_fu_4168_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4168_p2() {
    grp_fu_4168_p2 = (!grp_fu_4168_p0.read().is_01() || !grp_fu_4168_p1.read().is_01())? sc_lv<25>(): sc_bigint<10>(grp_fu_4168_p0.read()) * sc_bigint<16>(grp_fu_4168_p1.read());
}

void lenet::thread_grp_fu_4169_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4169_p0 =  (sc_lv<9>) (sext_ln728_4_fu_20866_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4169_p0 =  (sc_lv<9>) (sext_ln1265_14_fu_20237_p1.read());
        } else {
            grp_fu_4169_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4169_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4169_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4169_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4169_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4169_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4169_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4169_p2() {
    grp_fu_4169_p2 = (!grp_fu_4169_p0.read().is_01() || !grp_fu_4169_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4169_p0.read()) * sc_bigint<16>(grp_fu_4169_p1.read());
}

void lenet::thread_grp_fu_4170_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        grp_fu_4170_p0 =  (sc_lv<9>) (sext_ln1192_120_fu_25010_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4170_p0 =  (sc_lv<9>) (sext_ln1192_112_fu_24776_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4170_p0 =  (sc_lv<9>) (sext_ln1265_11_fu_20207_p1.read());
    } else {
        grp_fu_4170_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4170_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage5.read(), ap_const_boolean_0))) {
        grp_fu_4170_p1 =  (sc_lv<16>) (sext_ln158_6_fu_24935_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4170_p1 =  (sc_lv<16>) (sext_ln158_2_fu_24736_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4170_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
    } else {
        grp_fu_4170_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4170_p2() {
    grp_fu_4170_p2 = (!grp_fu_4170_p0.read().is_01() || !grp_fu_4170_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4170_p0.read()) * sc_bigint<16>(grp_fu_4170_p1.read());
}

void lenet::thread_grp_fu_4171_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4171_p0 =  (sc_lv<10>) (sext_ln728_12_fu_20583_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4171_p0 =  (sc_lv<10>) (sext_ln1118_16_fu_18390_p1.read());
    } else {
        grp_fu_4171_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4171_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4171_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4171_p1 =  (sc_lv<16>) (sext_ln1117_6_fu_18363_p1.read());
    } else {
        grp_fu_4171_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4171_p2() {
    grp_fu_4171_p2 = (!grp_fu_4171_p0.read().is_01() || !grp_fu_4171_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4171_p0.read()) * sc_bigint<16>(grp_fu_4171_p1.read());
}

void lenet::thread_grp_fu_4172_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4172_p0 =  (sc_lv<9>) (sext_ln728_9_fu_20929_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4172_p0 =  (sc_lv<9>) (sext_ln728_67_fu_20727_p1.read());
        } else {
            grp_fu_4172_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4172_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4172_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4172_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4172_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
        } else {
            grp_fu_4172_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4172_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4172_p2() {
    grp_fu_4172_p2 = (!grp_fu_4172_p0.read().is_01() || !grp_fu_4172_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4172_p0.read()) * sc_bigint<16>(grp_fu_4172_p1.read());
}

void lenet::thread_grp_fu_4173_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4173_p0 =  (sc_lv<9>) (sext_ln728_43_fu_21259_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4173_p0 =  (sc_lv<9>) (sext_ln1265_15_fu_20247_p1.read());
        } else {
            grp_fu_4173_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4173_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4173_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4173_p1 =  (sc_lv<16>) (sext_ln1118_31_fu_20812_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4173_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4173_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4173_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4173_p2() {
    grp_fu_4173_p2 = (!grp_fu_4173_p0.read().is_01() || !grp_fu_4173_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4173_p0.read()) * sc_bigint<16>(grp_fu_4173_p1.read());
}

void lenet::thread_grp_fu_4174_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4174_p0 =  (sc_lv<9>) (sext_ln728_71_fu_20731_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4174_p0 =  (sc_lv<9>) (sext_ln1118_11_fu_18340_p1.read());
    } else {
        grp_fu_4174_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4174_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4174_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4174_p1 =  (sc_lv<16>) (sext_ln1117_3_fu_18294_p1.read());
    } else {
        grp_fu_4174_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4174_p2() {
    grp_fu_4174_p2 = (!grp_fu_4174_p0.read().is_01() || !grp_fu_4174_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4174_p0.read()) * sc_bigint<16>(grp_fu_4174_p1.read());
}

void lenet::thread_grp_fu_4175_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4175_p0 =  (sc_lv<9>) (sext_ln728_69_fu_21303_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4175_p0 =  (sc_lv<9>) (sext_ln728_fu_20172_p1.read());
        } else {
            grp_fu_4175_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4175_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4175_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4175_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4175_p1 =  (sc_lv<16>) (sext_ln1118_28_fu_20152_p1.read());
        } else {
            grp_fu_4175_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4175_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4175_p2() {
    grp_fu_4175_p2 = (!grp_fu_4175_p0.read().is_01() || !grp_fu_4175_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4175_p0.read()) * sc_bigint<16>(grp_fu_4175_p1.read());
}

void lenet::thread_grp_fu_4176_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4176_p0 =  (sc_lv<9>) (sext_ln728_77_fu_20743_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4176_p0 =  (sc_lv<9>) (sext_ln728_30_fu_20232_p1.read());
        } else {
            grp_fu_4176_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4176_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4176_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4176_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4176_p1 =  (sc_lv<16>) (sext_ln1118_28_fu_20152_p1.read());
        } else {
            grp_fu_4176_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4176_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4176_p2() {
    grp_fu_4176_p2 = (!grp_fu_4176_p0.read().is_01() || !grp_fu_4176_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4176_p0.read()) * sc_bigint<16>(grp_fu_4176_p1.read());
}

void lenet::thread_grp_fu_4177_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4177_p0 =  (sc_lv<9>) (sext_ln728_7_fu_20519_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4177_p0 =  (sc_lv<9>) (sext_ln1118_4_fu_18131_p1.read());
    } else {
        grp_fu_4177_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4177_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4177_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4177_p1 =  (sc_lv<16>) (sext_ln1117_2_fu_18099_p1.read());
    } else {
        grp_fu_4177_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4177_p2() {
    grp_fu_4177_p2 = (!grp_fu_4177_p0.read().is_01() || !grp_fu_4177_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4177_p0.read()) * sc_bigint<16>(grp_fu_4177_p1.read());
}

void lenet::thread_grp_fu_4178_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4178_p0 =  (sc_lv<8>) (sext_ln1192_116_fu_24917_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4178_p0 =  (sc_lv<8>) (sext_ln728_68_fu_21299_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4178_p0 =  (sc_lv<8>) (sext_ln1265_20_fu_20297_p1.read());
    } else {
        grp_fu_4178_p0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void lenet::thread_grp_fu_4178_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4178_p1 =  (sc_lv<16>) (sext_ln158_4_fu_24786_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4178_p1 =  (sc_lv<16>) (sext_ln1118_31_fu_20812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4178_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
    } else {
        grp_fu_4178_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4178_p2() {
    grp_fu_4178_p2 = (!grp_fu_4178_p0.read().is_01() || !grp_fu_4178_p1.read().is_01())? sc_lv<25>(): sc_bigint<8>(grp_fu_4178_p0.read()) * sc_bigint<16>(grp_fu_4178_p1.read());
}

void lenet::thread_grp_fu_4179_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4179_p0 =  (sc_lv<9>) (sext_ln728_27_fu_20663_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4179_p0 =  (sc_lv<9>) (sext_ln1118_25_fu_18680_p1.read());
    } else {
        grp_fu_4179_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4179_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4179_p1 =  (sc_lv<16>) (sext_ln1118_30_fu_20435_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4179_p1 =  (sc_lv<16>) (sext_ln1117_7_fu_18652_p1.read());
    } else {
        grp_fu_4179_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4179_p2() {
    grp_fu_4179_p2 = (!grp_fu_4179_p0.read().is_01() || !grp_fu_4179_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4179_p0.read()) * sc_bigint<16>(grp_fu_4179_p1.read());
}

void lenet::thread_grp_fu_4180_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4180_p0 =  (sc_lv<10>) (sext_ln1192_114_fu_24781_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4180_p0 =  (sc_lv<10>) (sext_ln1118_13_fu_18374_p1.read());
    } else {
        grp_fu_4180_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4180_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4180_p1 =  (sc_lv<16>) (sext_ln158_3_fu_24741_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4180_p1 =  (sc_lv<16>) (sext_ln1117_6_fu_18363_p1.read());
    } else {
        grp_fu_4180_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4180_p2() {
    grp_fu_4180_p2 = (!grp_fu_4180_p0.read().is_01() || !grp_fu_4180_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4180_p0.read()) * sc_bigint<16>(grp_fu_4180_p1.read());
}

void lenet::thread_grp_fu_4181_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4181_p0 =  (sc_lv<10>) (sext_ln728_44_fu_21263_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4181_p0 =  (sc_lv<10>) (sext_ln1118_21_fu_18706_p1.read());
    } else {
        grp_fu_4181_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4181_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4181_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4181_p1 =  (sc_lv<16>) (sext_ln1117_8_fu_18658_p1.read());
    } else {
        grp_fu_4181_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4181_p2() {
    grp_fu_4181_p2 = (!grp_fu_4181_p0.read().is_01() || !grp_fu_4181_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4181_p0.read()) * sc_bigint<16>(grp_fu_4181_p1.read());
}

void lenet::thread_grp_fu_4182_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4182_p0 =  (sc_lv<10>) (sext_ln728_26_fu_20659_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4182_p0 =  (sc_lv<10>) (sext_ln1118_6_fu_18165_p1.read());
    } else {
        grp_fu_4182_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4182_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4182_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4182_p1 =  (sc_lv<16>) (sext_ln1117_1_fu_18141_p1.read());
    } else {
        grp_fu_4182_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4182_p2() {
    grp_fu_4182_p2 = (!grp_fu_4182_p0.read().is_01() || !grp_fu_4182_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4182_p0.read()) * sc_bigint<16>(grp_fu_4182_p1.read());
}

void lenet::thread_grp_fu_4183_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4183_p0 =  (sc_lv<10>) (sext_ln728_38_fu_21251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4183_p0 =  (sc_lv<10>) (sext_ln1118_20_fu_18702_p1.read());
    } else {
        grp_fu_4183_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4183_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4183_p1 =  (sc_lv<16>) (sext_ln1118_31_fu_20812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4183_p1 =  (sc_lv<16>) (sext_ln1117_8_fu_18658_p1.read());
    } else {
        grp_fu_4183_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4183_p2() {
    grp_fu_4183_p2 = (!grp_fu_4183_p0.read().is_01() || !grp_fu_4183_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4183_p0.read()) * sc_bigint<16>(grp_fu_4183_p1.read());
}

void lenet::thread_grp_fu_4184_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_4184_p0 =  (sc_lv<16>) (sext_ln1192_28_fu_25773_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4184_p0 =  (sc_lv<16>) (sext_ln728_66_fu_20723_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4184_p0 =  (sc_lv<16>) (sext_ln1265_16_fu_20257_p1.read());
    } else {
        grp_fu_4184_p0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4184_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        grp_fu_4184_p1 =  (sc_lv<16>) (sext_ln1192_29_fu_25777_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4184_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4184_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
    } else {
        grp_fu_4184_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4184_p2() {
    grp_fu_4184_p2 = (!grp_fu_4184_p0.read().is_01() || !grp_fu_4184_p1.read().is_01())? sc_lv<26>(): sc_bigint<16>(grp_fu_4184_p0.read()) * sc_bigint<16>(grp_fu_4184_p1.read());
}

void lenet::thread_grp_fu_4185_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4185_p0 =  (sc_lv<10>) (sext_ln728_46_fu_20691_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4185_p0 =  (sc_lv<10>) (sext_ln1118_fu_18104_p1.read());
    } else {
        grp_fu_4185_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4185_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4185_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_4185_p1 =  (sc_lv<16>) (sext_ln1118_1_fu_18109_p1.read());
    } else {
        grp_fu_4185_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4185_p2() {
    grp_fu_4185_p2 = (!grp_fu_4185_p0.read().is_01() || !grp_fu_4185_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4185_p0.read()) * sc_bigint<16>(grp_fu_4185_p1.read());
}

void lenet::thread_grp_fu_4186_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        grp_fu_4186_p0 =  (sc_lv<10>) (sext_ln1192_128_fu_25196_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4186_p0 =  (sc_lv<10>) (sext_ln1192_108_fu_24766_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4186_p0 =  (sc_lv<10>) (sext_ln1118_17_fu_18666_p1.read());
    } else {
        grp_fu_4186_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4186_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage7.read(), ap_const_boolean_0))) {
        grp_fu_4186_p1 =  (sc_lv<16>) (sext_ln158_10_fu_25121_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4186_p1 =  (sc_lv<16>) (sext_ln158_fu_24728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4186_p1 =  (sc_lv<16>) (sext_ln1117_8_fu_18658_p1.read());
    } else {
        grp_fu_4186_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4186_p2() {
    grp_fu_4186_p2 = (!grp_fu_4186_p0.read().is_01() || !grp_fu_4186_p1.read().is_01())? sc_lv<26>(): sc_bigint<10>(grp_fu_4186_p0.read()) * sc_bigint<16>(grp_fu_4186_p1.read());
}

void lenet::thread_grp_fu_4187_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4187_p0 =  (sc_lv<9>) (sext_ln728_1_fu_20421_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4187_p0 =  (sc_lv<9>) (sext_ln728_50_fu_20272_p1.read());
        } else {
            grp_fu_4187_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4187_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4187_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4187_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4187_p1 =  (sc_lv<16>) (sext_ln1118_28_fu_20152_p1.read());
        } else {
            grp_fu_4187_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4187_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4187_p2() {
    grp_fu_4187_p2 = (!grp_fu_4187_p0.read().is_01() || !grp_fu_4187_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4187_p0.read()) * sc_bigint<16>(grp_fu_4187_p1.read());
}

void lenet::thread_grp_fu_4188_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4188_p0 =  (sc_lv<10>) (sext_ln1192_118_fu_24931_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4188_p0 =  (sc_lv<10>) (sext_ln728_21_fu_20651_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4188_p0 =  (sc_lv<10>) (zext_ln1118_6_fu_18348_p1.read());
    } else {
        grp_fu_4188_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4188_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4188_p1 =  (sc_lv<16>) (sext_ln158_5_fu_24791_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_4188_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4188_p1 =  (sc_lv<16>) (sext_ln1117_3_fu_18294_p1.read());
    } else {
        grp_fu_4188_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4188_p2() {
    grp_fu_4188_p2 = (!grp_fu_4188_p0.read().is_01() || !grp_fu_4188_p1.read().is_01())? sc_lv<25>(): sc_bigint<10>(grp_fu_4188_p0.read()) * sc_bigint<16>(grp_fu_4188_p1.read());
}

void lenet::thread_grp_fu_4189_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4189_p0 =  (sc_lv<9>) (sext_ln728_36_fu_20675_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4189_p0 =  (sc_lv<9>) (sext_ln1265_17_fu_20267_p1.read());
        } else {
            grp_fu_4189_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4189_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4189_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            grp_fu_4189_p1 =  (sc_lv<16>) (sext_ln1118_29_fu_20401_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4189_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4189_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4189_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4189_p2() {
    grp_fu_4189_p2 = (!grp_fu_4189_p0.read().is_01() || !grp_fu_4189_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4189_p0.read()) * sc_bigint<16>(grp_fu_4189_p1.read());
}

void lenet::thread_grp_fu_4190_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4190_p0 =  (sc_lv<10>) (sext_ln728_79_fu_21319_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4190_p0 =  (sc_lv<10>) (zext_ln1118_5_fu_18308_p1.read());
    } else {
        grp_fu_4190_p0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4190_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4190_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4190_p1 =  (sc_lv<16>) (sext_ln1117_3_fu_18294_p1.read());
    } else {
        grp_fu_4190_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4190_p2() {
    grp_fu_4190_p2 = (!grp_fu_4190_p0.read().is_01() || !grp_fu_4190_p1.read().is_01())? sc_lv<25>(): sc_bigint<10>(grp_fu_4190_p0.read()) * sc_bigint<16>(grp_fu_4190_p1.read());
}

void lenet::thread_grp_fu_4191_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4191_p0 =  (sc_lv<9>) (sext_ln1192_132_fu_25306_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4191_p0 =  (sc_lv<9>) (sext_ln728_58_fu_21283_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4191_p0 =  (sc_lv<9>) (sext_ln1265_18_fu_20277_p1.read());
    } else {
        grp_fu_4191_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4191_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        grp_fu_4191_p1 =  (sc_lv<16>) (sext_ln158_12_fu_25231_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_4191_p1 =  (sc_lv<16>) (sext_ln1118_31_fu_20812_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_4191_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
    } else {
        grp_fu_4191_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4191_p2() {
    grp_fu_4191_p2 = (!grp_fu_4191_p0.read().is_01() || !grp_fu_4191_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4191_p0.read()) * sc_bigint<16>(grp_fu_4191_p1.read());
}

void lenet::thread_grp_fu_4192_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4192_p0 =  (sc_lv<9>) (sext_ln728_59_fu_21287_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4192_p0 =  (sc_lv<9>) (sext_ln1265_9_fu_20187_p1.read());
        } else {
            grp_fu_4192_p0 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        grp_fu_4192_p0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4192_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_4192_p1 =  (sc_lv<16>) (sext_ln1118_32_fu_20846_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_4192_p1 =  (sc_lv<16>) (sext_ln1118_27_fu_20127_p1.read());
        } else {
            grp_fu_4192_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_4192_p1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void lenet::thread_grp_fu_4192_p2() {
    grp_fu_4192_p2 = (!grp_fu_4192_p0.read().is_01() || !grp_fu_4192_p1.read().is_01())? sc_lv<25>(): sc_bigint<9>(grp_fu_4192_p0.read()) * sc_bigint<16>(grp_fu_4192_p1.read());
}

void lenet::thread_i_10_fu_25547_p0() {
    i_10_fu_25547_p0 =  (sc_lv<7>) (reg_3969.read());
}

void lenet::thread_i_10_fu_25547_p2() {
    i_10_fu_25547_p2 = (!i_10_fu_25547_p0.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_10_fu_25547_p0.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lenet::thread_i_11_fu_25661_p0() {
    i_11_fu_25661_p0 =  (sc_lv<7>) (reg_4004.read());
}

void lenet::thread_i_11_fu_25661_p2() {
    i_11_fu_25661_p2 = (!i_11_fu_25661_p0.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_11_fu_25661_p0.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lenet::thread_i_12_fu_25730_p0() {
    i_12_fu_25730_p0 =  (sc_lv<4>) (reg_4015.read());
}

void lenet::thread_i_12_fu_25730_p2() {
    i_12_fu_25730_p2 = (!i_12_fu_25730_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_12_fu_25730_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_i_13_fu_25811_p0() {
    i_13_fu_25811_p0 =  (sc_lv<4>) (reg_4062.read());
}

void lenet::thread_i_13_fu_25811_p2() {
    i_13_fu_25811_p2 = (!i_13_fu_25811_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_13_fu_25811_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_i_14_fu_25879_p0() {
    i_14_fu_25879_p0 =  (sc_lv<4>) (reg_4083.read());
}

void lenet::thread_i_14_fu_25879_p2() {
    i_14_fu_25879_p2 = (!i_14_fu_25879_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_14_fu_25879_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_i_15_fu_25914_p1() {
    i_15_fu_25914_p1 =  (sc_lv<4>) (reg_4106.read());
}

void lenet::thread_i_15_fu_25914_p2() {
    i_15_fu_25914_p2 = (!ap_const_lv4_1.is_01() || !i_15_fu_25914_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(i_15_fu_25914_p1.read()));
}

void lenet::thread_i_16_fu_26227_p0() {
    i_16_fu_26227_p0 =  (sc_lv<4>) (reg_4117.read());
}

void lenet::thread_i_16_fu_26227_p2() {
    i_16_fu_26227_p2 = (!i_16_fu_26227_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_16_fu_26227_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_i_2_fu_17754_p2() {
    i_2_fu_17754_p2 = (!ap_const_lv5_1.is_01() || !ap_phi_mux_i4_0_i_phi_fu_3513_p4.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(ap_phi_mux_i4_0_i_phi_fu_3513_p4.read()));
}

void lenet::thread_i_3_fu_19143_p0() {
    i_3_fu_19143_p0 =  (sc_lv<5>) (reg_3553.read());
}

void lenet::thread_i_3_fu_19143_p2() {
    i_3_fu_19143_p2 = (!i_3_fu_19143_p0.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_3_fu_19143_p0.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lenet::thread_i_4_fu_19316_p0() {
    i_4_fu_19316_p0 =  (sc_lv<4>) (reg_3586.read());
}

void lenet::thread_i_4_fu_19316_p2() {
    i_4_fu_19316_p2 = (!i_4_fu_19316_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_4_fu_19316_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_i_6_fu_19606_p2() {
    i_6_fu_19606_p2 = (!ap_const_lv4_1.is_01() || !ap_phi_mux_i_0_i2601_phi_fu_3681_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(ap_phi_mux_i_0_i2601_phi_fu_3681_p4.read()));
}

void lenet::thread_i_8_fu_23488_p2() {
    i_8_fu_23488_p2 = (!ap_const_lv4_1.is_01() || !i1_0_i_reg_3754.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(i1_0_i_reg_3754.read()));
}

void lenet::thread_i_9_fu_24069_p0() {
    i_9_fu_24069_p0 =  (sc_lv<3>) (reg_3776.read());
}

void lenet::thread_i_9_fu_24069_p2() {
    i_9_fu_24069_p2 = (!i_9_fu_24069_p0.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_9_fu_24069_p0.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lenet::thread_i_fu_17367_p0() {
    i_fu_17367_p0 =  (sc_lv<6>) (reg_3476.read());
}

void lenet::thread_i_fu_17367_p2() {
    i_fu_17367_p2 = (!i_fu_17367_p0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_fu_17367_p0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void lenet::thread_icmp_ln100_fu_23494_p2() {
    icmp_ln100_fu_23494_p2 = (!j2_0_i_reg_3765.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j2_0_i_reg_3765.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln119_fu_24063_p0() {
    icmp_ln119_fu_24063_p0 =  (sc_lv<3>) (reg_3776.read());
}

void lenet::thread_icmp_ln119_fu_24063_p2() {
    icmp_ln119_fu_24063_p2 = (!icmp_ln119_fu_24063_p0.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln119_fu_24063_p0.read() == ap_const_lv3_5);
}

void lenet::thread_icmp_ln121_fu_24105_p0() {
    icmp_ln121_fu_24105_p0 =  (sc_lv<3>) (reg_3787.read());
}

void lenet::thread_icmp_ln121_fu_24105_p2() {
    icmp_ln121_fu_24105_p2 = (!icmp_ln121_fu_24105_p0.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln121_fu_24105_p0.read() == ap_const_lv3_5);
}

void lenet::thread_icmp_ln123_fu_24142_p0() {
    icmp_ln123_fu_24142_p0 =  (sc_lv<5>) (reg_3798.read());
}

void lenet::thread_icmp_ln123_fu_24142_p2() {
    icmp_ln123_fu_24142_p2 = (!icmp_ln123_fu_24142_p0.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln123_fu_24142_p0.read() == ap_const_lv5_10);
}

void lenet::thread_icmp_ln126_fu_24176_p0() {
    icmp_ln126_fu_24176_p0 =  (sc_lv<2>) (reg_3822.read());
}

void lenet::thread_icmp_ln126_fu_24176_p2() {
    icmp_ln126_fu_24176_p2 = (!icmp_ln126_fu_24176_p0.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln126_fu_24176_p0.read() == ap_const_lv2_2);
}

void lenet::thread_icmp_ln128_fu_24227_p0() {
    icmp_ln128_fu_24227_p0 =  (sc_lv<2>) (reg_3845.read());
}

void lenet::thread_icmp_ln128_fu_24227_p2() {
    icmp_ln128_fu_24227_p2 = (!icmp_ln128_fu_24227_p0.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln128_fu_24227_p0.read() == ap_const_lv2_2);
}

void lenet::thread_icmp_ln148_fu_24325_p2() {
    icmp_ln148_fu_24325_p2 = (!ap_phi_mux_indvar_flatten303_phi_fu_3860_p4.read().is_01() || !ap_const_lv12_BB8.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten303_phi_fu_3860_p4.read() == ap_const_lv12_BB8);
}

void lenet::thread_icmp_ln1494_1_fu_24271_p1() {
    icmp_ln1494_1_fu_24271_p1 =  (sc_lv<16>) (reg_3833.read());
}

void lenet::thread_icmp_ln1494_1_fu_24271_p2() {
    icmp_ln1494_1_fu_24271_p2 = (!C2_out_V_q0.read().is_01() || !icmp_ln1494_1_fu_24271_p1.read().is_01())? sc_lv<1>(): (sc_bigint<16>(C2_out_V_q0.read()) > sc_bigint<16>(icmp_ln1494_1_fu_24271_p1.read()));
}

void lenet::thread_icmp_ln1494_2_fu_25889_p1() {
    icmp_ln1494_2_fu_25889_p1 =  (sc_lv<16>) (reg_4073.read());
}

void lenet::thread_icmp_ln1494_2_fu_25889_p2() {
    icmp_ln1494_2_fu_25889_p2 = (!FC2_out_V_q0.read().is_01() || !icmp_ln1494_2_fu_25889_p1.read().is_01())? sc_lv<1>(): (sc_bigint<16>(FC2_out_V_q0.read()) > sc_bigint<16>(icmp_ln1494_2_fu_25889_p1.read()));
}

void lenet::thread_icmp_ln1494_fu_19570_p1() {
    icmp_ln1494_fu_19570_p1 =  (sc_lv<16>) (reg_3643.read());
}

void lenet::thread_icmp_ln1494_fu_19570_p2() {
    icmp_ln1494_fu_19570_p2 = (!C1_out_V_q0.read().is_01() || !icmp_ln1494_fu_19570_p1.read().is_01())? sc_lv<1>(): (sc_bigint<16>(C1_out_V_q0.read()) > sc_bigint<16>(icmp_ln1494_fu_19570_p1.read()));
}

void lenet::thread_icmp_ln150_fu_24337_p2() {
    icmp_ln150_fu_24337_p2 = (!ap_phi_mux_indvar_flatten181_phi_fu_3883_p4.read().is_01() || !ap_const_lv10_258.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten181_phi_fu_3883_p4.read() == ap_const_lv10_258);
}

void lenet::thread_icmp_ln152_fu_24369_p2() {
    icmp_ln152_fu_24369_p2 = (!ap_phi_mux_indvar_flatten149_phi_fu_3905_p4.read().is_01() || !ap_const_lv8_78.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten149_phi_fu_3905_p4.read() == ap_const_lv8_78);
}

void lenet::thread_icmp_ln154_fu_24357_p2() {
    icmp_ln154_fu_24357_p2 = (!ap_phi_mux_k_0_i2647_0_0_phi_fu_3928_p4.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_i2647_0_0_phi_fu_3928_p4.read() == ap_const_lv4_8);
}

void lenet::thread_icmp_ln15_fu_17742_p2() {
    icmp_ln15_fu_17742_p2 = (!ap_phi_mux_indvar_flatten41_phi_fu_3502_p4.read().is_01() || !ap_const_lv12_F50.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten41_phi_fu_3502_p4.read() == ap_const_lv12_F50);
}

void lenet::thread_icmp_ln171_fu_25453_p0() {
    icmp_ln171_fu_25453_p0 =  (sc_lv<4>) (reg_3935.read());
}

void lenet::thread_icmp_ln171_fu_25453_p2() {
    icmp_ln171_fu_25453_p2 = (!icmp_ln171_fu_25453_p0.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln171_fu_25453_p0.read() == ap_const_lv4_F);
}

void lenet::thread_icmp_ln173_fu_25477_p0() {
    icmp_ln173_fu_25477_p0 =  (sc_lv<4>) (reg_3946.read());
}

void lenet::thread_icmp_ln173_fu_25477_p2() {
    icmp_ln173_fu_25477_p2 = (!icmp_ln173_fu_25477_p0.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln173_fu_25477_p0.read() == ap_const_lv4_8);
}

void lenet::thread_icmp_ln17_fu_17760_p2() {
    icmp_ln17_fu_17760_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_3524_p4.read().is_01() || !ap_const_lv8_8C.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_3524_p4.read() == ap_const_lv8_8C);
}

void lenet::thread_icmp_ln189_fu_25524_p0() {
    icmp_ln189_fu_25524_p0 =  (sc_lv<7>) (reg_3958.read());
}

void lenet::thread_icmp_ln189_fu_25524_p2() {
    icmp_ln189_fu_25524_p2 = (!icmp_ln189_fu_25524_p0.read().is_01() || !ap_const_lv7_78.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln189_fu_25524_p0.read() == ap_const_lv7_78);
}

void lenet::thread_icmp_ln198_fu_25541_p0() {
    icmp_ln198_fu_25541_p0 =  (sc_lv<7>) (reg_3969.read());
}

void lenet::thread_icmp_ln198_fu_25541_p2() {
    icmp_ln198_fu_25541_p2 = (!icmp_ln198_fu_25541_p0.read().is_01() || !ap_const_lv7_54.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln198_fu_25541_p0.read() == ap_const_lv7_54);
}

void lenet::thread_icmp_ln19_fu_17788_p2() {
    icmp_ln19_fu_17788_p2 = (!ap_phi_mux_x_0_i_phi_fu_3546_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_x_0_i_phi_fu_3546_p4.read() == ap_const_lv3_5);
}

void lenet::thread_icmp_ln201_fu_25588_p0() {
    icmp_ln201_fu_25588_p0 =  (sc_lv<7>) (reg_3993.read());
}

void lenet::thread_icmp_ln201_fu_25588_p2() {
    icmp_ln201_fu_25588_p2 = (!icmp_ln201_fu_25588_p0.read().is_01() || !ap_const_lv7_78.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln201_fu_25588_p0.read() == ap_const_lv7_78);
}

void lenet::thread_icmp_ln207_fu_25655_p0() {
    icmp_ln207_fu_25655_p0 =  (sc_lv<7>) (reg_4004.read());
}

void lenet::thread_icmp_ln207_fu_25655_p2() {
    icmp_ln207_fu_25655_p2 = (!icmp_ln207_fu_25655_p0.read().is_01() || !ap_const_lv7_54.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln207_fu_25655_p0.read() == ap_const_lv7_54);
}

void lenet::thread_icmp_ln219_fu_25724_p0() {
    icmp_ln219_fu_25724_p0 =  (sc_lv<4>) (reg_4015.read());
}

void lenet::thread_icmp_ln219_fu_25724_p2() {
    icmp_ln219_fu_25724_p2 = (!icmp_ln219_fu_25724_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln219_fu_25724_p0.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln222_fu_25741_p0() {
    icmp_ln222_fu_25741_p0 =  (sc_lv<7>) (reg_4051.read());
}

void lenet::thread_icmp_ln222_fu_25741_p2() {
    icmp_ln222_fu_25741_p2 = (!icmp_ln222_fu_25741_p0.read().is_01() || !ap_const_lv7_54.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln222_fu_25741_p0.read() == ap_const_lv7_54);
}

void lenet::thread_icmp_ln228_fu_25805_p0() {
    icmp_ln228_fu_25805_p0 =  (sc_lv<4>) (reg_4062.read());
}

void lenet::thread_icmp_ln228_fu_25805_p2() {
    icmp_ln228_fu_25805_p2 = (!icmp_ln228_fu_25805_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln228_fu_25805_p0.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln243_fu_25868_p0() {
    icmp_ln243_fu_25868_p0 =  (sc_lv<4>) (reg_4083.read());
}

void lenet::thread_icmp_ln243_fu_25868_p2() {
    icmp_ln243_fu_25868_p2 = (!icmp_ln243_fu_25868_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln243_fu_25868_p0.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln249_fu_25903_p0() {
    icmp_ln249_fu_25903_p0 =  (sc_lv<4>) (reg_4106.read());
}

void lenet::thread_icmp_ln249_fu_25903_p2() {
    icmp_ln249_fu_25903_p2 = (!icmp_ln249_fu_25903_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln249_fu_25903_p0.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln255_fu_26216_p0() {
    icmp_ln255_fu_26216_p0 =  (sc_lv<4>) (reg_4117.read());
}

void lenet::thread_icmp_ln255_fu_26216_p2() {
    icmp_ln255_fu_26216_p2 = (!icmp_ln255_fu_26216_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln255_fu_26216_p0.read() == ap_const_lv4_A);
}

void lenet::thread_icmp_ln32_fu_19137_p0() {
    icmp_ln32_fu_19137_p0 =  (sc_lv<5>) (reg_3553.read());
}

void lenet::thread_icmp_ln32_fu_19137_p2() {
    icmp_ln32_fu_19137_p2 = (!icmp_ln32_fu_19137_p0.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln32_fu_19137_p0.read() == ap_const_lv5_1C);
}

void lenet::thread_icmp_ln34_fu_19183_p0() {
    icmp_ln34_fu_19183_p0 =  (sc_lv<5>) (reg_3564.read());
}

void lenet::thread_icmp_ln34_fu_19183_p2() {
    icmp_ln34_fu_19183_p2 = (!icmp_ln34_fu_19183_p0.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln34_fu_19183_p0.read() == ap_const_lv5_1C);
}

void lenet::thread_icmp_ln36_fu_19234_p0() {
    icmp_ln36_fu_19234_p0 =  (sc_lv<3>) (reg_3575.read());
}

void lenet::thread_icmp_ln36_fu_19234_p2() {
    icmp_ln36_fu_19234_p2 = (!icmp_ln36_fu_19234_p0.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln36_fu_19234_p0.read() == ap_const_lv3_6);
}

void lenet::thread_icmp_ln50_fu_19310_p0() {
    icmp_ln50_fu_19310_p0 =  (sc_lv<4>) (reg_3586.read());
}

void lenet::thread_icmp_ln50_fu_19310_p2() {
    icmp_ln50_fu_19310_p2 = (!icmp_ln50_fu_19310_p0.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln50_fu_19310_p0.read() == ap_const_lv4_E);
}

void lenet::thread_icmp_ln52_fu_19356_p0() {
    icmp_ln52_fu_19356_p0 =  (sc_lv<4>) (reg_3597.read());
}

void lenet::thread_icmp_ln52_fu_19356_p2() {
    icmp_ln52_fu_19356_p2 = (!icmp_ln52_fu_19356_p0.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln52_fu_19356_p0.read() == ap_const_lv4_E);
}

void lenet::thread_icmp_ln54_fu_19415_p0() {
    icmp_ln54_fu_19415_p0 =  (sc_lv<3>) (reg_3608.read());
}

void lenet::thread_icmp_ln54_fu_19415_p2() {
    icmp_ln54_fu_19415_p2 = (!icmp_ln54_fu_19415_p0.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln54_fu_19415_p0.read() == ap_const_lv3_6);
}

void lenet::thread_icmp_ln571_fu_17492_p2() {
    icmp_ln571_fu_17492_p2 = (!trunc_ln556_fu_17436_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln556_fu_17436_p1.read() == ap_const_lv63_0);
}

void lenet::thread_icmp_ln57_fu_19449_p0() {
    icmp_ln57_fu_19449_p0 =  (sc_lv<2>) (reg_3632.read());
}

void lenet::thread_icmp_ln57_fu_19449_p2() {
    icmp_ln57_fu_19449_p2 = (!icmp_ln57_fu_19449_p0.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln57_fu_19449_p0.read() == ap_const_lv2_2);
}

void lenet::thread_icmp_ln581_fu_17504_p2() {
    icmp_ln581_fu_17504_p2 = (!F2_fu_17498_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_fu_17498_p2.read()) > sc_bigint<12>(ap_const_lv12_A));
}

void lenet::thread_icmp_ln582_fu_17530_p2() {
    icmp_ln582_fu_17530_p2 = (!F2_fu_17498_p2.read().is_01() || !ap_const_lv12_A.is_01())? sc_lv<1>(): sc_lv<1>(F2_fu_17498_p2.read() == ap_const_lv12_A);
}

void lenet::thread_icmp_ln585_fu_17563_p2() {
    icmp_ln585_fu_17563_p2 = (!sh_amt_reg_26293.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_26293.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void lenet::thread_icmp_ln59_fu_19504_p0() {
    icmp_ln59_fu_19504_p0 =  (sc_lv<2>) (reg_3655.read());
}

void lenet::thread_icmp_ln59_fu_19504_p2() {
    icmp_ln59_fu_19504_p2 = (!icmp_ln59_fu_19504_p0.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln59_fu_19504_p0.read() == ap_const_lv2_2);
}

void lenet::thread_icmp_ln603_fu_17550_p2() {
    icmp_ln603_fu_17550_p2 = (!tmp_46_fu_17540_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_46_fu_17540_p4.read() == ap_const_lv8_0);
}

void lenet::thread_icmp_ln75_fu_19594_p2() {
    icmp_ln75_fu_19594_p2 = (!ap_phi_mux_indvar_flatten130_phi_fu_3670_p4.read().is_01() || !ap_const_lv12_9C4.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten130_phi_fu_3670_p4.read() == ap_const_lv12_9C4);
}

void lenet::thread_icmp_ln77_fu_19612_p2() {
    icmp_ln77_fu_19612_p2 = (!ap_phi_mux_indvar_flatten100_phi_fu_3692_p4.read().is_01() || !ap_const_lv9_FA.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten100_phi_fu_3692_p4.read() == ap_const_lv9_FA);
}

void lenet::thread_icmp_ln79_fu_19660_p2() {
    icmp_ln79_fu_19660_p2 = (!ap_phi_mux_indvar_flatten48_phi_fu_3714_p4.read().is_01() || !ap_const_lv6_19.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten48_phi_fu_3714_p4.read() == ap_const_lv6_19);
}

void lenet::thread_icmp_ln7_fu_17361_p0() {
    icmp_ln7_fu_17361_p0 =  (sc_lv<6>) (reg_3476.read());
}

void lenet::thread_icmp_ln7_fu_17361_p2() {
    icmp_ln7_fu_17361_p2 = (!icmp_ln7_fu_17361_p0.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln7_fu_17361_p0.read() == ap_const_lv6_20);
}

void lenet::thread_icmp_ln81_fu_19648_p2() {
    icmp_ln81_fu_19648_p2 = (!ap_phi_mux_y_0_i2604_phi_fu_3736_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_y_0_i2604_phi_fu_3736_p4.read() == ap_const_lv3_5);
}

void lenet::thread_icmp_ln935_fu_25929_p0() {
    icmp_ln935_fu_25929_p0 = FC2_out_V_q0.read();
}

void lenet::thread_icmp_ln935_fu_25929_p1() {
    icmp_ln935_fu_25929_p1 =  (sc_lv<16>) (reg_4073.read());
}

void lenet::thread_icmp_ln935_fu_25929_p2() {
    icmp_ln935_fu_25929_p2 = (!icmp_ln935_fu_25929_p0.read().is_01() || !icmp_ln935_fu_25929_p1.read().is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln935_fu_25929_p0.read() == icmp_ln935_fu_25929_p1.read());
}

void lenet::thread_icmp_ln947_1_fu_26043_p2() {
    icmp_ln947_1_fu_26043_p2 = (!p_Result_6_fu_26038_p2.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_6_fu_26038_p2.read() != ap_const_lv17_0);
}

void lenet::thread_icmp_ln947_fu_26012_p2() {
    icmp_ln947_fu_26012_p2 = (!tmp_183_fu_26002_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): (sc_bigint<31>(tmp_183_fu_26002_p4.read()) > sc_bigint<31>(ap_const_lv31_0));
}

void lenet::thread_icmp_ln958_fu_26102_p2() {
    icmp_ln958_fu_26102_p2 = (!lsb_index_fu_25996_p2.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(lsb_index_fu_25996_p2.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void lenet::thread_icmp_ln98_fu_23476_p2() {
    icmp_ln98_fu_23476_p2 = (!indvar_flatten137_reg_3743.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten137_reg_3743.read() == ap_const_lv7_64);
}

void lenet::thread_icmp_ln9_fu_17401_p0() {
    icmp_ln9_fu_17401_p0 =  (sc_lv<6>) (reg_3487.read());
}

void lenet::thread_icmp_ln9_fu_17401_p2() {
    icmp_ln9_fu_17401_p2 = (!icmp_ln9_fu_17401_p0.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln9_fu_17401_p0.read() == ap_const_lv6_20);
}

void lenet::thread_in_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        in_V_address0 =  (sc_lv<10>) (tmp_19_fu_18084_p4.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        in_V_address0 =  (sc_lv<10>) (tmp_16_fu_17862_p4.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        in_V_address0 =  (sc_lv<10>) (zext_ln203_2_fu_17556_p1.read());
    } else {
        in_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_in_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            in_V_address1 =  (sc_lv<10>) (tmp_20_fu_18205_p4.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            in_V_address1 =  (sc_lv<10>) (tmp_18_fu_18075_p4.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
            in_V_address1 =  (sc_lv<10>) (tmp_17_fu_17889_p4.read());
        } else {
            in_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        in_V_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void lenet::thread_in_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        in_V_ce0 = ap_const_logic_1;
    } else {
        in_V_ce0 = ap_const_logic_0;
    }
}

void lenet::thread_in_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)))) {
        in_V_ce1 = ap_const_logic_1;
    } else {
        in_V_ce1 = ap_const_logic_0;
    }
}

void lenet::thread_in_V_d0() {
    in_V_d0 = (!or_ln603_2_fu_17703_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln603_2_fu_17703_p2.read()[0].to_bool())? select_ln603_2_fu_17695_p3.read(): ap_const_lv16_0);
}

void lenet::thread_in_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        in_V_we0 = ap_const_logic_1;
    } else {
        in_V_we0 = ap_const_logic_0;
    }
}

void lenet::thread_input_r_Addr_A() {
    input_r_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): input_r_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void lenet::thread_input_r_Addr_A_orig() {
    input_r_Addr_A_orig =  (sc_lv<32>) (zext_ln11_1_fu_17427_p1.read());
}

void lenet::thread_input_r_Clk_A() {
    input_r_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void lenet::thread_input_r_Din_A() {
    input_r_Din_A = ap_const_lv32_0;
}

void lenet::thread_input_r_EN_A() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_r_EN_A = ap_const_logic_1;
    } else {
        input_r_EN_A = ap_const_logic_0;
    }
}

void lenet::thread_input_r_Rst_A() {
    input_r_Rst_A = ap_rst_n_inv.read();
}

void lenet::thread_input_r_WEN_A() {
    input_r_WEN_A = ap_const_lv4_0;
}

void lenet::thread_ireg_V_fu_17432_p1() {
    ireg_V_fu_17432_p1 = grp_fu_17344_p1.read();
}

void lenet::thread_j_1_fu_17718_p2() {
    j_1_fu_17718_p2 = (!ap_phi_mux_j5_0_i_phi_fu_3535_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_j5_0_i_phi_fu_3535_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lenet::thread_j_3_fu_19189_p0() {
    j_3_fu_19189_p0 =  (sc_lv<5>) (reg_3564.read());
}

void lenet::thread_j_3_fu_19189_p2() {
    j_3_fu_19189_p2 = (!j_3_fu_19189_p0.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_3_fu_19189_p0.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lenet::thread_j_4_fu_24058_p2() {
    j_4_fu_24058_p2 = (!ap_const_lv4_1.is_01() || !select_ln106_reg_28104.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln106_reg_28104.read()));
}

void lenet::thread_j_5_fu_19362_p0() {
    j_5_fu_19362_p0 =  (sc_lv<4>) (reg_3597.read());
}

void lenet::thread_j_5_fu_19362_p2() {
    j_5_fu_19362_p2 = (!j_5_fu_19362_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_5_fu_19362_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void lenet::thread_j_6_fu_24111_p0() {
    j_6_fu_24111_p0 =  (sc_lv<3>) (reg_3787.read());
}

void lenet::thread_j_6_fu_24111_p2() {
    j_6_fu_24111_p2 = (!j_6_fu_24111_p0.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_6_fu_24111_p0.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lenet::thread_j_7_fu_25594_p0() {
    j_7_fu_25594_p0 =  (sc_lv<7>) (reg_3993.read());
}

void lenet::thread_j_7_fu_25594_p2() {
    j_7_fu_25594_p2 = (!j_7_fu_25594_p0.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_7_fu_25594_p0.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lenet::thread_j_8_fu_25747_p0() {
    j_8_fu_25747_p0 =  (sc_lv<7>) (reg_4051.read());
}

void lenet::thread_j_8_fu_25747_p2() {
    j_8_fu_25747_p2 = (!j_8_fu_25747_p0.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_8_fu_25747_p0.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lenet::thread_j_9_fu_19672_p2() {
    j_9_fu_19672_p2 = (!ap_const_lv4_1.is_01() || !select_ln89_fu_19618_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln89_fu_19618_p3.read()));
}

void lenet::thread_j_fu_17407_p0() {
    j_fu_17407_p0 =  (sc_lv<6>) (reg_3487.read());
}

void lenet::thread_j_fu_17407_p2() {
    j_fu_17407_p2 = (!j_fu_17407_p0.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_fu_17407_p0.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void lenet::thread_k_1_fu_19421_p0() {
    k_1_fu_19421_p0 =  (sc_lv<3>) (reg_3608.read());
}

void lenet::thread_k_1_fu_19421_p2() {
    k_1_fu_19421_p2 = (!k_1_fu_19421_p0.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_1_fu_19421_p0.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lenet::thread_k_3_fu_24148_p0() {
    k_3_fu_24148_p0 =  (sc_lv<5>) (reg_3798.read());
}

void lenet::thread_k_3_fu_24148_p2() {
    k_3_fu_24148_p2 = (!k_3_fu_24148_p0.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_3_fu_24148_p0.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void lenet::thread_k_fu_19240_p0() {
    k_fu_19240_p0 =  (sc_lv<3>) (reg_3575.read());
}

void lenet::thread_k_fu_19240_p2() {
    k_fu_19240_p2 = (!k_fu_19240_p0.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k_fu_19240_p0.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void lenet::thread_l_fu_25975_p3() {
    l_fu_25975_p3 = esl_cttz<32,32>(p_Result_11_fu_25967_p3.read());
}

void lenet::thread_lhs_V_1_fu_25781_p1() {
    lhs_V_1_fu_25781_p1 =  (sc_lv<16>) (reg_4038.read());
}

void lenet::thread_lhs_V_1_fu_25781_p3() {
    lhs_V_1_fu_25781_p3 = esl_concat<16,10>(lhs_V_1_fu_25781_p1.read(), ap_const_lv10_0);
}

void lenet::thread_lhs_V_2_fu_25920_p0() {
    lhs_V_2_fu_25920_p0 = FC2_out_V_q0.read();
}

void lenet::thread_lhs_V_2_fu_25920_p1() {
    lhs_V_2_fu_25920_p1 = esl_sext<17,16>(lhs_V_2_fu_25920_p0.read());
}

void lenet::thread_lhs_V_fu_25631_p1() {
    lhs_V_fu_25631_p1 =  (sc_lv<16>) (reg_3980.read());
}

void lenet::thread_lhs_V_fu_25631_p3() {
    lhs_V_fu_25631_p3 = esl_concat<16,10>(lhs_V_fu_25631_p1.read(), ap_const_lv10_0);
}

void lenet::thread_lsb_index_fu_25996_p2() {
    lsb_index_fu_25996_p2 = (!ap_const_lv32_FFFFFFE8.is_01() || !sub_ln944_fu_25987_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFE8) + sc_biguint<32>(sub_ln944_fu_25987_p2.read()));
}

void lenet::thread_lshr_ln947_fu_26032_p2() {
    lshr_ln947_fu_26032_p2 = (!zext_ln947_fu_26028_p1.read().is_01())? sc_lv<17>(): ap_const_lv17_1FFFF >> (unsigned short)zext_ln947_fu_26028_p1.read().to_uint();
}

void lenet::thread_lshr_ln958_fu_26116_p2() {
    lshr_ln958_fu_26116_p2 = (!add_ln958_fu_26111_p2.read().is_01())? sc_lv<32>(): m_fu_26108_p1.read() >> (unsigned short)add_ln958_fu_26111_p2.read().to_uint();
}

void lenet::thread_m_2_fu_26133_p3() {
    m_2_fu_26133_p3 = (!icmp_ln958_reg_29042.read()[0].is_01())? sc_lv<32>(): ((icmp_ln958_reg_29042.read()[0].to_bool())? lshr_ln958_fu_26116_p2.read(): shl_ln958_fu_26127_p2.read());
}

void lenet::thread_m_3_fu_26140_p2() {
    m_3_fu_26140_p2 = (!m_2_fu_26133_p3.read().is_01() || !or_ln_reg_29037.read().is_01())? sc_lv<32>(): (sc_biguint<32>(m_2_fu_26133_p3.read()) + sc_biguint<32>(or_ln_reg_29037.read()));
}

void lenet::thread_m_6_fu_25530_p0() {
    m_6_fu_25530_p0 =  (sc_lv<7>) (reg_3958.read());
}

void lenet::thread_m_6_fu_25530_p2() {
    m_6_fu_25530_p2 = (!m_6_fu_25530_p0.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(m_6_fu_25530_p0.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void lenet::thread_m_7_fu_26145_p4() {
    m_7_fu_26145_p4 = m_3_fu_26140_p2.read().range(31, 1);
}

void lenet::thread_m_8_fu_26155_p1() {
    m_8_fu_26155_p1 = esl_zext<32,31>(m_7_fu_26145_p4.read());
}

void lenet::thread_m_fu_26108_p1() {
    m_fu_26108_p1 = esl_zext<32,17>(tmp_V_4_reg_29014.read());
}

void lenet::thread_man_V_1_fu_17478_p2() {
    man_V_1_fu_17478_p2 = (!ap_const_lv54_0.is_01() || !p_Result_9_fu_17474_p1.read().is_01())? sc_lv<54>(): (sc_biguint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_9_fu_17474_p1.read()));
}

void lenet::thread_man_V_2_fu_17484_p3() {
    man_V_2_fu_17484_p3 = (!p_Result_8_fu_17440_p3.read()[0].is_01())? sc_lv<54>(): ((p_Result_8_fu_17440_p3.read()[0].to_bool())? man_V_1_fu_17478_p2.read(): p_Result_9_fu_17474_p1.read());
}

void lenet::thread_or_ln1116_fu_19957_p2() {
    or_ln1116_fu_19957_p2 = (sub_ln1116_1_fu_19946_p2.read() | ap_const_lv12_1);
}

void lenet::thread_or_ln1265_10_fu_21897_p2() {
    or_ln1265_10_fu_21897_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_A);
}

void lenet::thread_or_ln1265_11_fu_21907_p2() {
    or_ln1265_11_fu_21907_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_B);
}

void lenet::thread_or_ln1265_12_fu_22251_p2() {
    or_ln1265_12_fu_22251_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_C);
}

void lenet::thread_or_ln1265_13_fu_22261_p2() {
    or_ln1265_13_fu_22261_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_D);
}

void lenet::thread_or_ln1265_14_fu_22605_p2() {
    or_ln1265_14_fu_22605_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_E);
}

void lenet::thread_or_ln1265_15_fu_22615_p2() {
    or_ln1265_15_fu_22615_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_F);
}

void lenet::thread_or_ln1265_16_fu_23569_p2() {
    or_ln1265_16_fu_23569_p2 = (tmp_140_fu_23556_p3.read() | ap_const_lv12_1);
}

void lenet::thread_or_ln1265_17_fu_23580_p2() {
    or_ln1265_17_fu_23580_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_2);
}

void lenet::thread_or_ln1265_18_fu_23590_p2() {
    or_ln1265_18_fu_23590_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_3);
}

void lenet::thread_or_ln1265_19_fu_23664_p2() {
    or_ln1265_19_fu_23664_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_4);
}

void lenet::thread_or_ln1265_1_fu_19838_p2() {
    or_ln1265_1_fu_19838_p2 = (tmp_67_cast_fu_19830_p3.read() | ap_const_lv12_1);
}

void lenet::thread_or_ln1265_20_fu_23674_p2() {
    or_ln1265_20_fu_23674_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_5);
}

void lenet::thread_or_ln1265_21_fu_23748_p2() {
    or_ln1265_21_fu_23748_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_6);
}

void lenet::thread_or_ln1265_22_fu_23758_p2() {
    or_ln1265_22_fu_23758_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_7);
}

void lenet::thread_or_ln1265_23_fu_23832_p2() {
    or_ln1265_23_fu_23832_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_8);
}

void lenet::thread_or_ln1265_24_fu_23842_p2() {
    or_ln1265_24_fu_23842_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_9);
}

void lenet::thread_or_ln1265_25_fu_23916_p2() {
    or_ln1265_25_fu_23916_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_A);
}

void lenet::thread_or_ln1265_26_fu_23926_p2() {
    or_ln1265_26_fu_23926_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_B);
}

void lenet::thread_or_ln1265_27_fu_23936_p2() {
    or_ln1265_27_fu_23936_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_C);
}

void lenet::thread_or_ln1265_28_fu_23946_p2() {
    or_ln1265_28_fu_23946_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_D);
}

void lenet::thread_or_ln1265_29_fu_23956_p2() {
    or_ln1265_29_fu_23956_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_E);
}

void lenet::thread_or_ln1265_2_fu_20077_p2() {
    or_ln1265_2_fu_20077_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_2);
}

void lenet::thread_or_ln1265_30_fu_23966_p2() {
    or_ln1265_30_fu_23966_p2 = (tmp_140_reg_28114.read() | ap_const_lv12_F);
}

void lenet::thread_or_ln1265_3_fu_20087_p2() {
    or_ln1265_3_fu_20087_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_3);
}

void lenet::thread_or_ln1265_4_fu_20327_p2() {
    or_ln1265_4_fu_20327_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_4);
}

void lenet::thread_or_ln1265_5_fu_20337_p2() {
    or_ln1265_5_fu_20337_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_5);
}

void lenet::thread_or_ln1265_6_fu_20747_p2() {
    or_ln1265_6_fu_20747_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_6);
}

void lenet::thread_or_ln1265_7_fu_20757_p2() {
    or_ln1265_7_fu_20757_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_7);
}

void lenet::thread_or_ln1265_8_fu_21323_p2() {
    or_ln1265_8_fu_21323_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_8);
}

void lenet::thread_or_ln1265_9_fu_21333_p2() {
    or_ln1265_9_fu_21333_p2 = (tmp_67_cast_reg_26950.read() | ap_const_lv12_9);
}

void lenet::thread_or_ln1265_fu_18064_p2() {
    or_ln1265_fu_18064_p2 = (sub_ln1265_1_fu_18053_p2.read() | ap_const_lv14_1);
}

void lenet::thread_or_ln152_1_fu_24419_p2() {
    or_ln152_1_fu_24419_p2 = (or_ln152_fu_24413_p2.read() | icmp_ln150_fu_24337_p2.read());
}

void lenet::thread_or_ln152_fu_24413_p2() {
    or_ln152_fu_24413_p2 = (and_ln158_2_fu_24407_p2.read() | and_ln158_1_fu_24375_p2.read());
}

void lenet::thread_or_ln158_10_fu_25038_p2() {
    or_ln158_10_fu_25038_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_A);
}

void lenet::thread_or_ln158_11_fu_25048_p2() {
    or_ln158_11_fu_25048_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_B);
}

void lenet::thread_or_ln158_12_fu_25131_p2() {
    or_ln158_12_fu_25131_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_C);
}

void lenet::thread_or_ln158_13_fu_25141_p2() {
    or_ln158_13_fu_25141_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_D);
}

void lenet::thread_or_ln158_14_fu_25241_p2() {
    or_ln158_14_fu_25241_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_E);
}

void lenet::thread_or_ln158_15_fu_25251_p2() {
    or_ln158_15_fu_25251_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_F);
}

void lenet::thread_or_ln158_16_fu_24401_p2() {
    or_ln158_16_fu_24401_p2 = (icmp_ln150_fu_24337_p2.read() | xor_ln158_1_fu_24395_p2.read());
}

void lenet::thread_or_ln158_1_fu_24567_p2() {
    or_ln158_1_fu_24567_p2 = (trunc_ln1116_2_fu_24563_p1.read() | ap_const_lv10_1);
}

void lenet::thread_or_ln158_2_fu_24689_p2() {
    or_ln158_2_fu_24689_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_2);
}

void lenet::thread_or_ln158_3_fu_24699_p2() {
    or_ln158_3_fu_24699_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_3);
}

void lenet::thread_or_ln158_4_fu_24746_p2() {
    or_ln158_4_fu_24746_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_4);
}

void lenet::thread_or_ln158_5_fu_24756_p2() {
    or_ln158_5_fu_24756_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_5);
}

void lenet::thread_or_ln158_6_fu_24796_p2() {
    or_ln158_6_fu_24796_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_6);
}

void lenet::thread_or_ln158_7_fu_24806_p2() {
    or_ln158_7_fu_24806_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_7);
}

void lenet::thread_or_ln158_8_fu_24945_p2() {
    or_ln158_8_fu_24945_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_8);
}

void lenet::thread_or_ln158_9_fu_24955_p2() {
    or_ln158_9_fu_24955_p2 = (trunc_ln1116_2_reg_28450.read() | ap_const_lv10_9);
}

void lenet::thread_or_ln158_fu_24381_p2() {
    or_ln158_fu_24381_p2 = (and_ln158_1_fu_24375_p2.read() | icmp_ln150_fu_24337_p2.read());
}

void lenet::thread_or_ln25_fu_17806_p2() {
    or_ln25_fu_17806_p2 = (and_ln25_fu_17794_p2.read() | icmp_ln17_fu_17760_p2.read());
}

void lenet::thread_or_ln581_fu_17652_p2() {
    or_ln581_fu_17652_p2 = (or_ln582_fu_17619_p2.read() | icmp_ln581_reg_26287.read());
}

void lenet::thread_or_ln582_fu_17619_p2() {
    or_ln582_fu_17619_p2 = (icmp_ln571_reg_26281.read() | icmp_ln582_reg_26299.read());
}

void lenet::thread_or_ln603_1_fu_17689_p2() {
    or_ln603_1_fu_17689_p2 = (and_ln585_fu_17640_p2.read() | and_ln582_fu_17614_p2.read());
}

void lenet::thread_or_ln603_2_fu_17703_p2() {
    or_ln603_2_fu_17703_p2 = (or_ln603_fu_17676_p2.read() | or_ln603_1_fu_17689_p2.read());
}

void lenet::thread_or_ln603_fu_17676_p2() {
    or_ln603_fu_17676_p2 = (and_ln603_fu_17663_p2.read() | and_ln585_1_fu_17646_p2.read());
}

void lenet::thread_or_ln79_1_fu_19738_p2() {
    or_ln79_1_fu_19738_p2 = (or_ln79_fu_19732_p2.read() | icmp_ln77_fu_19612_p2.read());
}

void lenet::thread_or_ln79_fu_19732_p2() {
    or_ln79_fu_19732_p2 = (and_ln89_2_fu_19720_p2.read() | and_ln89_1_fu_19666_p2.read());
}

void lenet::thread_or_ln89_1_fu_19714_p2() {
    or_ln89_1_fu_19714_p2 = (icmp_ln77_fu_19612_p2.read() | xor_ln89_1_fu_19708_p2.read());
}

void lenet::thread_or_ln89_fu_19678_p2() {
    or_ln89_fu_19678_p2 = (and_ln89_1_fu_19666_p2.read() | icmp_ln77_fu_19612_p2.read());
}

void lenet::thread_or_ln949_fu_26088_p2() {
    or_ln949_fu_26088_p2 = (and_ln949_fu_26082_p2.read() | a_fu_26049_p2.read());
}

void lenet::thread_or_ln_fu_26094_p3() {
    or_ln_fu_26094_p3 = esl_concat<31,1>(ap_const_lv31_0, or_ln949_fu_26088_p2.read());
}

void lenet::thread_p_Result_10_fu_25935_p3() {
    p_Result_10_fu_25935_p3 = tmp_V_3_fu_25924_p2.read().range(16, 16);
}

void lenet::thread_p_Result_11_fu_25967_p3() {
    p_Result_11_fu_25967_p3 = esl_concat<15,17>(ap_const_lv15_7FFF, p_Result_s_fu_25957_p4.read());
}

void lenet::thread_p_Result_12_fu_26193_p5() {
    p_Result_12_fu_26193_p5 = esl_partset<32,32,9,32,32>(m_8_fu_26155_p1.read(), tmp_13_fu_26186_p3.read(), ap_const_lv32_17, ap_const_lv32_1F);
}

void lenet::thread_p_Result_5_fu_26075_p3() {
    p_Result_5_fu_26075_p3 = (!add_ln949_fu_26069_p2.read().is_01() || sc_biguint<17>(add_ln949_fu_26069_p2.read()).to_uint() >= 17)? sc_lv<1>(): tmp_V_4_reg_29014.read().range(sc_biguint<17>(add_ln949_fu_26069_p2.read()).to_uint(), sc_biguint<17>(add_ln949_fu_26069_p2.read()).to_uint());
}

void lenet::thread_p_Result_6_fu_26038_p2() {
    p_Result_6_fu_26038_p2 = (tmp_V_4_reg_29014.read() & lshr_ln947_fu_26032_p2.read());
}

void lenet::thread_p_Result_8_fu_17440_p3() {
    p_Result_8_fu_17440_p3 = ireg_V_fu_17432_p1.read().range(63, 63);
}

void lenet::thread_p_Result_9_fu_17474_p1() {
    p_Result_9_fu_17474_p1 = esl_zext<54,53>(tmp_2_fu_17466_p3.read());
}

void lenet::thread_p_Result_s_fu_25957_p4() {
    p_Result_s_fu_25957_p4 = tmp_V_4_fu_25949_p3.read().range(0, 16);
}

void lenet::thread_p_shl10_cast_fu_19938_p3() {
    p_shl10_cast_fu_19938_p3 = esl_concat<11,1>(trunc_ln1116_1_fu_19934_p1.read(), ap_const_lv1_0);
}

void lenet::thread_p_shl11_cast_fu_19389_p3() {
    p_shl11_cast_fu_19389_p3 = esl_concat<9,3>(trunc_ln203_fu_19385_p1.read(), ap_const_lv3_0);
}

void lenet::thread_p_shl15_cast_fu_19534_p3() {
    p_shl15_cast_fu_19534_p3 = esl_concat<11,3>(trunc_ln1494_fu_19530_p1.read(), ap_const_lv3_0);
}

void lenet::thread_p_shl2_cast_fu_19208_p3() {
    p_shl2_cast_fu_19208_p3 = esl_concat<11,3>(trunc_ln1265_1_fu_19204_p1.read(), ap_const_lv3_0);
}

void lenet::thread_p_shl9_cast_fu_19926_p3() {
    p_shl9_cast_fu_19926_p3 = esl_concat<9,3>(trunc_ln1116_fu_19922_p1.read(), ap_const_lv3_0);
}

void lenet::thread_p_shl_cast_fu_18033_p3() {
    p_shl_cast_fu_18033_p3 = esl_concat<11,3>(trunc_ln1265_fu_18029_p1.read(), ap_const_lv3_0);
}

void lenet::thread_reg_39803() {
    reg_39803 = ret_V_fu_25639_p2.read().range(25, 10);
}

void lenet::thread_reg_40384() {
    reg_40384 = ret_V_1_fu_25789_p2.read().range(25, 10);
}

void lenet::thread_ret_V_1_fu_25789_p2() {
    ret_V_1_fu_25789_p2 = (!lhs_V_1_fu_25781_p3.read().is_01() || !grp_fu_4184_p2.read().is_01())? sc_lv<26>(): (sc_biguint<26>(lhs_V_1_fu_25781_p3.read()) + sc_biguint<26>(grp_fu_4184_p2.read()));
}

void lenet::thread_ret_V_fu_25639_p2() {
    ret_V_fu_25639_p2 = (!lhs_V_fu_25631_p3.read().is_01() || !sext_ln1192_141_fu_25627_p1.read().is_01())? sc_lv<26>(): (sc_biguint<26>(lhs_V_fu_25631_p3.read()) + sc_bigint<26>(sext_ln1192_141_fu_25627_p1.read()));
}

void lenet::thread_rhs_V_fu_25885_p0() {
    rhs_V_fu_25885_p0 =  (sc_lv<16>) (reg_4073.read());
}

void lenet::thread_rhs_V_fu_25885_p1() {
    rhs_V_fu_25885_p1 = esl_sext<17,16>(rhs_V_fu_25885_p0.read());
}

void lenet::thread_select_ln106_1_fu_23508_p3() {
    select_ln106_1_fu_23508_p3 = (!icmp_ln100_fu_23494_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln100_fu_23494_p2.read()[0].to_bool())? i_8_fu_23488_p2.read(): i1_0_i_reg_3754.read());
}

void lenet::thread_select_ln106_fu_23500_p3() {
    select_ln106_fu_23500_p3 = (!icmp_ln100_fu_23494_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln100_fu_23494_p2.read()[0].to_bool())? ap_const_lv4_0: j2_0_i_reg_3765.read());
}

void lenet::thread_select_ln107_1_fu_23656_p3() {
    select_ln107_1_fu_23656_p3 = (!tmp_142_fu_23648_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_142_fu_23648_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_2_fu_23642_p2.read());
}

void lenet::thread_select_ln107_2_fu_23708_p3() {
    select_ln107_2_fu_23708_p3 = (!tmp_143_fu_23700_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_143_fu_23700_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_3_fu_23694_p2.read());
}

void lenet::thread_select_ln107_3_fu_23740_p3() {
    select_ln107_3_fu_23740_p3 = (!tmp_144_fu_23732_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_144_fu_23732_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_4_fu_23726_p2.read());
}

void lenet::thread_select_ln107_4_fu_23792_p3() {
    select_ln107_4_fu_23792_p3 = (!tmp_145_fu_23784_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_145_fu_23784_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_5_fu_23778_p2.read());
}

void lenet::thread_select_ln107_5_fu_23824_p3() {
    select_ln107_5_fu_23824_p3 = (!tmp_146_fu_23816_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_146_fu_23816_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_6_fu_23810_p2.read());
}

void lenet::thread_select_ln107_6_fu_23876_p3() {
    select_ln107_6_fu_23876_p3 = (!tmp_147_fu_23868_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_147_fu_23868_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_7_fu_23862_p2.read());
}

void lenet::thread_select_ln107_7_fu_23908_p3() {
    select_ln107_7_fu_23908_p3 = (!tmp_148_fu_23900_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_148_fu_23900_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_8_fu_23894_p2.read());
}

void lenet::thread_select_ln107_fu_23624_p3() {
    select_ln107_fu_23624_p3 = (!tmp_141_fu_23616_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_141_fu_23616_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_1_fu_23610_p2.read());
}

void lenet::thread_select_ln130_fu_24277_p2() {
    select_ln130_fu_24277_p2 =  (sc_lv<16>) (reg_3833.read());
}

void lenet::thread_select_ln130_fu_24277_p3() {
    select_ln130_fu_24277_p3 = (!icmp_ln1494_1_fu_24271_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_1_fu_24271_p2.read()[0].to_bool())? C2_out_V_q0.read(): select_ln130_fu_24277_p2.read());
}

void lenet::thread_select_ln150_fu_25225_p3() {
    select_ln150_fu_25225_p3 = (!icmp_ln150_reg_28387.read()[0].is_01())? sc_lv<10>(): ((icmp_ln150_reg_28387.read()[0].to_bool())? ap_const_lv10_1: add_ln150_1_reg_28435.read());
}

void lenet::thread_select_ln152_1_fu_24606_p3() {
    select_ln152_1_fu_24606_p3 = (!and_ln158_2_reg_28418.read()[0].is_01())? sc_lv<7>(): ((and_ln158_2_reg_28418.read()[0].to_bool())? shl_ln158_mid1_fu_24598_p3.read(): select_ln158_6_fu_24586_p3.read());
}

void lenet::thread_select_ln152_2_fu_24613_p3() {
    select_ln152_2_fu_24613_p3 = (!and_ln158_2_reg_28418.read()[0].is_01())? sc_lv<4>(): ((and_ln158_2_reg_28418.read()[0].to_bool())? add_ln152_fu_24593_p2.read(): select_ln158_3_reg_28412.read());
}

void lenet::thread_select_ln152_3_fu_25219_p3() {
    select_ln152_3_fu_25219_p3 = (!or_ln158_reg_28406.read()[0].is_01())? sc_lv<8>(): ((or_ln158_reg_28406.read()[0].to_bool())? ap_const_lv8_1: add_ln152_1_reg_28430.read());
}

void lenet::thread_select_ln152_fu_24425_p3() {
    select_ln152_fu_24425_p3 = (!or_ln152_1_fu_24419_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln152_1_fu_24419_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_k_0_i2647_0_0_phi_fu_3928_p4.read());
}

void lenet::thread_select_ln158_1_fu_24451_p3() {
    select_ln158_1_fu_24451_p3 = (!icmp_ln150_reg_28387.read()[0].is_01())? sc_lv<3>(): ((icmp_ln150_reg_28387.read()[0].to_bool())? add_ln148_fu_24445_p2.read(): x_0_i2638_0_0_reg_3867.read());
}

void lenet::thread_select_ln158_2_fu_24514_p3() {
    select_ln158_2_fu_24514_p3 = (!icmp_ln150_reg_28387.read()[0].is_01())? sc_lv<10>(): ((icmp_ln150_reg_28387.read()[0].to_bool())? add_ln1116_8_fu_24508_p2.read(): tmp_153_reg_28373.read());
}

void lenet::thread_select_ln158_3_fu_24387_p3() {
    select_ln158_3_fu_24387_p3 = (!or_ln158_fu_24381_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln158_fu_24381_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_set_0_i2644_0_0_phi_fu_3916_p4.read());
}

void lenet::thread_select_ln158_4_fu_24545_p3() {
    select_ln158_4_fu_24545_p3 = (!and_ln158_1_reg_28400.read()[0].is_01())? sc_lv<3>(): ((and_ln158_1_reg_28400.read()[0].to_bool())? add_ln150_fu_24524_p2.read(): select_ln158_reg_28394.read());
}

void lenet::thread_select_ln158_5_fu_24555_p3() {
    select_ln158_5_fu_24555_p3 = (!and_ln158_1_reg_28400.read()[0].is_01())? sc_lv<64>(): ((and_ln158_1_reg_28400.read()[0].to_bool())? shl_ln1116_fu_24539_p2.read(): zext_ln158_3_fu_24520_p1.read());
}

void lenet::thread_select_ln158_6_fu_24586_p3() {
    select_ln158_6_fu_24586_p3 = (!or_ln158_reg_28406.read()[0].is_01())? sc_lv<7>(): ((or_ln158_reg_28406.read()[0].to_bool())? ap_const_lv7_0: shl_ln4_fu_24578_p3.read());
}

void lenet::thread_select_ln158_fu_24343_p3() {
    select_ln158_fu_24343_p3 = (!icmp_ln150_fu_24337_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln150_fu_24337_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_y_0_i2641_0_0_phi_fu_3894_p4.read());
}

void lenet::thread_select_ln17_fu_19131_p3() {
    select_ln17_fu_19131_p3 = (!icmp_ln17_reg_26325.read()[0].is_01())? sc_lv<8>(): ((icmp_ln17_reg_26325.read()[0].to_bool())? ap_const_lv8_1: add_ln17_reg_26530.read());
}

void lenet::thread_select_ln210_fu_25705_p3() {
    select_ln210_fu_25705_p3 = (!tmp_180_fu_25697_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_180_fu_25697_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_9_fu_25691_p2.read());
}

void lenet::thread_select_ln231_fu_25855_p3() {
    select_ln231_fu_25855_p3 = (!tmp_181_fu_25847_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_181_fu_25847_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_10_fu_25841_p2.read());
}

void lenet::thread_select_ln245_fu_25895_p2() {
    select_ln245_fu_25895_p2 =  (sc_lv<16>) (reg_4073.read());
}

void lenet::thread_select_ln245_fu_25895_p3() {
    select_ln245_fu_25895_p3 = (!icmp_ln1494_2_fu_25889_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_2_fu_25889_p2.read()[0].to_bool())? FC2_out_V_q0.read(): select_ln245_fu_25895_p2.read());
}

void lenet::thread_select_ln25_10_fu_17932_p3() {
    select_ln25_10_fu_17932_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? ap_const_lv5_4: add_ln25_4_fu_17736_p2.read());
}

void lenet::thread_select_ln25_11_fu_17940_p3() {
    select_ln25_11_fu_17940_p3 = (!and_ln25_fu_17794_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln25_fu_17794_p2.read()[0].to_bool())? add_ln25_9_fu_17846_p2.read(): select_ln25_10_fu_17932_p3.read());
}

void lenet::thread_select_ln25_1_fu_17774_p3() {
    select_ln25_1_fu_17774_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? i_2_fu_17754_p2.read(): ap_phi_mux_i4_0_i_phi_fu_3513_p4.read());
}

void lenet::thread_select_ln25_2_fu_17812_p3() {
    select_ln25_2_fu_17812_p3 = (!or_ln25_fu_17806_p2.read()[0].is_01())? sc_lv<3>(): ((or_ln25_fu_17806_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_x_0_i_phi_fu_3546_p4.read());
}

void lenet::thread_select_ln25_3_fu_17820_p3() {
    select_ln25_3_fu_17820_p3 = (!and_ln25_fu_17794_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln25_fu_17794_p2.read()[0].to_bool())? add_ln25_5_fu_17800_p2.read(): select_ln25_fu_17766_p3.read());
}

void lenet::thread_select_ln25_4_fu_17873_p3() {
    select_ln25_4_fu_17873_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? ap_const_lv5_1: j_1_fu_17718_p2.read());
}

void lenet::thread_select_ln25_5_fu_17881_p3() {
    select_ln25_5_fu_17881_p3 = (!and_ln25_fu_17794_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln25_fu_17794_p2.read()[0].to_bool())? add_ln25_6_fu_17828_p2.read(): select_ln25_4_fu_17873_p3.read());
}

void lenet::thread_select_ln25_6_fu_17900_p3() {
    select_ln25_6_fu_17900_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? ap_const_lv5_2: add_ln25_2_fu_17724_p2.read());
}

void lenet::thread_select_ln25_7_fu_17908_p3() {
    select_ln25_7_fu_17908_p3 = (!and_ln25_fu_17794_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln25_fu_17794_p2.read()[0].to_bool())? add_ln25_7_fu_17834_p2.read(): select_ln25_6_fu_17900_p3.read());
}

void lenet::thread_select_ln25_8_fu_17916_p3() {
    select_ln25_8_fu_17916_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? ap_const_lv5_3: add_ln25_3_fu_17730_p2.read());
}

void lenet::thread_select_ln25_9_fu_17924_p3() {
    select_ln25_9_fu_17924_p3 = (!and_ln25_fu_17794_p2.read()[0].is_01())? sc_lv<5>(): ((and_ln25_fu_17794_p2.read()[0].to_bool())? add_ln25_8_fu_17840_p2.read(): select_ln25_8_fu_17916_p3.read());
}

void lenet::thread_select_ln25_fu_17766_p3() {
    select_ln25_fu_17766_p3 = (!icmp_ln17_fu_17760_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln17_fu_17760_p2.read()[0].to_bool())? ap_const_lv5_0: ap_phi_mux_j5_0_i_phi_fu_3535_p4.read());
}

void lenet::thread_select_ln39_fu_19297_p3() {
    select_ln39_fu_19297_p3 = (!tmp_137_fu_19289_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_137_fu_19289_p3.read()[0].to_bool())? ap_const_lv15_0: add_ln1495_fu_19283_p2.read());
}

void lenet::thread_select_ln588_fu_17592_p3() {
    select_ln588_fu_17592_p3 = (!tmp_47_fu_17584_p3.read()[0].is_01())? sc_lv<16>(): ((tmp_47_fu_17584_p3.read()[0].to_bool())? ap_const_lv16_FFFF: ap_const_lv16_0);
}

void lenet::thread_select_ln603_1_fu_17682_p3() {
    select_ln603_1_fu_17682_p3 = (!and_ln585_fu_17640_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln585_fu_17640_p2.read()[0].to_bool())? select_ln588_fu_17592_p3.read(): trunc_ln583_reg_26305.read());
}

void lenet::thread_select_ln603_2_fu_17695_p3() {
    select_ln603_2_fu_17695_p3 = (!or_ln603_fu_17676_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln603_fu_17676_p2.read()[0].to_bool())? select_ln603_fu_17668_p3.read(): select_ln603_1_fu_17682_p3.read());
}

void lenet::thread_select_ln603_fu_17668_p3() {
    select_ln603_fu_17668_p3 = (!and_ln603_fu_17663_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln603_fu_17663_p2.read()[0].to_bool())? shl_ln604_fu_17604_p2.read(): trunc_ln586_fu_17577_p1.read());
}

void lenet::thread_select_ln61_fu_19576_p2() {
    select_ln61_fu_19576_p2 =  (sc_lv<16>) (reg_3643.read());
}

void lenet::thread_select_ln61_fu_19576_p3() {
    select_ln61_fu_19576_p3 = (!icmp_ln1494_fu_19570_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1494_fu_19570_p2.read()[0].to_bool())? C1_out_V_q0.read(): select_ln61_fu_19576_p2.read());
}

void lenet::thread_select_ln77_fu_23470_p3() {
    select_ln77_fu_23470_p3 = (!icmp_ln77_reg_26888.read()[0].is_01())? sc_lv<9>(): ((icmp_ln77_reg_26888.read()[0].to_bool())? ap_const_lv9_1: add_ln77_1_reg_26945.read());
}

void lenet::thread_select_ln79_1_fu_19762_p3() {
    select_ln79_1_fu_19762_p3 = (!and_ln89_2_fu_19720_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln89_2_fu_19720_p2.read()[0].to_bool())? add_ln89_2_fu_19756_p2.read(): select_ln89_5_fu_19700_p3.read());
}

void lenet::thread_select_ln79_2_fu_19877_p3() {
    select_ln79_2_fu_19877_p3 = (!and_ln89_2_reg_26917.read()[0].is_01())? sc_lv<3>(): ((and_ln89_2_reg_26917.read()[0].to_bool())? x_4_reg_26922.read(): select_ln89_3_reg_26905.read());
}

void lenet::thread_select_ln79_3_fu_23464_p3() {
    select_ln79_3_fu_23464_p3 = (!or_ln89_reg_26900.read()[0].is_01())? sc_lv<6>(): ((or_ln89_reg_26900.read()[0].to_bool())? ap_const_lv6_1: add_ln79_1_reg_26940.read());
}

void lenet::thread_select_ln79_fu_19744_p3() {
    select_ln79_fu_19744_p3 = (!or_ln79_1_fu_19738_p2.read()[0].is_01())? sc_lv<3>(): ((or_ln79_1_fu_19738_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_y_0_i2604_phi_fu_3736_p4.read());
}

void lenet::thread_select_ln89_1_fu_19626_p3() {
    select_ln89_1_fu_19626_p3 = (!icmp_ln77_fu_19612_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln77_fu_19612_p2.read()[0].to_bool())? i_6_fu_19606_p2.read(): ap_phi_mux_i_0_i2601_phi_fu_3681_p4.read());
}

void lenet::thread_select_ln89_2_fu_19634_p3() {
    select_ln89_2_fu_19634_p3 = (!icmp_ln77_fu_19612_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln77_fu_19612_p2.read()[0].to_bool())? i_6_fu_19606_p2.read(): add_ln89_fu_19588_p2.read());
}

void lenet::thread_select_ln89_3_fu_19684_p3() {
    select_ln89_3_fu_19684_p3 = (!or_ln89_fu_19678_p2.read()[0].is_01())? sc_lv<3>(): ((or_ln89_fu_19678_p2.read()[0].to_bool())? ap_const_lv3_0: ap_phi_mux_x_0_i2603_phi_fu_3725_p4.read());
}

void lenet::thread_select_ln89_4_fu_19692_p3() {
    select_ln89_4_fu_19692_p3 = (!and_ln89_1_fu_19666_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln89_1_fu_19666_p2.read()[0].to_bool())? j_9_fu_19672_p2.read(): select_ln89_fu_19618_p3.read());
}

void lenet::thread_select_ln89_5_fu_19700_p3() {
    select_ln89_5_fu_19700_p3 = (!and_ln89_1_fu_19666_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln89_1_fu_19666_p2.read()[0].to_bool())? select_ln89_1_fu_19626_p3.read(): select_ln89_2_fu_19634_p3.read());
}

void lenet::thread_select_ln89_fu_19618_p3() {
    select_ln89_fu_19618_p3 = (!icmp_ln77_fu_19612_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln77_fu_19612_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_j_0_i2602_phi_fu_3703_p4.read());
}

void lenet::thread_select_ln964_fu_26167_p3() {
    select_ln964_fu_26167_p3 = (!tmp_185_fu_26159_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_185_fu_26159_p3.read()[0].to_bool())? ap_const_lv8_7F: ap_const_lv8_7E);
}

void lenet::thread_sext_ln1117_10_fu_18358_p0() {
    sext_ln1117_10_fu_18358_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1117_10_fu_18358_p1() {
    sext_ln1117_10_fu_18358_p1 = esl_sext<24,16>(sext_ln1117_10_fu_18358_p0.read());
}

void lenet::thread_sext_ln1117_11_fu_25614_p1() {
    sext_ln1117_11_fu_25614_p1 = esl_sext<64,15>(add_ln1117_6_fu_25609_p2.read());
}

void lenet::thread_sext_ln1117_12_fu_25619_p1() {
    sext_ln1117_12_fu_25619_p1 = esl_sext<25,16>(Re_out_V_load_reg_28856.read());
}

void lenet::thread_sext_ln1117_1_fu_18141_p0() {
    sext_ln1117_1_fu_18141_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_1_fu_18141_p1() {
    sext_ln1117_1_fu_18141_p1 = esl_sext<26,16>(sext_ln1117_1_fu_18141_p0.read());
}

void lenet::thread_sext_ln1117_2_fu_18099_p0() {
    sext_ln1117_2_fu_18099_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1117_2_fu_18099_p1() {
    sext_ln1117_2_fu_18099_p1 = esl_sext<24,16>(sext_ln1117_2_fu_18099_p0.read());
}

void lenet::thread_sext_ln1117_3_fu_18294_p0() {
    sext_ln1117_3_fu_18294_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_3_fu_18294_p1() {
    sext_ln1117_3_fu_18294_p1 = esl_sext<25,16>(sext_ln1117_3_fu_18294_p0.read());
}

void lenet::thread_sext_ln1117_4_fu_18302_p0() {
    sext_ln1117_4_fu_18302_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_4_fu_18302_p1() {
    sext_ln1117_4_fu_18302_p1 = esl_sext<26,16>(sext_ln1117_4_fu_18302_p0.read());
}

void lenet::thread_sext_ln1117_5_fu_18352_p0() {
    sext_ln1117_5_fu_18352_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1117_5_fu_18352_p1() {
    sext_ln1117_5_fu_18352_p1 = esl_sext<25,16>(sext_ln1117_5_fu_18352_p0.read());
}

void lenet::thread_sext_ln1117_6_fu_18363_p0() {
    sext_ln1117_6_fu_18363_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1117_6_fu_18363_p1() {
    sext_ln1117_6_fu_18363_p1 = esl_sext<26,16>(sext_ln1117_6_fu_18363_p0.read());
}

void lenet::thread_sext_ln1117_7_fu_18652_p0() {
    sext_ln1117_7_fu_18652_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_7_fu_18652_p1() {
    sext_ln1117_7_fu_18652_p1 = esl_sext<25,16>(sext_ln1117_7_fu_18652_p0.read());
}

void lenet::thread_sext_ln1117_8_fu_18658_p0() {
    sext_ln1117_8_fu_18658_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_8_fu_18658_p1() {
    sext_ln1117_8_fu_18658_p1 = esl_sext<26,16>(sext_ln1117_8_fu_18658_p0.read());
}

void lenet::thread_sext_ln1117_9_fu_18148_p0() {
    sext_ln1117_9_fu_18148_p0 = in_V_q1.read();
}

void lenet::thread_sext_ln1117_9_fu_18148_p1() {
    sext_ln1117_9_fu_18148_p1 = esl_sext<25,16>(sext_ln1117_9_fu_18148_p0.read());
}

void lenet::thread_sext_ln1117_fu_18093_p0() {
    sext_ln1117_fu_18093_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1117_fu_18093_p1() {
    sext_ln1117_fu_18093_p1 = esl_sext<25,16>(sext_ln1117_fu_18093_p0.read());
}

void lenet::thread_sext_ln1118_10_fu_18746_p1() {
    sext_ln1118_10_fu_18746_p1 = esl_sext<26,25>(reg_3809.read());
}

void lenet::thread_sext_ln1118_11_fu_18340_p1() {
    sext_ln1118_11_fu_18340_p1 = esl_sext<25,9>(K1_W_V_3_2_load_reg_26578.read());
}

void lenet::thread_sext_ln1118_12_fu_18552_p1() {
    sext_ln1118_12_fu_18552_p1 = esl_sext<26,25>(reg_3564.read());
}

void lenet::thread_sext_ln1118_13_fu_18374_p1() {
    sext_ln1118_13_fu_18374_p1 = esl_sext<26,10>(K1_W_V_1_3_load_reg_26598.read());
}

void lenet::thread_sext_ln1118_14_fu_18382_p1() {
    sext_ln1118_14_fu_18382_p1 = esl_sext<26,10>(K1_W_V_3_3_load_reg_26608.read());
}

void lenet::thread_sext_ln1118_15_fu_18344_p1() {
    sext_ln1118_15_fu_18344_p1 = esl_sext<25,9>(K1_W_V_4_2_load_reg_26583.read());
}

void lenet::thread_sext_ln1118_16_fu_18390_p1() {
    sext_ln1118_16_fu_18390_p1 = esl_sext<26,10>(K1_W_V_5_3_load_reg_26618.read());
}

void lenet::thread_sext_ln1118_17_fu_18666_p1() {
    sext_ln1118_17_fu_18666_p1 = esl_sext<26,10>(K1_W_V_0_4_load_reg_26623.read());
}

void lenet::thread_sext_ln1118_18_fu_18798_p1() {
    sext_ln1118_18_fu_18798_p1 = esl_sext<26,25>(reg_3798.read());
}

void lenet::thread_sext_ln1118_19_fu_18698_p1() {
    sext_ln1118_19_fu_18698_p1 = esl_sext<26,10>(K1_W_V_3_4_load_reg_26638.read());
}

void lenet::thread_sext_ln1118_1_fu_18109_p0() {
    sext_ln1118_1_fu_18109_p0 = in_V_q0.read();
}

void lenet::thread_sext_ln1118_1_fu_18109_p1() {
    sext_ln1118_1_fu_18109_p1 = esl_sext<26,16>(sext_ln1118_1_fu_18109_p0.read());
}

void lenet::thread_sext_ln1118_20_fu_18702_p1() {
    sext_ln1118_20_fu_18702_p1 = esl_sext<26,10>(K1_W_V_4_4_load_reg_26643.read());
}

void lenet::thread_sext_ln1118_21_fu_18706_p1() {
    sext_ln1118_21_fu_18706_p1 = esl_sext<26,10>(K1_W_V_5_4_load_reg_26648.read());
}

void lenet::thread_sext_ln1118_22_fu_18370_p1() {
    sext_ln1118_22_fu_18370_p1 = esl_sext<25,9>(K1_W_V_0_3_load_reg_26593.read());
}

void lenet::thread_sext_ln1118_23_fu_18580_p1() {
    sext_ln1118_23_fu_18580_p1 = esl_sext<26,25>(reg_4026.read());
}

void lenet::thread_sext_ln1118_24_fu_18386_p1() {
    sext_ln1118_24_fu_18386_p1 = esl_sext<24,8>(K1_W_V_4_3_load_reg_26613.read());
}

void lenet::thread_sext_ln1118_25_fu_18680_p1() {
    sext_ln1118_25_fu_18680_p1 = esl_sext<25,9>(K1_W_V_1_4_load_reg_26628.read());
}

void lenet::thread_sext_ln1118_26_fu_18928_p1() {
    sext_ln1118_26_fu_18928_p1 = esl_sext<26,25>(reg_3564.read());
}

void lenet::thread_sext_ln1118_27_fu_20127_p1() {
    sext_ln1118_27_fu_20127_p1 = esl_sext<25,16>(P1_out_V_q0.read());
}

void lenet::thread_sext_ln1118_28_fu_20152_p1() {
    sext_ln1118_28_fu_20152_p1 = esl_sext<25,16>(P1_out_V_q1.read());
}

void lenet::thread_sext_ln1118_29_fu_20401_p1() {
    sext_ln1118_29_fu_20401_p1 = esl_sext<25,16>(P1_out_V_q1.read());
}

void lenet::thread_sext_ln1118_2_fu_18116_p1() {
    sext_ln1118_2_fu_18116_p1 = esl_sext<26,10>(K1_W_V_1_0_q0.read());
}

void lenet::thread_sext_ln1118_30_fu_20435_p1() {
    sext_ln1118_30_fu_20435_p1 = esl_sext<25,16>(P1_out_V_q0.read());
}

void lenet::thread_sext_ln1118_31_fu_20812_p1() {
    sext_ln1118_31_fu_20812_p1 = esl_sext<25,16>(P1_out_V_q1.read());
}

void lenet::thread_sext_ln1118_32_fu_20846_p1() {
    sext_ln1118_32_fu_20846_p1 = esl_sext<25,16>(P1_out_V_q0.read());
}

void lenet::thread_sext_ln1118_3_fu_18121_p1() {
    sext_ln1118_3_fu_18121_p1 = esl_sext<26,10>(K1_W_V_2_0_q0.read());
}

void lenet::thread_sext_ln1118_4_fu_18131_p1() {
    sext_ln1118_4_fu_18131_p1 = esl_sext<24,8>(K1_W_V_4_0_q0.read());
}

void lenet::thread_sext_ln1118_5_fu_18160_p1() {
    sext_ln1118_5_fu_18160_p1 = esl_sext<26,10>(K1_W_V_1_1_q0.read());
}

void lenet::thread_sext_ln1118_6_fu_18165_p1() {
    sext_ln1118_6_fu_18165_p1 = esl_sext<26,10>(K1_W_V_2_1_q0.read());
}

void lenet::thread_sext_ln1118_7_fu_18175_p1() {
    sext_ln1118_7_fu_18175_p1 = esl_sext<25,9>(K1_W_V_4_1_q0.read());
}

void lenet::thread_sext_ln1118_8_fu_18322_p1() {
    sext_ln1118_8_fu_18322_p1 = esl_sext<26,10>(K1_W_V_1_2_load_reg_26568.read());
}

void lenet::thread_sext_ln1118_9_fu_18336_p1() {
    sext_ln1118_9_fu_18336_p1 = esl_sext<26,10>(K1_W_V_2_2_load_reg_26573.read());
}

void lenet::thread_sext_ln1118_fu_18104_p1() {
    sext_ln1118_fu_18104_p1 = esl_sext<26,10>(K1_W_V_0_0_q0.read());
}

void lenet::thread_sext_ln1192_100_fu_23328_p0() {
    sext_ln1192_100_fu_23328_p0 =  (sc_lv<25>) (reg_3487.read());
}

void lenet::thread_sext_ln1192_100_fu_23328_p1() {
    sext_ln1192_100_fu_23328_p1 = esl_sext<26,25>(sext_ln1192_100_fu_23328_p0.read());
}

void lenet::thread_sext_ln1192_101_fu_23356_p1() {
    sext_ln1192_101_fu_23356_p1 = esl_sext<26,25>(reg_15556.read());
}

void lenet::thread_sext_ln1192_102_fu_23217_p1() {
    sext_ln1192_102_fu_23217_p1 = esl_sext<26,25>(reg_3553.read());
}

void lenet::thread_sext_ln1192_103_fu_23245_p1() {
    sext_ln1192_103_fu_23245_p1 = esl_sext<26,25>(reg_3575.read());
}

void lenet::thread_sext_ln1192_104_fu_23273_p1() {
    sext_ln1192_104_fu_23273_p1 = esl_sext<26,25>(mul_ln1192_106_reg_15620.read());
}

void lenet::thread_sext_ln1192_105_fu_23383_p1() {
    sext_ln1192_105_fu_23383_p1 = esl_sext<26,25>(mul_ln1192_107_reg_15624.read());
}

void lenet::thread_sext_ln1192_106_fu_23411_p1() {
    sext_ln1192_106_fu_23411_p1 = esl_sext<26,25>(mul_ln1192_108_reg_16152.read());
}

void lenet::thread_sext_ln1192_107_fu_23439_p1() {
    sext_ln1192_107_fu_23439_p1 = esl_sext<26,25>(reg_4062.read());
}

void lenet::thread_sext_ln1192_108_fu_24766_p1() {
    sext_ln1192_108_fu_24766_p1 = esl_sext<25,8>(K3_W_V_0_q0.read());
}

void lenet::thread_sext_ln1192_109_fu_24816_p1() {
    sext_ln1192_109_fu_24816_p1 = esl_sext<26,25>(reg_4117.read());
}

void lenet::thread_sext_ln1192_10_fu_20363_p0() {
    sext_ln1192_10_fu_20363_p0 =  (sc_lv<25>) (reg_4004.read());
}

void lenet::thread_sext_ln1192_10_fu_20363_p1() {
    sext_ln1192_10_fu_20363_p1 = esl_sext<26,25>(sext_ln1192_10_fu_20363_p0.read());
}

void lenet::thread_sext_ln1192_110_fu_24771_p1() {
    sext_ln1192_110_fu_24771_p1 = esl_sext<25,8>(K3_W_V_1_q0.read());
}

void lenet::thread_sext_ln1192_111_fu_24833_p0() {
    sext_ln1192_111_fu_24833_p0 =  (sc_lv<25>) (reg_4004.read());
}

void lenet::thread_sext_ln1192_111_fu_24833_p1() {
    sext_ln1192_111_fu_24833_p1 = esl_sext<26,25>(sext_ln1192_111_fu_24833_p0.read());
}

void lenet::thread_sext_ln1192_112_fu_24776_p1() {
    sext_ln1192_112_fu_24776_p1 = esl_sext<25,8>(K3_W_V_2_q0.read());
}

void lenet::thread_sext_ln1192_113_fu_24861_p1() {
    sext_ln1192_113_fu_24861_p1 = esl_sext<26,25>(reg_4083.read());
}

void lenet::thread_sext_ln1192_114_fu_24781_p1() {
    sext_ln1192_114_fu_24781_p1 = esl_sext<25,8>(K3_W_V_3_q0.read());
}

void lenet::thread_sext_ln1192_115_fu_24889_p1() {
    sext_ln1192_115_fu_24889_p1 = esl_sext<26,25>(reg_3643.read());
}

void lenet::thread_sext_ln1192_116_fu_24917_p1() {
    sext_ln1192_116_fu_24917_p1 = esl_sext<25,8>(K3_W_V_4_load_reg_28608.read());
}

void lenet::thread_sext_ln1192_117_fu_24965_p0() {
    sext_ln1192_117_fu_24965_p0 =  (sc_lv<25>) (reg_4094.read());
}

void lenet::thread_sext_ln1192_117_fu_24965_p1() {
    sext_ln1192_117_fu_24965_p1 = esl_sext<26,25>(sext_ln1192_117_fu_24965_p0.read());
}

void lenet::thread_sext_ln1192_118_fu_24931_p1() {
    sext_ln1192_118_fu_24931_p1 = esl_sext<25,8>(K3_W_V_5_load_reg_28613.read());
}

void lenet::thread_sext_ln1192_119_fu_24982_p1() {
    sext_ln1192_119_fu_24982_p1 = esl_sext<26,25>(reg_3969.read());
}

void lenet::thread_sext_ln1192_11_fu_20391_p1() {
    sext_ln1192_11_fu_20391_p1 = esl_sext<26,25>(reg_4106.read());
}

void lenet::thread_sext_ln1192_120_fu_25010_p1() {
    sext_ln1192_120_fu_25010_p1 = esl_sext<25,8>(K3_W_V_6_load_reg_28618.read());
}

void lenet::thread_sext_ln1192_121_fu_25058_p0() {
    sext_ln1192_121_fu_25058_p0 =  (sc_lv<25>) (reg_4094.read());
}

void lenet::thread_sext_ln1192_121_fu_25058_p1() {
    sext_ln1192_121_fu_25058_p1 = esl_sext<26,25>(sext_ln1192_121_fu_25058_p0.read());
}

void lenet::thread_sext_ln1192_122_fu_25024_p1() {
    sext_ln1192_122_fu_25024_p1 = esl_sext<25,8>(K3_W_V_7_load_reg_28623.read());
}

void lenet::thread_sext_ln1192_123_fu_25075_p1() {
    sext_ln1192_123_fu_25075_p1 = esl_sext<26,25>(reg_15564.read());
}

void lenet::thread_sext_ln1192_124_fu_25103_p1() {
    sext_ln1192_124_fu_25103_p1 = esl_sext<25,8>(K3_W_V_8_load_reg_28628.read());
}

void lenet::thread_sext_ln1192_125_fu_25151_p0() {
    sext_ln1192_125_fu_25151_p0 =  (sc_lv<25>) (reg_4094.read());
}

void lenet::thread_sext_ln1192_125_fu_25151_p1() {
    sext_ln1192_125_fu_25151_p1 = esl_sext<26,25>(sext_ln1192_125_fu_25151_p0.read());
}

void lenet::thread_sext_ln1192_126_fu_25117_p1() {
    sext_ln1192_126_fu_25117_p1 = esl_sext<25,8>(K3_W_V_9_load_reg_28633.read());
}

void lenet::thread_sext_ln1192_127_fu_25168_p1() {
    sext_ln1192_127_fu_25168_p1 = esl_sext<26,25>(reg_15564.read());
}

void lenet::thread_sext_ln1192_128_fu_25196_p1() {
    sext_ln1192_128_fu_25196_p1 = esl_sext<25,8>(K3_W_V_10_load_reg_28638.read());
}

void lenet::thread_sext_ln1192_129_fu_25261_p1() {
    sext_ln1192_129_fu_25261_p1 = esl_sext<26,25>(reg_15556.read());
}

void lenet::thread_sext_ln1192_12_fu_20774_p1() {
    sext_ln1192_12_fu_20774_p1 = esl_sext<26,25>(reg_15538.read());
}

void lenet::thread_sext_ln1192_130_fu_25210_p1() {
    sext_ln1192_130_fu_25210_p1 = esl_sext<25,8>(K3_W_V_11_load_reg_28643.read());
}

void lenet::thread_sext_ln1192_131_fu_25278_p0() {
    sext_ln1192_131_fu_25278_p0 =  (sc_lv<25>) (reg_4004.read());
}

void lenet::thread_sext_ln1192_131_fu_25278_p1() {
    sext_ln1192_131_fu_25278_p1 = esl_sext<26,25>(sext_ln1192_131_fu_25278_p0.read());
}

void lenet::thread_sext_ln1192_132_fu_25306_p1() {
    sext_ln1192_132_fu_25306_p1 = esl_sext<25,8>(K3_W_V_12_load_reg_28648.read());
}

void lenet::thread_sext_ln1192_133_fu_25334_p1() {
    sext_ln1192_133_fu_25334_p1 = esl_sext<26,25>(reg_15556.read());
}

void lenet::thread_sext_ln1192_134_fu_25320_p1() {
    sext_ln1192_134_fu_25320_p1 = esl_sext<25,8>(K3_W_V_13_load_reg_28653.read());
}

void lenet::thread_sext_ln1192_135_fu_25351_p0() {
    sext_ln1192_135_fu_25351_p0 =  (sc_lv<25>) (reg_4004.read());
}

void lenet::thread_sext_ln1192_135_fu_25351_p1() {
    sext_ln1192_135_fu_25351_p1 = esl_sext<26,25>(sext_ln1192_135_fu_25351_p0.read());
}

void lenet::thread_sext_ln1192_136_fu_25379_p1() {
    sext_ln1192_136_fu_25379_p1 = esl_sext<25,8>(K3_W_V_14_load_reg_28658.read());
}

void lenet::thread_sext_ln1192_137_fu_25397_p1() {
    sext_ln1192_137_fu_25397_p1 = esl_sext<26,25>(reg_3553.read());
}

void lenet::thread_sext_ln1192_138_fu_25393_p1() {
    sext_ln1192_138_fu_25393_p1 = esl_sext<25,8>(K3_W_V_15_load_reg_28663.read());
}

void lenet::thread_sext_ln1192_139_fu_25414_p1() {
    sext_ln1192_139_fu_25414_p1 = esl_sext<26,25>(reg_3969.read());
}

void lenet::thread_sext_ln1192_13_fu_20802_p1() {
    sext_ln1192_13_fu_20802_p1 = esl_sext<26,25>(reg_3632.read());
}

void lenet::thread_sext_ln1192_140_fu_25623_p1() {
    sext_ln1192_140_fu_25623_p1 = esl_sext<25,9>(FC1_W_V_load_reg_28861.read());
}

void lenet::thread_sext_ln1192_141_fu_25627_p1() {
    sext_ln1192_141_fu_25627_p1 = esl_sext<26,25>(grp_fu_4142_p2.read());
}

void lenet::thread_sext_ln1192_14_fu_21350_p1() {
    sext_ln1192_14_fu_21350_p1 = esl_sext<26,25>(mul_ln1192_18_reg_16073.read());
}

void lenet::thread_sext_ln1192_15_fu_21378_p1() {
    sext_ln1192_15_fu_21378_p1 = esl_sext<26,25>(mul_ln1192_19_reg_16077.read());
}

void lenet::thread_sext_ln1192_16_fu_20467_p1() {
    sext_ln1192_16_fu_20467_p1 = esl_sext<26,25>(reg_3586.read());
}

void lenet::thread_sext_ln1192_17_fu_20495_p1() {
    sext_ln1192_17_fu_20495_p1 = esl_sext<26,25>(reg_4062.read());
}

void lenet::thread_sext_ln1192_18_fu_20877_p1() {
    sext_ln1192_18_fu_20877_p1 = esl_sext<26,25>(reg_4062.read());
}

void lenet::thread_sext_ln1192_19_fu_20905_p1() {
    sext_ln1192_19_fu_20905_p1 = esl_sext<26,25>(reg_15544.read());
}

void lenet::thread_sext_ln1192_1_fu_18718_p0() {
    sext_ln1192_1_fu_18718_p0 =  (sc_lv<24>) (reg_3980.read());
}

void lenet::thread_sext_ln1192_1_fu_18718_p1() {
    sext_ln1192_1_fu_18718_p1 = esl_sext<26,24>(sext_ln1192_1_fu_18718_p0.read());
}

void lenet::thread_sext_ln1192_20_fu_21405_p1() {
    sext_ln1192_20_fu_21405_p1 = esl_sext<26,25>(mul_ln1192_24_reg_16081.read());
}

void lenet::thread_sext_ln1192_21_fu_21433_p1() {
    sext_ln1192_21_fu_21433_p1 = esl_sext<26,25>(mul_ln1192_25_reg_16085.read());
}

void lenet::thread_sext_ln1192_22_fu_20531_p0() {
    sext_ln1192_22_fu_20531_p0 =  (sc_lv<25>) (reg_3476.read());
}

void lenet::thread_sext_ln1192_22_fu_20531_p1() {
    sext_ln1192_22_fu_20531_p1 = esl_sext<26,25>(sext_ln1192_22_fu_20531_p0.read());
}

void lenet::thread_sext_ln1192_23_fu_20559_p0() {
    sext_ln1192_23_fu_20559_p0 =  (sc_lv<25>) (reg_3958.read());
}

void lenet::thread_sext_ln1192_23_fu_20559_p1() {
    sext_ln1192_23_fu_20559_p1 = esl_sext<26,25>(sext_ln1192_23_fu_20559_p0.read());
}

void lenet::thread_sext_ln1192_24_fu_20940_p1() {
    sext_ln1192_24_fu_20940_p1 = esl_sext<26,25>(reg_15548.read());
}

void lenet::thread_sext_ln1192_25_fu_20968_p1() {
    sext_ln1192_25_fu_20968_p1 = esl_sext<26,25>(reg_15552.read());
}

void lenet::thread_sext_ln1192_26_fu_21460_p1() {
    sext_ln1192_26_fu_21460_p1 = esl_sext<26,25>(mul_ln1192_30_reg_16089.read());
}

void lenet::thread_sext_ln1192_27_fu_21488_p1() {
    sext_ln1192_27_fu_21488_p1 = esl_sext<26,25>(reg_3632.read());
}

void lenet::thread_sext_ln1192_28_fu_25773_p1() {
    sext_ln1192_28_fu_25773_p1 = esl_sext<26,16>(FC1_out_V_load_reg_28925.read());
}

void lenet::thread_sext_ln1192_29_fu_25777_p1() {
    sext_ln1192_29_fu_25777_p1 = esl_sext<26,10>(FC2_W_V_load_reg_28930.read());
}

void lenet::thread_sext_ln1192_2_fu_18736_p1() {
    sext_ln1192_2_fu_18736_p1 = esl_sext<26,25>(reg_3833.read());
}

void lenet::thread_sext_ln1192_30_fu_20595_p1() {
    sext_ln1192_30_fu_20595_p1 = esl_sext<26,25>(reg_4051.read());
}

void lenet::thread_sext_ln1192_31_fu_20623_p1() {
    sext_ln1192_31_fu_20623_p1 = esl_sext<26,25>(reg_4015.read());
}

void lenet::thread_sext_ln1192_32_fu_21003_p1() {
    sext_ln1192_32_fu_21003_p1 = esl_sext<26,25>(reg_15556.read());
}

void lenet::thread_sext_ln1192_33_fu_21031_p1() {
    sext_ln1192_33_fu_21031_p1 = esl_sext<26,25>(reg_15560.read());
}

void lenet::thread_sext_ln1192_34_fu_21515_p1() {
    sext_ln1192_34_fu_21515_p1 = esl_sext<26,25>(reg_4051.read());
}

void lenet::thread_sext_ln1192_35_fu_21543_p1() {
    sext_ln1192_35_fu_21543_p1 = esl_sext<26,25>(reg_15538.read());
}

void lenet::thread_sext_ln1192_36_fu_21067_p1() {
    sext_ln1192_36_fu_21067_p1 = esl_sext<26,25>(reg_3608.read());
}

void lenet::thread_sext_ln1192_37_fu_21095_p1() {
    sext_ln1192_37_fu_21095_p1 = esl_sext<26,25>(reg_3597.read());
}

void lenet::thread_sext_ln1192_38_fu_21123_p1() {
    sext_ln1192_38_fu_21123_p1 = esl_sext<26,25>(reg_15564.read());
}

void lenet::thread_sext_ln1192_39_fu_21570_p1() {
    sext_ln1192_39_fu_21570_p1 = esl_sext<26,25>(mul_ln1192_41_reg_15568.read());
}

void lenet::thread_sext_ln1192_3_fu_18260_p1() {
    sext_ln1192_3_fu_18260_p1 = esl_sext<26,25>(reg_4026.read());
}

void lenet::thread_sext_ln1192_40_fu_21598_p1() {
    sext_ln1192_40_fu_21598_p1 = esl_sext<26,25>(reg_15544.read());
}

void lenet::thread_sext_ln1192_41_fu_21626_p1() {
    sext_ln1192_41_fu_21626_p1 = esl_sext<26,25>(mul_ln1192_43_reg_16096.read());
}

void lenet::thread_sext_ln1192_42_fu_21159_p0() {
    sext_ln1192_42_fu_21159_p0 =  (sc_lv<25>) (reg_3487.read());
}

void lenet::thread_sext_ln1192_42_fu_21159_p1() {
    sext_ln1192_42_fu_21159_p1 = esl_sext<26,25>(sext_ln1192_42_fu_21159_p0.read());
}

void lenet::thread_sext_ln1192_43_fu_21187_p1() {
    sext_ln1192_43_fu_21187_p1 = esl_sext<26,25>(reg_3776.read());
}

void lenet::thread_sext_ln1192_44_fu_21215_p1() {
    sext_ln1192_44_fu_21215_p1 = esl_sext<26,25>(reg_4051.read());
}

void lenet::thread_sext_ln1192_45_fu_21653_p1() {
    sext_ln1192_45_fu_21653_p1 = esl_sext<26,25>(mul_ln1192_47_reg_15573.read());
}

void lenet::thread_sext_ln1192_46_fu_21681_p1() {
    sext_ln1192_46_fu_21681_p1 = esl_sext<26,25>(reg_15560.read());
}

void lenet::thread_sext_ln1192_47_fu_21709_p1() {
    sext_ln1192_47_fu_21709_p1 = esl_sext<26,25>(reg_15564.read());
}

void lenet::thread_sext_ln1192_48_fu_21737_p1() {
    sext_ln1192_48_fu_21737_p1 = esl_sext<26,25>(reg_3833.read());
}

void lenet::thread_sext_ln1192_49_fu_21765_p1() {
    sext_ln1192_49_fu_21765_p1 = esl_sext<26,25>(reg_3809.read());
}

void lenet::thread_sext_ln1192_4_fu_18488_p0() {
    sext_ln1192_4_fu_18488_p0 = reg_4073.read();
}

void lenet::thread_sext_ln1192_4_fu_18488_p1() {
    sext_ln1192_4_fu_18488_p1 = esl_sext<26,25>(sext_ln1192_4_fu_18488_p0.read());
}

void lenet::thread_sext_ln1192_50_fu_21793_p1() {
    sext_ln1192_50_fu_21793_p1 = esl_sext<26,25>(mul_ln1192_52_reg_15577.read());
}

void lenet::thread_sext_ln1192_51_fu_21924_p0() {
    sext_ln1192_51_fu_21924_p0 =  (sc_lv<25>) (reg_3958.read());
}

void lenet::thread_sext_ln1192_51_fu_21924_p1() {
    sext_ln1192_51_fu_21924_p1 = esl_sext<26,25>(sext_ln1192_51_fu_21924_p0.read());
}

void lenet::thread_sext_ln1192_52_fu_21952_p1() {
    sext_ln1192_52_fu_21952_p1 = esl_sext<26,25>(reg_15548.read());
}

void lenet::thread_sext_ln1192_53_fu_21980_p1() {
    sext_ln1192_53_fu_21980_p1 = esl_sext<26,25>(reg_3597.read());
}

void lenet::thread_sext_ln1192_54_fu_21821_p1() {
    sext_ln1192_54_fu_21821_p1 = esl_sext<26,25>(reg_3946.read());
}

void lenet::thread_sext_ln1192_55_fu_21849_p1() {
    sext_ln1192_55_fu_21849_p1 = esl_sext<26,25>(reg_3787.read());
}

void lenet::thread_sext_ln1192_56_fu_21877_p0() {
    sext_ln1192_56_fu_21877_p0 =  (sc_lv<25>) (reg_3476.read());
}

void lenet::thread_sext_ln1192_56_fu_21877_p1() {
    sext_ln1192_56_fu_21877_p1 = esl_sext<26,25>(sext_ln1192_56_fu_21877_p0.read());
}

void lenet::thread_sext_ln1192_57_fu_22007_p1() {
    sext_ln1192_57_fu_22007_p1 = esl_sext<26,25>(reg_3822.read());
}

void lenet::thread_sext_ln1192_58_fu_22035_p1() {
    sext_ln1192_58_fu_22035_p1 = esl_sext<26,25>(mul_ln1192_60_reg_16104.read());
}

void lenet::thread_sext_ln1192_59_fu_22063_p1() {
    sext_ln1192_59_fu_22063_p1 = esl_sext<26,25>(mul_ln1192_61_reg_16108.read());
}

void lenet::thread_sext_ln1192_5_fu_18505_p1() {
    sext_ln1192_5_fu_18505_p1 = esl_sext<26,25>(reg_3969.read());
}

void lenet::thread_sext_ln1192_60_fu_22091_p1() {
    sext_ln1192_60_fu_22091_p1 = esl_sext<26,25>(reg_3935.read());
}

void lenet::thread_sext_ln1192_61_fu_22119_p1() {
    sext_ln1192_61_fu_22119_p1 = esl_sext<26,25>(reg_3969.read());
}

void lenet::thread_sext_ln1192_62_fu_22147_p1() {
    sext_ln1192_62_fu_22147_p1 = esl_sext<26,25>(mul_ln1192_64_reg_15583.read());
}

void lenet::thread_sext_ln1192_63_fu_22278_p1() {
    sext_ln1192_63_fu_22278_p1 = esl_sext<26,25>(mul_ln1192_65_reg_15587.read());
}

void lenet::thread_sext_ln1192_64_fu_22306_p1() {
    sext_ln1192_64_fu_22306_p1 = esl_sext<26,25>(mul_ln1192_66_reg_16112.read());
}

void lenet::thread_sext_ln1192_65_fu_22334_p1() {
    sext_ln1192_65_fu_22334_p1 = esl_sext<26,25>(mul_ln1192_67_reg_16116.read());
}

void lenet::thread_sext_ln1192_66_fu_22175_p1() {
    sext_ln1192_66_fu_22175_p1 = esl_sext<26,25>(reg_3798.read());
}

void lenet::thread_sext_ln1192_67_fu_22203_p1() {
    sext_ln1192_67_fu_22203_p1 = esl_sext<26,25>(reg_4117.read());
}

void lenet::thread_sext_ln1192_68_fu_22231_p1() {
    sext_ln1192_68_fu_22231_p1 = esl_sext<26,25>(mul_ln1192_70_reg_15591.read());
}

void lenet::thread_sext_ln1192_69_fu_22361_p1() {
    sext_ln1192_69_fu_22361_p1 = esl_sext<26,25>(reg_3655.read());
}

void lenet::thread_sext_ln1192_6_fu_18844_p1() {
    sext_ln1192_6_fu_18844_p1 = esl_sext<26,25>(reg_4051.read());
}

void lenet::thread_sext_ln1192_70_fu_22389_p1() {
    sext_ln1192_70_fu_22389_p1 = esl_sext<26,25>(mul_ln1192_72_reg_16120.read());
}

void lenet::thread_sext_ln1192_71_fu_22417_p1() {
    sext_ln1192_71_fu_22417_p1 = esl_sext<26,25>(mul_ln1192_73_reg_16124.read());
}

void lenet::thread_sext_ln1192_72_fu_22445_p1() {
    sext_ln1192_72_fu_22445_p1 = esl_sext<26,25>(reg_4026.read());
}

void lenet::thread_sext_ln1192_73_fu_22473_p0() {
    sext_ln1192_73_fu_22473_p0 = reg_4073.read();
}

void lenet::thread_sext_ln1192_73_fu_22473_p1() {
    sext_ln1192_73_fu_22473_p1 = esl_sext<26,25>(sext_ln1192_73_fu_22473_p0.read());
}

void lenet::thread_sext_ln1192_74_fu_22501_p1() {
    sext_ln1192_74_fu_22501_p1 = esl_sext<26,25>(mul_ln1192_76_reg_15596.read());
}

void lenet::thread_sext_ln1192_75_fu_22632_p1() {
    sext_ln1192_75_fu_22632_p1 = esl_sext<26,25>(reg_4106.read());
}

void lenet::thread_sext_ln1192_76_fu_22660_p1() {
    sext_ln1192_76_fu_22660_p1 = esl_sext<26,25>(mul_ln1192_78_reg_16128.read());
}

void lenet::thread_sext_ln1192_77_fu_22688_p1() {
    sext_ln1192_77_fu_22688_p1 = esl_sext<26,25>(mul_ln1192_79_reg_16132.read());
}

void lenet::thread_sext_ln1192_78_fu_22529_p1() {
    sext_ln1192_78_fu_22529_p1 = esl_sext<26,25>(reg_4083.read());
}

void lenet::thread_sext_ln1192_79_fu_22557_p0() {
    sext_ln1192_79_fu_22557_p0 =  (sc_lv<25>) (reg_4038.read());
}

void lenet::thread_sext_ln1192_79_fu_22557_p1() {
    sext_ln1192_79_fu_22557_p1 = esl_sext<26,25>(sext_ln1192_79_fu_22557_p0.read());
}

void lenet::thread_sext_ln1192_7_fu_18861_p1() {
    sext_ln1192_7_fu_18861_p1 = esl_sext<26,25>(reg_3553.read());
}

void lenet::thread_sext_ln1192_80_fu_22585_p1() {
    sext_ln1192_80_fu_22585_p1 = esl_sext<26,25>(mul_ln1192_82_reg_15601.read());
}

void lenet::thread_sext_ln1192_81_fu_22715_p1() {
    sext_ln1192_81_fu_22715_p1 = esl_sext<26,25>(reg_4015.read());
}

void lenet::thread_sext_ln1192_82_fu_22743_p1() {
    sext_ln1192_82_fu_22743_p1 = esl_sext<26,25>(mul_ln1192_84_reg_16136.read());
}

void lenet::thread_sext_ln1192_83_fu_22771_p1() {
    sext_ln1192_83_fu_22771_p1 = esl_sext<26,25>(reg_3776.read());
}

void lenet::thread_sext_ln1192_84_fu_22799_p0() {
    sext_ln1192_84_fu_22799_p0 =  (sc_lv<25>) (reg_4094.read());
}

void lenet::thread_sext_ln1192_84_fu_22799_p1() {
    sext_ln1192_84_fu_22799_p1 = esl_sext<26,25>(sext_ln1192_84_fu_22799_p0.read());
}

void lenet::thread_sext_ln1192_85_fu_22827_p1() {
    sext_ln1192_85_fu_22827_p1 = esl_sext<26,25>(reg_3643.read());
}

void lenet::thread_sext_ln1192_86_fu_22855_p0() {
    sext_ln1192_86_fu_22855_p0 =  (sc_lv<25>) (reg_4004.read());
}

void lenet::thread_sext_ln1192_86_fu_22855_p1() {
    sext_ln1192_86_fu_22855_p1 = esl_sext<26,25>(sext_ln1192_86_fu_22855_p0.read());
}

void lenet::thread_sext_ln1192_87_fu_22966_p1() {
    sext_ln1192_87_fu_22966_p1 = esl_sext<26,25>(mul_ln1192_89_reg_15606.read());
}

void lenet::thread_sext_ln1192_88_fu_22994_p1() {
    sext_ln1192_88_fu_22994_p1 = esl_sext<26,25>(mul_ln1192_90_reg_16141.read());
}

void lenet::thread_sext_ln1192_89_fu_23022_p1() {
    sext_ln1192_89_fu_23022_p1 = esl_sext<26,25>(reg_3608.read());
}

void lenet::thread_sext_ln1192_8_fu_19035_p0() {
    sext_ln1192_8_fu_19035_p0 =  (sc_lv<24>) (reg_3946.read());
}

void lenet::thread_sext_ln1192_8_fu_19035_p1() {
    sext_ln1192_8_fu_19035_p1 = esl_sext<26,24>(sext_ln1192_8_fu_19035_p0.read());
}

void lenet::thread_sext_ln1192_90_fu_22883_p0() {
    sext_ln1192_90_fu_22883_p0 =  (sc_lv<25>) (reg_3993.read());
}

void lenet::thread_sext_ln1192_90_fu_22883_p1() {
    sext_ln1192_90_fu_22883_p1 = esl_sext<26,25>(sext_ln1192_90_fu_22883_p0.read());
}

void lenet::thread_sext_ln1192_91_fu_22911_p1() {
    sext_ln1192_91_fu_22911_p1 = esl_sext<26,25>(reg_3980.read());
}

void lenet::thread_sext_ln1192_92_fu_22939_p1() {
    sext_ln1192_92_fu_22939_p1 = esl_sext<26,25>(reg_3586.read());
}

void lenet::thread_sext_ln1192_93_fu_23049_p1() {
    sext_ln1192_93_fu_23049_p1 = esl_sext<26,25>(mul_ln1192_95_reg_15611.read());
}

void lenet::thread_sext_ln1192_94_fu_23077_p1() {
    sext_ln1192_94_fu_23077_p1 = esl_sext<26,25>(reg_15552.read());
}

void lenet::thread_sext_ln1192_95_fu_23105_p1() {
    sext_ln1192_95_fu_23105_p1 = esl_sext<26,25>(mul_ln1192_97_reg_16147.read());
}

void lenet::thread_sext_ln1192_96_fu_23133_p1() {
    sext_ln1192_96_fu_23133_p1 = esl_sext<26,25>(reg_3564.read());
}

void lenet::thread_sext_ln1192_97_fu_23161_p0() {
    sext_ln1192_97_fu_23161_p0 =  (sc_lv<25>) (reg_3619.read());
}

void lenet::thread_sext_ln1192_97_fu_23161_p1() {
    sext_ln1192_97_fu_23161_p1 = esl_sext<26,25>(sext_ln1192_97_fu_23161_p0.read());
}

void lenet::thread_sext_ln1192_98_fu_23189_p1() {
    sext_ln1192_98_fu_23189_p1 = esl_sext<26,25>(mul_ln1192_100_reg_15615.read());
}

void lenet::thread_sext_ln1192_99_fu_23300_p1() {
    sext_ln1192_99_fu_23300_p1 = esl_sext<26,25>(reg_3845.read());
}

void lenet::thread_sext_ln1192_9_fu_18974_p0() {
    sext_ln1192_9_fu_18974_p0 =  (sc_lv<25>) (reg_3487.read());
}

void lenet::thread_sext_ln1192_9_fu_18974_p1() {
    sext_ln1192_9_fu_18974_p1 = esl_sext<26,25>(sext_ln1192_9_fu_18974_p0.read());
}

void lenet::thread_sext_ln1192_fu_18436_p1() {
    sext_ln1192_fu_18436_p1 = esl_sext<26,25>(reg_3643.read());
}

void lenet::thread_sext_ln1265_10_fu_20197_p1() {
    sext_ln1265_10_fu_20197_p1 = esl_sext<25,9>(K2_W_V_3_0_q0.read());
}

void lenet::thread_sext_ln1265_11_fu_20207_p1() {
    sext_ln1265_11_fu_20207_p1 = esl_sext<25,9>(K2_W_V_4_0_q0.read());
}

void lenet::thread_sext_ln1265_12_fu_20217_p1() {
    sext_ln1265_12_fu_20217_p1 = esl_sext<25,9>(K2_W_V_5_0_q0.read());
}

void lenet::thread_sext_ln1265_13_fu_20227_p1() {
    sext_ln1265_13_fu_20227_p1 = esl_sext<25,9>(K2_W_V_6_0_q0.read());
}

void lenet::thread_sext_ln1265_14_fu_20237_p1() {
    sext_ln1265_14_fu_20237_p1 = esl_sext<25,9>(K2_W_V_7_0_q0.read());
}

void lenet::thread_sext_ln1265_15_fu_20247_p1() {
    sext_ln1265_15_fu_20247_p1 = esl_sext<25,9>(K2_W_V_8_0_q0.read());
}

void lenet::thread_sext_ln1265_16_fu_20257_p1() {
    sext_ln1265_16_fu_20257_p1 = esl_sext<25,9>(K2_W_V_9_0_q0.read());
}

void lenet::thread_sext_ln1265_17_fu_20267_p1() {
    sext_ln1265_17_fu_20267_p1 = esl_sext<25,8>(K2_W_V_10_0_q0.read());
}

void lenet::thread_sext_ln1265_18_fu_20277_p1() {
    sext_ln1265_18_fu_20277_p1 = esl_sext<25,9>(K2_W_V_11_0_q0.read());
}

void lenet::thread_sext_ln1265_19_fu_20287_p1() {
    sext_ln1265_19_fu_20287_p1 = esl_sext<25,9>(K2_W_V_12_0_q0.read());
}

void lenet::thread_sext_ln1265_1_fu_25673_p0() {
    sext_ln1265_1_fu_25673_p0 = FC1_B_V_q0.read();
}

void lenet::thread_sext_ln1265_1_fu_25673_p1() {
    sext_ln1265_1_fu_25673_p1 = esl_sext<16,8>(sext_ln1265_1_fu_25673_p0.read());
}

void lenet::thread_sext_ln1265_20_fu_20297_p1() {
    sext_ln1265_20_fu_20297_p1 = esl_sext<25,8>(K2_W_V_13_0_q0.read());
}

void lenet::thread_sext_ln1265_21_fu_20307_p1() {
    sext_ln1265_21_fu_20307_p1 = esl_sext<25,9>(K2_W_V_14_0_q0.read());
}

void lenet::thread_sext_ln1265_22_fu_20317_p1() {
    sext_ln1265_22_fu_20317_p1 = esl_sext<25,9>(K2_W_V_15_0_q0.read());
}

void lenet::thread_sext_ln1265_2_fu_25823_p0() {
    sext_ln1265_2_fu_25823_p0 = FC2_B_V_q0.read();
}

void lenet::thread_sext_ln1265_2_fu_25823_p1() {
    sext_ln1265_2_fu_25823_p1 = esl_sext<16,8>(sext_ln1265_2_fu_25823_p0.read());
}

void lenet::thread_sext_ln1265_3_fu_18016_p1() {
    sext_ln1265_3_fu_18016_p1 = esl_sext<12,11>(sub_ln1265_fu_18010_p2.read());
}

void lenet::thread_sext_ln1265_4_fu_18049_p1() {
    sext_ln1265_4_fu_18049_p1 = esl_sext<14,13>(tmp_15_fu_18041_p3.read());
}

void lenet::thread_sext_ln1265_5_fu_19179_p1() {
    sext_ln1265_5_fu_19179_p1 = esl_sext<12,11>(sub_ln1265_2_fu_19173_p2.read());
}

void lenet::thread_sext_ln1265_6_fu_19224_p1() {
    sext_ln1265_6_fu_19224_p1 = esl_sext<14,13>(tmp_50_fu_19216_p3.read());
}

void lenet::thread_sext_ln1265_7_fu_20147_p1() {
    sext_ln1265_7_fu_20147_p1 = esl_sext<25,9>(K2_W_V_0_0_q0.read());
}

void lenet::thread_sext_ln1265_8_fu_20177_p1() {
    sext_ln1265_8_fu_20177_p1 = esl_sext<25,9>(K2_W_V_1_0_q0.read());
}

void lenet::thread_sext_ln1265_9_fu_20187_p1() {
    sext_ln1265_9_fu_20187_p1 = esl_sext<25,9>(K2_W_V_2_0_q0.read());
}

void lenet::thread_sext_ln1265_fu_25500_p1() {
    sext_ln1265_fu_25500_p1 = esl_sext<16,8>(K3_B_V_q0.read());
}

void lenet::thread_sext_ln1494_1_fu_19550_p1() {
    sext_ln1494_1_fu_19550_p1 = esl_sext<14,13>(tmp_174_fu_19542_p3.read());
}

void lenet::thread_sext_ln1494_fu_19496_p1() {
    sext_ln1494_fu_19496_p1 = esl_sext<12,11>(sub_ln1494_fu_19490_p2.read());
}

void lenet::thread_sext_ln158_10_fu_25121_p1() {
    sext_ln158_10_fu_25121_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_11_fu_25126_p1() {
    sext_ln158_11_fu_25126_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_12_fu_25231_p1() {
    sext_ln158_12_fu_25231_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_13_fu_25236_p1() {
    sext_ln158_13_fu_25236_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_14_fu_25324_p1() {
    sext_ln158_14_fu_25324_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_15_fu_25329_p1() {
    sext_ln158_15_fu_25329_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_1_fu_24732_p1() {
    sext_ln158_1_fu_24732_p1 = esl_sext<25,16>(P2_out_V_load_1_reg_28498.read());
}

void lenet::thread_sext_ln158_2_fu_24736_p1() {
    sext_ln158_2_fu_24736_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_3_fu_24741_p1() {
    sext_ln158_3_fu_24741_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_4_fu_24786_p1() {
    sext_ln158_4_fu_24786_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_5_fu_24791_p1() {
    sext_ln158_5_fu_24791_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_6_fu_24935_p1() {
    sext_ln158_6_fu_24935_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_7_fu_24940_p1() {
    sext_ln158_7_fu_24940_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_8_fu_25028_p1() {
    sext_ln158_8_fu_25028_p1 = esl_sext<25,16>(P2_out_V_q1.read());
}

void lenet::thread_sext_ln158_9_fu_25033_p1() {
    sext_ln158_9_fu_25033_p1 = esl_sext<25,16>(P2_out_V_q0.read());
}

void lenet::thread_sext_ln158_fu_24728_p1() {
    sext_ln158_fu_24728_p1 = esl_sext<25,16>(P2_out_V_load_reg_28493.read());
}

void lenet::thread_sext_ln203_1_fu_19405_p1() {
    sext_ln203_1_fu_19405_p1 = esl_sext<12,11>(tmp_136_fu_19397_p3.read());
}

void lenet::thread_sext_ln203_fu_19352_p1() {
    sext_ln203_fu_19352_p1 = esl_sext<10,9>(sub_ln203_fu_19346_p2.read());
}

void lenet::thread_sext_ln581_fu_17560_p1() {
    sext_ln581_fu_17560_p1 = esl_sext<32,12>(sh_amt_reg_26293.read());
}

void lenet::thread_sext_ln581cast_fu_17600_p1() {
    sext_ln581cast_fu_17600_p1 = sext_ln581_fu_17560_p1.read().range(16-1, 0);
}

void lenet::thread_sext_ln703_1_fu_25827_p0() {
    sext_ln703_1_fu_25827_p0 = FC2_B_V_q0.read();
}

void lenet::thread_sext_ln703_1_fu_25827_p1() {
    sext_ln703_1_fu_25827_p1 = esl_sext<15,8>(sext_ln703_1_fu_25827_p0.read());
}

void lenet::thread_sext_ln703_fu_25677_p0() {
    sext_ln703_fu_25677_p0 = FC1_B_V_q0.read();
}

void lenet::thread_sext_ln703_fu_25677_p1() {
    sext_ln703_fu_25677_p1 = esl_sext<15,8>(sext_ln703_fu_25677_p0.read());
}

void lenet::thread_sext_ln728_10_fu_20192_p1() {
    sext_ln728_10_fu_20192_p1 = esl_sext<25,9>(K2_W_V_2_1_q0.read());
}

void lenet::thread_sext_ln728_11_fu_20569_p1() {
    sext_ln728_11_fu_20569_p1 = esl_sext<25,9>(K2_W_V_2_2_load_reg_27551.read());
}

void lenet::thread_sext_ln728_12_fu_20583_p1() {
    sext_ln728_12_fu_20583_p1 = esl_sext<25,9>(K2_W_V_2_3_load_reg_27556.read());
}

void lenet::thread_sext_ln728_13_fu_20978_p1() {
    sext_ln728_13_fu_20978_p1 = esl_sext<25,8>(K2_W_V_2_4_load_reg_27561.read());
}

void lenet::thread_sext_ln728_14_fu_20992_p1() {
    sext_ln728_14_fu_20992_p1 = esl_sext<25,9>(K2_W_V_2_5_load_reg_27566.read());
}

void lenet::thread_sext_ln728_15_fu_20202_p1() {
    sext_ln728_15_fu_20202_p1 = esl_sext<25,8>(K2_W_V_3_1_q0.read());
}

void lenet::thread_sext_ln728_16_fu_20633_p1() {
    sext_ln728_16_fu_20633_p1 = esl_sext<25,9>(K2_W_V_3_2_load_reg_27571.read());
}

void lenet::thread_sext_ln728_17_fu_20647_p1() {
    sext_ln728_17_fu_20647_p1 = esl_sext<25,9>(K2_W_V_3_3_load_reg_27576.read());
}

void lenet::thread_sext_ln728_18_fu_21041_p1() {
    sext_ln728_18_fu_21041_p1 = esl_sext<25,8>(K2_W_V_3_4_load_reg_27581.read());
}

void lenet::thread_sext_ln728_19_fu_21055_p1() {
    sext_ln728_19_fu_21055_p1 = esl_sext<25,9>(K2_W_V_3_5_load_reg_27586.read());
}

void lenet::thread_sext_ln728_1_fu_20421_p1() {
    sext_ln728_1_fu_20421_p1 = esl_sext<25,9>(K2_W_V_0_2_load_reg_27511.read());
}

void lenet::thread_sext_ln728_20_fu_20212_p1() {
    sext_ln728_20_fu_20212_p1 = esl_sext<25,9>(K2_W_V_4_1_q0.read());
}

void lenet::thread_sext_ln728_21_fu_20651_p1() {
    sext_ln728_21_fu_20651_p1 = esl_sext<25,9>(K2_W_V_4_2_load_reg_27591.read());
}

void lenet::thread_sext_ln728_22_fu_20655_p1() {
    sext_ln728_22_fu_20655_p1 = esl_sext<25,9>(K2_W_V_4_3_load_reg_27596.read());
}

void lenet::thread_sext_ln728_23_fu_21143_p1() {
    sext_ln728_23_fu_21143_p1 = esl_sext<25,9>(K2_W_V_4_4_load_reg_27601.read());
}

void lenet::thread_sext_ln728_24_fu_21147_p1() {
    sext_ln728_24_fu_21147_p1 = esl_sext<25,9>(K2_W_V_4_5_load_reg_27606.read());
}

void lenet::thread_sext_ln728_25_fu_20222_p1() {
    sext_ln728_25_fu_20222_p1 = esl_sext<25,9>(K2_W_V_5_1_q0.read());
}

void lenet::thread_sext_ln728_26_fu_20659_p1() {
    sext_ln728_26_fu_20659_p1 = esl_sext<25,9>(K2_W_V_5_2_load_reg_27611.read());
}

void lenet::thread_sext_ln728_27_fu_20663_p1() {
    sext_ln728_27_fu_20663_p1 = esl_sext<25,9>(K2_W_V_5_3_load_reg_27616.read());
}

void lenet::thread_sext_ln728_28_fu_21235_p1() {
    sext_ln728_28_fu_21235_p1 = esl_sext<25,8>(K2_W_V_5_4_load_reg_27621.read());
}

void lenet::thread_sext_ln728_29_fu_21239_p1() {
    sext_ln728_29_fu_21239_p1 = esl_sext<25,9>(K2_W_V_5_5_load_reg_27626.read());
}

void lenet::thread_sext_ln728_2_fu_20455_p1() {
    sext_ln728_2_fu_20455_p1 = esl_sext<25,9>(K2_W_V_0_3_load_reg_27516.read());
}

void lenet::thread_sext_ln728_30_fu_20232_p1() {
    sext_ln728_30_fu_20232_p1 = esl_sext<25,9>(K2_W_V_6_1_q0.read());
}

void lenet::thread_sext_ln728_31_fu_20667_p1() {
    sext_ln728_31_fu_20667_p1 = esl_sext<25,9>(K2_W_V_6_2_load_reg_27631.read());
}

void lenet::thread_sext_ln728_32_fu_20671_p1() {
    sext_ln728_32_fu_20671_p1 = esl_sext<25,9>(K2_W_V_6_3_load_reg_27636.read());
}

void lenet::thread_sext_ln728_33_fu_21243_p1() {
    sext_ln728_33_fu_21243_p1 = esl_sext<25,8>(K2_W_V_6_4_load_reg_27641.read());
}

void lenet::thread_sext_ln728_34_fu_21247_p1() {
    sext_ln728_34_fu_21247_p1 = esl_sext<25,9>(K2_W_V_6_5_load_reg_27646.read());
}

void lenet::thread_sext_ln728_35_fu_20242_p1() {
    sext_ln728_35_fu_20242_p1 = esl_sext<25,8>(K2_W_V_7_1_q0.read());
}

void lenet::thread_sext_ln728_36_fu_20675_p1() {
    sext_ln728_36_fu_20675_p1 = esl_sext<25,9>(K2_W_V_7_2_load_reg_27651.read());
}

void lenet::thread_sext_ln728_37_fu_20679_p1() {
    sext_ln728_37_fu_20679_p1 = esl_sext<25,8>(K2_W_V_7_3_load_reg_27656.read());
}

void lenet::thread_sext_ln728_38_fu_21251_p1() {
    sext_ln728_38_fu_21251_p1 = esl_sext<25,8>(K2_W_V_7_4_load_reg_27661.read());
}

void lenet::thread_sext_ln728_39_fu_21255_p1() {
    sext_ln728_39_fu_21255_p1 = esl_sext<25,9>(K2_W_V_7_5_load_reg_27666.read());
}

void lenet::thread_sext_ln728_3_fu_20832_p1() {
    sext_ln728_3_fu_20832_p1 = esl_sext<25,8>(K2_W_V_0_4_load_reg_27521.read());
}

void lenet::thread_sext_ln728_40_fu_20252_p1() {
    sext_ln728_40_fu_20252_p1 = esl_sext<25,8>(K2_W_V_8_1_q0.read());
}

void lenet::thread_sext_ln728_41_fu_20683_p1() {
    sext_ln728_41_fu_20683_p1 = esl_sext<25,9>(K2_W_V_8_2_load_reg_27671.read());
}

void lenet::thread_sext_ln728_42_fu_20687_p1() {
    sext_ln728_42_fu_20687_p1 = esl_sext<25,9>(K2_W_V_8_3_load_reg_27676.read());
}

void lenet::thread_sext_ln728_43_fu_21259_p1() {
    sext_ln728_43_fu_21259_p1 = esl_sext<25,9>(K2_W_V_8_4_load_reg_27681.read());
}

void lenet::thread_sext_ln728_44_fu_21263_p1() {
    sext_ln728_44_fu_21263_p1 = esl_sext<25,9>(K2_W_V_8_5_load_reg_27686.read());
}

void lenet::thread_sext_ln728_45_fu_20262_p1() {
    sext_ln728_45_fu_20262_p1 = esl_sext<25,8>(K2_W_V_9_1_q0.read());
}

void lenet::thread_sext_ln728_46_fu_20691_p1() {
    sext_ln728_46_fu_20691_p1 = esl_sext<25,9>(K2_W_V_9_2_load_reg_27691.read());
}

void lenet::thread_sext_ln728_47_fu_20695_p1() {
    sext_ln728_47_fu_20695_p1 = esl_sext<25,9>(K2_W_V_9_3_load_reg_27696.read());
}

void lenet::thread_sext_ln728_48_fu_21267_p1() {
    sext_ln728_48_fu_21267_p1 = esl_sext<25,8>(K2_W_V_9_4_load_reg_27701.read());
}

void lenet::thread_sext_ln728_49_fu_21271_p1() {
    sext_ln728_49_fu_21271_p1 = esl_sext<25,9>(K2_W_V_9_5_load_reg_27706.read());
}

void lenet::thread_sext_ln728_4_fu_20866_p1() {
    sext_ln728_4_fu_20866_p1 = esl_sext<25,9>(K2_W_V_0_5_load_reg_27526.read());
}

void lenet::thread_sext_ln728_50_fu_20272_p1() {
    sext_ln728_50_fu_20272_p1 = esl_sext<25,8>(K2_W_V_10_1_q0.read());
}

void lenet::thread_sext_ln728_51_fu_20699_p1() {
    sext_ln728_51_fu_20699_p1 = esl_sext<25,8>(K2_W_V_10_2_load_reg_27711.read());
}

void lenet::thread_sext_ln728_52_fu_20703_p1() {
    sext_ln728_52_fu_20703_p1 = esl_sext<25,9>(K2_W_V_10_3_load_reg_27716.read());
}

void lenet::thread_sext_ln728_53_fu_21275_p1() {
    sext_ln728_53_fu_21275_p1 = esl_sext<25,8>(K2_W_V_10_4_load_reg_27721.read());
}

void lenet::thread_sext_ln728_54_fu_21279_p1() {
    sext_ln728_54_fu_21279_p1 = esl_sext<25,8>(K2_W_V_10_5_load_reg_27726.read());
}

void lenet::thread_sext_ln728_55_fu_20282_p1() {
    sext_ln728_55_fu_20282_p1 = esl_sext<25,9>(K2_W_V_11_1_q0.read());
}

void lenet::thread_sext_ln728_56_fu_20707_p1() {
    sext_ln728_56_fu_20707_p1 = esl_sext<25,9>(K2_W_V_11_2_load_reg_27731.read());
}

void lenet::thread_sext_ln728_57_fu_20711_p1() {
    sext_ln728_57_fu_20711_p1 = esl_sext<25,9>(K2_W_V_11_3_load_reg_27736.read());
}

void lenet::thread_sext_ln728_58_fu_21283_p1() {
    sext_ln728_58_fu_21283_p1 = esl_sext<25,9>(K2_W_V_11_4_load_reg_27741.read());
}

void lenet::thread_sext_ln728_59_fu_21287_p1() {
    sext_ln728_59_fu_21287_p1 = esl_sext<25,9>(K2_W_V_11_5_load_reg_27746.read());
}

void lenet::thread_sext_ln728_5_fu_20182_p1() {
    sext_ln728_5_fu_20182_p1 = esl_sext<25,9>(K2_W_V_1_1_q0.read());
}

void lenet::thread_sext_ln728_60_fu_20292_p1() {
    sext_ln728_60_fu_20292_p1 = esl_sext<25,8>(K2_W_V_12_1_q0.read());
}

void lenet::thread_sext_ln728_61_fu_20715_p1() {
    sext_ln728_61_fu_20715_p1 = esl_sext<25,8>(K2_W_V_12_2_load_reg_27751.read());
}

void lenet::thread_sext_ln728_62_fu_20719_p1() {
    sext_ln728_62_fu_20719_p1 = esl_sext<25,9>(K2_W_V_12_3_load_reg_27756.read());
}

void lenet::thread_sext_ln728_63_fu_21291_p1() {
    sext_ln728_63_fu_21291_p1 = esl_sext<25,8>(K2_W_V_12_4_load_reg_27761.read());
}

void lenet::thread_sext_ln728_64_fu_21295_p1() {
    sext_ln728_64_fu_21295_p1 = esl_sext<25,9>(K2_W_V_12_5_load_reg_27766.read());
}

void lenet::thread_sext_ln728_65_fu_20302_p1() {
    sext_ln728_65_fu_20302_p1 = esl_sext<25,8>(K2_W_V_13_1_q0.read());
}

void lenet::thread_sext_ln728_66_fu_20723_p1() {
    sext_ln728_66_fu_20723_p1 = esl_sext<25,9>(K2_W_V_13_2_load_reg_27771.read());
}

void lenet::thread_sext_ln728_67_fu_20727_p1() {
    sext_ln728_67_fu_20727_p1 = esl_sext<25,9>(K2_W_V_13_3_load_reg_27776.read());
}

void lenet::thread_sext_ln728_68_fu_21299_p1() {
    sext_ln728_68_fu_21299_p1 = esl_sext<25,8>(K2_W_V_13_4_load_reg_27781.read());
}

void lenet::thread_sext_ln728_69_fu_21303_p1() {
    sext_ln728_69_fu_21303_p1 = esl_sext<25,9>(K2_W_V_13_5_load_reg_27786.read());
}

void lenet::thread_sext_ln728_6_fu_20505_p1() {
    sext_ln728_6_fu_20505_p1 = esl_sext<25,9>(K2_W_V_1_2_load_reg_27531.read());
}

void lenet::thread_sext_ln728_70_fu_20312_p1() {
    sext_ln728_70_fu_20312_p1 = esl_sext<25,8>(K2_W_V_14_1_q0.read());
}

void lenet::thread_sext_ln728_71_fu_20731_p1() {
    sext_ln728_71_fu_20731_p1 = esl_sext<25,8>(K2_W_V_14_2_load_reg_27791.read());
}

void lenet::thread_sext_ln728_72_fu_20735_p1() {
    sext_ln728_72_fu_20735_p1 = esl_sext<25,8>(K2_W_V_14_3_load_reg_27796.read());
}

void lenet::thread_sext_ln728_73_fu_21307_p1() {
    sext_ln728_73_fu_21307_p1 = esl_sext<25,8>(K2_W_V_14_4_load_reg_27801.read());
}

void lenet::thread_sext_ln728_74_fu_21311_p1() {
    sext_ln728_74_fu_21311_p1 = esl_sext<25,9>(K2_W_V_14_5_load_reg_27806.read());
}

void lenet::thread_sext_ln728_75_fu_20322_p1() {
    sext_ln728_75_fu_20322_p1 = esl_sext<25,8>(K2_W_V_15_1_q0.read());
}

void lenet::thread_sext_ln728_76_fu_20739_p1() {
    sext_ln728_76_fu_20739_p1 = esl_sext<25,8>(K2_W_V_15_2_load_reg_27811.read());
}

void lenet::thread_sext_ln728_77_fu_20743_p1() {
    sext_ln728_77_fu_20743_p1 = esl_sext<25,9>(K2_W_V_15_3_load_reg_27816.read());
}

void lenet::thread_sext_ln728_78_fu_21315_p1() {
    sext_ln728_78_fu_21315_p1 = esl_sext<25,9>(K2_W_V_15_4_load_reg_27821.read());
}

void lenet::thread_sext_ln728_79_fu_21319_p1() {
    sext_ln728_79_fu_21319_p1 = esl_sext<25,9>(K2_W_V_15_5_load_reg_27826.read());
}

void lenet::thread_sext_ln728_7_fu_20519_p1() {
    sext_ln728_7_fu_20519_p1 = esl_sext<25,9>(K2_W_V_1_3_load_reg_27536.read());
}

void lenet::thread_sext_ln728_8_fu_20915_p1() {
    sext_ln728_8_fu_20915_p1 = esl_sext<25,8>(K2_W_V_1_4_load_reg_27541.read());
}

void lenet::thread_sext_ln728_9_fu_20929_p1() {
    sext_ln728_9_fu_20929_p1 = esl_sext<25,9>(K2_W_V_1_5_load_reg_27546.read());
}

void lenet::thread_sext_ln728_fu_20172_p1() {
    sext_ln728_fu_20172_p1 = esl_sext<25,9>(K2_W_V_0_1_q0.read());
}

void lenet::thread_sh_amt_fu_17522_p3() {
    sh_amt_fu_17522_p3 = (!icmp_ln581_fu_17504_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln581_fu_17504_p2.read()[0].to_bool())? add_ln581_fu_17510_p2.read(): sub_ln581_fu_17516_p2.read());
}

void lenet::thread_shl_ln1116_fu_24539_p2() {
    shl_ln1116_fu_24539_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): add_ln1116_9_fu_24533_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void lenet::thread_shl_ln1265_fu_19823_p2() {
    shl_ln1265_fu_19823_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): add_ln1265_7_fu_19813_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void lenet::thread_shl_ln130_1_fu_24117_p1() {
    shl_ln130_1_fu_24117_p1 =  (sc_lv<3>) (reg_3787.read());
}

void lenet::thread_shl_ln130_1_fu_24117_p3() {
    shl_ln130_1_fu_24117_p3 = esl_concat<3,1>(shl_ln130_1_fu_24117_p1.read(), ap_const_lv1_0);
}

void lenet::thread_shl_ln158_mid1_fu_24598_p3() {
    shl_ln158_mid1_fu_24598_p3 = esl_concat<4,3>(add_ln152_fu_24593_p2.read(), ap_const_lv3_0);
}

void lenet::thread_shl_ln1_fu_18214_p3() {
    shl_ln1_fu_18214_p3 = esl_concat<16,10>(C1_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln2_fu_19322_p1() {
    shl_ln2_fu_19322_p1 =  (sc_lv<4>) (reg_3586.read());
}

void lenet::thread_shl_ln2_fu_19322_p3() {
    shl_ln2_fu_19322_p3 = esl_concat<4,1>(shl_ln2_fu_19322_p1.read(), ap_const_lv1_0);
}

void lenet::thread_shl_ln3_fu_24075_p1() {
    shl_ln3_fu_24075_p1 =  (sc_lv<3>) (reg_3776.read());
}

void lenet::thread_shl_ln3_fu_24075_p3() {
    shl_ln3_fu_24075_p3 = esl_concat<3,1>(shl_ln3_fu_24075_p1.read(), ap_const_lv1_0);
}

void lenet::thread_shl_ln4_fu_24578_p3() {
    shl_ln4_fu_24578_p3 = esl_concat<4,3>(set_0_i2644_0_0_reg_3912.read(), ap_const_lv3_0);
}

void lenet::thread_shl_ln5_fu_25465_p1() {
    shl_ln5_fu_25465_p1 =  (sc_lv<4>) (reg_3935.read());
}

void lenet::thread_shl_ln5_fu_25465_p3() {
    shl_ln5_fu_25465_p3 = esl_concat<4,3>(shl_ln5_fu_25465_p1.read(), ap_const_lv3_0);
}

void lenet::thread_shl_ln604_fu_17604_p2() {
    shl_ln604_fu_17604_p2 = (!sext_ln581cast_fu_17600_p1.read().is_01())? sc_lv<16>(): trunc_ln583_reg_26305.read() << (unsigned short)sext_ln581cast_fu_17600_p1.read().to_uint();
}

void lenet::thread_shl_ln61_1_fu_19368_p1() {
    shl_ln61_1_fu_19368_p1 =  (sc_lv<4>) (reg_3597.read());
}

void lenet::thread_shl_ln61_1_fu_19368_p3() {
    shl_ln61_1_fu_19368_p3 = esl_concat<4,1>(shl_ln61_1_fu_19368_p1.read(), ap_const_lv1_0);
}

void lenet::thread_shl_ln728_100_fu_22763_p3() {
    shl_ln728_100_fu_22763_p3 = esl_concat<16,10>(tmp_115_fu_22753_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_101_fu_22791_p3() {
    shl_ln728_101_fu_22791_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_102_fu_22819_p3() {
    shl_ln728_102_fu_22819_p3 = esl_concat<16,10>(tmp_116_fu_22809_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_103_fu_22847_p3() {
    shl_ln728_103_fu_22847_p3 = esl_concat<16,10>(tmp_117_fu_22837_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_104_fu_22959_p3() {
    shl_ln728_104_fu_22959_p3 = esl_concat<16,10>(tmp_118_reg_28041.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_105_fu_22986_p3() {
    shl_ln728_105_fu_22986_p3 = esl_concat<16,10>(tmp_119_fu_22976_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_106_fu_23014_p3() {
    shl_ln728_106_fu_23014_p3 = esl_concat<16,10>(tmp_120_fu_23004_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_107_fu_22875_p3() {
    shl_ln728_107_fu_22875_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_108_fu_22903_p3() {
    shl_ln728_108_fu_22903_p3 = esl_concat<16,10>(tmp_121_fu_22893_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_109_fu_22931_p3() {
    shl_ln728_109_fu_22931_p3 = esl_concat<16,10>(tmp_122_fu_22921_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_10_fu_18784_p3() {
    shl_ln728_10_fu_18784_p3 = esl_concat<16,10>(tmp_26_fu_18774_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_110_fu_23042_p3() {
    shl_ln728_110_fu_23042_p3 = esl_concat<16,10>(tmp_123_reg_28046.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_111_fu_23069_p3() {
    shl_ln728_111_fu_23069_p3 = esl_concat<16,10>(tmp_124_fu_23059_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_112_fu_23097_p3() {
    shl_ln728_112_fu_23097_p3 = esl_concat<16,10>(tmp_125_fu_23087_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_113_fu_23125_p3() {
    shl_ln728_113_fu_23125_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_114_fu_23153_p3() {
    shl_ln728_114_fu_23153_p3 = esl_concat<16,10>(tmp_126_fu_23143_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_115_fu_23181_p3() {
    shl_ln728_115_fu_23181_p3 = esl_concat<16,10>(tmp_127_fu_23171_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_116_fu_23293_p3() {
    shl_ln728_116_fu_23293_p3 = esl_concat<16,10>(tmp_128_reg_28061.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_117_fu_23320_p3() {
    shl_ln728_117_fu_23320_p3 = esl_concat<16,10>(tmp_129_fu_23310_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_118_fu_23348_p3() {
    shl_ln728_118_fu_23348_p3 = esl_concat<16,10>(tmp_130_fu_23338_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_119_fu_23209_p3() {
    shl_ln728_119_fu_23209_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_11_fu_18498_p3() {
    shl_ln728_11_fu_18498_p3 = esl_concat<16,10>(tmp_27_reg_26668.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_120_fu_23237_p3() {
    shl_ln728_120_fu_23237_p3 = esl_concat<16,10>(tmp_131_fu_23227_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_121_fu_23265_p3() {
    shl_ln728_121_fu_23265_p3 = esl_concat<16,10>(tmp_132_fu_23255_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_122_fu_23376_p3() {
    shl_ln728_122_fu_23376_p3 = esl_concat<16,10>(tmp_133_reg_28066.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_123_fu_23403_p3() {
    shl_ln728_123_fu_23403_p3 = esl_concat<16,10>(tmp_134_fu_23393_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_124_fu_23431_p3() {
    shl_ln728_124_fu_23431_p3 = esl_concat<16,10>(tmp_135_fu_23421_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_125_fu_24820_p3() {
    shl_ln728_125_fu_24820_p3 = esl_concat<16,10>(C3_out_V_0_0_load_3_reg_28593.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_126_fu_24847_p3() {
    shl_ln728_126_fu_24847_p3 = esl_concat<16,10>(tmp_159_fu_24837_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_127_fu_24875_p3() {
    shl_ln728_127_fu_24875_p3 = esl_concat<16,10>(tmp_160_fu_24865_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_128_fu_24903_p3() {
    shl_ln728_128_fu_24903_p3 = esl_concat<16,10>(tmp_161_fu_24893_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_129_fu_24969_p3() {
    shl_ln728_129_fu_24969_p3 = esl_concat<16,10>(tmp_162_reg_28678.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_12_fu_18515_p3() {
    shl_ln728_12_fu_18515_p3 = esl_concat<16,10>(tmp_28_reg_26673.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_130_fu_24996_p3() {
    shl_ln728_130_fu_24996_p3 = esl_concat<16,10>(tmp_163_fu_24986_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_131_fu_25062_p3() {
    shl_ln728_131_fu_25062_p3 = esl_concat<16,10>(tmp_164_reg_28693.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_132_fu_25089_p3() {
    shl_ln728_132_fu_25089_p3 = esl_concat<16,10>(tmp_165_fu_25079_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_133_fu_25155_p3() {
    shl_ln728_133_fu_25155_p3 = esl_concat<16,10>(tmp_166_reg_28708.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_134_fu_25182_p3() {
    shl_ln728_134_fu_25182_p3 = esl_concat<16,10>(tmp_167_fu_25172_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_135_fu_25265_p3() {
    shl_ln728_135_fu_25265_p3 = esl_concat<16,10>(tmp_168_reg_28723.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_136_fu_25292_p3() {
    shl_ln728_136_fu_25292_p3 = esl_concat<16,10>(tmp_169_fu_25282_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_137_fu_25338_p3() {
    shl_ln728_137_fu_25338_p3 = esl_concat<16,10>(tmp_170_reg_28753.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_138_fu_25365_p3() {
    shl_ln728_138_fu_25365_p3 = esl_concat<16,10>(tmp_171_fu_25355_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_139_fu_25401_p3() {
    shl_ln728_139_fu_25401_p3 = esl_concat<16,10>(tmp_172_reg_28758.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_13_fu_18538_p3() {
    shl_ln728_13_fu_18538_p3 = esl_concat<16,10>(tmp_29_fu_18528_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_140_fu_25428_p3() {
    shl_ln728_140_fu_25428_p3 = esl_concat<16,10>(tmp_173_fu_25418_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_14_fu_18566_p3() {
    shl_ln728_14_fu_18566_p3 = esl_concat<16,10>(tmp_30_fu_18556_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_15_fu_18812_p3() {
    shl_ln728_15_fu_18812_p3 = esl_concat<16,10>(tmp_31_fu_18802_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_16_fu_18836_p3() {
    shl_ln728_16_fu_18836_p3 = esl_concat<16,10>(tmp_32_fu_18826_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_17_fu_18594_p3() {
    shl_ln728_17_fu_18594_p3 = esl_concat<16,10>(tmp_33_fu_18584_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_18_fu_18618_p3() {
    shl_ln728_18_fu_18618_p3 = esl_concat<16,10>(tmp_34_fu_18608_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_19_fu_18854_p3() {
    shl_ln728_19_fu_18854_p3 = esl_concat<16,10>(tmp_35_reg_26688.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_1_fu_18228_p3() {
    shl_ln728_1_fu_18228_p3 = esl_concat<16,10>(C1_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_20_fu_18871_p3() {
    shl_ln728_20_fu_18871_p3 = esl_concat<16,10>(tmp_36_reg_26693.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_21_fu_19028_p3() {
    shl_ln728_21_fu_19028_p3 = esl_concat<16,10>(tmp_37_reg_26708.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_22_fu_19045_p3() {
    shl_ln728_22_fu_19045_p3 = esl_concat<16,10>(tmp_38_reg_26713.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_23_fu_18904_p3() {
    shl_ln728_23_fu_18904_p3 = esl_concat<16,10>(tmp_39_reg_26698.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_24_fu_18932_p3() {
    shl_ln728_24_fu_18932_p3 = esl_concat<16,10>(tmp_40_reg_26703.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_25_fu_18966_p3() {
    shl_ln728_25_fu_18966_p3 = esl_concat<16,10>(tmp_41_fu_18956_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_26_fu_19004_p3() {
    shl_ln728_26_fu_19004_p3 = esl_concat<16,10>(tmp_42_fu_18994_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_27_fu_19068_p3() {
    shl_ln728_27_fu_19068_p3 = esl_concat<16,10>(tmp_43_fu_19058_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_28_fu_19102_p3() {
    shl_ln728_28_fu_19102_p3 = esl_concat<16,10>(tmp_44_fu_19092_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_29_fu_20355_p3() {
    shl_ln728_29_fu_20355_p3 = esl_concat<16,10>(reg_17353.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_2_fu_18414_p3() {
    shl_ln728_2_fu_18414_p3 = esl_concat<16,10>(C1_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_30_fu_20383_p3() {
    shl_ln728_30_fu_20383_p3 = esl_concat<16,10>(tmp_56_fu_20373_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_31_fu_20767_p3() {
    shl_ln728_31_fu_20767_p3 = esl_concat<16,10>(tmp_57_reg_27851.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_32_fu_20794_p3() {
    shl_ln728_32_fu_20794_p3 = esl_concat<16,10>(tmp_58_fu_20784_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_33_fu_21343_p3() {
    shl_ln728_33_fu_21343_p3 = esl_concat<16,10>(tmp_59_reg_27881.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_34_fu_21370_p3() {
    shl_ln728_34_fu_21370_p3 = esl_concat<16,10>(tmp_60_fu_21360_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_35_fu_20459_p3() {
    shl_ln728_35_fu_20459_p3 = esl_concat<16,10>(reg_17357.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_36_fu_20487_p3() {
    shl_ln728_36_fu_20487_p3 = esl_concat<16,10>(tmp_61_fu_20477_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_37_fu_20870_p3() {
    shl_ln728_37_fu_20870_p3 = esl_concat<16,10>(tmp_62_reg_27856.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_38_fu_20897_p3() {
    shl_ln728_38_fu_20897_p3 = esl_concat<16,10>(tmp_63_fu_20887_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_39_fu_21398_p3() {
    shl_ln728_39_fu_21398_p3 = esl_concat<16,10>(tmp_64_reg_27886.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_3_fu_18428_p3() {
    shl_ln728_3_fu_18428_p3 = esl_concat<16,10>(C1_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_40_fu_21425_p3() {
    shl_ln728_40_fu_21425_p3 = esl_concat<16,10>(tmp_65_fu_21415_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_41_fu_20523_p3() {
    shl_ln728_41_fu_20523_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_42_fu_20551_p3() {
    shl_ln728_42_fu_20551_p3 = esl_concat<16,10>(tmp_66_fu_20541_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_43_fu_20933_p3() {
    shl_ln728_43_fu_20933_p3 = esl_concat<16,10>(tmp_67_reg_27861.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_44_fu_20960_p3() {
    shl_ln728_44_fu_20960_p3 = esl_concat<16,10>(tmp_68_fu_20950_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_45_fu_21453_p3() {
    shl_ln728_45_fu_21453_p3 = esl_concat<16,10>(tmp_69_reg_27891.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_46_fu_21480_p3() {
    shl_ln728_46_fu_21480_p3 = esl_concat<16,10>(tmp_70_fu_21470_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_47_fu_20587_p3() {
    shl_ln728_47_fu_20587_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_48_fu_20615_p3() {
    shl_ln728_48_fu_20615_p3 = esl_concat<16,10>(tmp_71_fu_20605_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_49_fu_20996_p3() {
    shl_ln728_49_fu_20996_p3 = esl_concat<16,10>(tmp_72_reg_27866.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_4_fu_18710_p3() {
    shl_ln728_4_fu_18710_p3 = esl_concat<16,10>(C1_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_50_fu_21023_p3() {
    shl_ln728_50_fu_21023_p3 = esl_concat<16,10>(tmp_73_fu_21013_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_51_fu_21508_p3() {
    shl_ln728_51_fu_21508_p3 = esl_concat<16,10>(tmp_74_reg_27896.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_52_fu_21535_p3() {
    shl_ln728_52_fu_21535_p3 = esl_concat<16,10>(tmp_75_fu_21525_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_53_fu_21059_p3() {
    shl_ln728_53_fu_21059_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_54_fu_21087_p3() {
    shl_ln728_54_fu_21087_p3 = esl_concat<16,10>(tmp_76_fu_21077_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_55_fu_21115_p3() {
    shl_ln728_55_fu_21115_p3 = esl_concat<16,10>(tmp_77_fu_21105_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_56_fu_21563_p3() {
    shl_ln728_56_fu_21563_p3 = esl_concat<16,10>(tmp_78_reg_27901.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_57_fu_21590_p3() {
    shl_ln728_57_fu_21590_p3 = esl_concat<16,10>(tmp_79_fu_21580_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_58_fu_21618_p3() {
    shl_ln728_58_fu_21618_p3 = esl_concat<16,10>(tmp_80_fu_21608_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_59_fu_21151_p3() {
    shl_ln728_59_fu_21151_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_5_fu_18728_p3() {
    shl_ln728_5_fu_18728_p3 = esl_concat<16,10>(C1_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_60_fu_21179_p3() {
    shl_ln728_60_fu_21179_p3 = esl_concat<16,10>(tmp_81_fu_21169_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_61_fu_21207_p3() {
    shl_ln728_61_fu_21207_p3 = esl_concat<16,10>(tmp_82_fu_21197_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_62_fu_21646_p3() {
    shl_ln728_62_fu_21646_p3 = esl_concat<16,10>(tmp_83_reg_27906.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_63_fu_21673_p3() {
    shl_ln728_63_fu_21673_p3 = esl_concat<16,10>(tmp_84_fu_21663_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_64_fu_21701_p3() {
    shl_ln728_64_fu_21701_p3 = esl_concat<16,10>(tmp_85_fu_21691_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_65_fu_21729_p3() {
    shl_ln728_65_fu_21729_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_66_fu_21757_p3() {
    shl_ln728_66_fu_21757_p3 = esl_concat<16,10>(tmp_86_fu_21747_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_67_fu_21785_p3() {
    shl_ln728_67_fu_21785_p3 = esl_concat<16,10>(tmp_87_fu_21775_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_68_fu_21917_p3() {
    shl_ln728_68_fu_21917_p3 = esl_concat<16,10>(tmp_88_reg_27951.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_69_fu_21944_p3() {
    shl_ln728_69_fu_21944_p3 = esl_concat<16,10>(tmp_89_fu_21934_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_6_fu_18252_p3() {
    shl_ln728_6_fu_18252_p3 = esl_concat<16,10>(tmp_21_fu_18242_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_70_fu_21972_p3() {
    shl_ln728_70_fu_21972_p3 = esl_concat<16,10>(tmp_90_fu_21962_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_71_fu_21813_p3() {
    shl_ln728_71_fu_21813_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_72_fu_21841_p3() {
    shl_ln728_72_fu_21841_p3 = esl_concat<16,10>(tmp_91_fu_21831_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_73_fu_21869_p3() {
    shl_ln728_73_fu_21869_p3 = esl_concat<16,10>(tmp_92_fu_21859_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_74_fu_22000_p3() {
    shl_ln728_74_fu_22000_p3 = esl_concat<16,10>(tmp_93_reg_27956.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_75_fu_22027_p3() {
    shl_ln728_75_fu_22027_p3 = esl_concat<16,10>(tmp_94_fu_22017_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_76_fu_22055_p3() {
    shl_ln728_76_fu_22055_p3 = esl_concat<16,10>(tmp_95_fu_22045_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_77_fu_22083_p3() {
    shl_ln728_77_fu_22083_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_78_fu_22111_p3() {
    shl_ln728_78_fu_22111_p3 = esl_concat<16,10>(tmp_96_fu_22101_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_79_fu_22139_p3() {
    shl_ln728_79_fu_22139_p3 = esl_concat<16,10>(tmp_97_fu_22129_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_7_fu_18280_p3() {
    shl_ln728_7_fu_18280_p3 = esl_concat<16,10>(tmp_22_fu_18270_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_80_fu_22271_p3() {
    shl_ln728_80_fu_22271_p3 = esl_concat<16,10>(tmp_98_reg_27981.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_81_fu_22298_p3() {
    shl_ln728_81_fu_22298_p3 = esl_concat<16,10>(tmp_99_fu_22288_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_82_fu_22326_p3() {
    shl_ln728_82_fu_22326_p3 = esl_concat<16,10>(tmp_100_fu_22316_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_83_fu_22167_p3() {
    shl_ln728_83_fu_22167_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_84_fu_22195_p3() {
    shl_ln728_84_fu_22195_p3 = esl_concat<16,10>(tmp_101_fu_22185_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_85_fu_22223_p3() {
    shl_ln728_85_fu_22223_p3 = esl_concat<16,10>(tmp_102_fu_22213_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_86_fu_22354_p3() {
    shl_ln728_86_fu_22354_p3 = esl_concat<16,10>(tmp_103_reg_27986.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_87_fu_22381_p3() {
    shl_ln728_87_fu_22381_p3 = esl_concat<16,10>(tmp_104_fu_22371_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_88_fu_22409_p3() {
    shl_ln728_88_fu_22409_p3 = esl_concat<16,10>(tmp_105_fu_22399_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_89_fu_22437_p3() {
    shl_ln728_89_fu_22437_p3 = esl_concat<16,10>(C2_out_V_q0.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_8_fu_18456_p3() {
    shl_ln728_8_fu_18456_p3 = esl_concat<16,10>(tmp_23_fu_18446_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_90_fu_22465_p3() {
    shl_ln728_90_fu_22465_p3 = esl_concat<16,10>(tmp_106_fu_22455_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_91_fu_22493_p3() {
    shl_ln728_91_fu_22493_p3 = esl_concat<16,10>(tmp_107_fu_22483_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_92_fu_22625_p3() {
    shl_ln728_92_fu_22625_p3 = esl_concat<16,10>(tmp_108_reg_28011.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_93_fu_22652_p3() {
    shl_ln728_93_fu_22652_p3 = esl_concat<16,10>(tmp_109_fu_22642_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_94_fu_22680_p3() {
    shl_ln728_94_fu_22680_p3 = esl_concat<16,10>(tmp_110_fu_22670_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_95_fu_22521_p3() {
    shl_ln728_95_fu_22521_p3 = esl_concat<16,10>(C2_out_V_q1.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_96_fu_22549_p3() {
    shl_ln728_96_fu_22549_p3 = esl_concat<16,10>(tmp_111_fu_22539_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_97_fu_22577_p3() {
    shl_ln728_97_fu_22577_p3 = esl_concat<16,10>(tmp_112_fu_22567_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_98_fu_22708_p3() {
    shl_ln728_98_fu_22708_p3 = esl_concat<16,10>(tmp_113_reg_28016.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_99_fu_22735_p3() {
    shl_ln728_99_fu_22735_p3 = esl_concat<16,10>(tmp_114_fu_22725_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_9_fu_18480_p3() {
    shl_ln728_9_fu_18480_p3 = esl_concat<16,10>(tmp_24_fu_18470_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln728_s_fu_18760_p3() {
    shl_ln728_s_fu_18760_p3 = esl_concat<16,10>(tmp_25_fu_18750_p4.read(), ap_const_lv10_0);
}

void lenet::thread_shl_ln958_fu_26127_p2() {
    shl_ln958_fu_26127_p2 = (!sub_ln958_fu_26122_p2.read().is_01())? sc_lv<32>(): m_fu_26108_p1.read() << (unsigned short)sub_ln958_fu_26122_p2.read().to_uint();
}

void lenet::thread_shl_ln_fu_17389_p3() {
    shl_ln_fu_17389_p3 = esl_concat<5,5>(trunc_ln11_fu_17385_p1.read(), ap_const_lv5_0);
}

void lenet::thread_sub_ln1116_1_fu_19946_p2() {
    sub_ln1116_1_fu_19946_p2 = (!p_shl9_cast_fu_19926_p3.read().is_01() || !p_shl10_cast_fu_19938_p3.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl9_cast_fu_19926_p3.read()) - sc_biguint<12>(p_shl10_cast_fu_19938_p3.read()));
}

void lenet::thread_sub_ln1116_fu_19871_p2() {
    sub_ln1116_fu_19871_p2 = (!zext_ln1116_fu_19856_p1.read().is_01() || !zext_ln1116_1_fu_19867_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln1116_fu_19856_p1.read()) - sc_biguint<64>(zext_ln1116_1_fu_19867_p1.read()));
}

void lenet::thread_sub_ln1117_fu_25582_p2() {
    sub_ln1117_fu_25582_p2 = (!zext_ln1117_8_fu_25566_p1.read().is_01() || !zext_ln1117_9_fu_25578_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1117_8_fu_25566_p1.read()) - sc_biguint<15>(zext_ln1117_9_fu_25578_p1.read()));
}

void lenet::thread_sub_ln1265_1_fu_18053_p2() {
    sub_ln1265_1_fu_18053_p2 = (!p_shl_cast_fu_18033_p3.read().is_01() || !sext_ln1265_4_fu_18049_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl_cast_fu_18033_p3.read()) - sc_bigint<14>(sext_ln1265_4_fu_18049_p1.read()));
}

void lenet::thread_sub_ln1265_2_fu_19173_p2() {
    sub_ln1265_2_fu_19173_p2 = (!zext_ln1265_9_fu_19157_p1.read().is_01() || !zext_ln1265_10_fu_19169_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1265_9_fu_19157_p1.read()) - sc_biguint<11>(zext_ln1265_10_fu_19169_p1.read()));
}

void lenet::thread_sub_ln1265_3_fu_19228_p2() {
    sub_ln1265_3_fu_19228_p2 = (!p_shl2_cast_fu_19208_p3.read().is_01() || !sext_ln1265_6_fu_19224_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl2_cast_fu_19208_p3.read()) - sc_bigint<14>(sext_ln1265_6_fu_19224_p1.read()));
}

void lenet::thread_sub_ln1265_fu_18010_p2() {
    sub_ln1265_fu_18010_p2 = (!zext_ln1265_1_fu_17995_p1.read().is_01() || !zext_ln1265_2_fu_18006_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1265_1_fu_17995_p1.read()) - sc_biguint<11>(zext_ln1265_2_fu_18006_p1.read()));
}

void lenet::thread_sub_ln1494_1_fu_19554_p2() {
    sub_ln1494_1_fu_19554_p2 = (!p_shl15_cast_fu_19534_p3.read().is_01() || !sext_ln1494_1_fu_19550_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl15_cast_fu_19534_p3.read()) - sc_bigint<14>(sext_ln1494_1_fu_19550_p1.read()));
}

void lenet::thread_sub_ln1494_fu_19490_p2() {
    sub_ln1494_fu_19490_p2 = (!zext_ln1494_fu_19474_p1.read().is_01() || !zext_ln1494_1_fu_19486_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1494_fu_19474_p1.read()) - sc_biguint<11>(zext_ln1494_1_fu_19486_p1.read()));
}

void lenet::thread_sub_ln203_1_fu_19409_p2() {
    sub_ln203_1_fu_19409_p2 = (!p_shl11_cast_fu_19389_p3.read().is_01() || !sext_ln203_1_fu_19405_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl11_cast_fu_19389_p3.read()) - sc_bigint<12>(sext_ln203_1_fu_19405_p1.read()));
}

void lenet::thread_sub_ln203_fu_19346_p2() {
    sub_ln203_fu_19346_p2 = (!zext_ln203_3_fu_19338_p1.read().is_01() || !zext_ln203_4_fu_19342_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_3_fu_19338_p1.read()) - sc_biguint<9>(zext_ln203_4_fu_19342_p1.read()));
}

void lenet::thread_sub_ln581_fu_17516_p2() {
    sub_ln581_fu_17516_p2 = (!ap_const_lv12_A.is_01() || !F2_fu_17498_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_A) - sc_biguint<12>(F2_fu_17498_p2.read()));
}

void lenet::thread_sub_ln944_fu_25987_p2() {
    sub_ln944_fu_25987_p2 = (!ap_const_lv32_11.is_01() || !l_reg_29021.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_11) - sc_biguint<32>(l_reg_29021.read()));
}

void lenet::thread_sub_ln947_fu_26022_p2() {
    sub_ln947_fu_26022_p2 = (!ap_const_lv5_A.is_01() || !trunc_ln947_fu_26018_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_A) - sc_biguint<5>(trunc_ln947_fu_26018_p1.read()));
}

void lenet::thread_sub_ln958_fu_26122_p2() {
    sub_ln958_fu_26122_p2 = (!ap_const_lv32_19.is_01() || !sub_ln944_reg_29031.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_19) - sc_biguint<32>(sub_ln944_reg_29031.read()));
}

void lenet::thread_sub_ln964_fu_26175_p2() {
    sub_ln964_fu_26175_p2 = (!ap_const_lv8_7.is_01() || !trunc_ln943_reg_29026.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7) - sc_biguint<8>(trunc_ln943_reg_29026.read()));
}

void lenet::thread_tmp_100_fu_22316_p4() {
    tmp_100_fu_22316_p4 = add_ln1192_82_fu_22310_p2.read().range(25, 10);
}

void lenet::thread_tmp_101_fu_22185_p4() {
    tmp_101_fu_22185_p4 = add_ln1192_84_fu_22179_p2.read().range(25, 10);
}

void lenet::thread_tmp_102_fu_22213_p4() {
    tmp_102_fu_22213_p4 = add_ln1192_85_fu_22207_p2.read().range(25, 10);
}

void lenet::thread_tmp_104_fu_22371_p4() {
    tmp_104_fu_22371_p4 = add_ln1192_87_fu_22365_p2.read().range(25, 10);
}

void lenet::thread_tmp_105_fu_22399_p4() {
    tmp_105_fu_22399_p4 = add_ln1192_88_fu_22393_p2.read().range(25, 10);
}

void lenet::thread_tmp_106_fu_22455_p4() {
    tmp_106_fu_22455_p4 = add_ln1192_90_fu_22449_p2.read().range(25, 10);
}

void lenet::thread_tmp_107_fu_22483_p4() {
    tmp_107_fu_22483_p4 = add_ln1192_91_fu_22477_p2.read().range(25, 10);
}

void lenet::thread_tmp_109_fu_22642_p4() {
    tmp_109_fu_22642_p4 = add_ln1192_93_fu_22636_p2.read().range(25, 10);
}

void lenet::thread_tmp_110_fu_22670_p4() {
    tmp_110_fu_22670_p4 = add_ln1192_94_fu_22664_p2.read().range(25, 10);
}

void lenet::thread_tmp_111_fu_22539_p4() {
    tmp_111_fu_22539_p4 = add_ln1192_96_fu_22533_p2.read().range(25, 10);
}

void lenet::thread_tmp_112_fu_22567_p4() {
    tmp_112_fu_22567_p4 = add_ln1192_97_fu_22561_p2.read().range(25, 10);
}

void lenet::thread_tmp_114_fu_22725_p4() {
    tmp_114_fu_22725_p4 = add_ln1192_99_fu_22719_p2.read().range(25, 10);
}

void lenet::thread_tmp_115_fu_22753_p4() {
    tmp_115_fu_22753_p4 = add_ln1192_100_fu_22747_p2.read().range(25, 10);
}

void lenet::thread_tmp_116_fu_22809_p4() {
    tmp_116_fu_22809_p4 = add_ln1192_102_fu_22803_p2.read().range(25, 10);
}

void lenet::thread_tmp_117_fu_22837_p4() {
    tmp_117_fu_22837_p4 = add_ln1192_103_fu_22831_p2.read().range(25, 10);
}

void lenet::thread_tmp_119_fu_22976_p4() {
    tmp_119_fu_22976_p4 = add_ln1192_105_fu_22970_p2.read().range(25, 10);
}

void lenet::thread_tmp_11_fu_17988_p3() {
    tmp_11_fu_17988_p3 = esl_concat<5,5>(select_ln25_1_reg_26330.read(), ap_const_lv5_0);
}

void lenet::thread_tmp_120_fu_23004_p4() {
    tmp_120_fu_23004_p4 = add_ln1192_106_fu_22998_p2.read().range(25, 10);
}

void lenet::thread_tmp_121_fu_22893_p4() {
    tmp_121_fu_22893_p4 = add_ln1192_108_fu_22887_p2.read().range(25, 10);
}

void lenet::thread_tmp_122_fu_22921_p4() {
    tmp_122_fu_22921_p4 = add_ln1192_109_fu_22915_p2.read().range(25, 10);
}

void lenet::thread_tmp_124_fu_23059_p4() {
    tmp_124_fu_23059_p4 = add_ln1192_111_fu_23053_p2.read().range(25, 10);
}

void lenet::thread_tmp_125_fu_23087_p4() {
    tmp_125_fu_23087_p4 = add_ln1192_112_fu_23081_p2.read().range(25, 10);
}

void lenet::thread_tmp_126_fu_23143_p4() {
    tmp_126_fu_23143_p4 = add_ln1192_114_fu_23137_p2.read().range(25, 10);
}

void lenet::thread_tmp_127_fu_23171_p4() {
    tmp_127_fu_23171_p4 = add_ln1192_115_fu_23165_p2.read().range(25, 10);
}

void lenet::thread_tmp_129_fu_23310_p4() {
    tmp_129_fu_23310_p4 = add_ln1192_117_fu_23304_p2.read().range(25, 10);
}

void lenet::thread_tmp_130_fu_23338_p4() {
    tmp_130_fu_23338_p4 = add_ln1192_118_fu_23332_p2.read().range(25, 10);
}

void lenet::thread_tmp_131_fu_23227_p4() {
    tmp_131_fu_23227_p4 = add_ln1192_120_fu_23221_p2.read().range(25, 10);
}

void lenet::thread_tmp_132_fu_23255_p4() {
    tmp_132_fu_23255_p4 = add_ln1192_121_fu_23249_p2.read().range(25, 10);
}

void lenet::thread_tmp_134_fu_23393_p4() {
    tmp_134_fu_23393_p4 = add_ln1192_123_fu_23387_p2.read().range(25, 10);
}

void lenet::thread_tmp_135_fu_23421_p4() {
    tmp_135_fu_23421_p4 = add_ln1192_124_fu_23415_p2.read().range(25, 10);
}

void lenet::thread_tmp_136_fu_19397_p3() {
    tmp_136_fu_19397_p3 = esl_concat<10,1>(add_ln203_1_fu_19380_p2.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_137_fu_19289_p3() {
    tmp_137_fu_19289_p3 = add_ln703_fu_19277_p2.read().range(15, 15);
}

void lenet::thread_tmp_138_fu_23516_p3() {
    tmp_138_fu_23516_p3 = esl_concat<4,3>(select_ln106_1_fu_23508_p3.read(), ap_const_lv3_0);
}

void lenet::thread_tmp_139_fu_23528_p3() {
    tmp_139_fu_23528_p3 = esl_concat<4,1>(select_ln106_1_fu_23508_p3.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_13_fu_26186_p3() {
    tmp_13_fu_26186_p3 = esl_concat<1,8>(p_Result_10_reg_29009.read(), add_ln964_fu_26180_p2.read());
}

void lenet::thread_tmp_140_fu_23556_p3() {
    tmp_140_fu_23556_p3 = esl_concat<8,4>(add_ln1265_10_fu_23550_p2.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_141_fu_23616_p3() {
    tmp_141_fu_23616_p3 = add_ln703_1_fu_23604_p2.read().range(15, 15);
}

void lenet::thread_tmp_142_fu_23648_p3() {
    tmp_142_fu_23648_p3 = add_ln703_2_fu_23636_p2.read().range(15, 15);
}

void lenet::thread_tmp_143_fu_23700_p3() {
    tmp_143_fu_23700_p3 = add_ln703_3_fu_23688_p2.read().range(15, 15);
}

void lenet::thread_tmp_144_fu_23732_p3() {
    tmp_144_fu_23732_p3 = add_ln703_4_fu_23720_p2.read().range(15, 15);
}

void lenet::thread_tmp_145_fu_23784_p3() {
    tmp_145_fu_23784_p3 = add_ln703_5_fu_23772_p2.read().range(15, 15);
}

void lenet::thread_tmp_146_fu_23816_p3() {
    tmp_146_fu_23816_p3 = add_ln703_6_fu_23804_p2.read().range(15, 15);
}

void lenet::thread_tmp_147_fu_23868_p3() {
    tmp_147_fu_23868_p3 = add_ln703_7_fu_23856_p2.read().range(15, 15);
}

void lenet::thread_tmp_148_fu_23900_p3() {
    tmp_148_fu_23900_p3 = add_ln703_8_fu_23888_p2.read().range(15, 15);
}

void lenet::thread_tmp_149_fu_24087_p1() {
    tmp_149_fu_24087_p1 =  (sc_lv<3>) (reg_3776.read());
}

void lenet::thread_tmp_149_fu_24087_p3() {
    tmp_149_fu_24087_p3 = esl_concat<3,2>(tmp_149_fu_24087_p1.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_14_fu_17999_p3() {
    tmp_14_fu_17999_p3 = esl_concat<5,2>(select_ln25_1_reg_26330.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_150_fu_19466_p3() {
    tmp_150_fu_19466_p3 = esl_concat<5,5>(add_ln61_fu_19461_p2.read(), ap_const_lv5_0);
}

void lenet::thread_tmp_151_fu_19478_p3() {
    tmp_151_fu_19478_p3 = esl_concat<5,2>(add_ln61_fu_19461_p2.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_152_fu_24289_p3() {
    tmp_152_fu_24289_p3 = esl_concat<3,2>(ap_phi_mux_x_0_i2638_0_0_phi_fu_3871_p4.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_153_fu_24317_p3() {
    tmp_153_fu_24317_p3 = esl_concat<6,4>(add_ln1116_6_fu_24311_p2.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_154_fu_24466_p3() {
    tmp_154_fu_24466_p3 = esl_concat<3,2>(select_ln158_1_fu_24451_p3.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_155_fu_24484_p3() {
    tmp_155_fu_24484_p3 = esl_concat<3,6>(add_ln148_fu_24445_p2.read(), ap_const_lv6_0);
}

void lenet::thread_tmp_156_fu_24496_p3() {
    tmp_156_fu_24496_p3 = esl_concat<3,4>(add_ln148_fu_24445_p2.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_157_fu_24637_p3() {
    tmp_157_fu_24637_p3 = esl_concat<7,2>(add_ln158_fu_24622_p2.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_158_fu_24665_p3() {
    tmp_158_fu_24665_p3 = esl_concat<10,2>(add_ln1117_3_fu_24655_p2.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_159_fu_24837_p4() {
    tmp_159_fu_24837_p4 = add_ln1192_126_fu_24827_p2.read().range(25, 10);
}

void lenet::thread_tmp_15_fu_18041_p3() {
    tmp_15_fu_18041_p3 = esl_concat<12,1>(add_ln1265_fu_18023_p2.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_160_fu_24865_p4() {
    tmp_160_fu_24865_p4 = add_ln1192_127_fu_24855_p2.read().range(25, 10);
}

void lenet::thread_tmp_161_fu_24893_p4() {
    tmp_161_fu_24893_p4 = add_ln1192_128_fu_24883_p2.read().range(25, 10);
}

void lenet::thread_tmp_163_fu_24986_p4() {
    tmp_163_fu_24986_p4 = add_ln1192_130_fu_24976_p2.read().range(25, 10);
}

void lenet::thread_tmp_165_fu_25079_p4() {
    tmp_165_fu_25079_p4 = add_ln1192_132_fu_25069_p2.read().range(25, 10);
}

void lenet::thread_tmp_167_fu_25172_p4() {
    tmp_167_fu_25172_p4 = add_ln1192_134_fu_25162_p2.read().range(25, 10);
}

void lenet::thread_tmp_169_fu_25282_p4() {
    tmp_169_fu_25282_p4 = add_ln1192_136_fu_25272_p2.read().range(25, 10);
}

void lenet::thread_tmp_16_fu_17862_p4() {
    tmp_16_fu_17862_p4 = esl_concat<59,5>(esl_concat<54,5>(ap_const_lv54_0, add_ln25_fu_17856_p2.read()), select_ln25_3_fu_17820_p3.read());
}

void lenet::thread_tmp_171_fu_25355_p4() {
    tmp_171_fu_25355_p4 = add_ln1192_138_fu_25345_p2.read().range(25, 10);
}

void lenet::thread_tmp_173_fu_25418_p4() {
    tmp_173_fu_25418_p4 = add_ln1192_140_fu_25408_p2.read().range(25, 10);
}

void lenet::thread_tmp_174_fu_19542_p3() {
    tmp_174_fu_19542_p3 = esl_concat<12,1>(add_ln1494_fu_19525_p2.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_175_fu_25516_p3() {
    tmp_175_fu_25516_p3 = C3_out_V_0_0_q0.read().range(15, 15);
}

void lenet::thread_tmp_176_fu_24193_p3() {
    tmp_176_fu_24193_p3 = esl_concat<4,3>(add_ln130_fu_24188_p2.read(), ap_const_lv3_0);
}

void lenet::thread_tmp_177_fu_24205_p3() {
    tmp_177_fu_24205_p3 = esl_concat<4,1>(add_ln130_fu_24188_p2.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_178_fu_25558_p1() {
    tmp_178_fu_25558_p1 =  (sc_lv<7>) (reg_3969.read());
}

void lenet::thread_tmp_178_fu_25558_p3() {
    tmp_178_fu_25558_p3 = esl_concat<7,7>(tmp_178_fu_25558_p1.read(), ap_const_lv7_0);
}

void lenet::thread_tmp_179_fu_25570_p1() {
    tmp_179_fu_25570_p1 =  (sc_lv<7>) (reg_3969.read());
}

void lenet::thread_tmp_179_fu_25570_p3() {
    tmp_179_fu_25570_p3 = esl_concat<7,3>(tmp_179_fu_25570_p1.read(), ap_const_lv3_0);
}

void lenet::thread_tmp_17_fu_17889_p4() {
    tmp_17_fu_17889_p4 = esl_concat<59,5>(esl_concat<54,5>(ap_const_lv54_0, add_ln25_fu_17856_p2.read()), select_ln25_5_fu_17881_p3.read());
}

void lenet::thread_tmp_180_fu_25697_p3() {
    tmp_180_fu_25697_p3 = add_ln703_16_fu_25685_p2.read().range(15, 15);
}

void lenet::thread_tmp_181_fu_25847_p3() {
    tmp_181_fu_25847_p3 = add_ln703_19_fu_25835_p2.read().range(15, 15);
}

void lenet::thread_tmp_183_fu_26002_p4() {
    tmp_183_fu_26002_p4 = lsb_index_fu_25996_p2.read().range(31, 1);
}

void lenet::thread_tmp_184_fu_26055_p3() {
    tmp_184_fu_26055_p3 = lsb_index_fu_25996_p2.read().range(31, 31);
}

void lenet::thread_tmp_185_fu_26159_p3() {
    tmp_185_fu_26159_p3 = m_3_fu_26140_p2.read().range(25, 25);
}

}

