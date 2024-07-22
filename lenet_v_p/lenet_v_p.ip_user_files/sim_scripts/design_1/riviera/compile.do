vlib work
vlib riviera

vlib riviera/xilinx_vip
vlib riviera/xil_defaultlib
vlib riviera/xpm
vlib riviera/blk_mem_gen_v8_4_3
vlib riviera/axi_bram_ctrl_v4_1_1
vlib riviera/xlconstant_v1_1_6
vlib riviera/lib_cdc_v1_0_2
vlib riviera/proc_sys_reset_v5_0_13
vlib riviera/smartconnect_v1_0
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_vip_v1_1_5
vlib riviera/processing_system7_vip_v1_0_7
vlib riviera/xbip_utils_v3_0_10
vlib riviera/axi_utils_v2_0_6
vlib riviera/xbip_pipe_v3_0_6
vlib riviera/xbip_dsp48_wrapper_v3_0_4
vlib riviera/xbip_dsp48_addsub_v3_0_6
vlib riviera/xbip_dsp48_multadd_v3_0_6
vlib riviera/xbip_bram18k_v3_0_6
vlib riviera/mult_gen_v12_0_15
vlib riviera/floating_point_v7_1_8

vmap xilinx_vip riviera/xilinx_vip
vmap xil_defaultlib riviera/xil_defaultlib
vmap xpm riviera/xpm
vmap blk_mem_gen_v8_4_3 riviera/blk_mem_gen_v8_4_3
vmap axi_bram_ctrl_v4_1_1 riviera/axi_bram_ctrl_v4_1_1
vmap xlconstant_v1_1_6 riviera/xlconstant_v1_1_6
vmap lib_cdc_v1_0_2 riviera/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 riviera/proc_sys_reset_v5_0_13
vmap smartconnect_v1_0 riviera/smartconnect_v1_0
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_5 riviera/axi_vip_v1_1_5
vmap processing_system7_vip_v1_0_7 riviera/processing_system7_vip_v1_0_7
vmap xbip_utils_v3_0_10 riviera/xbip_utils_v3_0_10
vmap axi_utils_v2_0_6 riviera/axi_utils_v2_0_6
vmap xbip_pipe_v3_0_6 riviera/xbip_pipe_v3_0_6
vmap xbip_dsp48_wrapper_v3_0_4 riviera/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_6 riviera/xbip_dsp48_addsub_v3_0_6
vmap xbip_dsp48_multadd_v3_0_6 riviera/xbip_dsp48_multadd_v3_0_6
vmap xbip_bram18k_v3_0_6 riviera/xbip_bram18k_v3_0_6
vmap mult_gen_v12_0_15 riviera/mult_gen_v12_0_15
vmap floating_point_v7_1_8 riviera/floating_point_v7_1_8

vlog -work xilinx_vip  -sv2k12 "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"D:/vivado/xilinx/Vivado/2019.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work blk_mem_gen_v8_4_3  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/c001/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_blk_mem_gen_0_0/sim/design_1_blk_mem_gen_0_0.v" \
"../../../bd/design_1/ip/design_1_blk_mem_gen_0_1/sim/design_1_blk_mem_gen_0_1.v" \

vcom -work axi_bram_ctrl_v4_1_1 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/70bf/hdl/axi_bram_ctrl_v4_1_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_axi_bram_ctrl_0_0/sim/design_1_axi_bram_ctrl_0_0.vhd" \
"../../../bd/design_1/ip/design_1_axi_bram_ctrl_0_1/sim/design_1_axi_bram_ctrl_0_1.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/sim/bd_48ac.v" \

