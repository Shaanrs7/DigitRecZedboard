// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dut_digitrec.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic dut_digitrec::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic dut_digitrec::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> dut_digitrec::ap_ST_st1_fsm_0 = "1";
const sc_lv<8> dut_digitrec::ap_ST_st2_fsm_1 = "10";
const sc_lv<8> dut_digitrec::ap_ST_st3_fsm_2 = "100";
const sc_lv<8> dut_digitrec::ap_ST_st4_fsm_3 = "1000";
const sc_lv<8> dut_digitrec::ap_ST_st5_fsm_4 = "10000";
const sc_lv<8> dut_digitrec::ap_ST_st6_fsm_5 = "100000";
const sc_lv<8> dut_digitrec::ap_ST_st7_fsm_6 = "1000000";
const sc_lv<8> dut_digitrec::ap_ST_st8_fsm_7 = "10000000";
const sc_lv<32> dut_digitrec::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> dut_digitrec::ap_const_lv1_1 = "1";
const sc_lv<32> dut_digitrec::ap_const_lv32_1 = "1";
const sc_lv<1> dut_digitrec::ap_const_lv1_0 = "0";
const sc_lv<32> dut_digitrec::ap_const_lv32_2 = "10";
const sc_lv<32> dut_digitrec::ap_const_lv32_3 = "11";
const sc_lv<32> dut_digitrec::ap_const_lv32_4 = "100";
const sc_lv<32> dut_digitrec::ap_const_lv32_5 = "101";
const sc_lv<4> dut_digitrec::ap_const_lv4_0 = "0000";
const sc_lv<2> dut_digitrec::ap_const_lv2_0 = "00";
const sc_lv<11> dut_digitrec::ap_const_lv11_0 = "00000000000";
const sc_lv<32> dut_digitrec::ap_const_lv32_6 = "110";
const sc_lv<15> dut_digitrec::ap_const_lv15_0 = "000000000000000";
const sc_lv<32> dut_digitrec::ap_const_lv32_7 = "111";
const sc_lv<6> dut_digitrec::ap_const_lv6_32 = "110010";
const sc_lv<4> dut_digitrec::ap_const_lv4_A = "1010";
const sc_lv<4> dut_digitrec::ap_const_lv4_1 = "1";
const sc_lv<2> dut_digitrec::ap_const_lv2_3 = "11";
const sc_lv<2> dut_digitrec::ap_const_lv2_1 = "1";
const sc_lv<11> dut_digitrec::ap_const_lv11_708 = "11100001000";
const sc_lv<11> dut_digitrec::ap_const_lv11_1 = "1";
const sc_lv<15> dut_digitrec::ap_const_lv15_708 = "11100001000";

