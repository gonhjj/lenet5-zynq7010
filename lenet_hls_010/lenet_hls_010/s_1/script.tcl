############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lenet_hls_010
set_top lenet
add_files param.h
add_files lenet.cpp
add_files function.cpp
add_files fc_w.h
add_files fc_b.h
add_files fc1_w.h
add_files fc1_b.h
add_files c3_w.h
add_files c3_b.h
add_files c2_w.h
add_files c2_b.h
add_files c1_w.h
add_files c1_b.h
add_files -tb test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "s_1"
set_part {xc7z010-clg400-2}
create_clock -period 10 -name default
config_sdx -optimization_level none -target none
config_export -format ip_catalog -rtl verilog -vivado_optimization_level 2
set_clock_uncertainty 12.5%
source "./lenet_hls_010/s_1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
