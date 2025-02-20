// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fc1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        out_V_address0,
        out_V_ce0,
        out_V_we0,
        out_V_d0,
        out_V_q0,
        Re_out_V_address0,
        Re_out_V_ce0,
        Re_out_V_q0
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [6:0] out_V_address0;
output   out_V_ce0;
output   out_V_we0;
output  [15:0] out_V_d0;
input  [15:0] out_V_q0;
output  [6:0] Re_out_V_address0;
output   Re_out_V_ce0;
input  [15:0] Re_out_V_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[6:0] out_V_address0;
reg out_V_ce0;
reg out_V_we0;
reg[15:0] out_V_d0;
reg Re_out_V_ce0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [13:0] FC1_W_V_address0;
reg    FC1_W_V_ce0;
wire  signed [8:0] FC1_W_V_q0;
wire   [6:0] FC1_B_V_address0;
reg    FC1_B_V_ce0;
wire   [7:0] FC1_B_V_q0;
wire   [6:0] i_fu_159_p2;
reg   [6:0] i_reg_331;
wire    ap_CS_fsm_state2;
wire   [14:0] sub_ln1117_fu_194_p2;
reg   [14:0] sub_ln1117_reg_336;
wire   [0:0] icmp_ln198_fu_153_p2;
reg   [6:0] out_V_addr_reg_341;
wire   [6:0] j_fu_206_p2;
reg   [6:0] j_reg_349;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln201_fu_200_p2;
wire    ap_CS_fsm_state4;
wire   [6:0] i_4_fu_262_p2;
reg   [6:0] i_4_reg_372;
wire    ap_CS_fsm_state5;
reg   [6:0] out_V_addr_2_reg_377;
wire   [0:0] icmp_ln207_fu_256_p2;
reg   [6:0] i_0_reg_107;
reg   [15:0] p_Val2_9_reg_118;
reg   [6:0] j_0_reg_131;
reg   [6:0] i1_0_reg_142;
wire    ap_CS_fsm_state6;
wire   [63:0] zext_ln200_fu_165_p1;
wire  signed [63:0] sext_ln1117_fu_226_p1;
wire   [63:0] zext_ln203_fu_212_p1;
wire   [63:0] zext_ln209_fu_268_p1;
wire   [15:0] zext_ln210_fu_314_p1;
wire   [13:0] tmp_fu_170_p3;
wire   [9:0] tmp_s_fu_182_p3;
wire   [14:0] zext_ln1117_fu_178_p1;
wire   [14:0] zext_ln1117_2_fu_190_p1;
wire   [14:0] zext_ln1117_3_fu_217_p1;
wire   [14:0] add_ln1117_fu_221_p2;
wire  signed [25:0] grp_fu_319_p3;
wire  signed [7:0] sext_ln1265_fu_274_p0;
wire  signed [7:0] sext_ln703_fu_278_p0;
wire  signed [15:0] sext_ln1265_fu_274_p1;
wire   [14:0] trunc_ln703_fu_282_p1;
wire  signed [14:0] sext_ln703_fu_278_p1;
wire   [15:0] add_ln703_fu_286_p2;
wire   [0:0] tmp_10_fu_298_p3;
wire   [14:0] add_ln1495_fu_292_p2;
wire   [14:0] select_ln210_fu_306_p3;
wire   [25:0] grp_fu_319_p2;
reg   [5:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
end

fc1_FC1_W_V #(
    .DataWidth( 9 ),
    .AddressRange( 10080 ),
    .AddressWidth( 14 ))
FC1_W_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(FC1_W_V_address0),
    .ce0(FC1_W_V_ce0),
    .q0(FC1_W_V_q0)
);

fc1_FC1_B_V #(
    .DataWidth( 8 ),
    .AddressRange( 120 ),
    .AddressWidth( 7 ))
FC1_B_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(FC1_B_V_address0),
    .ce0(FC1_B_V_ce0),
    .q0(FC1_B_V_q0)
);

lenet_mac_muladd_fYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 9 ),
    .din2_WIDTH( 26 ),
    .dout_WIDTH( 26 ))
