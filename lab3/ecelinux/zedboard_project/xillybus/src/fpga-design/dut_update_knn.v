// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dut_update_knn (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        test_inst_V,
        train_inst_V,
        min_distances_V_address0,
        min_distances_V_ce0,
        min_distances_V_we0,
        min_distances_V_d0,
        min_distances_V_q0,
        tmp_27
);

parameter    ap_ST_st1_fsm_0 = 4'b1;
parameter    ap_ST_st2_fsm_1 = 4'b10;
parameter    ap_ST_st3_fsm_2 = 4'b100;
parameter    ap_ST_st4_fsm_3 = 4'b1000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv6_0 = 6'b000000;
parameter    ap_const_lv2_0 = 2'b00;
parameter    ap_const_lv32_3 = 32'b11;
parameter    ap_const_lv2_1 = 2'b1;
parameter    ap_const_lv6_31 = 6'b110001;
parameter    ap_const_lv6_1 = 6'b1;
parameter    ap_const_lv2_3 = 2'b11;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [48:0] test_inst_V;
input  [47:0] train_inst_V;
output  [4:0] min_distances_V_address0;
output   min_distances_V_ce0;
output   min_distances_V_we0;
output  [5:0] min_distances_V_d0;
input  [5:0] min_distances_V_q0;
input  [3:0] tmp_27;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[4:0] min_distances_V_address0;
reg min_distances_V_ce0;
reg min_distances_V_we0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_21;
wire   [5:0] tmp_1_fu_126_p2;
reg   [5:0] tmp_1_reg_221;
wire   [48:0] r_V_fu_136_p2;
reg   [48:0] r_V_reg_226;
wire   [5:0] i_fu_152_p2;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_51;
wire   [5:0] dist_V_fu_169_p2;
wire   [0:0] exitcond1_fu_146_p2;
wire   [1:0] i_1_fu_181_p2;
reg   [1:0] i_1_reg_254;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_66;
wire   [0:0] tmp_4_fu_190_p2;
reg   [0:0] tmp_4_reg_259;
wire   [0:0] exitcond_fu_175_p2;
reg   [4:0] min_distances_V_addr_reg_263;
reg   [5:0] p_s_reg_74;
reg   [5:0] bvh_d_index_reg_87;
reg   [1:0] i1_reg_98;
reg    ap_sig_cseq_ST_st4_fsm_3;
reg    ap_sig_94;
wire  signed [63:0] tmp_2_cast_fu_205_p1;
reg   [1:0] p_1_fu_40;
wire   [0:0] tmp_6_fu_210_p2;
wire   [5:0] tmp_fu_118_p3;
wire   [5:0] tmp_27_cast_cast_fu_114_p1;
wire   [48:0] train_inst_V_cast_fu_132_p1;
wire   [31:0] index_assign_cast2_fu_142_p1;
wire   [0:0] tmp_3_fu_158_p3;
wire   [5:0] tmp_1_cast_fu_165_p1;
wire   [5:0] tmp_5_cast_fu_196_p1;
wire   [5:0] tmp_2_fu_200_p2;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'b1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond1_fu_146_p2 == 1'b0))) begin
        bvh_d_index_reg_87 <= i_fu_152_p2;
    end else if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == 1'b0))) begin
        bvh_d_index_reg_87 <= ap_const_lv6_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_sig_cseq_ST_st4_fsm_3)) begin
        i1_reg_98 <= i_1_reg_254;
    end else if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond1_fu_146_p2 == 1'b0))) begin
        i1_reg_98 <= ap_const_lv2_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st4_fsm_3) & ~(1'b0 == tmp_4_reg_259) & ~(1'b0 == tmp_6_fu_210_p2))) begin
                p_1_fu_40[0] <= 1'b1;
    end else if ((((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond1_fu_146_p2 == 1'b0)) | ((1'b1 == ap_sig_cseq_ST_st4_fsm_3) & ~(1'b0 == tmp_4_reg_259) & (1'b0 == tmp_6_fu_210_p2)))) begin
                p_1_fu_40[0] <= 1'b0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond1_fu_146_p2 == 1'b0))) begin
        p_s_reg_74 <= dist_V_fu_169_p2;
    end else if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == 1'b0))) begin
        p_s_reg_74 <= ap_const_lv6_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_sig_cseq_ST_st3_fsm_2)) begin
        i_1_reg_254 <= i_1_fu_181_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & (1'b0 == exitcond_fu_175_p2) & ~(1'b0 == tmp_4_fu_190_p2))) begin
        min_distances_V_addr_reg_263 <= tmp_2_cast_fu_205_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == 1'b0))) begin
        r_V_reg_226 <= r_V_fu_136_p2;
        tmp_1_reg_221 <= tmp_1_fu_126_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & (1'b0 == exitcond_fu_175_p2))) begin
        tmp_4_reg_259 <= tmp_4_fu_190_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0)) | ((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & ~(1'b0 == exitcond_fu_175_p2)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & ~(1'b0 == exitcond_fu_175_p2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_21) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_51) begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_66) begin
        ap_sig_cseq_ST_st3_fsm_2 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_94) begin
        ap_sig_cseq_ST_st4_fsm_3 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_3 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st4_fsm_3)) begin
        min_distances_V_address0 = min_distances_V_addr_reg_263;
    end else if ((1'b1 == ap_sig_cseq_ST_st3_fsm_2)) begin
        min_distances_V_address0 = tmp_2_cast_fu_205_p1;
    end else begin
        min_distances_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) | (1'b1 == ap_sig_cseq_ST_st4_fsm_3))) begin
        min_distances_V_ce0 = 1'b1;
    end else begin
        min_distances_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st4_fsm_3) & ~(1'b0 == tmp_4_reg_259) & ~(1'b0 == tmp_6_fu_210_p2))) begin
        min_distances_V_we0 = 1'b1;
    end else begin
        min_distances_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            if (~(ap_start == 1'b0)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : begin
            if (~(exitcond1_fu_146_p2 == 1'b0)) begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end
        end
        ap_ST_st3_fsm_2 : begin
            if (~(1'b0 == exitcond_fu_175_p2)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st4_fsm_3;
            end
        end
        ap_ST_st4_fsm_3 : begin
            ap_NS_fsm = ap_ST_st3_fsm_2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_sig_21 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_51 = (1'b1 == ap_CS_fsm[ap_const_lv32_1]);
end

always @ (*) begin
    ap_sig_66 = (1'b1 == ap_CS_fsm[ap_const_lv32_2]);
end

always @ (*) begin
    ap_sig_94 = (1'b1 == ap_CS_fsm[ap_const_lv32_3]);
end

assign dist_V_fu_169_p2 = (p_s_reg_74 + tmp_1_cast_fu_165_p1);

assign exitcond1_fu_146_p2 = ((bvh_d_index_reg_87 == ap_const_lv6_31) ? 1'b1 : 1'b0);

assign exitcond_fu_175_p2 = ((i1_reg_98 == ap_const_lv2_3) ? 1'b1 : 1'b0);

assign i_1_fu_181_p2 = (i1_reg_98 + ap_const_lv2_1);

assign i_fu_152_p2 = (bvh_d_index_reg_87 + ap_const_lv6_1);

assign index_assign_cast2_fu_142_p1 = bvh_d_index_reg_87;

assign min_distances_V_d0 = p_s_reg_74;

assign r_V_fu_136_p2 = (train_inst_V_cast_fu_132_p1 ^ test_inst_V);

assign tmp_1_cast_fu_165_p1 = tmp_3_fu_158_p3;

assign tmp_1_fu_126_p2 = (tmp_fu_118_p3 - tmp_27_cast_cast_fu_114_p1);

assign tmp_27_cast_cast_fu_114_p1 = tmp_27;

assign tmp_2_cast_fu_205_p1 = $signed(tmp_2_fu_200_p2);

assign tmp_2_fu_200_p2 = (tmp_1_reg_221 + tmp_5_cast_fu_196_p1);

assign tmp_3_fu_158_p3 = r_V_reg_226[index_assign_cast2_fu_142_p1];

assign tmp_4_fu_190_p2 = ((p_1_fu_40 == ap_const_lv2_0) ? 1'b1 : 1'b0);

assign tmp_5_cast_fu_196_p1 = i1_reg_98;

assign tmp_6_fu_210_p2 = ((min_distances_V_q0 > p_s_reg_74) ? 1'b1 : 1'b0);

assign tmp_fu_118_p3 = {{tmp_27}, {ap_const_lv2_0}};

assign train_inst_V_cast_fu_132_p1 = train_inst_V;

always @ (posedge ap_clk) begin
    p_1_fu_40[1] <= 1'b0;
end

endmodule //dut_update_knn
