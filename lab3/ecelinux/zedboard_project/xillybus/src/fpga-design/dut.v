// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="dut,hls_ip_2016_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.819500,HLS_SYN_LAT=1084569,HLS_SYN_TPT=none,HLS_SYN_MEM=97,HLS_SYN_DSP=0,HLS_SYN_FF=562,HLS_SYN_LUT=734}" *)

module dut (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        strm_in_V_V_dout,
        strm_in_V_V_empty_n,
        strm_in_V_V_read,
        strm_out_V_V_din,
        strm_out_V_V_full_n,
        strm_out_V_V_write
);

parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_st2_fsm_1 = 3'b10;
parameter    ap_ST_st3_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] strm_in_V_V_dout;
input   strm_in_V_V_empty_n;
output   strm_in_V_V_read;
output  [31:0] strm_out_V_V_din;
input   strm_out_V_V_full_n;
output   strm_out_V_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg strm_in_V_V_read;
reg strm_out_V_V_write;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_18;
reg    strm_in_V_V_blk_n;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_42;
reg    strm_out_V_V_blk_n;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_51;
reg   [31:0] tmp_V_reg_83;
reg    ap_sig_57;
wire   [48:0] p_Result_s_fu_70_p3;
reg   [48:0] p_Result_s_reg_88;
wire    grp_dut_digitrec_fu_59_ap_start;
wire    grp_dut_digitrec_fu_59_ap_done;
wire    grp_dut_digitrec_fu_59_ap_idle;
wire    grp_dut_digitrec_fu_59_ap_ready;
wire   [3:0] grp_dut_digitrec_fu_59_ap_return;
reg    ap_reg_grp_dut_digitrec_fu_59_ap_start;
wire   [16:0] tmp_fu_66_p1;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'b1;
#0 ap_reg_grp_dut_digitrec_fu_59_ap_start = 1'b0;
end

dut_digitrec grp_dut_digitrec_fu_59(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_dut_digitrec_fu_59_ap_start),
    .ap_done(grp_dut_digitrec_fu_59_ap_done),
    .ap_idle(grp_dut_digitrec_fu_59_ap_idle),
    .ap_ready(grp_dut_digitrec_fu_59_ap_ready),
    .input_V(p_Result_s_reg_88),
    .ap_return(grp_dut_digitrec_fu_59_ap_return)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_reg_grp_dut_digitrec_fu_59_ap_start <= 1'b0;
    end else begin
        if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(strm_in_V_V_empty_n == 1'b0))) begin
            ap_reg_grp_dut_digitrec_fu_59_ap_start <= 1'b1;
        end else if ((1'b1 == grp_dut_digitrec_fu_59_ap_ready)) begin
            ap_reg_grp_dut_digitrec_fu_59_ap_start <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(strm_in_V_V_empty_n == 1'b0))) begin
        p_Result_s_reg_88 <= p_Result_s_fu_70_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_57)) begin
        tmp_V_reg_83 <= strm_in_V_V_dout;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & ~((strm_out_V_V_full_n == 1'b0) | (1'b0 == grp_dut_digitrec_fu_59_ap_done)))) begin
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
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & ~((strm_out_V_V_full_n == 1'b0) | (1'b0 == grp_dut_digitrec_fu_59_ap_done)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_18) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_42) begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_51) begin
        ap_sig_cseq_ST_st3_fsm_2 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == 1'b0)) | (1'b1 == ap_sig_cseq_ST_st2_fsm_1))) begin
        strm_in_V_V_blk_n = strm_in_V_V_empty_n;
    end else begin
        strm_in_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_57) | ((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(strm_in_V_V_empty_n == 1'b0)))) begin
        strm_in_V_V_read = 1'b1;
    end else begin
        strm_in_V_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st3_fsm_2)) begin
        strm_out_V_V_blk_n = strm_out_V_V_full_n;
    end else begin
        strm_out_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st3_fsm_2) & ~((strm_out_V_V_full_n == 1'b0) | (1'b0 == grp_dut_digitrec_fu_59_ap_done)))) begin
        strm_out_V_V_write = 1'b1;
    end else begin
        strm_out_V_V_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            if (~ap_sig_57) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : begin
            if (~(strm_in_V_V_empty_n == 1'b0)) begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end
        end
        ap_ST_st3_fsm_2 : begin
            if (~((strm_out_V_V_full_n == 1'b0) | (1'b0 == grp_dut_digitrec_fu_59_ap_done))) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_sig_18 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_42 = (1'b1 == ap_CS_fsm[ap_const_lv32_1]);
end

always @ (*) begin
    ap_sig_51 = (1'b1 == ap_CS_fsm[ap_const_lv32_2]);
end

always @ (*) begin
    ap_sig_57 = ((ap_start == 1'b0) | (strm_in_V_V_empty_n == 1'b0));
end

assign grp_dut_digitrec_fu_59_ap_start = ap_reg_grp_dut_digitrec_fu_59_ap_start;

assign p_Result_s_fu_70_p3 = {{tmp_fu_66_p1}, {tmp_V_reg_83}};

assign strm_out_V_V_din = grp_dut_digitrec_fu_59_ap_return;

assign tmp_fu_66_p1 = strm_in_V_V_dout[16:0];

endmodule //dut
