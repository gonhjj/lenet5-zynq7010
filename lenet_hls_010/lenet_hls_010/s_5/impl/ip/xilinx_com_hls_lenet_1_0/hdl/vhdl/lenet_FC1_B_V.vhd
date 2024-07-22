-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lenet_FC1_B_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 120
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of lenet_FC1_B_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110100", 1 => "01010100", 2 => "00011111", 3 => "10111110", 
    4 => "11001000", 5 => "01001111", 6 => "10111010", 7 => "00101001", 
    8 => "10111111", 9 => "10101000", 10 => "10111100", 11 => "11111000", 
    12 => "10100101", 13 => "10111110", 14 => "01000010", 15 => "11111011", 
    16 => "11000110", 17 => "11001001", 18 => "11111101", 19 => "10101000", 
    20 => "11010010", 21 => "10111111", 22 => "00100110", 23 => "11010011", 
    24 => "00111101", 25 => "00010101", 26 => "01001110", 27 => "00001111", 
    28 => "01011011", 29 => "00110001", 30 => "10110111", 31 => "01011110", 
    32 => "00001110", 33 => "11100011", 34 => "10101111", 35 => "01011011", 
    36 => "00110101", 37 => "11110101", 38 => "11110001", 39 => "01001100", 
    40 => "11000110", 41 => "10111100", 42 => "11010001", 43 => "11010010", 
    44 => "11100010", 45 => "00100000", 46 => "00101011", 47 => "11000101", 
    48 => "10100011", 49 => "11110001", 50 => "11111100", 51 => "00100000", 
    52 => "11100000", 53 => "11010001", 54 => "11110111", 55 => "10111100", 
    56 => "01011101", 57 => "10101000", 58 => "10100010", 59 => "11001110", 
    60 => "11110000", 61 => "11011000", 62 => "01100110", 63 => "01011011", 
    64 => "11100110", 65 => "01001111", 66 => "01100101", 67 => "11100001", 
    68 => "00111011", 69 => "00000100", 70 => "11011100", 71 => "10101111", 
    72 => "01100000", 73 => "11001110", 74 => "00110010", 75 => "01000010", 
    76 => "11001010", 77 => "00101110", 78 => "01001111", 79 => "11001111", 
    80 => "01001110", 81 => "01100110", 82 => "11110000", 83 => "10010110", 
    84 to 119=> "00000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity lenet_FC1_B_V is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 120;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of lenet_FC1_B_V is
    component lenet_FC1_B_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lenet_FC1_B_V_rom_U :  component lenet_FC1_B_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


