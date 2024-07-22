-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
-- Date        : Fri Jul  5 18:49:21 2024
-- Host        : LAPTOP-A2CPK32I running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_lenet_0_3_stub.vhdl
-- Design      : design_1_lenet_0_3
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z010clg400-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_Crtl_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_Crtl_AWVALID : in STD_LOGIC;
    s_axi_Crtl_AWREADY : out STD_LOGIC;
    s_axi_Crtl_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_Crtl_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_Crtl_WVALID : in STD_LOGIC;
    s_axi_Crtl_WREADY : out STD_LOGIC;
    s_axi_Crtl_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_Crtl_BVALID : out STD_LOGIC;
    s_axi_Crtl_BREADY : in STD_LOGIC;
    s_axi_Crtl_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_Crtl_ARVALID : in STD_LOGIC;
    s_axi_Crtl_ARREADY : out STD_LOGIC;
    s_axi_Crtl_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_Crtl_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_Crtl_RVALID : out STD_LOGIC;
    s_axi_Crtl_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    input_r_Clk_A : out STD_LOGIC;
    input_r_Rst_A : out STD_LOGIC;
    input_r_EN_A : out STD_LOGIC;
    input_r_WEN_A : out STD_LOGIC_VECTOR ( 3 downto 0 );
    input_r_Addr_A : out STD_LOGIC_VECTOR ( 31 downto 0 );
    input_r_Din_A : out STD_LOGIC_VECTOR ( 31 downto 0 );
    input_r_Dout_A : in STD_LOGIC_VECTOR ( 31 downto 0 );
    Cout_Clk_A : out STD_LOGIC;
    Cout_Rst_A : out STD_LOGIC;
    Cout_EN_A : out STD_LOGIC;
    Cout_WEN_A : out STD_LOGIC_VECTOR ( 3 downto 0 );
    Cout_Addr_A : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Cout_Din_A : out STD_LOGIC_VECTOR ( 31 downto 0 );
    Cout_Dout_A : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_Crtl_AWADDR[3:0],s_axi_Crtl_AWVALID,s_axi_Crtl_AWREADY,s_axi_Crtl_WDATA[31:0],s_axi_Crtl_WSTRB[3:0],s_axi_Crtl_WVALID,s_axi_Crtl_WREADY,s_axi_Crtl_BRESP[1:0],s_axi_Crtl_BVALID,s_axi_Crtl_BREADY,s_axi_Crtl_ARADDR[3:0],s_axi_Crtl_ARVALID,s_axi_Crtl_ARREADY,s_axi_Crtl_RDATA[31:0],s_axi_Crtl_RRESP[1:0],s_axi_Crtl_RVALID,s_axi_Crtl_RREADY,ap_clk,ap_rst_n,interrupt,input_r_Clk_A,input_r_Rst_A,input_r_EN_A,input_r_WEN_A[3:0],input_r_Addr_A[31:0],input_r_Din_A[31:0],input_r_Dout_A[31:0],Cout_Clk_A,Cout_Rst_A,Cout_EN_A,Cout_WEN_A[3:0],Cout_Addr_A[31:0],Cout_Din_A[31:0],Cout_Dout_A[31:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "lenet,Vivado 2019.1";
begin
end;
