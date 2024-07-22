############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite -bundle Crtl "lenet"
set_directive_array_partition -type complete -dim 1 "conv1" Kw_1
set_directive_inline -region "lenet"
set_directive_pipeline "conv1/conv1_w1"
set_directive_pipeline "conv2/conv2_w3"
set_directive_pipeline "conv3/conv3_w1"
set_directive_pipeline "conv2/conv2_b"
set_directive_allocation -limit 65 -type operation "lenet" mul
set_directive_interface -mode bram "lenet" Cout
set_directive_interface -mode bram "lenet" input
