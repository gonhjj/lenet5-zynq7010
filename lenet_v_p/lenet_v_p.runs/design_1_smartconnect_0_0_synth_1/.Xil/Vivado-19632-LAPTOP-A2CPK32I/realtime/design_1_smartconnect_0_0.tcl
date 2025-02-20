# 
# Synthesis run script generated by Vivado
# 

namespace eval rt {
    variable rc
}
set rt::rc [catch {
  uplevel #0 {
    set ::env(BUILTIN_SYNTH) true
    source $::env(HRT_TCL_PATH)/rtSynthPrep.tcl
    rt::HARTNDb_startJobStats
    set rt::cmdEcho 0
    rt::set_parameter writeXmsg true
    rt::set_parameter enableParallelHelperSpawn true
    set ::env(RT_TMP) "D:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.runs/design_1_smartconnect_0_0_synth_1/.Xil/Vivado-19632-LAPTOP-A2CPK32I/realtime/tmp"
    if { [ info exists ::env(RT_TMP) ] } {
      file mkdir $::env(RT_TMP)
    }

    rt::delete_design

    set rt::partid xc7z010clg400-2
     file delete -force synth_hints.os

    set rt::multiChipSynthesisFlow false
    source $::env(SYNTH_COMMON)/common_vhdl.tcl
    set rt::defaultWorkLibName xil_defaultlib

    # Skipping read_* RTL commands because this is post-elab optimize flow
    set rt::useElabCache true
    if {$rt::useElabCache == false} {
      rt::read_verilog -sv -include {
    d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog
    d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog
  } {
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/sc_util_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/c012/hdl/sc_switchboard_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_2/synth/bd_48ac_arsw_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_3/synth/bd_48ac_rsw_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_4/synth/bd_48ac_awsw_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_5/synth/bd_48ac_wsw_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_6/synth/bd_48ac_bsw_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/f85e/hdl/sc_mmu_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_7/synth/bd_48ac_s00mmu_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ca72/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_8/synth/bd_48ac_s00tr_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/7de4/hdl/sc_si_converter_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_9/synth/bd_48ac_s00sic_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b89e/hdl/sc_axi2sc_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_10/synth/bd_48ac_s00a2s_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/sc_node_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_11/synth/bd_48ac_sarn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_12/synth/bd_48ac_srn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_13/synth/bd_48ac_sawn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_14/synth/bd_48ac_swn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_15/synth/bd_48ac_sbn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/7005/hdl/sc_sc2axi_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_16/synth/bd_48ac_m00s2a_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_17/synth/bd_48ac_m00arn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_18/synth/bd_48ac_m00rn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_19/synth/bd_48ac_m00awn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_20/synth/bd_48ac_m00wn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_21/synth/bd_48ac_m00bn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b387/hdl/sc_exit_v1_0_vl_rfs.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_22/synth/bd_48ac_m00e_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_23/synth/bd_48ac_m01s2a_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_24/synth/bd_48ac_m01arn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_25/synth/bd_48ac_m01rn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_26/synth/bd_48ac_m01awn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_27/synth/bd_48ac_m01wn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_28/synth/bd_48ac_m01bn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_29/synth/bd_48ac_m01e_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_30/synth/bd_48ac_m02s2a_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_31/synth/bd_48ac_m02arn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_32/synth/bd_48ac_m02rn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_33/synth/bd_48ac_m02awn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_34/synth/bd_48ac_m02wn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_35/synth/bd_48ac_m02bn_0.sv
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_36/synth/bd_48ac_m02e_0.sv
      D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv
      D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv
      D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv
    }
      rt::read_verilog -include {
    d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog
    d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog
  } {
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/synth/design_1_smartconnect_0_0.v
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/synth/bd_48ac.v
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/66e7/hdl/xlconstant_v1_1_vl_rfs.v
      d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_0/synth/bd_48ac_one_0.v
    }
      rt::read_vhdl -lib lib_cdc_v1_0_2 d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd
      rt::read_vhdl -lib proc_sys_reset_v5_0_13 d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd
      rt::read_vhdl -lib xil_defaultlib d:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_1/synth/bd_48ac_psr_aclk_0.vhd
      rt::read_vhdl -lib xpm D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd
      rt::filesetChecksum
    }
    rt::set_parameter usePostFindUniquification true
    set rt::SDCFileList D:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.runs/design_1_smartconnect_0_0_synth_1/.Xil/Vivado-19632-LAPTOP-A2CPK32I/realtime/design_1_smartconnect_0_0_synth.xdc
    rt::sdcChecksum
    set rt::top design_1_smartconnect_0_0
    rt::set_parameter enableIncremental true
    set rt::ioInsertion false
    set rt::reportTiming false
    rt::set_parameter elaborateOnly false
    rt::set_parameter elaborateRtl false
    rt::set_parameter eliminateRedundantBitOperator true
    rt::set_parameter elaborateRtlOnlyFlow false
    rt::set_parameter writeBlackboxInterface true
    rt::set_parameter ramStyle auto
    rt::set_parameter merge_flipflops true
# MODE: out_of_context
    rt::set_parameter webTalkPath {}
    rt::set_parameter enableSplitFlowPath "D:/FPGA_project/lenet_7010/lenet_v_p/lenet_v_p.runs/design_1_smartconnect_0_0_synth_1/.Xil/Vivado-19632-LAPTOP-A2CPK32I/"
    set ok_to_delete_rt_tmp true 
    if { [rt::get_parameter parallelDebug] } { 
       set ok_to_delete_rt_tmp false 
    } 
    if {$rt::useElabCache == false} {
        set oldMIITMVal [rt::get_parameter maxInputIncreaseToMerge]; rt::set_parameter maxInputIncreaseToMerge 1000
        set oldCDPCRL [rt::get_parameter createDfgPartConstrRecurLimit]; rt::set_parameter createDfgPartConstrRecurLimit 1
        $rt::db readXRFFile
      rt::run_synthesis -module $rt::top
        rt::set_parameter maxInputIncreaseToMerge $oldMIITMVal
        rt::set_parameter createDfgPartConstrRecurLimit $oldCDPCRL
    }

    set rt::flowresult [ source $::env(SYNTH_COMMON)/flow.tcl ]
    rt::HARTNDb_stopJobStats
    rt::HARTNDb_reportJobStats "Synthesis Optimization Runtime"
    rt::HARTNDb_stopSystemStats
    if { $rt::flowresult == 1 } { return -code error }


  set hsKey [rt::get_parameter helper_shm_key] 
  if { $hsKey != "" && [info exists ::env(BUILTIN_SYNTH)] && [rt::get_parameter enableParallelHelperSpawn] } { 
     $rt::db killSynthHelper $hsKey
  } 
  rt::set_parameter helper_shm_key "" 
    if { [ info exists ::env(RT_TMP) ] } {
      if { [info exists ok_to_delete_rt_tmp] && $ok_to_delete_rt_tmp } { 
        file delete -force $::env(RT_TMP)
      }
    }

    source $::env(HRT_TCL_PATH)/rtSynthCleanup.tcl
  } ; #end uplevel
} rt::result]

if { $rt::rc } {
  $rt::db resetHdlParse
  set hsKey [rt::get_parameter helper_shm_key] 
  if { $hsKey != "" && [info exists ::env(BUILTIN_SYNTH)] && [rt::get_parameter enableParallelHelperSpawn] } { 
     $rt::db killSynthHelper $hsKey
  } 
  source $::env(HRT_TCL_PATH)/rtSynthCleanup.tcl
  return -code "error" $rt::result
}
