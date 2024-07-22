-- (c) Copyright 1995-2024 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: xilinx.com:hls:lenet:1.0
-- IP Revision: 2113632087

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY design_1_lenet_0_3 IS
  PORT (
    s_axi_Crtl_AWADDR : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_Crtl_AWVALID : IN STD_LOGIC;
    s_axi_Crtl_AWREADY : OUT STD_LOGIC;
    s_axi_Crtl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_Crtl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_Crtl_WVALID : IN STD_LOGIC;
    s_axi_Crtl_WREADY : OUT STD_LOGIC;
    s_axi_Crtl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_Crtl_BVALID : OUT STD_LOGIC;
    s_axi_Crtl_BREADY : IN STD_LOGIC;
    s_axi_Crtl_ARADDR : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_Crtl_ARVALID : IN STD_LOGIC;
    s_axi_Crtl_ARREADY : OUT STD_LOGIC;
    s_axi_Crtl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_Crtl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_Crtl_RVALID : OUT STD_LOGIC;
    s_axi_Crtl_RREADY : IN STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    interrupt : OUT STD_LOGIC;
    input_r_Clk_A : OUT STD_LOGIC;
    input_r_Rst_A : OUT STD_LOGIC;
    input_r_EN_A : OUT STD_LOGIC;
    input_r_WEN_A : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    input_r_Addr_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    input_r_Din_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    input_r_Dout_A : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    Cout_Clk_A : OUT STD_LOGIC;
    Cout_Rst_A : OUT STD_LOGIC;
    Cout_EN_A : OUT STD_LOGIC;
    Cout_WEN_A : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    Cout_Addr_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    Cout_Din_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    Cout_Dout_A : IN STD_LOGIC_VECTOR(31 DOWNTO 0)
  );
END design_1_lenet_0_3;