lenet_mac_muladd_fYi_U25(
    .din0(Re_out_V_q0),
    .din1(FC1_W_V_q0),
    .din2(grp_fu_319_p2),
    .dout(grp_fu_319_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln198_fu_153_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i1_0_reg_142 <= 7'd0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        i1_0_reg_142 <= i_4_reg_372;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln201_fu_200_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_0_reg_107 <= i_reg_331;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_107 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        j_0_reg_131 <= j_reg_349;
    end else if (((icmp_ln198_fu_153_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_reg_131 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        p_Val2_9_reg_118 <= {{grp_fu_319_p3[25:10]}};
    end else if (((icmp_ln198_fu_153_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_Val2_9_reg_118 <= 16'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_4_reg_372 <= i_4_fu_262_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_331 <= i_fu_159_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_reg_349 <= j_fu_206_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln207_fu_256_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        out_V_addr_2_reg_377 <= zext_ln209_fu_268_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln198_fu_153_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        out_V_addr_reg_341 <= zext_ln200_fu_165_p1;
        sub_ln1117_reg_336[14 : 3] <= sub_ln1117_fu_194_p2[14 : 3];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        FC1_B_V_ce0 = 1'b1;
    end else begin
        FC1_B_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        FC1_W_V_ce0 = 1'b1;
    end else begin
        FC1_W_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Re_out_V_ce0 = 1'b1;
    end else begin
        Re_out_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln207_fu_256_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln207_fu_256_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        out_V_address0 = out_V_addr_2_reg_377;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        out_V_address0 = zext_ln209_fu_268_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        out_V_address0 = out_V_addr_reg_341;
    end else begin
        out_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state6))) begin
        out_V_ce0 = 1'b1;
    end else begin
        out_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        out_V_d0 = zext_ln210_fu_314_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        out_V_d0 = p_Val2_9_reg_118;
    end else begin
        out_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state6))) begin
        out_V_we0 = 1'b1;
    end else begin
        out_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln198_fu_153_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln201_fu_200_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state5 : begin
            if (((icmp_ln207_fu_256_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign FC1_B_V_address0 = zext_ln209_fu_268_p1;

assign FC1_W_V_address0 = sext_ln1117_fu_226_p1;

assign Re_out_V_address0 = zext_ln203_fu_212_p1;

assign add_ln1117_fu_221_p2 = (zext_ln1117_3_fu_217_p1 + sub_ln1117_reg_336);

assign add_ln1495_fu_292_p2 = ($signed(trunc_ln703_fu_282_p1) + $signed(sext_ln703_fu_278_p1));

assign add_ln703_fu_286_p2 = ($signed(sext_ln1265_fu_274_p1) + $signed(out_V_q0));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign grp_fu_319_p2 = {{p_Val2_9_reg_118}, {10'd0}};

assign i_4_fu_262_p2 = (i1_0_reg_142 + 7'd1);

assign i_fu_159_p2 = (i_0_reg_107 + 7'd1);

assign icmp_ln198_fu_153_p2 = ((i_0_reg_107 == 7'd84) ? 1'b1 : 1'b0);

assign icmp_ln201_fu_200_p2 = ((j_0_reg_131 == 7'd120) ? 1'b1 : 1'b0);

assign icmp_ln207_fu_256_p2 = ((i1_0_reg_142 == 7'd84) ? 1'b1 : 1'b0);

assign j_fu_206_p2 = (j_0_reg_131 + 7'd1);

assign select_ln210_fu_306_p3 = ((tmp_10_fu_298_p3[0:0] === 1'b1) ? 15'd0 : add_ln1495_fu_292_p2);

assign sext_ln1117_fu_226_p1 = $signed(add_ln1117_fu_221_p2);

assign sext_ln1265_fu_274_p0 = FC1_B_V_q0;

assign sext_ln1265_fu_274_p1 = sext_ln1265_fu_274_p0;

assign sext_ln703_fu_278_p0 = FC1_B_V_q0;

assign sext_ln703_fu_278_p1 = sext_ln703_fu_278_p0;

assign sub_ln1117_fu_194_p2 = (zext_ln1117_fu_178_p1 - zext_ln1117_2_fu_190_p1);

assign tmp_10_fu_298_p3 = add_ln703_fu_286_p2[32'd15];

assign tmp_fu_170_p3 = {{i_0_reg_107}, {7'd0}};

assign tmp_s_fu_182_p3 = {{i_0_reg_107}, {3'd0}};

assign trunc_ln703_fu_282_p1 = out_V_q0[14:0];

assign zext_ln1117_2_fu_190_p1 = tmp_s_fu_182_p3;

assign zext_ln1117_3_fu_217_p1 = j_0_reg_131;

assign zext_ln1117_fu_178_p1 = tmp_fu_170_p3;

assign zext_ln200_fu_165_p1 = i_0_reg_107;

assign zext_ln203_fu_212_p1 = j_0_reg_131;

assign zext_ln209_fu_268_p1 = i1_0_reg_142;

assign zext_ln210_fu_314_p1 = select_ln210_fu_306_p3;

always @ (posedge ap_clk) begin
    sub_ln1117_reg_336[2:0] <= 3'b000;
end

endmodule //fc1