dut_digitrec::dut_digitrec(sc_module_name name) : sc_module(name), mVcdFile(0) {
    training_data_V_U = new dut_digitrec_training_data_V("training_data_V_U");
    training_data_V_U->clk(ap_clk);
    training_data_V_U->reset(ap_rst);
    training_data_V_U->address0(training_data_V_address0);
    training_data_V_U->ce0(training_data_V_ce0);
    training_data_V_U->q0(training_data_V_q0);
    knn_set_V_U = new dut_digitrec_knn_set_V("knn_set_V_U");
    knn_set_V_U->clk(ap_clk);
    knn_set_V_U->reset(ap_rst);
    knn_set_V_U->address0(knn_set_V_address0);
    knn_set_V_U->ce0(knn_set_V_ce0);
    knn_set_V_U->we0(knn_set_V_we0);
    knn_set_V_U->d0(knn_set_V_d0);
    knn_set_V_U->q0(knn_set_V_q0);
    grp_dut_knn_vote_fu_148 = new dut_knn_vote("grp_dut_knn_vote_fu_148");
    grp_dut_knn_vote_fu_148->ap_clk(ap_clk);
    grp_dut_knn_vote_fu_148->ap_rst(ap_rst);
    grp_dut_knn_vote_fu_148->ap_start(grp_dut_knn_vote_fu_148_ap_start);
    grp_dut_knn_vote_fu_148->ap_done(grp_dut_knn_vote_fu_148_ap_done);
    grp_dut_knn_vote_fu_148->ap_idle(grp_dut_knn_vote_fu_148_ap_idle);
    grp_dut_knn_vote_fu_148->ap_ready(grp_dut_knn_vote_fu_148_ap_ready);
    grp_dut_knn_vote_fu_148->knn_set_V_address0(grp_dut_knn_vote_fu_148_knn_set_V_address0);
    grp_dut_knn_vote_fu_148->knn_set_V_ce0(grp_dut_knn_vote_fu_148_knn_set_V_ce0);
    grp_dut_knn_vote_fu_148->knn_set_V_q0(knn_set_V_q0);
    grp_dut_knn_vote_fu_148->ap_return(grp_dut_knn_vote_fu_148_ap_return);
    grp_dut_update_knn_fu_153 = new dut_update_knn("grp_dut_update_knn_fu_153");
    grp_dut_update_knn_fu_153->ap_clk(ap_clk);
    grp_dut_update_knn_fu_153->ap_rst(ap_rst);
    grp_dut_update_knn_fu_153->ap_start(grp_dut_update_knn_fu_153_ap_start);
    grp_dut_update_knn_fu_153->ap_done(grp_dut_update_knn_fu_153_ap_done);
    grp_dut_update_knn_fu_153->ap_idle(grp_dut_update_knn_fu_153_ap_idle);
    grp_dut_update_knn_fu_153->ap_ready(grp_dut_update_knn_fu_153_ap_ready);
    grp_dut_update_knn_fu_153->test_inst_V(input_V);
    grp_dut_update_knn_fu_153->train_inst_V(training_instance_V_reg_320);
    grp_dut_update_knn_fu_153->min_distances_V_address0(grp_dut_update_knn_fu_153_min_distances_V_address0);
    grp_dut_update_knn_fu_153->min_distances_V_ce0(grp_dut_update_knn_fu_153_min_distances_V_ce0);
    grp_dut_update_knn_fu_153->min_distances_V_we0(grp_dut_update_knn_fu_153_min_distances_V_we0);
    grp_dut_update_knn_fu_153->min_distances_V_d0(grp_dut_update_knn_fu_153_min_distances_V_d0);
    grp_dut_update_knn_fu_153->min_distances_V_q0(knn_set_V_q0);
    grp_dut_update_knn_fu_153->tmp_27(j_reg_125);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( grp_dut_knn_vote_fu_148_ap_done );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( grp_dut_knn_vote_fu_148_ap_done );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );

    SC_METHOD(thread_ap_return);
    sensitive << ( grp_dut_knn_vote_fu_148_ap_done );
    sensitive << ( grp_dut_knn_vote_fu_148_ap_return );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );
    sensitive << ( ap_return_preg );

    SC_METHOD(thread_ap_sig_104);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_165);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_182);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_25);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_51);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_66);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_75);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_89);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_25 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_51 );

    SC_METHOD(thread_ap_sig_cseq_ST_st3_fsm_2);
    sensitive << ( ap_sig_66 );

    SC_METHOD(thread_ap_sig_cseq_ST_st4_fsm_3);
    sensitive << ( ap_sig_75 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_4);
    sensitive << ( ap_sig_89 );

    SC_METHOD(thread_ap_sig_cseq_ST_st6_fsm_5);
    sensitive << ( ap_sig_104 );

    SC_METHOD(thread_ap_sig_cseq_ST_st7_fsm_6);
    sensitive << ( ap_sig_165 );

    SC_METHOD(thread_ap_sig_cseq_ST_st8_fsm_7);
    sensitive << ( ap_sig_182 );

    SC_METHOD(thread_exitcond12_fu_163_p2);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( i_reg_92 );

    SC_METHOD(thread_exitcond13_fu_219_p2);
    sensitive << ( ap_sig_cseq_ST_st4_fsm_3 );
    sensitive << ( i4_reg_114 );

    SC_METHOD(thread_exitcond14_fu_193_p2);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( k_reg_103 );

    SC_METHOD(thread_exitcond_fu_235_p2);
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );
    sensitive << ( j_reg_125 );

    SC_METHOD(thread_grp_dut_knn_vote_fu_148_ap_start);
    sensitive << ( ap_reg_grp_dut_knn_vote_fu_148_ap_start );

    SC_METHOD(thread_grp_dut_update_knn_fu_153_ap_start);
    sensitive << ( ap_reg_grp_dut_update_knn_fu_153_ap_start );

    SC_METHOD(thread_i_8_fu_169_p2);
    sensitive << ( i_reg_92 );

    SC_METHOD(thread_i_9_fu_225_p2);
    sensitive << ( i4_reg_114 );

    SC_METHOD(thread_j_3_fu_241_p2);
    sensitive << ( j_reg_125 );

    SC_METHOD(thread_k_4_fu_199_p2);
    sensitive << ( k_reg_103 );

    SC_METHOD(thread_knn_set_V_address0);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( grp_dut_knn_vote_fu_148_knn_set_V_address0 );
    sensitive << ( grp_dut_update_knn_fu_153_min_distances_V_address0 );
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );
    sensitive << ( tmp_33_cast_fu_214_p1 );

    SC_METHOD(thread_knn_set_V_ce0);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( grp_dut_knn_vote_fu_148_knn_set_V_ce0 );
    sensitive << ( grp_dut_update_knn_fu_153_min_distances_V_ce0 );
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );
    sensitive << ( ap_sig_cseq_ST_st8_fsm_7 );

    SC_METHOD(thread_knn_set_V_d0);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( grp_dut_update_knn_fu_153_min_distances_V_d0 );
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );

    SC_METHOD(thread_knn_set_V_we0);
    sensitive << ( ap_sig_cseq_ST_st3_fsm_2 );
    sensitive << ( grp_dut_update_knn_fu_153_min_distances_V_we0 );
    sensitive << ( exitcond14_fu_193_p2 );
    sensitive << ( ap_sig_cseq_ST_st7_fsm_6 );

    SC_METHOD(thread_next_mul_fu_247_p2);
    sensitive << ( phi_mul_reg_137 );

    SC_METHOD(thread_tmp_23_cast_fu_205_p1);
    sensitive << ( k_reg_103 );

    SC_METHOD(thread_tmp_28_fu_187_p2);
    sensitive << ( tmp_s_fu_179_p3 );
    sensitive << ( tmp_cast_fu_175_p1 );

    SC_METHOD(thread_tmp_29_fu_209_p2);
    sensitive << ( tmp_28_reg_276 );
    sensitive << ( tmp_23_cast_fu_205_p1 );

    SC_METHOD(thread_tmp_30_fu_253_p2);
    sensitive << ( tmp_cast_20_reg_297 );
    sensitive << ( phi_mul_reg_137 );

    SC_METHOD(thread_tmp_33_cast_fu_214_p1);
    sensitive << ( tmp_29_fu_209_p2 );

    SC_METHOD(thread_tmp_35_cast_fu_258_p1);
    sensitive << ( tmp_30_fu_253_p2 );

    SC_METHOD(thread_tmp_cast_20_fu_231_p1);
    sensitive << ( i4_reg_114 );

    SC_METHOD(thread_tmp_cast_fu_175_p1);
    sensitive << ( i_reg_92 );

    SC_METHOD(thread_tmp_s_fu_179_p3);
    sensitive << ( i_reg_92 );

    SC_METHOD(thread_training_data_V_address0);
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );
    sensitive << ( tmp_35_cast_fu_258_p1 );

    SC_METHOD(thread_training_data_V_ce0);
    sensitive << ( ap_sig_cseq_ST_st5_fsm_4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond12_fu_163_p2 );
    sensitive << ( exitcond13_fu_219_p2 );
    sensitive << ( exitcond_fu_235_p2 );
    sensitive << ( grp_dut_knn_vote_fu_148_ap_done );
    sensitive << ( grp_dut_update_knn_fu_153_ap_done );
    sensitive << ( exitcond14_fu_193_p2 );

    ap_CS_fsm = "00000001";
    ap_reg_grp_dut_knn_vote_fu_148_ap_start = SC_LOGIC_0;
    ap_reg_grp_dut_update_knn_fu_153_ap_start = SC_LOGIC_0;
    ap_return_preg = "0000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dut_digitrec_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, input_V, "(port)input_V");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_25, "ap_sig_25");
    sc_trace(mVcdFile, training_data_V_address0, "training_data_V_address0");
    sc_trace(mVcdFile, training_data_V_ce0, "training_data_V_ce0");
    sc_trace(mVcdFile, training_data_V_q0, "training_data_V_q0");
    sc_trace(mVcdFile, i_8_fu_169_p2, "i_8_fu_169_p2");
    sc_trace(mVcdFile, i_8_reg_271, "i_8_reg_271");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_51, "ap_sig_51");
    sc_trace(mVcdFile, tmp_28_fu_187_p2, "tmp_28_fu_187_p2");
    sc_trace(mVcdFile, tmp_28_reg_276, "tmp_28_reg_276");
    sc_trace(mVcdFile, exitcond12_fu_163_p2, "exitcond12_fu_163_p2");
    sc_trace(mVcdFile, k_4_fu_199_p2, "k_4_fu_199_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st3_fsm_2, "ap_sig_cseq_ST_st3_fsm_2");
    sc_trace(mVcdFile, ap_sig_66, "ap_sig_66");
    sc_trace(mVcdFile, i_9_fu_225_p2, "i_9_fu_225_p2");
    sc_trace(mVcdFile, i_9_reg_292, "i_9_reg_292");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st4_fsm_3, "ap_sig_cseq_ST_st4_fsm_3");
    sc_trace(mVcdFile, ap_sig_75, "ap_sig_75");
    sc_trace(mVcdFile, tmp_cast_20_fu_231_p1, "tmp_cast_20_fu_231_p1");
    sc_trace(mVcdFile, tmp_cast_20_reg_297, "tmp_cast_20_reg_297");
    sc_trace(mVcdFile, exitcond13_fu_219_p2, "exitcond13_fu_219_p2");
    sc_trace(mVcdFile, j_3_fu_241_p2, "j_3_fu_241_p2");
    sc_trace(mVcdFile, j_3_reg_305, "j_3_reg_305");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_4, "ap_sig_cseq_ST_st5_fsm_4");
    sc_trace(mVcdFile, ap_sig_89, "ap_sig_89");
    sc_trace(mVcdFile, next_mul_fu_247_p2, "next_mul_fu_247_p2");
    sc_trace(mVcdFile, next_mul_reg_310, "next_mul_reg_310");
    sc_trace(mVcdFile, exitcond_fu_235_p2, "exitcond_fu_235_p2");
    sc_trace(mVcdFile, training_instance_V_reg_320, "training_instance_V_reg_320");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st6_fsm_5, "ap_sig_cseq_ST_st6_fsm_5");
    sc_trace(mVcdFile, ap_sig_104, "ap_sig_104");
    sc_trace(mVcdFile, knn_set_V_address0, "knn_set_V_address0");
    sc_trace(mVcdFile, knn_set_V_ce0, "knn_set_V_ce0");
    sc_trace(mVcdFile, knn_set_V_we0, "knn_set_V_we0");
    sc_trace(mVcdFile, knn_set_V_d0, "knn_set_V_d0");
    sc_trace(mVcdFile, knn_set_V_q0, "knn_set_V_q0");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_ap_start, "grp_dut_knn_vote_fu_148_ap_start");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_ap_done, "grp_dut_knn_vote_fu_148_ap_done");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_ap_idle, "grp_dut_knn_vote_fu_148_ap_idle");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_ap_ready, "grp_dut_knn_vote_fu_148_ap_ready");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_knn_set_V_address0, "grp_dut_knn_vote_fu_148_knn_set_V_address0");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_knn_set_V_ce0, "grp_dut_knn_vote_fu_148_knn_set_V_ce0");
    sc_trace(mVcdFile, grp_dut_knn_vote_fu_148_ap_return, "grp_dut_knn_vote_fu_148_ap_return");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_ap_start, "grp_dut_update_knn_fu_153_ap_start");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_ap_done, "grp_dut_update_knn_fu_153_ap_done");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_ap_idle, "grp_dut_update_knn_fu_153_ap_idle");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_ap_ready, "grp_dut_update_knn_fu_153_ap_ready");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_min_distances_V_address0, "grp_dut_update_knn_fu_153_min_distances_V_address0");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_min_distances_V_ce0, "grp_dut_update_knn_fu_153_min_distances_V_ce0");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_min_distances_V_we0, "grp_dut_update_knn_fu_153_min_distances_V_we0");
    sc_trace(mVcdFile, grp_dut_update_knn_fu_153_min_distances_V_d0, "grp_dut_update_knn_fu_153_min_distances_V_d0");
    sc_trace(mVcdFile, i_reg_92, "i_reg_92");
    sc_trace(mVcdFile, exitcond14_fu_193_p2, "exitcond14_fu_193_p2");
    sc_trace(mVcdFile, k_reg_103, "k_reg_103");
    sc_trace(mVcdFile, i4_reg_114, "i4_reg_114");
    sc_trace(mVcdFile, j_reg_125, "j_reg_125");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st7_fsm_6, "ap_sig_cseq_ST_st7_fsm_6");
    sc_trace(mVcdFile, ap_sig_165, "ap_sig_165");
    sc_trace(mVcdFile, phi_mul_reg_137, "phi_mul_reg_137");
    sc_trace(mVcdFile, ap_reg_grp_dut_knn_vote_fu_148_ap_start, "ap_reg_grp_dut_knn_vote_fu_148_ap_start");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st8_fsm_7, "ap_sig_cseq_ST_st8_fsm_7");
    sc_trace(mVcdFile, ap_sig_182, "ap_sig_182");
    sc_trace(mVcdFile, ap_reg_grp_dut_update_knn_fu_153_ap_start, "ap_reg_grp_dut_update_knn_fu_153_ap_start");
    sc_trace(mVcdFile, tmp_33_cast_fu_214_p1, "tmp_33_cast_fu_214_p1");
    sc_trace(mVcdFile, tmp_35_cast_fu_258_p1, "tmp_35_cast_fu_258_p1");
    sc_trace(mVcdFile, tmp_s_fu_179_p3, "tmp_s_fu_179_p3");
    sc_trace(mVcdFile, tmp_cast_fu_175_p1, "tmp_cast_fu_175_p1");
    sc_trace(mVcdFile, tmp_23_cast_fu_205_p1, "tmp_23_cast_fu_205_p1");
    sc_trace(mVcdFile, tmp_29_fu_209_p2, "tmp_29_fu_209_p2");
    sc_trace(mVcdFile, tmp_30_fu_253_p2, "tmp_30_fu_253_p2");
    sc_trace(mVcdFile, ap_return_preg, "ap_return_preg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

dut_digitrec::~dut_digitrec() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete training_data_V_U;
    delete knn_set_V_U;
    delete grp_dut_knn_vote_fu_148;
    delete grp_dut_update_knn_fu_153;
}

