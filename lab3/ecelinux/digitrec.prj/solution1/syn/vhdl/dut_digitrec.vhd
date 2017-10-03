-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dut_digitrec is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_V : IN STD_LOGIC_VECTOR (48 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (3 downto 0) );
end;


architecture behav of dut_digitrec is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_st4_fsm_3 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_st5_fsm_4 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_st6_fsm_5 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_st7_fsm_6 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_st8_fsm_7 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv15_0 : STD_LOGIC_VECTOR (14 downto 0) := "000000000000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv6_32 : STD_LOGIC_VECTOR (5 downto 0) := "110010";
    constant ap_const_lv4_A : STD_LOGIC_VECTOR (3 downto 0) := "1010";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv11_708 : STD_LOGIC_VECTOR (10 downto 0) := "11100001000";
    constant ap_const_lv11_1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_const_lv15_708 : STD_LOGIC_VECTOR (14 downto 0) := "000011100001000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_25 : BOOLEAN;
    signal training_data_V_address0 : STD_LOGIC_VECTOR (14 downto 0);
    signal training_data_V_ce0 : STD_LOGIC;
    signal training_data_V_q0 : STD_LOGIC_VECTOR (47 downto 0);
    signal i_8_fu_169_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_8_reg_271 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_51 : BOOLEAN;
    signal tmp_28_fu_187_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_28_reg_276 : STD_LOGIC_VECTOR (5 downto 0);
    signal exitcond12_fu_163_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal k_4_fu_199_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_66 : BOOLEAN;
    signal i_9_fu_225_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal i_9_reg_292 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_sig_cseq_ST_st4_fsm_3 : STD_LOGIC;
    signal ap_sig_75 : BOOLEAN;
    signal tmp_cast_20_fu_231_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_cast_20_reg_297 : STD_LOGIC_VECTOR (14 downto 0);
    signal exitcond13_fu_219_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_3_fu_241_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_3_reg_305 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st5_fsm_4 : STD_LOGIC;
    signal ap_sig_89 : BOOLEAN;
    signal next_mul_fu_247_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal next_mul_reg_310 : STD_LOGIC_VECTOR (14 downto 0);
    signal exitcond_fu_235_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal training_instance_V_reg_320 : STD_LOGIC_VECTOR (47 downto 0);
    signal ap_sig_cseq_ST_st6_fsm_5 : STD_LOGIC;
    signal ap_sig_104 : BOOLEAN;
    signal knn_set_V_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal knn_set_V_ce0 : STD_LOGIC;
    signal knn_set_V_we0 : STD_LOGIC;
    signal knn_set_V_d0 : STD_LOGIC_VECTOR (5 downto 0);
    signal knn_set_V_q0 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_dut_knn_vote_fu_148_ap_start : STD_LOGIC;
    signal grp_dut_knn_vote_fu_148_ap_done : STD_LOGIC;
    signal grp_dut_knn_vote_fu_148_ap_idle : STD_LOGIC;
    signal grp_dut_knn_vote_fu_148_ap_ready : STD_LOGIC;
    signal grp_dut_knn_vote_fu_148_knn_set_V_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_dut_knn_vote_fu_148_knn_set_V_ce0 : STD_LOGIC;
    signal grp_dut_knn_vote_fu_148_ap_return : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_dut_update_knn_fu_153_ap_start : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_ap_done : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_ap_idle : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_ap_ready : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_min_distances_V_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_dut_update_knn_fu_153_min_distances_V_ce0 : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_min_distances_V_we0 : STD_LOGIC;
    signal grp_dut_update_knn_fu_153_min_distances_V_d0 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_reg_92 : STD_LOGIC_VECTOR (3 downto 0);
    signal exitcond14_fu_193_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal k_reg_103 : STD_LOGIC_VECTOR (1 downto 0);
    signal i4_reg_114 : STD_LOGIC_VECTOR (10 downto 0);
    signal j_reg_125 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st7_fsm_6 : STD_LOGIC;
    signal ap_sig_165 : BOOLEAN;
    signal phi_mul_reg_137 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_reg_grp_dut_knn_vote_fu_148_ap_start : STD_LOGIC := '0';
    signal ap_sig_cseq_ST_st8_fsm_7 : STD_LOGIC;
    signal ap_sig_182 : BOOLEAN;
    signal ap_reg_grp_dut_update_knn_fu_153_ap_start : STD_LOGIC := '0';
    signal tmp_33_cast_fu_214_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_35_cast_fu_258_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_179_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_cast_fu_175_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_23_cast_fu_205_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_29_fu_209_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_30_fu_253_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component dut_knn_vote IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        knn_set_V_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
        knn_set_V_ce0 : OUT STD_LOGIC;
        knn_set_V_q0 : IN STD_LOGIC_VECTOR (5 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (3 downto 0) );
    end component;


    component dut_update_knn IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        test_inst_V : IN STD_LOGIC_VECTOR (48 downto 0);
        train_inst_V : IN STD_LOGIC_VECTOR (47 downto 0);
        min_distances_V_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
        min_distances_V_ce0 : OUT STD_LOGIC;
        min_distances_V_we0 : OUT STD_LOGIC;
        min_distances_V_d0 : OUT STD_LOGIC_VECTOR (5 downto 0);
        min_distances_V_q0 : IN STD_LOGIC_VECTOR (5 downto 0);
        tmp_27 : IN STD_LOGIC_VECTOR (3 downto 0) );
    end component;


    component dut_digitrec_training_data_V IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (14 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (47 downto 0) );
    end component;


    component dut_digitrec_knn_set_V IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (5 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (5 downto 0) );
    end component;



