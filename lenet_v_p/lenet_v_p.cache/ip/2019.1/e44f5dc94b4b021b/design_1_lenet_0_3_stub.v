// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Fri Jul  5 18:49:21 2024
// Host        : LAPTOP-A2CPK32I running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_lenet_0_3_stub.v
// Design      : design_1_lenet_0_3
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z010clg400-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "lenet,Vivado 2019.1" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_Crtl_AWADDR, s_axi_Crtl_AWVALID, 
  s_axi_Crtl_AWREADY, s_axi_Crtl_WDATA, s_axi_Crtl_WSTRB, s_axi_Crtl_WVALID, 
  s_axi_Crtl_WREADY, s_axi_Crtl_BRESP, s_axi_Crtl_BVALID, s_axi_Crtl_BREADY, 
  s_axi_Crtl_ARADDR, s_axi_Crtl_ARVALID, s_axi_Crtl_ARREADY, s_axi_Crtl_RDATA, 
  s_axi_Crtl_RRESP, s_axi_Crtl_RVALID, s_axi_Crtl_RREADY, ap_clk, ap_rst_n, interrupt, 
  input_r_Clk_A, input_r_Rst_A, input_r_EN_A, input_r_WEN_A, input_r_Addr_A, input_r_Din_A, 
  input_r_Dout_A, Cout_Clk_A, Cout_Rst_A, Cout_EN_A, Cout_WEN_A, Cout_Addr_A, Cout_Din_A, 
  Cout_Dout_A)
/* synthesis syn_black_box black_box_pad_pin="s_axi_Crtl_AWADDR[3:0],s_axi_Crtl_AWVALID,s_axi_Crtl_AWREADY,s_axi_Crtl_WDATA[31:0],s_axi_Crtl_WSTRB[3:0],s_axi_Crtl_WVALID,s_axi_Crtl_WREADY,s_axi_Crtl_BRESP[1:0],s_axi_Crtl_BVALID,s_axi_Crtl_BREADY,s_axi_Crtl_ARADDR[3:0],s_axi_Crtl_ARVALID,s_axi_Crtl_ARREADY,s_axi_Crtl_RDATA[31:0],s_axi_Crtl_RRESP[1:0],s_axi_Crtl_RVALID,s_axi_Crtl_RREADY,ap_clk,ap_rst_n,interrupt,input_r_Clk_A,input_r_Rst_A,input_r_EN_A,input_r_WEN_A[3:0],input_r_Addr_A[31:0],input_r_Din_A[31:0],input_r_Dout_A[31:0],Cout_Clk_A,Cout_Rst_A,Cout_EN_A,Cout_WEN_A[3:0],Cout_Addr_A[31:0],Cout_Din_A[31:0],Cout_Dout_A[31:0]" */;
  input [3:0]s_axi_Crtl_AWADDR;
  input s_axi_Crtl_AWVALID;
  output s_axi_Crtl_AWREADY;
  input [31:0]s_axi_Crtl_WDATA;
  input [3:0]s_axi_Crtl_WSTRB;
  input s_axi_Crtl_WVALID;
  output s_axi_Crtl_WREADY;
  output [1:0]s_axi_Crtl_BRESP;
  output s_axi_Crtl_BVALID;
  input s_axi_Crtl_BREADY;
  input [3:0]s_axi_Crtl_ARADDR;
  input s_axi_Crtl_ARVALID;
  output s_axi_Crtl_ARREADY;
  output [31:0]s_axi_Crtl_RDATA;
  output [1:0]s_axi_Crtl_RRESP;
  output s_axi_Crtl_RVALID;
  input s_axi_Crtl_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output input_r_Clk_A;
  output input_r_Rst_A;
  output input_r_EN_A;
  output [3:0]input_r_WEN_A;
  output [31:0]input_r_Addr_A;
  output [31:0]input_r_Din_A;
  input [31:0]input_r_Dout_A;
  output Cout_Clk_A;
  output Cout_Rst_A;
  output Cout_EN_A;
  output [3:0]Cout_WEN_A;
  output [31:0]Cout_Addr_A;
  output [31:0]Cout_Din_A;
  input [31:0]Cout_Dout_A;
endmodule
