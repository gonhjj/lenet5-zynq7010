-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity lenet_K3_B_V_rom is 
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


architecture rtl of lenet_K3_B_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011001", 1 => "00110111", 2 => "11011111", 3 => "11011000", 
    4 => "00011001", 5 => "00111010", 6 => "00110001", 7 => "00100100", 
    8 => "00100001", 9 => "00001010", 10 => "00101101", 11 => "00010000", 
    12 => "11011110", 13 => "00011110", 14 => "00101100", 15 => "00101010", 
    16 => "00010111", 17 => "11111000", 18 => "11100001", 19 => "00101011", 
    20 => "11011100", 21 => "00000111", 22 => "11011000", 23 => "11111010", 
    24 => "00001000", 25 => "11101100", 26 to 27=> "11011010", 28 => "11101100", 
    29 => "11110000", 30 => "11011100", 31 => "11111101", 32 => "11110100", 
    33 => "00010101", 34 => "11110011", 35 => "00010101", 36 => "00110001", 
    37 => "00100110", 38 => "00011110", 39 => "11100001", 40 => "00010000", 
    41 => "00001000", 42 => "11111011", 43 => "11011101", 44 => "11100101", 
    45 => "11011110", 46 => "00011101", 47 => "00001110", 48 => "00000001", 
    49 => "11010110", 50 to 51=> "00000000", 52 => "00100001", 53 => "00100000", 
    54 => "00000100", 55 => "11110000", 56 => "11000111", 57 => "11001111", 
    58 => "11100011", 59 => "00110010", 60 => "11111001", 61 => "00111101", 
    62 => "00100011", 63 => "11101110", 64 => "00000111", 65 => "11111100", 
    66 => "11001110", 67 => "11001100", 68 => "00001111", 69 => "00001011", 
    70 => "00010101", 71 => "00100011", 72 => "11101010", 73 => "00001111", 
    74 => "11101001", 75 => "11100001", 76 => "00000011", 77 => "11111111", 
    78 => "11101100", 79 => "01000100", 80 => "11101000", 81 => "00010010", 
    82 => "11010111", 83 => "11011100", 84 => "00011101", 85 => "00011001", 
    86 => "00110100", 87 => "00001011", 88 => "11100110", 89 => "00011001", 
    90 => "11101110", 91 => "00011000", 92 => "11010011", 93 => "00100010", 
    94 => "00010100", 95 => "00001000", 96 => "11111110", 97 => "00001010", 
    98 => "00001111", 99 => "11011011", 100 => "00001110", 101 => "11010100", 
    102 => "11111100", 103 => "11110011", 104 => "00000100", 105 => "11001111", 
    106 => "11111011", 107 => "00000100", 108 => "00100001", 109 => "00001100", 
    110 => "00011100", 111 => "11110010", 112 => "00110000", 113 => "11111011", 
    114 => "11100101", 115 => "00011110", 116 => "00011001", 117 => "00011101", 
    118 => "11010111", 119 => "00101110" );

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

entity lenet_K3_B_V is
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

architecture arch of lenet_K3_B_V is
    component lenet_K3_B_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    lenet_K3_B_V_rom_U :  component lenet_K3_B_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