begin
    training_data_V_U : component dut_digitrec_training_data_V
    generic map (
        DataWidth => 48,
        AddressRange => 18000,
        AddressWidth => 15)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => training_data_V_address0,
        ce0 => training_data_V_ce0,
        q0 => training_data_V_q0);

    knn_set_V_U : component dut_digitrec_knn_set_V
    generic map (
        DataWidth => 6,
        AddressRange => 30,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => knn_set_V_address0,
        ce0 => knn_set_V_ce0,
        we0 => knn_set_V_we0,
        d0 => knn_set_V_d0,
        q0 => knn_set_V_q0);

    grp_dut_knn_vote_fu_148 : component dut_knn_vote
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_dut_knn_vote_fu_148_ap_start,
        ap_done => grp_dut_knn_vote_fu_148_ap_done,
        ap_idle => grp_dut_knn_vote_fu_148_ap_idle,
        ap_ready => grp_dut_knn_vote_fu_148_ap_ready,
        knn_set_V_address0 => grp_dut_knn_vote_fu_148_knn_set_V_address0,
        knn_set_V_ce0 => grp_dut_knn_vote_fu_148_knn_set_V_ce0,
        knn_set_V_q0 => knn_set_V_q0,
        ap_return => grp_dut_knn_vote_fu_148_ap_return);

    grp_dut_update_knn_fu_153 : component dut_update_knn
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_dut_update_knn_fu_153_ap_start,
        ap_done => grp_dut_update_knn_fu_153_ap_done,
        ap_idle => grp_dut_update_knn_fu_153_ap_idle,
        ap_ready => grp_dut_update_knn_fu_153_ap_ready,
        test_inst_V => input_V,
        train_inst_V => training_instance_V_reg_320,
        min_distances_V_address0 => grp_dut_update_knn_fu_153_min_distances_V_address0,
        min_distances_V_ce0 => grp_dut_update_knn_fu_153_min_distances_V_ce0,
        min_distances_V_we0 => grp_dut_update_knn_fu_153_min_distances_V_we0,
        min_distances_V_d0 => grp_dut_update_knn_fu_153_min_distances_V_d0,
        min_distances_V_q0 => knn_set_V_q0,
        tmp_27 => j_reg_125);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_reg_grp_dut_knn_vote_fu_148_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_dut_knn_vote_fu_148_ap_start <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and not((ap_const_lv1_0 = exitcond13_fu_219_p2)))) then 
                    ap_reg_grp_dut_knn_vote_fu_148_ap_start <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_dut_knn_vote_fu_148_ap_ready)) then 
                    ap_reg_grp_dut_knn_vote_fu_148_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_grp_dut_update_knn_fu_153_ap_start_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_grp_dut_update_knn_fu_153_ap_start <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then 
                    ap_reg_grp_dut_update_knn_fu_153_ap_start <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_dut_update_knn_fu_153_ap_ready)) then 
                    ap_reg_grp_dut_update_knn_fu_153_ap_start <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv4_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7) and not((ap_const_logic_0 = grp_dut_knn_vote_fu_148_ap_done)))) then 
                    ap_return_preg <= grp_dut_knn_vote_fu_148_ap_return;
                end if; 
            end if;
        end if;
    end process;


    i4_reg_114_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond12_fu_163_p2 = ap_const_lv1_0)))) then 
                i4_reg_114 <= ap_const_lv11_0;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and not((ap_const_lv1_0 = exitcond_fu_235_p2)))) then 
                i4_reg_114 <= i_9_reg_292;
            end if; 
        end if;
    end process;

    i_reg_92_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((ap_const_lv1_0 = exitcond14_fu_193_p2)))) then 
                i_reg_92 <= i_8_reg_271;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                i_reg_92 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    j_reg_125_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6) and not((ap_const_logic_0 = grp_dut_update_knn_fu_153_ap_done)))) then 
                j_reg_125 <= j_3_reg_305;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and (ap_const_lv1_0 = exitcond13_fu_219_p2))) then 
                j_reg_125 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    k_reg_103_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond12_fu_163_p2 = ap_const_lv1_0))) then 
                k_reg_103 <= ap_const_lv2_0;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and (ap_const_lv1_0 = exitcond14_fu_193_p2))) then 
                k_reg_103 <= k_4_fu_199_p2;
            end if; 
        end if;
    end process;

    phi_mul_reg_137_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6) and not((ap_const_logic_0 = grp_dut_update_knn_fu_153_ap_done)))) then 
                phi_mul_reg_137 <= next_mul_reg_310;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and (ap_const_lv1_0 = exitcond13_fu_219_p2))) then 
                phi_mul_reg_137 <= ap_const_lv15_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then
                i_8_reg_271 <= i_8_fu_169_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then
                i_9_reg_292 <= i_9_fu_225_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then
                j_3_reg_305 <= j_3_fu_241_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and (ap_const_lv1_0 = exitcond_fu_235_p2))) then
                next_mul_reg_310 <= next_mul_fu_247_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond12_fu_163_p2 = ap_const_lv1_0))) then
                tmp_28_reg_276 <= tmp_28_fu_187_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and (ap_const_lv1_0 = exitcond13_fu_219_p2))) then
                    tmp_cast_20_reg_297(10 downto 0) <= tmp_cast_20_fu_231_p1(10 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then
                training_instance_V_reg_320 <= training_data_V_q0;
            end if;
        end if;
    end process;
    tmp_cast_20_reg_297(14 downto 11) <= "0000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, exitcond12_fu_163_p2, exitcond13_fu_219_p2, exitcond_fu_235_p2, grp_dut_knn_vote_fu_148_ap_done, grp_dut_update_knn_fu_153_ap_done, exitcond14_fu_193_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if ((exitcond12_fu_163_p2 = ap_const_lv1_0)) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st4_fsm_3;
                end if;
            when ap_ST_st3_fsm_2 => 
                if ((ap_const_lv1_0 = exitcond14_fu_193_p2)) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                end if;
            when ap_ST_st4_fsm_3 => 
                if ((ap_const_lv1_0 = exitcond13_fu_219_p2)) then
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                else
                    ap_NS_fsm <= ap_ST_st8_fsm_7;
                end if;
            when ap_ST_st5_fsm_4 => 
                if (not((ap_const_lv1_0 = exitcond_fu_235_p2))) then
                    ap_NS_fsm <= ap_ST_st4_fsm_3;
                else
                    ap_NS_fsm <= ap_ST_st6_fsm_5;
                end if;
            when ap_ST_st6_fsm_5 => 
                ap_NS_fsm <= ap_ST_st7_fsm_6;
            when ap_ST_st7_fsm_6 => 
                if (not((ap_const_logic_0 = grp_dut_update_knn_fu_153_ap_done))) then
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                else
                    ap_NS_fsm <= ap_ST_st7_fsm_6;
                end if;
            when ap_ST_st8_fsm_7 => 
                if (not((ap_const_logic_0 = grp_dut_knn_vote_fu_148_ap_done))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_st8_fsm_7;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;

    ap_done_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0, grp_dut_knn_vote_fu_148_ap_done, ap_sig_cseq_ST_st8_fsm_7)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0)) or ((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7) and not((ap_const_logic_0 = grp_dut_knn_vote_fu_148_ap_done))))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(grp_dut_knn_vote_fu_148_ap_done, ap_sig_cseq_ST_st8_fsm_7)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7) and not((ap_const_logic_0 = grp_dut_knn_vote_fu_148_ap_done)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(grp_dut_knn_vote_fu_148_ap_done, grp_dut_knn_vote_fu_148_ap_return, ap_sig_cseq_ST_st8_fsm_7, ap_return_preg)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7) and not((ap_const_logic_0 = grp_dut_knn_vote_fu_148_ap_done)))) then 
            ap_return <= grp_dut_knn_vote_fu_148_ap_return;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;


    ap_sig_104_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_104 <= (ap_const_lv1_1 = ap_CS_fsm(5 downto 5));
    end process;


    ap_sig_165_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_165 <= (ap_const_lv1_1 = ap_CS_fsm(6 downto 6));
    end process;


    ap_sig_182_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_182 <= (ap_const_lv1_1 = ap_CS_fsm(7 downto 7));
    end process;


    ap_sig_25_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_25 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    ap_sig_51_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_51 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    ap_sig_66_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_66 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    ap_sig_75_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_75 <= (ap_const_lv1_1 = ap_CS_fsm(3 downto 3));
    end process;


    ap_sig_89_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_89 <= (ap_const_lv1_1 = ap_CS_fsm(4 downto 4));
    end process;


    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_25)
    begin
        if (ap_sig_25) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_51)
    begin
        if (ap_sig_51) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_66)
    begin
        if (ap_sig_66) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st4_fsm_3_assign_proc : process(ap_sig_75)
    begin
        if (ap_sig_75) then 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st5_fsm_4_assign_proc : process(ap_sig_89)
    begin
        if (ap_sig_89) then 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st6_fsm_5_assign_proc : process(ap_sig_104)
    begin
        if (ap_sig_104) then 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st7_fsm_6_assign_proc : process(ap_sig_165)
    begin
        if (ap_sig_165) then 
            ap_sig_cseq_ST_st7_fsm_6 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st7_fsm_6 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st8_fsm_7_assign_proc : process(ap_sig_182)
    begin
        if (ap_sig_182) then 
            ap_sig_cseq_ST_st8_fsm_7 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st8_fsm_7 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond12_fu_163_p2 <= "1" when (i_reg_92 = ap_const_lv4_A) else "0";
    exitcond13_fu_219_p2 <= "1" when (i4_reg_114 = ap_const_lv11_708) else "0";
    exitcond14_fu_193_p2 <= "1" when (k_reg_103 = ap_const_lv2_3) else "0";
    exitcond_fu_235_p2 <= "1" when (j_reg_125 = ap_const_lv4_A) else "0";
    grp_dut_knn_vote_fu_148_ap_start <= ap_reg_grp_dut_knn_vote_fu_148_ap_start;
    grp_dut_update_knn_fu_153_ap_start <= ap_reg_grp_dut_update_knn_fu_153_ap_start;
    i_8_fu_169_p2 <= std_logic_vector(unsigned(i_reg_92) + unsigned(ap_const_lv4_1));
    i_9_fu_225_p2 <= std_logic_vector(unsigned(i4_reg_114) + unsigned(ap_const_lv11_1));
    j_3_fu_241_p2 <= std_logic_vector(unsigned(j_reg_125) + unsigned(ap_const_lv4_1));
    k_4_fu_199_p2 <= std_logic_vector(unsigned(k_reg_103) + unsigned(ap_const_lv2_1));

    knn_set_V_address0_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2, grp_dut_knn_vote_fu_148_knn_set_V_address0, grp_dut_update_knn_fu_153_min_distances_V_address0, ap_sig_cseq_ST_st7_fsm_6, ap_sig_cseq_ST_st8_fsm_7, tmp_33_cast_fu_214_p1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
            knn_set_V_address0 <= tmp_33_cast_fu_214_p1(5 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6)) then 
            knn_set_V_address0 <= grp_dut_update_knn_fu_153_min_distances_V_address0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7)) then 
            knn_set_V_address0 <= grp_dut_knn_vote_fu_148_knn_set_V_address0;
        else 
            knn_set_V_address0 <= "XXXXX";
        end if; 
    end process;


    knn_set_V_ce0_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2, grp_dut_knn_vote_fu_148_knn_set_V_ce0, grp_dut_update_knn_fu_153_min_distances_V_ce0, ap_sig_cseq_ST_st7_fsm_6, ap_sig_cseq_ST_st8_fsm_7)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
            knn_set_V_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6)) then 
            knn_set_V_ce0 <= grp_dut_update_knn_fu_153_min_distances_V_ce0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7)) then 
            knn_set_V_ce0 <= grp_dut_knn_vote_fu_148_knn_set_V_ce0;
        else 
            knn_set_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    knn_set_V_d0_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2, grp_dut_update_knn_fu_153_min_distances_V_d0, ap_sig_cseq_ST_st7_fsm_6)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
            knn_set_V_d0 <= ap_const_lv6_32;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6)) then 
            knn_set_V_d0 <= grp_dut_update_knn_fu_153_min_distances_V_d0;
        else 
            knn_set_V_d0 <= "XXXXXX";
        end if; 
    end process;


    knn_set_V_we0_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2, grp_dut_update_knn_fu_153_min_distances_V_we0, exitcond14_fu_193_p2, ap_sig_cseq_ST_st7_fsm_6)
    begin
        if ((((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and (ap_const_lv1_0 = exitcond14_fu_193_p2)))) then 
            knn_set_V_we0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6)) then 
            knn_set_V_we0 <= grp_dut_update_knn_fu_153_min_distances_V_we0;
        else 
            knn_set_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    next_mul_fu_247_p2 <= std_logic_vector(unsigned(phi_mul_reg_137) + unsigned(ap_const_lv15_708));
    tmp_23_cast_fu_205_p1 <= std_logic_vector(resize(unsigned(k_reg_103),6));
    tmp_28_fu_187_p2 <= std_logic_vector(unsigned(tmp_s_fu_179_p3) - unsigned(tmp_cast_fu_175_p1));
    tmp_29_fu_209_p2 <= std_logic_vector(unsigned(tmp_28_reg_276) + unsigned(tmp_23_cast_fu_205_p1));
    tmp_30_fu_253_p2 <= std_logic_vector(unsigned(phi_mul_reg_137) + unsigned(tmp_cast_20_reg_297));
        tmp_33_cast_fu_214_p1 <= std_logic_vector(resize(signed(tmp_29_fu_209_p2),64));

    tmp_35_cast_fu_258_p1 <= std_logic_vector(resize(unsigned(tmp_30_fu_253_p2),64));
    tmp_cast_20_fu_231_p1 <= std_logic_vector(resize(unsigned(i4_reg_114),15));
    tmp_cast_fu_175_p1 <= std_logic_vector(resize(unsigned(i_reg_92),6));
    tmp_s_fu_179_p3 <= (i_reg_92 & ap_const_lv2_0);
    training_data_V_address0 <= tmp_35_cast_fu_258_p1(15 - 1 downto 0);

    training_data_V_ce0_assign_proc : process(ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            training_data_V_ce0 <= ap_const_logic_1;
        else 
            training_data_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;
