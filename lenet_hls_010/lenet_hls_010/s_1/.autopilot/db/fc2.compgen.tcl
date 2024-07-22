# This script segment is generated automatically by AutoPilot

set id 31
set name lenet_mac_muladd_g8j
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 16
set in0_signed 1
set in1_width 10
set in1_signed 1
set in2_width 26
set in2_signed 0
set out_width 26
set exp i0*i1+i2
set arg_lists {i0 {16 1 +} i1 {10 1 +} m {26 1 +} i2 {26 0 +} p {26 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 33
set hasByteEnable 0
set MemName fc2_FC2_W_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 10
set AddrRange 840
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "0010010010" "1101111100" "0010111011" "0000110011" "1110010010" "1110001001" "0000011100" "1111001111" "1111111011" "0001100111" "1111001100" "0000000100" "0001000100" "1110010011" "1111111100" "0010010110" "1111110110" "1110110111" "1100101000" "1111111010" "0010000111" "1110110000" "1110100100" "0000110110" "0001110111" "1110011101" "0000011010" "0001000110" "1111010110" "1110110110" "1101111001" "0000100111" "0001110001" "1111001100" "1111010010" "1111011010" "0001110001" "0000001101" "1111010100" "1111001110" "1111111010" "0001001101" "0000110011" "0001101110" "1110011001" "0001001001" "1110111101" "0000101011" "0010000000" "0001100110" "1111100110" "1110111111" "1111011110" "1110101111" "1101000001" "1110111100" "1111111100" "0000000111" "1101100101" "1111100101" "1111001010" "1110100101" "0000111011" "1111101011" "1110100100" "1100110110" "1110001011" "0000110000" "0001111100" "1110111111" "1101100000" "0001110011" "1100111111" "0000101111" "0001010000" "0000110111" "1111001010" "0001101100" "0001000000" "0001101110" "1111110011" "1111101111" "0000101010" "0000111101" "1101101100" "1111000001" "1110111010" "1111000101" "1110101101" "1110111000" "0011001011" "1100111101" "1111001000" "1111011011" "1111101101" "1110001111" "0000111010" "1110101110" "0010101000" "0000110011" "1111100010" "1110011101" "0010010011" "0000000111" "1110110111" "0000001101" "1110111001" "0001100001" "1101100000" "0001101101" "0000110111" "1110110011" "1101110011" "0001100100" "1101000000" "0010100010" "1111101101" "0001011000" "1110111001" "0010011010" "1111010101" "0000101111" "1111101101" "0001000110" "0001100100" "1111110010" "0001011101" "1101011101" "1111101101" "1110011011" "1111100000" "1110110010" "0010000111" "0000001011" "0010101110" "1100110110" "1110111000" "1110000100" "1110100000" "0001010110" "1110011010" "0000011100" "0010100001" "1101111101" "1101101010" "1101010011" "0001101010" "0011010111" "0000100000" "1111000100" "0000001110" "1111000011" "1111001110" "0000100101" "0010010011" "0000011011" "0000011001" "0000100101" "1111010100" "1101100001" "0000111100" "1111100001" "0001010101" "1111000111" "0000101111" "0010010101" "1110100000" "0000101111" "1101110101" "1111100000" "0000101100" "0000001001" "1110011100" "0000000001" "1100111010" "0000001001" "1111101101" "0000100010" "1110110001" "1101111000" "1111001110" "0000010010" "0010100000" "1101110110" "0001000000" "1111001111" "1110000011" "0010111010" "0001110001" "1111000011" "0001111111" "0000101010" "0001001001" "0000000000" "0001011100" "1111101000" "0000011111" "0000011100" "0000111000" "0001011101" "1111001100" "0000010001" "0001000000" "0010001010" "0010100001" "1111100101" "1111111000" "1101110010" "1110010110" "0000111000" "1110110000" "1111000110" "1111111100" "1111001000" "0001100111" "1110111110" "1110000111" "1110000001" "0000010111" "0001010000" "1110111110" "1110001001" "1101101010" "1110110010" "1110000000" "1111001011" "1111010000" "1101001100" "1101110101" "1110000000" "0010010111" "0010000111" "1111010111" "1101110101" "0010011110" "1111100001" "0000101001" "1111110000" "1111010110" "1110100000" "0000111110" "1111100001" "0000011001" "0000100001" "0010001100" "1111000001" "0000100111" "1110000011" "1111010011" "1101011100" "1110101111" "1110111101" "1111000001" "0001101000" "0001010101" "1111000111" "0001001100" "1111011001" "1110001111" "0001000100" "0000111110" "0000010001" "1111011000" "0001010011" "0000101111" "1101010111" "0001010011" "1111101011" "1111110001" "1101101011" "1101000111" "1101001001" "1101100011" "0000110000" "0001111001" "1111001001" "0000010101" "0000100110" "1111111000" "1111001001" "1111010001" "1111101111" "1111111000" "1111011000" "0000010100" "0000010100" "1111100011" "0001000000" "1110000010" "1111101100" "0000011100" "1101100101" "1111010011" "0000111111" "1110111001" "0010011110" "1111101001" "0001101000" "1111101010" "1111001101" "1110011010" "1110101111" "0010000011" "0000110100" "0001100010" "1101110101" "0010110100" "1110110011" "0000110110" "0000100011" "0001110011" "0000110010" "1111111101" "0000010011" "0000000001" "1101001010" "0000001110" "0010011011" "0010010000" "0000010110" "1101011100" "1110111001" "1100101100" "0010011100" "0001000001" "0001100110" "1101001111" "1111110111" "1111010000" "1110111100" "0001100100" "0010001100" "0000011001" "0000100010" "0001100101" "1101111000" "0001101011" "0000010010" "1110101001" "0000010101" "1111010101" "1100011110" "0010110011" "1110010011" "0001001100" "0001100000" "0000110111" "1111000101" "0001001100" "0000100100" "1111011110" "1101111111" "0001001011" "0010010101" "0001000111" "0000111110" "1101001101" "0000001101" "1111100001" "1101000101" "0001100111" "1111010111" "1110111010" "0001011011" "1110011100" "1111010101" "1111111001" "1111101010" "0010001001" "0001011110" "0000100111" "0001001010" "1110101011" "1111101111" "0001100010" "0000110000" "0000000000" "1110001100" "1111110010" "0000001011" "0000011100" "1110110000" "0000011101" "0001011101" "0000111101" "0001001010" "1101100100" "1110000011" "0000001111" "0000001010" "0001101110" "0001100001" "0001100011" "1110111100" "0001110001" "0000110011" "0000011100" "1111001110" "1101011100" "0000000011" "1110010100" "1110111000" "0000010011" "0001100010" "0001001000" "1110111001" "0010101111" "0000100000" "0000110111" "0000001001" "0010000001" "1110101100" "0001100110" "1110101011" "1110010100" "1100111100" "1111111000" "1111011100" "0000010000" "1110101011" "1111001101" "1101010010" "0010010011" "1110100101" "1111010101" "1110100000" "0000001010" "0000111111" "1110110110" "0001011101" "1110100111" "1111111101" "1110111111" "1110110000" "1111100100" "0001111110" "0000011111" "1101010000" "0001111110" "0001000001" "0000010100" "0001011001" "0000000010" "1111110001" "1110111001" "1110011011" "1110111000" "0000101101" "1111101001" "1110111001" "1101011001" "1101010110" "1100011110" "0000101011" "0000011100" "1110000001" "0000111000" "0001101011" "0001001001" "0001011011" "0000010000" "0000110000" "0001000001" "1111111101" "1111101101" "0000100110" "0001011001" "1111001101" "1110000100" "0010011101" "1111011001" "1111110000" "0000111010" "0001100110" "0010000110" "1110110000" "0001011000" "1111100111" "1111011011" "0000111000" "0010101010" "0011000101" "0000110011" "0010110101" "1110111011" "0000101110" "1111010101" "0000100000" "0010011000" "0001100101" "0000011010" "0000111101" "1111000010" "0000011101" "1110001110" "1101011110" "1110100110" "0001100001" "0001000110" "1110111111" "1110110110" "0001111110" "0000000110" "1011111111" "0001100011" "1100100110" "0000010001" "0010001010" "0000110011" "0010101010" "1111000101" "1101111110" "1111100101" "1110010001" "1111010001" "0001001101" "1111110000" "0000011010" "0010010100" "1111010010" "1110011010" "0000010011" "0000100111" "1110110011" "1111010100" "1110011101" "1011111011" "1101111011" "1110010000" "0000100011" "0000001001" "0001001000" "1101100110" "0000001111" "0000010001" "1111101100" "0000101011" "0000110001" "0000111110" "1101000100" "0010010011" "1110011000" "0000101101" "0000100101" "1111011101" "0010000101" "0001100110" "0001010111" "1111110111" "0000111000" "1110010110" "0001101001" "0000011101" "0001001110" "1101100100" "0011000111" "1111001001" "1110000011" "1110000101" "0001010100" "1110111011" "1110101000" "1110100101" "1110011101" "0010100010" "1111011011" "1110000010" "1110110101" "1111011011" "0001100100" "1111111010" "1110010011" "0001100000" "1110011111" "1111101001" "1110001001" "1100111010" "0000101010" "0000100111" "0000101001" "1111111111" "0000000111" "1111101010" "0000011100" "0010001011" "1111100100" "1111011111" "1110111000" "1111011011" "0000111100" "0000101101" "1101111111" "1111010001" "0011011101" "0000111010" "0000001011" "0000101110" "1111010011" "1111101110" "0010000100" "1111010000" "0000001110" "1111101010" "1101100100" "1110011001" "0010101110" "1110010010" "0000010101" "0010110100" "1111111010" "0000010010" "1111111101" "1100100100" "1110010111" "0000110010" "0001011101" "1110110001" "0001011001" "1101011001" "1111100010" "0001001101" "0001011111" "1110010001" "0000010001" "1101101110" "0001101110" "1111010010" "0010000101" "1111000100" "1111010111" "1110111111" "1100111001" "0000000000" "0000100111" "0000001111" "0000001010" "1110001010" "0000101000" "0010010001" "0000101110" "0001101100" "0001101000" "0010100101" "1111001010" "1101101011" "1111101010" "1101011001" "0000011000" "1111001100" "0001000110" "1101110101" "0010110010" "0001000010" "1111101111" "1110011111" "0000010001" "0000000011" "1111101010" "0010001010" "0001100101" "0001010010" "1111011101" "0000100110" "0001011001" "1111110010" "1110101010" "0001100110" "1101101111" "1101010101" "1111100100" "0001010100" "1110010110" "1111101110" "0001111010" "1110101000" "0010010001" "0000111101" "1111001001" "1101010000" "1111100101" "0000011001" "0001101111" "1110010001" "0010010011" "0000000011" "1111100110" "1110011010" "0000101111" "1111001001" "1101111100" "0010010101" "0000011101" "0000110101" "1110010010" "1111110001" "0010011111" "0001010001" "1111011111" "0001011001" "1111011011" "1101100111" "0010010010" "0011000001" "1110001111" "1111010100" "1101000001" "1111100000" "1101110111" "1111100100" "0000010101" "0001001111" "0010110101" "0000011001" "0010011001" "1111000001" "1111001010" "0001101101" "0001100111" "1110010010" "1110110111" "1101110010" "1100000100" "1101101000" "1110101000" "0000011100" "0000101100" "0000111100" "0000101010" "0000110011" "1111101011" "1110110001" "0000001011" "0000111011" "0001010011" "1111101101" "1111001011" "0001010001" "1110011101" "0010001011" "0001001110" "1101101100" "1111001100" "0001010111" "1111011000" "0001101101" "1110010111" "1111101001" "0000000101" "1110001100" "0000000011" "0000001111" "0001100101" "1110011001" "1111100111" "0001000010" "0001100111" "1111001110" "1110110100" "1101111010" "1110110100" "1111100000" "1011001000" "1111010011" "0000010100" "0000000110" "1111000011" "0000101000" "1111110111" "0001010011" "0001001111" "1100011010" "0000010000" "0001000100" "1110101011" "1110100110" "1111000111" "1110001110" "0001010100" "1111110001" "1101110100" "0000100100" "1111001101" "0001000000" "1111101011" "0001110100" "1101010110" "0001000100" "1111101111" "1101111110" "0000000011" "1111100000" "1111101101" "0001000001" "1110011000" "1110010001" "1100001100" "1111010011" "1111110100" "0000011001" "0000100010" "0001100011" "1111110001" "0000010000" "1111001001" "0001111100" "1110010101" "0010001100" "0001001100" "1111010001" "0001000100" "1110111001" "1111010000" "0010010111" "0000110111" "1111000100" "0000101000" "0001011101" "0001011000" "0000010111" "1110000001" "0001000111" "0010011010" "1110101100" "0001101011" "0000101101" "0001100111" "0000111011" "0000010101" "0010001111" "0000110100" "0001011111" "0001111110" "1111010000" "1111010001" "1110010000" "0000011000" "1101011001" "0011101111" "0000101100" "0001010001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.771
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 34
set hasByteEnable 0
set MemName fc2_FC2_B_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 10
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "10111100" "00000101" "11111100" "10110010" "11010001" "01000000" "00100100" "11100011" "11010010" "11000010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.771
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name out_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename out_V \
    op interface \
    ports { out_V_address0 { O 4 vector } out_V_ce0 { O 1 bit } out_V_we0 { O 1 bit } out_V_d0 { O 16 vector } out_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name FC1_out_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename FC1_out_V \
    op interface \
    ports { FC1_out_V_address0 { O 7 vector } FC1_out_V_ce0 { O 1 bit } FC1_out_V_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'FC1_out_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


