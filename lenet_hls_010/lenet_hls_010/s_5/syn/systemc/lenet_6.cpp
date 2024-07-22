#include "lenet.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void lenet::thread_tmp_188_cast_fu_24134_p3() {
    tmp_188_cast_fu_24134_p3 = esl_concat<6,4>(add_ln203_4_fu_24129_p2.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_18_fu_18075_p4() {
    tmp_18_fu_18075_p4 = esl_concat<59,5>(esl_concat<54,5>(ap_const_lv54_0, add_ln25_reg_26348.read()), select_ln25_7_reg_26365.read());
}

void lenet::thread_tmp_196_cast_fu_24253_p3() {
    tmp_196_cast_fu_24253_p3 = esl_concat<8,4>(add_ln1494_3_fu_24248_p2.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_19_fu_18084_p4() {
    tmp_19_fu_18084_p4 = esl_concat<59,5>(esl_concat<54,5>(ap_const_lv54_0, add_ln25_reg_26348.read()), select_ln25_9_reg_26370.read());
}

void lenet::thread_tmp_20_fu_18205_p4() {
    tmp_20_fu_18205_p4 = esl_concat<59,5>(esl_concat<54,5>(ap_const_lv54_0, add_ln25_reg_26348.read()), select_ln25_11_reg_26375.read());
}

void lenet::thread_tmp_21_fu_18242_p4() {
    tmp_21_fu_18242_p4 = add_ln1192_fu_18222_p2.read().range(25, 10);
}

void lenet::thread_tmp_22_fu_18270_p4() {
    tmp_22_fu_18270_p4 = add_ln1192_1_fu_18236_p2.read().range(25, 10);
}

void lenet::thread_tmp_23_fu_18446_p4() {
    tmp_23_fu_18446_p4 = add_ln1192_2_fu_18422_p2.read().range(25, 10);
}

void lenet::thread_tmp_24_fu_18470_p4() {
    tmp_24_fu_18470_p4 = add_ln1192_3_fu_18440_p2.read().range(25, 10);
}

void lenet::thread_tmp_25_fu_18750_p4() {
    tmp_25_fu_18750_p4 = add_ln1192_4_fu_18722_p2.read().range(25, 10);
}

void lenet::thread_tmp_26_fu_18774_p4() {
    tmp_26_fu_18774_p4 = add_ln1192_5_fu_18740_p2.read().range(25, 10);
}

void lenet::thread_tmp_29_fu_18528_p4() {
    tmp_29_fu_18528_p4 = add_ln1192_8_fu_18464_p2.read().range(25, 10);
}

void lenet::thread_tmp_2_fu_17466_p3() {
    tmp_2_fu_17466_p3 = esl_concat<1,52>(ap_const_lv1_1, trunc_ln565_fu_17462_p1.read());
}

void lenet::thread_tmp_30_fu_18556_p4() {
    tmp_30_fu_18556_p4 = add_ln1192_9_fu_18492_p2.read().range(25, 10);
}

void lenet::thread_tmp_31_fu_18802_p4() {
    tmp_31_fu_18802_p4 = add_ln1192_10_fu_18768_p2.read().range(25, 10);
}

void lenet::thread_tmp_32_fu_18826_p4() {
    tmp_32_fu_18826_p4 = add_ln1192_11_fu_18792_p2.read().range(25, 10);
}

void lenet::thread_tmp_33_fu_18584_p4() {
    tmp_33_fu_18584_p4 = add_ln1192_12_fu_18509_p2.read().range(25, 10);
}

void lenet::thread_tmp_34_fu_18608_p4() {
    tmp_34_fu_18608_p4 = add_ln1192_13_fu_18522_p2.read().range(25, 10);
}

void lenet::thread_tmp_3_fu_17373_p1() {
    tmp_3_fu_17373_p1 =  (sc_lv<6>) (reg_3476.read());
}

void lenet::thread_tmp_3_fu_17373_p3() {
    tmp_3_fu_17373_p3 = esl_concat<6,5>(tmp_3_fu_17373_p1.read(), ap_const_lv5_0);
}

void lenet::thread_tmp_41_fu_18956_p4() {
    tmp_41_fu_18956_p4 = add_ln1192_20_fu_18865_p2.read().range(25, 10);
}

void lenet::thread_tmp_42_fu_18994_p4() {
    tmp_42_fu_18994_p4 = add_ln1192_21_fu_18878_p2.read().range(25, 10);
}

void lenet::thread_tmp_43_fu_19058_p4() {
    tmp_43_fu_19058_p4 = add_ln1192_22_fu_19039_p2.read().range(25, 10);
}

void lenet::thread_tmp_44_fu_19092_p4() {
    tmp_44_fu_19092_p4 = add_ln1192_23_fu_19052_p2.read().range(25, 10);
}

void lenet::thread_tmp_45_fu_19149_p1() {
    tmp_45_fu_19149_p1 =  (sc_lv<5>) (reg_3553.read());
}

void lenet::thread_tmp_45_fu_19149_p3() {
    tmp_45_fu_19149_p3 = esl_concat<5,5>(tmp_45_fu_19149_p1.read(), ap_const_lv5_0);
}

void lenet::thread_tmp_46_fu_17540_p4() {
    tmp_46_fu_17540_p4 = sh_amt_fu_17522_p3.read().range(11, 4);
}

void lenet::thread_tmp_47_fu_17584_p3() {
    tmp_47_fu_17584_p3 = bitcast_ln696_fu_17581_p1.read().range(31, 31);
}

void lenet::thread_tmp_48_fu_19161_p1() {
    tmp_48_fu_19161_p1 =  (sc_lv<5>) (reg_3553.read());
}

void lenet::thread_tmp_48_fu_19161_p3() {
    tmp_48_fu_19161_p3 = esl_concat<5,2>(tmp_48_fu_19161_p1.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_49_fu_19330_p1() {
    tmp_49_fu_19330_p1 =  (sc_lv<4>) (reg_3586.read());
}

void lenet::thread_tmp_49_fu_19330_p3() {
    tmp_49_fu_19330_p3 = esl_concat<4,4>(tmp_49_fu_19330_p1.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_50_fu_19216_p3() {
    tmp_50_fu_19216_p3 = esl_concat<12,1>(add_ln1265_5_fu_19199_p2.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_51_fu_19782_p3() {
    tmp_51_fu_19782_p3 = esl_concat<4,3>(select_ln89_1_reg_26893.read(), ap_const_lv3_0);
}

void lenet::thread_tmp_52_fu_19793_p3() {
    tmp_52_fu_19793_p3 = esl_concat<4,1>(select_ln89_1_reg_26893.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_53_fu_19849_p3() {
    tmp_53_fu_19849_p3 = esl_concat<4,4>(select_ln79_1_reg_26934.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_54_fu_19860_p3() {
    tmp_54_fu_19860_p3 = esl_concat<4,1>(select_ln79_1_reg_26934.read(), ap_const_lv1_0);
}

void lenet::thread_tmp_55_fu_19886_p3() {
    tmp_55_fu_19886_p3 = esl_concat<3,2>(select_ln79_2_fu_19877_p3.read(), ap_const_lv2_0);
}

void lenet::thread_tmp_56_fu_20373_p4() {
    tmp_56_fu_20373_p4 = add_ln1192_30_fu_20367_p2.read().range(25, 10);
}

void lenet::thread_tmp_58_fu_20784_p4() {
    tmp_58_fu_20784_p4 = add_ln1192_32_fu_20778_p2.read().range(25, 10);
}

void lenet::thread_tmp_60_fu_21360_p4() {
    tmp_60_fu_21360_p4 = add_ln1192_34_fu_21354_p2.read().range(25, 10);
}

void lenet::thread_tmp_61_fu_20477_p4() {
    tmp_61_fu_20477_p4 = add_ln1192_36_fu_20471_p2.read().range(25, 10);
}

void lenet::thread_tmp_63_fu_20887_p4() {
    tmp_63_fu_20887_p4 = add_ln1192_38_fu_20881_p2.read().range(25, 10);
}

void lenet::thread_tmp_65_fu_21415_p4() {
    tmp_65_fu_21415_p4 = add_ln1192_40_fu_21409_p2.read().range(25, 10);
}

void lenet::thread_tmp_66_fu_20541_p4() {
    tmp_66_fu_20541_p4 = add_ln1192_42_fu_20535_p2.read().range(25, 10);
}

void lenet::thread_tmp_67_cast_fu_19830_p3() {
    tmp_67_cast_fu_19830_p3 = esl_concat<8,4>(trunc_ln1265_2_fu_19819_p1.read(), ap_const_lv4_0);
}

void lenet::thread_tmp_68_fu_20950_p4() {
    tmp_68_fu_20950_p4 = add_ln1192_44_fu_20944_p2.read().range(25, 10);
}

void lenet::thread_tmp_70_fu_21470_p4() {
    tmp_70_fu_21470_p4 = add_ln1192_46_fu_21464_p2.read().range(25, 10);
}

void lenet::thread_tmp_71_fu_20605_p4() {
    tmp_71_fu_20605_p4 = add_ln1192_48_fu_20599_p2.read().range(25, 10);
}

void lenet::thread_tmp_73_fu_21013_p4() {
    tmp_73_fu_21013_p4 = add_ln1192_50_fu_21007_p2.read().range(25, 10);
}

void lenet::thread_tmp_75_fu_21525_p4() {
    tmp_75_fu_21525_p4 = add_ln1192_52_fu_21519_p2.read().range(25, 10);
}

void lenet::thread_tmp_76_fu_21077_p4() {
    tmp_76_fu_21077_p4 = add_ln1192_54_fu_21071_p2.read().range(25, 10);
}

void lenet::thread_tmp_77_fu_21105_p4() {
    tmp_77_fu_21105_p4 = add_ln1192_55_fu_21099_p2.read().range(25, 10);
}

void lenet::thread_tmp_79_fu_21580_p4() {
    tmp_79_fu_21580_p4 = add_ln1192_57_fu_21574_p2.read().range(25, 10);
}

void lenet::thread_tmp_80_fu_21608_p4() {
    tmp_80_fu_21608_p4 = add_ln1192_58_fu_21602_p2.read().range(25, 10);
}

void lenet::thread_tmp_81_fu_21169_p4() {
    tmp_81_fu_21169_p4 = add_ln1192_60_fu_21163_p2.read().range(25, 10);
}

void lenet::thread_tmp_82_fu_21197_p4() {
    tmp_82_fu_21197_p4 = add_ln1192_61_fu_21191_p2.read().range(25, 10);
}

void lenet::thread_tmp_84_fu_21663_p4() {
    tmp_84_fu_21663_p4 = add_ln1192_63_fu_21657_p2.read().range(25, 10);
}

void lenet::thread_tmp_85_fu_21691_p4() {
    tmp_85_fu_21691_p4 = add_ln1192_64_fu_21685_p2.read().range(25, 10);
}

void lenet::thread_tmp_86_fu_21747_p4() {
    tmp_86_fu_21747_p4 = add_ln1192_66_fu_21741_p2.read().range(25, 10);
}

void lenet::thread_tmp_87_fu_21775_p4() {
    tmp_87_fu_21775_p4 = add_ln1192_67_fu_21769_p2.read().range(25, 10);
}

void lenet::thread_tmp_89_fu_21934_p4() {
    tmp_89_fu_21934_p4 = add_ln1192_69_fu_21928_p2.read().range(25, 10);
}

void lenet::thread_tmp_90_fu_21962_p4() {
    tmp_90_fu_21962_p4 = add_ln1192_70_fu_21956_p2.read().range(25, 10);
}

void lenet::thread_tmp_91_fu_21831_p4() {
    tmp_91_fu_21831_p4 = add_ln1192_72_fu_21825_p2.read().range(25, 10);
}

void lenet::thread_tmp_92_fu_21859_p4() {
    tmp_92_fu_21859_p4 = add_ln1192_73_fu_21853_p2.read().range(25, 10);
}

void lenet::thread_tmp_94_fu_22017_p4() {
    tmp_94_fu_22017_p4 = add_ln1192_75_fu_22011_p2.read().range(25, 10);
}

void lenet::thread_tmp_95_fu_22045_p4() {
    tmp_95_fu_22045_p4 = add_ln1192_76_fu_22039_p2.read().range(25, 10);
}

void lenet::thread_tmp_96_fu_22101_p4() {
    tmp_96_fu_22101_p4 = add_ln1192_78_fu_22095_p2.read().range(25, 10);
}

void lenet::thread_tmp_97_fu_22129_p4() {
    tmp_97_fu_22129_p4 = add_ln1192_79_fu_22123_p2.read().range(25, 10);
}

void lenet::thread_tmp_99_fu_22288_p4() {
    tmp_99_fu_22288_p4 = add_ln1192_81_fu_22282_p2.read().range(25, 10);
}

void lenet::thread_tmp_V_3_fu_25924_p2() {
    tmp_V_3_fu_25924_p2 = (!lhs_V_2_fu_25920_p1.read().is_01() || !rhs_V_reg_28976.read().is_01())? sc_lv<17>(): (sc_bigint<17>(lhs_V_2_fu_25920_p1.read()) - sc_bigint<17>(rhs_V_reg_28976.read()));
}

void lenet::thread_tmp_V_4_fu_25949_p3() {
    tmp_V_4_fu_25949_p3 = (!p_Result_10_fu_25935_p3.read()[0].is_01())? sc_lv<17>(): ((p_Result_10_fu_25935_p3.read()[0].to_bool())? tmp_V_fu_25943_p2.read(): tmp_V_3_fu_25924_p2.read());
}

void lenet::thread_tmp_V_fu_25943_p2() {
    tmp_V_fu_25943_p2 = (!ap_const_lv17_0.is_01() || !tmp_V_3_fu_25924_p2.read().is_01())? sc_lv<17>(): (sc_biguint<17>(ap_const_lv17_0) - sc_biguint<17>(tmp_V_3_fu_25924_p2.read()));
}

void lenet::thread_trunc_ln1116_1_fu_19934_p1() {
    trunc_ln1116_1_fu_19934_p1 = add_ln1116_fu_19916_p2.read().range(11-1, 0);
}

void lenet::thread_trunc_ln1116_2_fu_24563_p1() {
    trunc_ln1116_2_fu_24563_p1 = select_ln158_5_fu_24555_p3.read().range(10-1, 0);
}

void lenet::thread_trunc_ln1116_fu_19922_p1() {
    trunc_ln1116_fu_19922_p1 = add_ln1116_fu_19916_p2.read().range(9-1, 0);
}

void lenet::thread_trunc_ln11_fu_17385_p0() {
    trunc_ln11_fu_17385_p0 =  (sc_lv<6>) (reg_3476.read());
}

void lenet::thread_trunc_ln11_fu_17385_p1() {
    trunc_ln11_fu_17385_p1 = trunc_ln11_fu_17385_p0.read().range(5-1, 0);
}

void lenet::thread_trunc_ln1265_1_fu_19204_p1() {
    trunc_ln1265_1_fu_19204_p1 = add_ln1265_5_fu_19199_p2.read().range(11-1, 0);
}

void lenet::thread_trunc_ln1265_2_fu_19819_p1() {
    trunc_ln1265_2_fu_19819_p1 = add_ln1265_7_fu_19813_p2.read().range(8-1, 0);
}

void lenet::thread_trunc_ln1265_fu_18029_p1() {
    trunc_ln1265_fu_18029_p1 = add_ln1265_fu_18023_p2.read().range(11-1, 0);
}

void lenet::thread_trunc_ln1494_fu_19530_p1() {
    trunc_ln1494_fu_19530_p1 = add_ln1494_fu_19525_p2.read().range(11-1, 0);
}

void lenet::thread_trunc_ln203_fu_19385_p1() {
    trunc_ln203_fu_19385_p1 = add_ln203_1_fu_19380_p2.read().range(9-1, 0);
}

void lenet::thread_trunc_ln556_fu_17436_p1() {
    trunc_ln556_fu_17436_p1 = ireg_V_fu_17432_p1.read().range(63-1, 0);
}

void lenet::thread_trunc_ln565_fu_17462_p1() {
    trunc_ln565_fu_17462_p1 = ireg_V_fu_17432_p1.read().range(52-1, 0);
}

void lenet::thread_trunc_ln583_fu_17536_p1() {
    trunc_ln583_fu_17536_p1 = man_V_2_fu_17484_p3.read().range(16-1, 0);
}

void lenet::thread_trunc_ln586_fu_17577_p1() {
    trunc_ln586_fu_17577_p1 = ashr_ln586_fu_17572_p2.read().range(16-1, 0);
}

void lenet::thread_trunc_ln703_10_fu_25831_p1() {
    trunc_ln703_10_fu_25831_p1 = FC2_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_1_fu_23600_p1() {
    trunc_ln703_1_fu_23600_p1 = C2_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_2_fu_23632_p1() {
    trunc_ln703_2_fu_23632_p1 = C2_out_V_q1.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_3_fu_23684_p1() {
    trunc_ln703_3_fu_23684_p1 = C2_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_4_fu_23716_p1() {
    trunc_ln703_4_fu_23716_p1 = C2_out_V_q1.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_5_fu_23768_p1() {
    trunc_ln703_5_fu_23768_p1 = C2_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_6_fu_23800_p1() {
    trunc_ln703_6_fu_23800_p1 = C2_out_V_q1.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_7_fu_23852_p1() {
    trunc_ln703_7_fu_23852_p1 = C2_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_8_fu_23884_p1() {
    trunc_ln703_8_fu_23884_p1 = C2_out_V_q1.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_9_fu_25681_p1() {
    trunc_ln703_9_fu_25681_p1 = FC1_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln703_fu_19273_p1() {
    trunc_ln703_fu_19273_p1 = C1_out_V_q0.read().range(15-1, 0);
}

void lenet::thread_trunc_ln943_fu_25983_p1() {
    trunc_ln943_fu_25983_p1 = l_fu_25975_p3.read().range(8-1, 0);
}

void lenet::thread_trunc_ln944_fu_25992_p1() {
    trunc_ln944_fu_25992_p1 = sub_ln944_fu_25987_p2.read().range(17-1, 0);
}

void lenet::thread_trunc_ln947_fu_26018_p1() {
    trunc_ln947_fu_26018_p1 = sub_ln944_fu_25987_p2.read().range(5-1, 0);
}

void lenet::thread_x_2_fu_19455_p0() {
    x_2_fu_19455_p0 =  (sc_lv<2>) (reg_3632.read());
}

void lenet::thread_x_2_fu_19455_p2() {
    x_2_fu_19455_p2 = (!x_2_fu_19455_p0.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(x_2_fu_19455_p0.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void lenet::thread_x_3_fu_24182_p0() {
    x_3_fu_24182_p0 =  (sc_lv<2>) (reg_3822.read());
}

void lenet::thread_x_3_fu_24182_p2() {
    x_3_fu_24182_p2 = (!x_3_fu_24182_p0.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(x_3_fu_24182_p0.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void lenet::thread_x_4_fu_19726_p2() {
    x_4_fu_19726_p2 = (!ap_const_lv3_1.is_01() || !select_ln89_3_fu_19684_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln89_3_fu_19684_p3.read()));
}

void lenet::thread_x_fu_19126_p2() {
    x_fu_19126_p2 = (!ap_const_lv3_1.is_01() || !select_ln25_2_reg_26337.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln25_2_reg_26337.read()));
}

void lenet::thread_xor_ln158_1_fu_24395_p2() {
    xor_ln158_1_fu_24395_p2 = (icmp_ln152_fu_24369_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln158_fu_24351_p2() {
    xor_ln158_fu_24351_p2 = (icmp_ln150_fu_24337_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln25_fu_17782_p2() {
    xor_ln25_fu_17782_p2 = (icmp_ln17_fu_17760_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln571_fu_17609_p2() {
    xor_ln571_fu_17609_p2 = (icmp_ln571_reg_26281.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln581_fu_17657_p2() {
    xor_ln581_fu_17657_p2 = (or_ln581_fu_17652_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln582_fu_17623_p2() {
    xor_ln582_fu_17623_p2 = (or_ln582_fu_17619_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln585_fu_17634_p2() {
    xor_ln585_fu_17634_p2 = (icmp_ln585_fu_17563_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln89_1_fu_19708_p2() {
    xor_ln89_1_fu_19708_p2 = (icmp_ln79_fu_19660_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln89_fu_19642_p2() {
    xor_ln89_fu_19642_p2 = (icmp_ln77_fu_19612_p2.read() ^ ap_const_lv1_1);
}

void lenet::thread_xor_ln949_fu_26063_p2() {
    xor_ln949_fu_26063_p2 = (tmp_184_fu_26055_p3.read() ^ ap_const_lv1_1);
}

void lenet::thread_y_1_fu_19510_p0() {
    y_1_fu_19510_p0 =  (sc_lv<2>) (reg_3655.read());
}

void lenet::thread_y_1_fu_19510_p2() {
    y_1_fu_19510_p2 = (!y_1_fu_19510_p0.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(y_1_fu_19510_p0.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void lenet::thread_y_2_fu_24233_p0() {
    y_2_fu_24233_p0 =  (sc_lv<2>) (reg_3845.read());
}

void lenet::thread_y_2_fu_24233_p2() {
    y_2_fu_24233_p2 = (!y_2_fu_24233_p0.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(y_2_fu_24233_p0.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void lenet::thread_y_fu_23459_p2() {
    y_fu_23459_p2 = (!ap_const_lv3_1.is_01() || !select_ln79_reg_26927.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(select_ln79_reg_26927.read()));
}

void lenet::thread_zext_ln107_1_fu_23980_p1() {
    zext_ln107_1_fu_23980_p1 = esl_zext<16,15>(select_ln107_1_reg_28157.read());
}

void lenet::thread_zext_ln107_2_fu_23984_p1() {
    zext_ln107_2_fu_23984_p1 = esl_zext<16,15>(select_ln107_2_reg_28172.read());
}

void lenet::thread_zext_ln107_3_fu_23988_p1() {
    zext_ln107_3_fu_23988_p1 = esl_zext<16,15>(select_ln107_3_reg_28177.read());
}

void lenet::thread_zext_ln107_4_fu_23992_p1() {
    zext_ln107_4_fu_23992_p1 = esl_zext<16,15>(select_ln107_4_reg_28192.read());
}

void lenet::thread_zext_ln107_5_fu_23996_p1() {
    zext_ln107_5_fu_23996_p1 = esl_zext<16,15>(select_ln107_5_reg_28197.read());
}

void lenet::thread_zext_ln107_6_fu_24000_p1() {
    zext_ln107_6_fu_24000_p1 = esl_zext<16,15>(select_ln107_6_reg_28212.read());
}

void lenet::thread_zext_ln107_7_fu_24004_p1() {
    zext_ln107_7_fu_24004_p1 = esl_zext<16,15>(select_ln107_7_reg_28217.read());
}

void lenet::thread_zext_ln107_fu_23976_p1() {
    zext_ln107_fu_23976_p1 = esl_zext<16,15>(select_ln107_reg_28152.read());
}

void lenet::thread_zext_ln1116_10_fu_24307_p1() {
    zext_ln1116_10_fu_24307_p1 = esl_zext<6,3>(ap_phi_mux_y_0_i2641_0_0_phi_fu_3894_p4.read());
}

void lenet::thread_zext_ln1116_11_fu_24474_p1() {
    zext_ln1116_11_fu_24474_p1 = esl_zext<64,5>(tmp_154_fu_24466_p3.read());
}

void lenet::thread_zext_ln1116_12_fu_24492_p1() {
    zext_ln1116_12_fu_24492_p1 = esl_zext<10,9>(tmp_155_fu_24484_p3.read());
}

void lenet::thread_zext_ln1116_13_fu_24504_p1() {
    zext_ln1116_13_fu_24504_p1 = esl_zext<10,7>(tmp_156_fu_24496_p3.read());
}

void lenet::thread_zext_ln1116_1_fu_19867_p1() {
    zext_ln1116_1_fu_19867_p1 = esl_zext<64,5>(tmp_54_fu_19860_p3.read());
}

void lenet::thread_zext_ln1116_2_fu_19952_p1() {
    zext_ln1116_2_fu_19952_p1 = esl_zext<64,12>(sub_ln1116_1_fu_19946_p2.read());
}

void lenet::thread_zext_ln1116_3_fu_19963_p1() {
    zext_ln1116_3_fu_19963_p1 = esl_zext<64,12>(or_ln1116_fu_19957_p2.read());
}

void lenet::thread_zext_ln1116_4_fu_20102_p1() {
    zext_ln1116_4_fu_20102_p1 = esl_zext<64,12>(add_ln1116_1_fu_20097_p2.read());
}

void lenet::thread_zext_ln1116_5_fu_20112_p1() {
    zext_ln1116_5_fu_20112_p1 = esl_zext<64,12>(add_ln1116_2_fu_20107_p2.read());
}

void lenet::thread_zext_ln1116_6_fu_20347_p1() {
    zext_ln1116_6_fu_20347_p1 = esl_zext<64,12>(add_ln1116_3_reg_27501.read());
}

void lenet::thread_zext_ln1116_7_fu_20351_p1() {
    zext_ln1116_7_fu_20351_p1 = esl_zext<64,12>(add_ln1116_4_reg_27506.read());
}

void lenet::thread_zext_ln1116_8_fu_24285_p1() {
    zext_ln1116_8_fu_24285_p1 = esl_zext<6,3>(ap_phi_mux_x_0_i2638_0_0_phi_fu_3871_p4.read());
}

void lenet::thread_zext_ln1116_9_fu_24297_p1() {
    zext_ln1116_9_fu_24297_p1 = esl_zext<6,5>(tmp_152_fu_24289_p3.read());
}

void lenet::thread_zext_ln1116_fu_19856_p1() {
    zext_ln1116_fu_19856_p1 = esl_zext<64,8>(tmp_53_fu_19849_p3.read());
}

void lenet::thread_zext_ln1117_10_fu_25605_p0() {
    zext_ln1117_10_fu_25605_p0 =  (sc_lv<7>) (reg_3993.read());
}

void lenet::thread_zext_ln1117_10_fu_25605_p1() {
    zext_ln1117_10_fu_25605_p1 = esl_zext<15,7>(zext_ln1117_10_fu_25605_p0.read());
}

void lenet::thread_zext_ln1117_11_fu_25758_p0() {
    zext_ln1117_11_fu_25758_p0 =  (sc_lv<7>) (reg_4051.read());
}

void lenet::thread_zext_ln1117_11_fu_25758_p1() {
    zext_ln1117_11_fu_25758_p1 = esl_zext<10,7>(zext_ln1117_11_fu_25758_p0.read());
}

void lenet::thread_zext_ln1117_12_fu_25768_p1() {
    zext_ln1117_12_fu_25768_p1 = esl_zext<64,10>(add_ln1117_7_fu_25762_p2.read());
}

void lenet::thread_zext_ln1117_1_fu_19968_p1() {
    zext_ln1117_1_fu_19968_p1 = esl_zext<6,3>(select_ln79_reg_26927.read());
}

void lenet::thread_zext_ln1117_2_fu_19977_p1() {
    zext_ln1117_2_fu_19977_p1 = esl_zext<64,6>(add_ln1117_1_fu_19971_p2.read());
}

void lenet::thread_zext_ln1117_3_fu_24633_p1() {
    zext_ln1117_3_fu_24633_p1 = esl_zext<10,7>(add_ln158_fu_24622_p2.read());
}

void lenet::thread_zext_ln1117_4_fu_24645_p1() {
    zext_ln1117_4_fu_24645_p1 = esl_zext<10,9>(tmp_157_fu_24637_p3.read());
}

void lenet::thread_zext_ln1117_5_fu_24661_p1() {
    zext_ln1117_5_fu_24661_p1 = esl_zext<13,10>(add_ln1117_3_fu_24655_p2.read());
}

void lenet::thread_zext_ln1117_6_fu_24673_p1() {
    zext_ln1117_6_fu_24673_p1 = esl_zext<13,12>(tmp_158_fu_24665_p3.read());
}

void lenet::thread_zext_ln1117_7_fu_24709_p1() {
    zext_ln1117_7_fu_24709_p1 = esl_zext<64,13>(add_ln1117_5_reg_28483.read());
}

void lenet::thread_zext_ln1117_8_fu_25566_p1() {
    zext_ln1117_8_fu_25566_p1 = esl_zext<15,14>(tmp_178_fu_25558_p3.read());
}

void lenet::thread_zext_ln1117_9_fu_25578_p1() {
    zext_ln1117_9_fu_25578_p1 = esl_zext<15,10>(tmp_179_fu_25570_p3.read());
}

void lenet::thread_zext_ln1117_fu_19894_p1() {
    zext_ln1117_fu_19894_p1 = esl_zext<6,5>(tmp_55_fu_19886_p3.read());
}

void lenet::thread_zext_ln1118_1_fu_18136_p1() {
    zext_ln1118_1_fu_18136_p1 = esl_zext<25,9>(K1_W_V_5_0_q0.read());
}

void lenet::thread_zext_ln1118_2_fu_18155_p1() {
    zext_ln1118_2_fu_18155_p1 = esl_zext<25,9>(K1_W_V_0_1_q0.read());
}

void lenet::thread_zext_ln1118_3_fu_18170_p1() {
    zext_ln1118_3_fu_18170_p1 = esl_zext<25,9>(K1_W_V_3_1_q0.read());
}

void lenet::thread_zext_ln1118_4_fu_18180_p1() {
    zext_ln1118_4_fu_18180_p1 = esl_zext<26,10>(K1_W_V_5_1_q0.read());
}

void lenet::thread_zext_ln1118_5_fu_18308_p1() {
    zext_ln1118_5_fu_18308_p1 = esl_zext<25,9>(K1_W_V_0_2_load_reg_26563.read());
}

void lenet::thread_zext_ln1118_6_fu_18348_p1() {
    zext_ln1118_6_fu_18348_p1 = esl_zext<25,9>(K1_W_V_5_2_load_reg_26588.read());
}

void lenet::thread_zext_ln1118_7_fu_18378_p1() {
    zext_ln1118_7_fu_18378_p1 = esl_zext<25,9>(K1_W_V_2_3_load_reg_26603.read());
}

void lenet::thread_zext_ln1118_8_fu_18694_p1() {
    zext_ln1118_8_fu_18694_p1 = esl_zext<25,9>(K1_W_V_2_4_load_reg_26633.read());
}

void lenet::thread_zext_ln1118_fu_18126_p1() {
    zext_ln1118_fu_18126_p1 = esl_zext<25,9>(K1_W_V_3_0_q0.read());
}

void lenet::thread_zext_ln11_1_fu_17427_p1() {
    zext_ln11_1_fu_17427_p1 = esl_zext<64,10>(add_ln11_fu_17422_p2.read());
}

void lenet::thread_zext_ln11_fu_17381_p1() {
    zext_ln11_fu_17381_p1 = esl_zext<12,11>(tmp_3_fu_17373_p3.read());
}

void lenet::thread_zext_ln1265_10_fu_19169_p1() {
    zext_ln1265_10_fu_19169_p1 = esl_zext<11,7>(tmp_48_fu_19161_p3.read());
}

void lenet::thread_zext_ln1265_11_fu_19195_p0() {
    zext_ln1265_11_fu_19195_p0 =  (sc_lv<5>) (reg_3564.read());
}

void lenet::thread_zext_ln1265_11_fu_19195_p1() {
    zext_ln1265_11_fu_19195_p1 = esl_zext<12,5>(zext_ln1265_11_fu_19195_p0.read());
}

void lenet::thread_zext_ln1265_12_fu_19789_p1() {
    zext_ln1265_12_fu_19789_p1 = esl_zext<64,7>(tmp_51_fu_19782_p3.read());
}

void lenet::thread_zext_ln1265_13_fu_19800_p1() {
    zext_ln1265_13_fu_19800_p1 = esl_zext<64,5>(tmp_52_fu_19793_p3.read());
}

void lenet::thread_zext_ln1265_14_fu_19844_p1() {
    zext_ln1265_14_fu_19844_p1 = esl_zext<64,12>(or_ln1265_1_fu_19838_p2.read());
}

void lenet::thread_zext_ln1265_15_fu_20082_p1() {
    zext_ln1265_15_fu_20082_p1 = esl_zext<64,12>(or_ln1265_2_fu_20077_p2.read());
}

void lenet::thread_zext_ln1265_16_fu_20092_p1() {
    zext_ln1265_16_fu_20092_p1 = esl_zext<64,12>(or_ln1265_3_fu_20087_p2.read());
}

void lenet::thread_zext_ln1265_17_fu_20332_p1() {
    zext_ln1265_17_fu_20332_p1 = esl_zext<64,12>(or_ln1265_4_fu_20327_p2.read());
}

void lenet::thread_zext_ln1265_18_fu_20342_p1() {
    zext_ln1265_18_fu_20342_p1 = esl_zext<64,12>(or_ln1265_5_fu_20337_p2.read());
}

void lenet::thread_zext_ln1265_19_fu_20752_p1() {
    zext_ln1265_19_fu_20752_p1 = esl_zext<64,12>(or_ln1265_6_fu_20747_p2.read());
}

void lenet::thread_zext_ln1265_1_fu_17995_p1() {
    zext_ln1265_1_fu_17995_p1 = esl_zext<11,10>(tmp_11_fu_17988_p3.read());
}

void lenet::thread_zext_ln1265_20_fu_20762_p1() {
    zext_ln1265_20_fu_20762_p1 = esl_zext<64,12>(or_ln1265_7_fu_20757_p2.read());
}

void lenet::thread_zext_ln1265_21_fu_21328_p1() {
    zext_ln1265_21_fu_21328_p1 = esl_zext<64,12>(or_ln1265_8_fu_21323_p2.read());
}

void lenet::thread_zext_ln1265_22_fu_21338_p1() {
    zext_ln1265_22_fu_21338_p1 = esl_zext<64,12>(or_ln1265_9_fu_21333_p2.read());
}

void lenet::thread_zext_ln1265_23_fu_21902_p1() {
    zext_ln1265_23_fu_21902_p1 = esl_zext<64,12>(or_ln1265_10_fu_21897_p2.read());
}

void lenet::thread_zext_ln1265_24_fu_21912_p1() {
    zext_ln1265_24_fu_21912_p1 = esl_zext<64,12>(or_ln1265_11_fu_21907_p2.read());
}

void lenet::thread_zext_ln1265_25_fu_22256_p1() {
    zext_ln1265_25_fu_22256_p1 = esl_zext<64,12>(or_ln1265_12_fu_22251_p2.read());
}

void lenet::thread_zext_ln1265_26_fu_22266_p1() {
    zext_ln1265_26_fu_22266_p1 = esl_zext<64,12>(or_ln1265_13_fu_22261_p2.read());
}

void lenet::thread_zext_ln1265_27_fu_22610_p1() {
    zext_ln1265_27_fu_22610_p1 = esl_zext<64,12>(or_ln1265_14_fu_22605_p2.read());
}

void lenet::thread_zext_ln1265_28_fu_22620_p1() {
    zext_ln1265_28_fu_22620_p1 = esl_zext<64,12>(or_ln1265_15_fu_22615_p2.read());
}

void lenet::thread_zext_ln1265_29_fu_19251_p0() {
    zext_ln1265_29_fu_19251_p0 =  (sc_lv<3>) (reg_3575.read());
}

void lenet::thread_zext_ln1265_29_fu_19251_p1() {
    zext_ln1265_29_fu_19251_p1 = esl_zext<14,3>(zext_ln1265_29_fu_19251_p0.read());
}

void lenet::thread_zext_ln1265_2_fu_18006_p1() {
    zext_ln1265_2_fu_18006_p1 = esl_zext<11,7>(tmp_14_fu_17999_p3.read());
}

void lenet::thread_zext_ln1265_30_fu_19260_p1() {
    zext_ln1265_30_fu_19260_p1 = esl_zext<64,14>(add_ln1265_8_fu_19255_p2.read());
}

void lenet::thread_zext_ln1265_31_fu_23524_p1() {
    zext_ln1265_31_fu_23524_p1 = esl_zext<8,7>(tmp_138_fu_23516_p3.read());
}

void lenet::thread_zext_ln1265_32_fu_23536_p1() {
    zext_ln1265_32_fu_23536_p1 = esl_zext<8,5>(tmp_139_fu_23528_p3.read());
}

void lenet::thread_zext_ln1265_33_fu_23546_p1() {
    zext_ln1265_33_fu_23546_p1 = esl_zext<8,4>(select_ln106_fu_23500_p3.read());
}

void lenet::thread_zext_ln1265_34_fu_23564_p1() {
    zext_ln1265_34_fu_23564_p1 = esl_zext<64,12>(tmp_140_fu_23556_p3.read());
}

void lenet::thread_zext_ln1265_35_fu_23575_p1() {
    zext_ln1265_35_fu_23575_p1 = esl_zext<64,12>(or_ln1265_16_fu_23569_p2.read());
}

void lenet::thread_zext_ln1265_36_fu_23585_p1() {
    zext_ln1265_36_fu_23585_p1 = esl_zext<64,12>(or_ln1265_17_fu_23580_p2.read());
}

void lenet::thread_zext_ln1265_37_fu_23595_p1() {
    zext_ln1265_37_fu_23595_p1 = esl_zext<64,12>(or_ln1265_18_fu_23590_p2.read());
}

void lenet::thread_zext_ln1265_38_fu_23669_p1() {
    zext_ln1265_38_fu_23669_p1 = esl_zext<64,12>(or_ln1265_19_fu_23664_p2.read());
}

void lenet::thread_zext_ln1265_39_fu_23679_p1() {
    zext_ln1265_39_fu_23679_p1 = esl_zext<64,12>(or_ln1265_20_fu_23674_p2.read());
}

void lenet::thread_zext_ln1265_3_fu_18059_p1() {
    zext_ln1265_3_fu_18059_p1 = esl_zext<64,14>(sub_ln1265_1_fu_18053_p2.read());
}

void lenet::thread_zext_ln1265_40_fu_23753_p1() {
    zext_ln1265_40_fu_23753_p1 = esl_zext<64,12>(or_ln1265_21_fu_23748_p2.read());
}

void lenet::thread_zext_ln1265_41_fu_23763_p1() {
    zext_ln1265_41_fu_23763_p1 = esl_zext<64,12>(or_ln1265_22_fu_23758_p2.read());
}

void lenet::thread_zext_ln1265_42_fu_23837_p1() {
    zext_ln1265_42_fu_23837_p1 = esl_zext<64,12>(or_ln1265_23_fu_23832_p2.read());
}

void lenet::thread_zext_ln1265_43_fu_23847_p1() {
    zext_ln1265_43_fu_23847_p1 = esl_zext<64,12>(or_ln1265_24_fu_23842_p2.read());
}

void lenet::thread_zext_ln1265_44_fu_23921_p1() {
    zext_ln1265_44_fu_23921_p1 = esl_zext<64,12>(or_ln1265_25_fu_23916_p2.read());
}

void lenet::thread_zext_ln1265_45_fu_23931_p1() {
    zext_ln1265_45_fu_23931_p1 = esl_zext<64,12>(or_ln1265_26_fu_23926_p2.read());
}

void lenet::thread_zext_ln1265_46_fu_23941_p1() {
    zext_ln1265_46_fu_23941_p1 = esl_zext<64,12>(or_ln1265_27_fu_23936_p2.read());
}

void lenet::thread_zext_ln1265_47_fu_23951_p1() {
    zext_ln1265_47_fu_23951_p1 = esl_zext<64,12>(or_ln1265_28_fu_23946_p2.read());
}

void lenet::thread_zext_ln1265_48_fu_23961_p1() {
    zext_ln1265_48_fu_23961_p1 = esl_zext<64,12>(or_ln1265_29_fu_23956_p2.read());
}

void lenet::thread_zext_ln1265_49_fu_23971_p1() {
    zext_ln1265_49_fu_23971_p1 = esl_zext<64,12>(or_ln1265_30_fu_23966_p2.read());
}

void lenet::thread_zext_ln1265_4_fu_18070_p1() {
    zext_ln1265_4_fu_18070_p1 = esl_zext<64,14>(or_ln1265_fu_18064_p2.read());
}

void lenet::thread_zext_ln1265_5_fu_18190_p1() {
    zext_ln1265_5_fu_18190_p1 = esl_zext<64,14>(add_ln1265_1_fu_18185_p2.read());
}

void lenet::thread_zext_ln1265_6_fu_18200_p1() {
    zext_ln1265_6_fu_18200_p1 = esl_zext<64,14>(add_ln1265_2_fu_18195_p2.read());
}

void lenet::thread_zext_ln1265_7_fu_18399_p1() {
    zext_ln1265_7_fu_18399_p1 = esl_zext<64,14>(add_ln1265_3_fu_18394_p2.read());
}

void lenet::thread_zext_ln1265_8_fu_18409_p1() {
    zext_ln1265_8_fu_18409_p1 = esl_zext<64,14>(add_ln1265_4_fu_18404_p2.read());
}

void lenet::thread_zext_ln1265_9_fu_19157_p1() {
    zext_ln1265_9_fu_19157_p1 = esl_zext<11,10>(tmp_45_fu_19149_p3.read());
}

void lenet::thread_zext_ln1265_fu_19265_p1() {
    zext_ln1265_fu_19265_p1 = esl_zext<16,9>(K1_B_V_q0.read());
}

void lenet::thread_zext_ln126_fu_24172_p0() {
    zext_ln126_fu_24172_p0 =  (sc_lv<2>) (reg_3822.read());
}

void lenet::thread_zext_ln126_fu_24172_p1() {
    zext_ln126_fu_24172_p1 = esl_zext<4,2>(zext_ln126_fu_24172_p0.read());
}

void lenet::thread_zext_ln128_fu_24223_p0() {
    zext_ln128_fu_24223_p0 =  (sc_lv<2>) (reg_3845.read());
}

void lenet::thread_zext_ln128_fu_24223_p1() {
    zext_ln128_fu_24223_p1 = esl_zext<4,2>(zext_ln128_fu_24223_p0.read());
}

void lenet::thread_zext_ln1494_1_fu_19486_p1() {
    zext_ln1494_1_fu_19486_p1 = esl_zext<11,7>(tmp_151_fu_19478_p3.read());
}

void lenet::thread_zext_ln1494_2_fu_19521_p1() {
    zext_ln1494_2_fu_19521_p1 = esl_zext<12,5>(add_ln61_1_fu_19516_p2.read());
}

void lenet::thread_zext_ln1494_3_fu_19565_p1() {
    zext_ln1494_3_fu_19565_p1 = esl_zext<64,14>(add_ln1494_1_fu_19560_p2.read());
}

void lenet::thread_zext_ln1494_4_fu_24201_p1() {
    zext_ln1494_4_fu_24201_p1 = esl_zext<8,7>(tmp_176_fu_24193_p3.read());
}

void lenet::thread_zext_ln1494_5_fu_24213_p1() {
    zext_ln1494_5_fu_24213_p1 = esl_zext<8,5>(tmp_177_fu_24205_p3.read());
}

void lenet::thread_zext_ln1494_6_fu_24244_p1() {
    zext_ln1494_6_fu_24244_p1 = esl_zext<8,4>(add_ln130_1_fu_24239_p2.read());
}

void lenet::thread_zext_ln1494_7_fu_24266_p1() {
    zext_ln1494_7_fu_24266_p1 = esl_zext<64,12>(add_ln1494_4_fu_24261_p2.read());
}

void lenet::thread_zext_ln1494_fu_19474_p1() {
    zext_ln1494_fu_19474_p1 = esl_zext<11,10>(tmp_150_fu_19466_p3.read());
}

void lenet::thread_zext_ln154_fu_24619_p1() {
    zext_ln154_fu_24619_p1 = esl_zext<7,4>(select_ln152_reg_28424.read());
}

void lenet::thread_zext_ln158_10_fu_24761_p1() {
    zext_ln158_10_fu_24761_p1 = esl_zext<64,10>(or_ln158_5_fu_24756_p2.read());
}

void lenet::thread_zext_ln158_11_fu_24801_p1() {
    zext_ln158_11_fu_24801_p1 = esl_zext<64,10>(or_ln158_6_fu_24796_p2.read());
}

void lenet::thread_zext_ln158_12_fu_24811_p1() {
    zext_ln158_12_fu_24811_p1 = esl_zext<64,10>(or_ln158_7_fu_24806_p2.read());
}

void lenet::thread_zext_ln158_13_fu_24950_p1() {
    zext_ln158_13_fu_24950_p1 = esl_zext<64,10>(or_ln158_8_fu_24945_p2.read());
}

void lenet::thread_zext_ln158_14_fu_24960_p1() {
    zext_ln158_14_fu_24960_p1 = esl_zext<64,10>(or_ln158_9_fu_24955_p2.read());
}

void lenet::thread_zext_ln158_15_fu_25043_p1() {
    zext_ln158_15_fu_25043_p1 = esl_zext<64,10>(or_ln158_10_fu_25038_p2.read());
}

void lenet::thread_zext_ln158_16_fu_25053_p1() {
    zext_ln158_16_fu_25053_p1 = esl_zext<64,10>(or_ln158_11_fu_25048_p2.read());
}

void lenet::thread_zext_ln158_17_fu_25136_p1() {
    zext_ln158_17_fu_25136_p1 = esl_zext<64,10>(or_ln158_12_fu_25131_p2.read());
}

void lenet::thread_zext_ln158_18_fu_25146_p1() {
    zext_ln158_18_fu_25146_p1 = esl_zext<64,10>(or_ln158_13_fu_25141_p2.read());
}

void lenet::thread_zext_ln158_19_fu_25246_p1() {
    zext_ln158_19_fu_25246_p1 = esl_zext<64,10>(or_ln158_14_fu_25241_p2.read());
}

void lenet::thread_zext_ln158_1_fu_24462_p1() {
    zext_ln158_1_fu_24462_p1 = esl_zext<64,3>(select_ln158_1_fu_24451_p3.read());
}

void lenet::thread_zext_ln158_20_fu_25256_p1() {
    zext_ln158_20_fu_25256_p1 = esl_zext<64,10>(or_ln158_15_fu_25251_p2.read());
}

void lenet::thread_zext_ln158_2_fu_24628_p1() {
    zext_ln158_2_fu_24628_p1 = esl_zext<64,7>(add_ln158_fu_24622_p2.read());
}

void lenet::thread_zext_ln158_3_fu_24520_p1() {
    zext_ln158_3_fu_24520_p1 = esl_zext<64,10>(select_ln158_2_fu_24514_p3.read());
}

void lenet::thread_zext_ln158_4_fu_24529_p1() {
    zext_ln158_4_fu_24529_p1 = esl_zext<64,3>(add_ln150_fu_24524_p2.read());
}

void lenet::thread_zext_ln158_5_fu_24551_p1() {
    zext_ln158_5_fu_24551_p1 = esl_zext<13,3>(select_ln158_4_fu_24545_p3.read());
}

void lenet::thread_zext_ln158_6_fu_24573_p1() {
    zext_ln158_6_fu_24573_p1 = esl_zext<64,10>(or_ln158_1_fu_24567_p2.read());
}

void lenet::thread_zext_ln158_7_fu_24694_p1() {
    zext_ln158_7_fu_24694_p1 = esl_zext<64,10>(or_ln158_2_fu_24689_p2.read());
}

void lenet::thread_zext_ln158_8_fu_24704_p1() {
    zext_ln158_8_fu_24704_p1 = esl_zext<64,10>(or_ln158_3_fu_24699_p2.read());
}

void lenet::thread_zext_ln158_9_fu_24751_p1() {
    zext_ln158_9_fu_24751_p1 = esl_zext<64,10>(or_ln158_4_fu_24746_p2.read());
}

void lenet::thread_zext_ln158_fu_24458_p1() {
    zext_ln158_fu_24458_p1 = esl_zext<10,3>(select_ln158_1_fu_24451_p3.read());
}

void lenet::thread_zext_ln173_fu_25473_p0() {
    zext_ln173_fu_25473_p0 =  (sc_lv<4>) (reg_3946.read());
}

void lenet::thread_zext_ln173_fu_25473_p1() {
    zext_ln173_fu_25473_p1 = esl_zext<7,4>(zext_ln173_fu_25473_p0.read());
}

void lenet::thread_zext_ln175_fu_25494_p1() {
    zext_ln175_fu_25494_p1 = esl_zext<64,7>(add_ln175_fu_25489_p2.read());
}

void lenet::thread_zext_ln176_fu_25511_p0() {
    zext_ln176_fu_25511_p0 =  (sc_lv<4>) (reg_3946.read());
}

void lenet::thread_zext_ln176_fu_25511_p1() {
    zext_ln176_fu_25511_p1 = esl_zext<64,4>(zext_ln176_fu_25511_p0.read());
}

void lenet::thread_zext_ln191_fu_25536_p0() {
    zext_ln191_fu_25536_p0 =  (sc_lv<7>) (reg_3958.read());
}

void lenet::thread_zext_ln191_fu_25536_p1() {
    zext_ln191_fu_25536_p1 = esl_zext<64,7>(zext_ln191_fu_25536_p0.read());
}

void lenet::thread_zext_ln19_fu_17852_p1() {
    zext_ln19_fu_17852_p1 = esl_zext<5,3>(select_ln25_2_fu_17812_p3.read());
}

void lenet::thread_zext_ln200_fu_25553_p0() {
    zext_ln200_fu_25553_p0 =  (sc_lv<7>) (reg_3969.read());
}

void lenet::thread_zext_ln200_fu_25553_p1() {
    zext_ln200_fu_25553_p1 = esl_zext<64,7>(zext_ln200_fu_25553_p0.read());
}

void lenet::thread_zext_ln203_10_fu_24095_p1() {
    zext_ln203_10_fu_24095_p1 = esl_zext<6,5>(tmp_149_fu_24087_p3.read());
}

void lenet::thread_zext_ln203_11_fu_24125_p0() {
    zext_ln203_11_fu_24125_p0 =  (sc_lv<3>) (reg_3787.read());
}

void lenet::thread_zext_ln203_11_fu_24125_p1() {
    zext_ln203_11_fu_24125_p1 = esl_zext<6,3>(zext_ln203_11_fu_24125_p0.read());
}

void lenet::thread_zext_ln203_12_fu_24154_p0() {
    zext_ln203_12_fu_24154_p0 =  (sc_lv<5>) (reg_3798.read());
}

void lenet::thread_zext_ln203_12_fu_24154_p1() {
    zext_ln203_12_fu_24154_p1 = esl_zext<12,5>(zext_ln203_12_fu_24154_p0.read());
}

void lenet::thread_zext_ln203_13_fu_24158_p0() {
    zext_ln203_13_fu_24158_p0 =  (sc_lv<5>) (reg_3798.read());
}

void lenet::thread_zext_ln203_13_fu_24158_p1() {
    zext_ln203_13_fu_24158_p1 = esl_zext<10,5>(zext_ln203_13_fu_24158_p0.read());
}

void lenet::thread_zext_ln203_14_fu_24167_p1() {
    zext_ln203_14_fu_24167_p1 = esl_zext<64,10>(add_ln203_5_fu_24162_p2.read());
}

void lenet::thread_zext_ln203_1_fu_17413_p0() {
    zext_ln203_1_fu_17413_p0 =  (sc_lv<6>) (reg_3487.read());
}

void lenet::thread_zext_ln203_1_fu_17413_p1() {
    zext_ln203_1_fu_17413_p1 = esl_zext<12,6>(zext_ln203_1_fu_17413_p0.read());
}

void lenet::thread_zext_ln203_2_fu_17556_p1() {
    zext_ln203_2_fu_17556_p1 = esl_zext<64,12>(add_ln203_reg_26260.read());
}

void lenet::thread_zext_ln203_3_fu_19338_p1() {
    zext_ln203_3_fu_19338_p1 = esl_zext<9,8>(tmp_49_fu_19330_p3.read());
}

void lenet::thread_zext_ln203_4_fu_19342_p1() {
    zext_ln203_4_fu_19342_p1 = esl_zext<9,5>(shl_ln2_fu_19322_p3.read());
}

void lenet::thread_zext_ln203_5_fu_19376_p0() {
    zext_ln203_5_fu_19376_p0 =  (sc_lv<4>) (reg_3597.read());
}

void lenet::thread_zext_ln203_5_fu_19376_p1() {
    zext_ln203_5_fu_19376_p1 = esl_zext<10,4>(zext_ln203_5_fu_19376_p0.read());
}

void lenet::thread_zext_ln203_6_fu_19427_p0() {
    zext_ln203_6_fu_19427_p0 =  (sc_lv<3>) (reg_3608.read());
}

void lenet::thread_zext_ln203_6_fu_19427_p1() {
    zext_ln203_6_fu_19427_p1 = esl_zext<14,3>(zext_ln203_6_fu_19427_p0.read());
}

void lenet::thread_zext_ln203_7_fu_19431_p0() {
    zext_ln203_7_fu_19431_p0 =  (sc_lv<3>) (reg_3608.read());
}

void lenet::thread_zext_ln203_7_fu_19431_p1() {
    zext_ln203_7_fu_19431_p1 = esl_zext<12,3>(zext_ln203_7_fu_19431_p0.read());
}

void lenet::thread_zext_ln203_8_fu_19440_p1() {
    zext_ln203_8_fu_19440_p1 = esl_zext<64,12>(add_ln203_2_fu_19435_p2.read());
}

void lenet::thread_zext_ln203_9_fu_24083_p0() {
    zext_ln203_9_fu_24083_p0 =  (sc_lv<3>) (reg_3776.read());
}

void lenet::thread_zext_ln203_9_fu_24083_p1() {
    zext_ln203_9_fu_24083_p1 = esl_zext<6,3>(zext_ln203_9_fu_24083_p0.read());
}

void lenet::thread_zext_ln203_fu_25600_p0() {
    zext_ln203_fu_25600_p0 =  (sc_lv<7>) (reg_3993.read());
}

void lenet::thread_zext_ln203_fu_25600_p1() {
    zext_ln203_fu_25600_p1 = esl_zext<64,7>(zext_ln203_fu_25600_p0.read());
}

void lenet::thread_zext_ln209_fu_25667_p0() {
    zext_ln209_fu_25667_p0 =  (sc_lv<7>) (reg_4004.read());
}

void lenet::thread_zext_ln209_fu_25667_p1() {
    zext_ln209_fu_25667_p1 = esl_zext<64,7>(zext_ln209_fu_25667_p0.read());
}

void lenet::thread_zext_ln210_fu_25713_p1() {
    zext_ln210_fu_25713_p1 = esl_zext<16,15>(select_ln210_fu_25705_p3.read());
}

void lenet::thread_zext_ln221_fu_25736_p0() {
    zext_ln221_fu_25736_p0 =  (sc_lv<4>) (reg_4015.read());
}

void lenet::thread_zext_ln221_fu_25736_p1() {
    zext_ln221_fu_25736_p1 = esl_zext<64,4>(zext_ln221_fu_25736_p0.read());
}

void lenet::thread_zext_ln224_fu_25753_p0() {
    zext_ln224_fu_25753_p0 =  (sc_lv<7>) (reg_4051.read());
}

void lenet::thread_zext_ln224_fu_25753_p1() {
    zext_ln224_fu_25753_p1 = esl_zext<64,7>(zext_ln224_fu_25753_p0.read());
}

void lenet::thread_zext_ln230_fu_25817_p0() {
    zext_ln230_fu_25817_p0 =  (sc_lv<4>) (reg_4062.read());
}

void lenet::thread_zext_ln230_fu_25817_p1() {
    zext_ln230_fu_25817_p1 = esl_zext<64,4>(zext_ln230_fu_25817_p0.read());
}

void lenet::thread_zext_ln231_fu_25863_p1() {
    zext_ln231_fu_25863_p1 = esl_zext<16,15>(select_ln231_fu_25855_p3.read());
}

void lenet::thread_zext_ln245_fu_25874_p0() {
    zext_ln245_fu_25874_p0 =  (sc_lv<4>) (reg_4083.read());
}

void lenet::thread_zext_ln245_fu_25874_p1() {
    zext_ln245_fu_25874_p1 = esl_zext<64,4>(zext_ln245_fu_25874_p0.read());
}

void lenet::thread_zext_ln251_fu_25909_p0() {
    zext_ln251_fu_25909_p0 =  (sc_lv<4>) (reg_4106.read());
}

void lenet::thread_zext_ln251_fu_25909_p1() {
    zext_ln251_fu_25909_p1 = esl_zext<64,4>(zext_ln251_fu_25909_p0.read());
}

void lenet::thread_zext_ln257_fu_26222_p0() {
    zext_ln257_fu_26222_p0 =  (sc_lv<4>) (reg_4117.read());
}

void lenet::thread_zext_ln257_fu_26222_p1() {
    zext_ln257_fu_26222_p1 = esl_zext<64,4>(zext_ln257_fu_26222_p0.read());
}

void lenet::thread_zext_ln25_1_fu_17948_p1() {
    zext_ln25_1_fu_17948_p1 = esl_zext<64,3>(select_ln25_2_fu_17812_p3.read());
}

void lenet::thread_zext_ln25_fu_18020_p1() {
    zext_ln25_fu_18020_p1 = esl_zext<12,5>(select_ln25_3_reg_26342.read());
}

void lenet::thread_zext_ln38_fu_19246_p0() {
    zext_ln38_fu_19246_p0 =  (sc_lv<3>) (reg_3575.read());
}

void lenet::thread_zext_ln38_fu_19246_p1() {
    zext_ln38_fu_19246_p1 = esl_zext<64,3>(zext_ln38_fu_19246_p0.read());
}

void lenet::thread_zext_ln39_fu_19305_p1() {
    zext_ln39_fu_19305_p1 = esl_zext<16,15>(select_ln39_fu_19297_p3.read());
}

void lenet::thread_zext_ln461_fu_17458_p1() {
    zext_ln461_fu_17458_p1 = esl_zext<12,11>(exp_tmp_V_fu_17448_p4.read());
}

void lenet::thread_zext_ln57_fu_19445_p0() {
    zext_ln57_fu_19445_p0 =  (sc_lv<2>) (reg_3632.read());
}

void lenet::thread_zext_ln57_fu_19445_p1() {
    zext_ln57_fu_19445_p1 = esl_zext<5,2>(zext_ln57_fu_19445_p0.read());
}

void lenet::thread_zext_ln586_fu_17568_p1() {
    zext_ln586_fu_17568_p1 = esl_zext<54,32>(sext_ln581_fu_17560_p1.read());
}

void lenet::thread_zext_ln59_fu_19500_p0() {
    zext_ln59_fu_19500_p0 =  (sc_lv<2>) (reg_3655.read());
}

void lenet::thread_zext_ln59_fu_19500_p1() {
    zext_ln59_fu_19500_p1 = esl_zext<5,2>(zext_ln59_fu_19500_p0.read());
}

void lenet::thread_zext_ln703_fu_19269_p1() {
    zext_ln703_fu_19269_p1 = esl_zext<15,9>(K1_B_V_q0.read());
}

void lenet::thread_zext_ln79_1_fu_19752_p1() {
    zext_ln79_1_fu_19752_p1 = esl_zext<4,3>(x_4_fu_19726_p2.read());
}

void lenet::thread_zext_ln79_2_fu_19882_p1() {
    zext_ln79_2_fu_19882_p1 = esl_zext<6,3>(select_ln79_2_fu_19877_p3.read());
}

void lenet::thread_zext_ln79_fu_19584_p1() {
    zext_ln79_fu_19584_p1 = esl_zext<4,3>(ap_phi_mux_x_0_i2603_phi_fu_3725_p4.read());
}

void lenet::thread_zext_ln81_fu_19904_p1() {
    zext_ln81_fu_19904_p1 = esl_zext<4,3>(select_ln79_reg_26927.read());
}

void lenet::thread_zext_ln89_1_fu_19912_p1() {
    zext_ln89_1_fu_19912_p1 = esl_zext<64,4>(add_ln89_1_fu_19907_p2.read());
}

void lenet::thread_zext_ln89_fu_19810_p1() {
    zext_ln89_fu_19810_p1 = esl_zext<64,4>(select_ln89_4_reg_26910.read());
}

void lenet::thread_zext_ln947_fu_26028_p1() {
    zext_ln947_fu_26028_p1 = esl_zext<17,5>(sub_ln947_fu_26022_p2.read());
}

void lenet::thread_zext_ln9_fu_17397_p0() {
    zext_ln9_fu_17397_p0 =  (sc_lv<6>) (reg_3487.read());
}

void lenet::thread_zext_ln9_fu_17397_p1() {
    zext_ln9_fu_17397_p1 = esl_zext<10,6>(zext_ln9_fu_17397_p0.read());
}

}