void dut_digitrec::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_grp_dut_knn_vote_fu_148_ap_start = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_219_p2.read()))) {
            ap_reg_grp_dut_knn_vote_fu_148_ap_start = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dut_knn_vote_fu_148_ap_ready.read())) {
            ap_reg_grp_dut_knn_vote_fu_148_ap_start = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_grp_dut_update_knn_fu_153_ap_start = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
            ap_reg_grp_dut_update_knn_fu_153_ap_start = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dut_update_knn_fu_153_ap_ready.read())) {
            ap_reg_grp_dut_update_knn_fu_153_ap_start = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv4_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read()) && 
             !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_knn_vote_fu_148_ap_done.read()))) {
            ap_return_preg = grp_dut_knn_vote_fu_148_ap_return.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(exitcond12_fu_163_p2.read(), ap_const_lv1_0))) {
        i4_reg_114 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_235_p2.read()))) {
        i4_reg_114 = i_9_reg_292.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_193_p2.read()))) {
        i_reg_92 = i_8_reg_271.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_92 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_update_knn_fu_153_ap_done.read()))) {
        j_reg_125 = j_3_reg_305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_219_p2.read()))) {
        j_reg_125 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond12_fu_163_p2.read(), ap_const_lv1_0))) {
        k_reg_103 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_193_p2.read()))) {
        k_reg_103 = k_4_fu_199_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_update_knn_fu_153_ap_done.read()))) {
        phi_mul_reg_137 = next_mul_reg_310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_219_p2.read()))) {
        phi_mul_reg_137 = ap_const_lv15_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        i_8_reg_271 = i_8_fu_169_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read())) {
        i_9_reg_292 = i_9_fu_225_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        j_3_reg_305 = j_3_fu_241_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_235_p2.read()))) {
        next_mul_reg_310 = next_mul_fu_247_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && esl_seteq<1,1,1>(exitcond12_fu_163_p2.read(), ap_const_lv1_0))) {
        tmp_28_reg_276 = tmp_28_fu_187_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_219_p2.read()))) {
        tmp_cast_20_reg_297 = tmp_cast_20_fu_231_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st6_fsm_5.read())) {
        training_instance_V_reg_320 = training_data_V_q0.read();
    }
}