vlog -work xlconstant_v1_1_6  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/66e7/hdl/xlconstant_v1_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_0/sim/bd_48ac_one_0.v" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_1/sim/bd_48ac_psr_aclk_0.vhd" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/sc_util_v1_0_vl_rfs.sv" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/c012/hdl/sc_switchboard_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_2/sim/bd_48ac_arsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_3/sim/bd_48ac_rsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_4/sim/bd_48ac_awsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_5/sim/bd_48ac_wsw_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_6/sim/bd_48ac_bsw_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/f85e/hdl/sc_mmu_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_7/sim/bd_48ac_s00mmu_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ca72/hdl/sc_transaction_regulator_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_8/sim/bd_48ac_s00tr_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/7de4/hdl/sc_si_converter_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_9/sim/bd_48ac_s00sic_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b89e/hdl/sc_axi2sc_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_10/sim/bd_48ac_s00a2s_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/sc_node_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_11/sim/bd_48ac_sarn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_12/sim/bd_48ac_srn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_13/sim/bd_48ac_sawn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_14/sim/bd_48ac_swn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_15/sim/bd_48ac_sbn_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/7005/hdl/sc_sc2axi_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_16/sim/bd_48ac_m00s2a_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_17/sim/bd_48ac_m00arn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_18/sim/bd_48ac_m00rn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_19/sim/bd_48ac_m00awn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_20/sim/bd_48ac_m00wn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_21/sim/bd_48ac_m00bn_0.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b387/hdl/sc_exit_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_22/sim/bd_48ac_m00e_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_23/sim/bd_48ac_m01s2a_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_24/sim/bd_48ac_m01arn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_25/sim/bd_48ac_m01rn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_26/sim/bd_48ac_m01awn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_27/sim/bd_48ac_m01wn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_28/sim/bd_48ac_m01bn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_29/sim/bd_48ac_m01e_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_30/sim/bd_48ac_m02s2a_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_31/sim/bd_48ac_m02arn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_32/sim/bd_48ac_m02rn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_33/sim/bd_48ac_m02awn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_34/sim/bd_48ac_m02wn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_35/sim/bd_48ac_m02bn_0.sv" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/bd_0/ip/ip_36/sim/bd_48ac_m02e_0.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_smartconnect_0_0/sim/design_1_smartconnect_0_0.v" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_1/ip/design_1_proc_sys_reset_0_0/sim/design_1_proc_sys_reset_0_0.vhd" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_5  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/d4a8/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_7  -sv2k12 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/ip/design_1_processing_system7_0_0/sim/design_1_processing_system7_0_0.v" \

vcom -work xbip_utils_v3_0_10 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1123/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/910d/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_15 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/d4d2/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_8 -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/83a3/hdl/floating_point_v7_1_vh_rfs.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_C1_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_C2_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_C3_out_V_0_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_Crtl_s_axi.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_fadd_32ns_3bkb.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC1_B_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC1_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC1_W_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC2_B_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC2_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_FC2_W_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_fdiv_32ns_3cud.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_fexp_32ns_3eOg.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_fpext_32ns_dEe.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_in_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_B_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_0_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_0_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_0_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_0_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_0_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_1_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_1_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_1_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_1_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_1_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_2_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_2_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_2_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_2_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_2_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_3_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_3_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_3_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_3_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_3_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_4_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_4_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_4_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_4_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_4_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_5_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_5_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_5_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_5_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K1_W_V_5_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_0_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_1_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_2_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_3_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_4_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_5_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_6_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_7_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_8_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_9_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_10_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_11_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_12_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_13_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_14_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K2_W_V_15_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_B_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_0.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_1.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_2.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_3.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_4.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_5.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_6.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_7.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_8.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_9.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_10.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_11.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_12.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_13.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_14.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_K3_W_V_15.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_P1_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet_P2_out_V.v" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/verilog/lenet.v" \

vcom -work xil_defaultlib -93 \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/ip/lenet_ap_fadd_2_full_dsp_32.vhd" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/ip/lenet_ap_fdiv_10_no_dsp_32.vhd" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/ip/lenet_ap_fexp_6_full_dsp_32.vhd" \
"../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/a85b/hdl/ip/lenet_ap_fpext_0_no_dsp_32.vhd" \
"../../../bd/design_1/ip/design_1_lenet_0_3/sim/design_1_lenet_0_3.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/1ddd/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/b2d0/hdl/verilog" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/ec67/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ipshared/8c62/hdl" "+incdir+../../../../lenet_v_p.srcs/sources_1/bd/design_1/ip/design_1_processing_system7_0_0" "+incdir+D:/vivado/xilinx/Vivado/2019.1/data/xilinx_vip/include" \
"../../../bd/design_1/sim/design_1.v" \

vlog -work xil_defaultlib \
"glbl.v"