ARCHITECTURE design_1_lenet_0_3_arch OF design_1_lenet_0_3 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : STRING;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF design_1_lenet_0_3_arch: ARCHITECTURE IS "yes";
  COMPONENT lenet IS
    GENERIC (
      C_S_AXI_CRTL_ADDR_WIDTH : INTEGER;
      C_S_AXI_CRTL_DATA_WIDTH : INTEGER
    );
    PORT (
      s_axi_Crtl_AWADDR : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_Crtl_AWVALID : IN STD_LOGIC;
      s_axi_Crtl_AWREADY : OUT STD_LOGIC;
      s_axi_Crtl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_Crtl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_Crtl_WVALID : IN STD_LOGIC;
      s_axi_Crtl_WREADY : OUT STD_LOGIC;
      s_axi_Crtl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_Crtl_BVALID : OUT STD_LOGIC;
      s_axi_Crtl_BREADY : IN STD_LOGIC;
      s_axi_Crtl_ARADDR : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_Crtl_ARVALID : IN STD_LOGIC;
      s_axi_Crtl_ARREADY : OUT STD_LOGIC;
      s_axi_Crtl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_Crtl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_Crtl_RVALID : OUT STD_LOGIC;
      s_axi_Crtl_RREADY : IN STD_LOGIC;
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      interrupt : OUT STD_LOGIC;
      input_r_Clk_A : OUT STD_LOGIC;
      input_r_Rst_A : OUT STD_LOGIC;
      input_r_EN_A : OUT STD_LOGIC;
      input_r_WEN_A : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      input_r_Addr_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      input_r_Din_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      input_r_Dout_A : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      Cout_Clk_A : OUT STD_LOGIC;
      Cout_Rst_A : OUT STD_LOGIC;
      Cout_EN_A : OUT STD_LOGIC;
      Cout_WEN_A : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      Cout_Addr_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      Cout_Din_A : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      Cout_Dout_A : IN STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
  END COMPONENT lenet;
  ATTRIBUTE IP_DEFINITION_SOURCE : STRING;
  ATTRIBUTE IP_DEFINITION_SOURCE OF design_1_lenet_0_3_arch: ARCHITECTURE IS "HLS";
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_PARAMETER : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF Cout_Dout_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA DOUT";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_Din_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA DIN";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_Addr_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA ADDR";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_WEN_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA WE";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_EN_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA EN";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_Rst_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF Cout_Clk_A: SIGNAL IS "XIL_INTERFACENAME Cout_PORTA, MEM_WIDTH 32, MEM_SIZE 4, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, READ_LATENCY 1";
  ATTRIBUTE X_INTERFACE_INFO OF Cout_Clk_A: SIGNAL IS "xilinx.com:interface:bram:1.0 Cout_PORTA CLK";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_Dout_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA DOUT";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_Din_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA DIN";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_Addr_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA ADDR";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_WEN_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA WE";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_EN_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA EN";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_Rst_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF input_r_Clk_A: SIGNAL IS "XIL_INTERFACENAME input_r_PORTA, MEM_WIDTH 32, MEM_SIZE 4, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, READ_LATENCY 1";
  ATTRIBUTE X_INTERFACE_INFO OF input_r_Clk_A: SIGNAL IS "xilinx.com:interface:bram:1.0 input_r_PORTA CLK";
  ATTRIBUTE X_INTERFACE_PARAMETER OF interrupt: SIGNAL IS "XIL_INTERFACENAME interrupt, SENSITIVITY LEVEL_HIGH, PortWidth 1";
  ATTRIBUTE X_INTERFACE_INFO OF interrupt: SIGNAL IS "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_rst_n: SIGNAL IS "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_PARAMETER OF ap_clk: SIGNAL IS "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_Crtl, ASSOCIATED_RESET ap_rst_n, FREQ_HZ 50000000, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl AWVALID";
  ATTRIBUTE X_INTERFACE_PARAMETER OF s_axi_Crtl_AWADDR: SIGNAL IS "XIL_INTERFACENAME s_axi_Crtl, ADDR_WIDTH 4, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, FREQ_HZ 50000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, NUM_READ_THR" & 
"EADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_Crtl_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_Crtl AWADDR";
BEGIN
  U0 : lenet
    GENERIC MAP (
      C_S_AXI_CRTL_ADDR_WIDTH => 4,
      C_S_AXI_CRTL_DATA_WIDTH => 32
    )
    PORT MAP (
      s_axi_Crtl_AWADDR => s_axi_Crtl_AWADDR,
      s_axi_Crtl_AWVALID => s_axi_Crtl_AWVALID,
      s_axi_Crtl_AWREADY => s_axi_Crtl_AWREADY,
      s_axi_Crtl_WDATA => s_axi_Crtl_WDATA,
      s_axi_Crtl_WSTRB => s_axi_Crtl_WSTRB,
      s_axi_Crtl_WVALID => s_axi_Crtl_WVALID,
      s_axi_Crtl_WREADY => s_axi_Crtl_WREADY,
      s_axi_Crtl_BRESP => s_axi_Crtl_BRESP,
      s_axi_Crtl_BVALID => s_axi_Crtl_BVALID,
      s_axi_Crtl_BREADY => s_axi_Crtl_BREADY,
      s_axi_Crtl_ARADDR => s_axi_Crtl_ARADDR,
      s_axi_Crtl_ARVALID => s_axi_Crtl_ARVALID,
      s_axi_Crtl_ARREADY => s_axi_Crtl_ARREADY,
      s_axi_Crtl_RDATA => s_axi_Crtl_RDATA,
      s_axi_Crtl_RRESP => s_axi_Crtl_RRESP,
      s_axi_Crtl_RVALID => s_axi_Crtl_RVALID,
      s_axi_Crtl_RREADY => s_axi_Crtl_RREADY,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      interrupt => interrupt,
      input_r_Clk_A => input_r_Clk_A,
      input_r_Rst_A => input_r_Rst_A,
      input_r_EN_A => input_r_EN_A,
      input_r_WEN_A => input_r_WEN_A,
      input_r_Addr_A => input_r_Addr_A,
      input_r_Din_A => input_r_Din_A,
      input_r_Dout_A => input_r_Dout_A,
      Cout_Clk_A => Cout_Clk_A,
      Cout_Rst_A => Cout_Rst_A,
      Cout_EN_A => Cout_EN_A,
      Cout_WEN_A => Cout_WEN_A,
      Cout_Addr_A => Cout_Addr_A,
      Cout_Din_A => Cout_Din_A,
      Cout_Dout_A => Cout_Dout_A
    );
END design_1_lenet_0_3_arch;