void dut_digitrec::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read()) && 
          !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_knn_vote_fu_148_ap_done.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_knn_vote_fu_148_ap_done.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_return() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read()) && 
         !esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_knn_vote_fu_148_ap_done.read()))) {
        ap_return = grp_dut_knn_vote_fu_148_ap_return.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void dut_digitrec::thread_ap_sig_104() {
    ap_sig_104 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void dut_digitrec::thread_ap_sig_165() {
    ap_sig_165 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void dut_digitrec::thread_ap_sig_182() {
    ap_sig_182 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void dut_digitrec::thread_ap_sig_25() {
    ap_sig_25 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void dut_digitrec::thread_ap_sig_51() {
    ap_sig_51 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void dut_digitrec::thread_ap_sig_66() {
    ap_sig_66 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void dut_digitrec::thread_ap_sig_75() {
    ap_sig_75 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void dut_digitrec::thread_ap_sig_89() {
    ap_sig_89 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void dut_digitrec::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_25.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_51.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_66.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st4_fsm_3() {
    if (ap_sig_75.read()) {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_3 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_89.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st6_fsm_5() {
    if (ap_sig_104.read()) {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st7_fsm_6() {
    if (ap_sig_165.read()) {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st7_fsm_6 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_sig_cseq_ST_st8_fsm_7() {
    if (ap_sig_182.read()) {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_exitcond12_fu_163_p2() {
    exitcond12_fu_163_p2 = (!i_reg_92.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_92.read() == ap_const_lv4_A);
}

void dut_digitrec::thread_exitcond13_fu_219_p2() {
    exitcond13_fu_219_p2 = (!i4_reg_114.read().is_01() || !ap_const_lv11_708.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_114.read() == ap_const_lv11_708);
}

void dut_digitrec::thread_exitcond14_fu_193_p2() {
    exitcond14_fu_193_p2 = (!k_reg_103.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_103.read() == ap_const_lv2_3);
}

void dut_digitrec::thread_exitcond_fu_235_p2() {
    exitcond_fu_235_p2 = (!j_reg_125.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_125.read() == ap_const_lv4_A);
}

void dut_digitrec::thread_grp_dut_knn_vote_fu_148_ap_start() {
    grp_dut_knn_vote_fu_148_ap_start = ap_reg_grp_dut_knn_vote_fu_148_ap_start.read();
}

void dut_digitrec::thread_grp_dut_update_knn_fu_153_ap_start() {
    grp_dut_update_knn_fu_153_ap_start = ap_reg_grp_dut_update_knn_fu_153_ap_start.read();
}

void dut_digitrec::thread_i_8_fu_169_p2() {
    i_8_fu_169_p2 = (!i_reg_92.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_92.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void dut_digitrec::thread_i_9_fu_225_p2() {
    i_9_fu_225_p2 = (!i4_reg_114.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(i4_reg_114.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void dut_digitrec::thread_j_3_fu_241_p2() {
    j_3_fu_241_p2 = (!j_reg_125.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_reg_125.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void dut_digitrec::thread_k_4_fu_199_p2() {
    k_4_fu_199_p2 = (!k_reg_103.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_reg_103.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void dut_digitrec::thread_knn_set_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        knn_set_V_address0 =  (sc_lv<5>) (tmp_33_cast_fu_214_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        knn_set_V_address0 = grp_dut_update_knn_fu_153_min_distances_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        knn_set_V_address0 = grp_dut_knn_vote_fu_148_knn_set_V_address0.read();
    } else {
        knn_set_V_address0 = "XXXXX";
    }
}

void dut_digitrec::thread_knn_set_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        knn_set_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        knn_set_V_ce0 = grp_dut_update_knn_fu_153_min_distances_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st8_fsm_7.read())) {
        knn_set_V_ce0 = grp_dut_knn_vote_fu_148_knn_set_V_ce0.read();
    } else {
        knn_set_V_ce0 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_knn_set_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read())) {
        knn_set_V_d0 = ap_const_lv6_32;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        knn_set_V_d0 = grp_dut_update_knn_fu_153_min_distances_V_d0.read();
    } else {
        knn_set_V_d0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void dut_digitrec::thread_knn_set_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st3_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_193_p2.read())))) {
        knn_set_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st7_fsm_6.read())) {
        knn_set_V_we0 = grp_dut_update_knn_fu_153_min_distances_V_we0.read();
    } else {
        knn_set_V_we0 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_next_mul_fu_247_p2() {
    next_mul_fu_247_p2 = (!phi_mul_reg_137.read().is_01() || !ap_const_lv15_708.is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_137.read()) + sc_biguint<15>(ap_const_lv15_708));
}

void dut_digitrec::thread_tmp_23_cast_fu_205_p1() {
    tmp_23_cast_fu_205_p1 = esl_zext<6,2>(k_reg_103.read());
}

void dut_digitrec::thread_tmp_28_fu_187_p2() {
    tmp_28_fu_187_p2 = (!tmp_s_fu_179_p3.read().is_01() || !tmp_cast_fu_175_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_s_fu_179_p3.read()) - sc_biguint<6>(tmp_cast_fu_175_p1.read()));
}

void dut_digitrec::thread_tmp_29_fu_209_p2() {
    tmp_29_fu_209_p2 = (!tmp_28_reg_276.read().is_01() || !tmp_23_cast_fu_205_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_28_reg_276.read()) + sc_biguint<6>(tmp_23_cast_fu_205_p1.read()));
}

void dut_digitrec::thread_tmp_30_fu_253_p2() {
    tmp_30_fu_253_p2 = (!phi_mul_reg_137.read().is_01() || !tmp_cast_20_reg_297.read().is_01())? sc_lv<15>(): (sc_biguint<15>(phi_mul_reg_137.read()) + sc_biguint<15>(tmp_cast_20_reg_297.read()));
}

void dut_digitrec::thread_tmp_33_cast_fu_214_p1() {
    tmp_33_cast_fu_214_p1 = esl_sext<64,6>(tmp_29_fu_209_p2.read());
}

void dut_digitrec::thread_tmp_35_cast_fu_258_p1() {
    tmp_35_cast_fu_258_p1 = esl_zext<64,15>(tmp_30_fu_253_p2.read());
}

void dut_digitrec::thread_tmp_cast_20_fu_231_p1() {
    tmp_cast_20_fu_231_p1 = esl_zext<15,11>(i4_reg_114.read());
}

void dut_digitrec::thread_tmp_cast_fu_175_p1() {
    tmp_cast_fu_175_p1 = esl_zext<6,4>(i_reg_92.read());
}

void dut_digitrec::thread_tmp_s_fu_179_p3() {
    tmp_s_fu_179_p3 = esl_concat<4,2>(i_reg_92.read(), ap_const_lv2_0);
}

void dut_digitrec::thread_training_data_V_address0() {
    training_data_V_address0 =  (sc_lv<15>) (tmp_35_cast_fu_258_p1.read());
}

void dut_digitrec::thread_training_data_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_4.read())) {
        training_data_V_ce0 = ap_const_logic_1;
    } else {
        training_data_V_ce0 = ap_const_logic_0;
    }
}

void dut_digitrec::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(exitcond12_fu_163_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_st4_fsm_3;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_193_p2.read())) {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_219_p2.read())) {
                ap_NS_fsm = ap_ST_st5_fsm_4;
            } else {
                ap_NS_fsm = ap_ST_st8_fsm_7;
            }
            break;
        case 16 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_235_p2.read())) {
                ap_NS_fsm = ap_ST_st4_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_st6_fsm_5;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_st7_fsm_6;
            break;
        case 64 : 
            if (!esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_update_knn_fu_153_ap_done.read())) {
                ap_NS_fsm = ap_ST_st5_fsm_4;
            } else {
                ap_NS_fsm = ap_ST_st7_fsm_6;
            }
            break;
        case 128 : 
            if (!esl_seteq<1,1,1>(ap_const_logic_0, grp_dut_knn_vote_fu_148_ap_done.read())) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_st8_fsm_7;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<8>) ("XXXXXXXX");
            break;
    }
}

}

