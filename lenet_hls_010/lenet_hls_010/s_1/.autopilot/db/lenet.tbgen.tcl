set moduleName lenet
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {lenet}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_r float 32 regular {bram 1024 { 1 3 } 1 1 }  }
	{ Cout float 32 regular {bram 10 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_r", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]}]} , 
 	{ "Name" : "Cout", "interface" : "bram", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "Cout","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 34
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ input_r_Addr_A sc_out sc_lv 32 signal 0 } 
	{ input_r_EN_A sc_out sc_logic 1 signal 0 } 
	{ input_r_WEN_A sc_out sc_lv 4 signal 0 } 
	{ input_r_Din_A sc_out sc_lv 32 signal 0 } 
	{ input_r_Dout_A sc_in sc_lv 32 signal 0 } 
	{ input_r_Clk_A sc_out sc_logic 1 signal 0 } 
	{ input_r_Rst_A sc_out sc_logic 1 signal 0 } 
	{ Cout_Addr_A sc_out sc_lv 32 signal 1 } 
	{ Cout_EN_A sc_out sc_logic 1 signal 1 } 
	{ Cout_WEN_A sc_out sc_lv 4 signal 1 } 
	{ Cout_Din_A sc_out sc_lv 32 signal 1 } 
	{ Cout_Dout_A sc_in sc_lv 32 signal 1 } 
	{ Cout_Clk_A sc_out sc_logic 1 signal 1 } 
	{ Cout_Rst_A sc_out sc_logic 1 signal 1 } 
	{ s_axi_Crtl_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_Crtl_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_Crtl_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_Crtl_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_Crtl_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_Crtl_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_Crtl_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_Crtl_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_Crtl_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_Crtl_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_Crtl_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_Crtl_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_Crtl_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_Crtl_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_Crtl_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_Crtl_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_Crtl_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_Crtl_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Crtl", "role": "AWADDR" },"address":[{"name":"lenet","role":"start","value":"0","valid_bit":"0"},{"name":"lenet","role":"continue","value":"0","valid_bit":"4"},{"name":"lenet","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_Crtl_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "AWVALID" } },
	{ "name": "s_axi_Crtl_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "AWREADY" } },
	{ "name": "s_axi_Crtl_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "WVALID" } },
	{ "name": "s_axi_Crtl_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "WREADY" } },
	{ "name": "s_axi_Crtl_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Crtl", "role": "WDATA" } },
	{ "name": "s_axi_Crtl_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Crtl", "role": "WSTRB" } },
	{ "name": "s_axi_Crtl_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Crtl", "role": "ARADDR" },"address":[{"name":"lenet","role":"start","value":"0","valid_bit":"0"},{"name":"lenet","role":"done","value":"0","valid_bit":"1"},{"name":"lenet","role":"idle","value":"0","valid_bit":"2"},{"name":"lenet","role":"ready","value":"0","valid_bit":"3"},{"name":"lenet","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_Crtl_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "ARVALID" } },
	{ "name": "s_axi_Crtl_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "ARREADY" } },
	{ "name": "s_axi_Crtl_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "RVALID" } },
	{ "name": "s_axi_Crtl_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "RREADY" } },
	{ "name": "s_axi_Crtl_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Crtl", "role": "RDATA" } },
	{ "name": "s_axi_Crtl_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Crtl", "role": "RRESP" } },
	{ "name": "s_axi_Crtl_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "BVALID" } },
	{ "name": "s_axi_Crtl_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "BREADY" } },
	{ "name": "s_axi_Crtl_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Crtl", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Crtl", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "input_r_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Addr_A" }} , 
 	{ "name": "input_r_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "EN_A" }} , 
 	{ "name": "input_r_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_r", "role": "WEN_A" }} , 
 	{ "name": "input_r_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Din_A" }} , 
 	{ "name": "input_r_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Dout_A" }} , 
 	{ "name": "input_r_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "Clk_A" }} , 
 	{ "name": "input_r_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "Rst_A" }} , 
 	{ "name": "Cout_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Cout", "role": "Addr_A" }} , 
 	{ "name": "Cout_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Cout", "role": "EN_A" }} , 
 	{ "name": "Cout_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Cout", "role": "WEN_A" }} , 
 	{ "name": "Cout_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Cout", "role": "Din_A" }} , 
 	{ "name": "Cout_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Cout", "role": "Dout_A" }} , 
 	{ "name": "Cout_Clk_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Cout", "role": "Clk_A" }} , 
 	{ "name": "Cout_Rst_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Cout", "role": "Rst_A" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "14", "20", "24", "28", "29", "30", "34"],
		"CDFG" : "lenet",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1744145", "EstimateLatencyMax" : "1744145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_fu_124"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_fu_132"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv2_fu_144"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv3_fu_156"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool1_fu_168"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pool2_fu_176"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc1_fu_184"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc2_fu_196"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Bram", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_conv1_fu_132", "Port" : "input_r"}]},
			{"Name" : "Cout", "Type" : "Bram", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_softmax_fu_124", "Port" : "out_r"}]},
			{"Name" : "K1_W_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_conv1_fu_132", "Port" : "K1_W_V"}]},
			{"Name" : "K1_B_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_conv1_fu_132", "Port" : "K1_B_V"}]},
			{"Name" : "C1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_conv1_fu_132", "Port" : "out_V"},
					{"ID" : "28", "SubInstance" : "grp_pool1_fu_168", "Port" : "C1_out_V"}]},
			{"Name" : "P1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_pool1_fu_168", "Port" : "out_V"},
					{"ID" : "20", "SubInstance" : "grp_conv2_fu_144", "Port" : "P1_out_V"}]},
			{"Name" : "K2_W_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_conv2_fu_144", "Port" : "K2_W_V"}]},
			{"Name" : "K2_B_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_conv2_fu_144", "Port" : "K2_B_V"}]},
			{"Name" : "C2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pool2_fu_176", "Port" : "C2_out_V"},
					{"ID" : "20", "SubInstance" : "grp_conv2_fu_144", "Port" : "out_V"}]},
			{"Name" : "P2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pool2_fu_176", "Port" : "out_V"},
					{"ID" : "24", "SubInstance" : "grp_conv3_fu_156", "Port" : "P2_out_V"}]},
			{"Name" : "K3_W_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_conv3_fu_156", "Port" : "K3_W_V"}]},
			{"Name" : "K3_B_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_conv3_fu_156", "Port" : "K3_B_V"}]},
			{"Name" : "C3_out_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "24", "SubInstance" : "grp_conv3_fu_156", "Port" : "out_0_0_V"}]},
			{"Name" : "Re_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_fc1_fu_184", "Port" : "Re_out_V"}]},
			{"Name" : "FC1_W_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_fc1_fu_184", "Port" : "FC1_W_V"}]},
			{"Name" : "FC1_B_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_fc1_fu_184", "Port" : "FC1_B_V"}]},
			{"Name" : "FC1_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_fc2_fu_196", "Port" : "FC1_out_V"},
					{"ID" : "30", "SubInstance" : "grp_fc1_fu_184", "Port" : "out_V"}]},
			{"Name" : "FC2_W_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_fc2_fu_196", "Port" : "FC2_W_V"}]},
			{"Name" : "FC2_B_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_fc2_fu_196", "Port" : "FC2_B_V"}]},
			{"Name" : "FC2_out_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_fc2_fu_196", "Port" : "out_V"},
					{"ID" : "10", "SubInstance" : "grp_softmax_fu_124", "Port" : "FC2_out_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C1_out_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.P1_out_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C2_out_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.P2_out_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C3_out_V_0_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Re_out_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC1_out_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC2_out_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_Crtl_s_axi_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_124", "Parent" : "0", "Child" : ["11", "12", "13"],
		"CDFG" : "softmax",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "301", "EstimateLatencyMax" : "301",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_r", "Type" : "Bram", "Direction" : "IO"},
			{"Name" : "FC2_out_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_124.lenet_fadd_32ns_3hbi_U37", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_124.lenet_fdiv_32ns_3ibs_U38", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_124.lenet_fexp_32ns_3jbC_U39", "Parent" : "10"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132", "Parent" : "0", "Child" : ["15", "16", "17", "18", "19"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "436259", "EstimateLatencyMax" : "436259",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_r", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K1_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132.K1_W_V_U", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132.K1_B_V_U", "Parent" : "14"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132.in_V_U", "Parent" : "14"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132.lenet_fpext_32ns_bkb_U1", "Parent" : "14"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_132.lenet_mac_muladd_cud_U2", "Parent" : "14"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv2_fu_144", "Parent" : "0", "Child" : ["21", "22", "23"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1063242", "EstimateLatencyMax" : "1063242",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "P1_out_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv2_fu_144.K2_W_V_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv2_fu_144.K2_B_V_U", "Parent" : "20"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv2_fu_144.lenet_mac_muladd_dEe_U11", "Parent" : "20"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv3_fu_156", "Parent" : "0", "Child" : ["25", "26", "27"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "199322", "EstimateLatencyMax" : "199322",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_0_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "P2_out_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv3_fu_156.K3_W_V_U", "Parent" : "24"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv3_fu_156.K3_B_V_U", "Parent" : "24"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv3_fu_156.lenet_mac_muladd_eOg_U19", "Parent" : "24"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool1_fu_168", "Parent" : "0",
		"CDFG" : "pool1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16885", "EstimateLatencyMax" : "16885",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C1_out_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pool2_fu_176", "Parent" : "0",
		"CDFG" : "pool2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5661", "EstimateLatencyMax" : "5661",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C2_out_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc1_fu_184", "Parent" : "0", "Child" : ["31", "32", "33"],
		"CDFG" : "fc1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "20498", "EstimateLatencyMax" : "20498",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Re_out_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC1_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC1_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc1_fu_184.FC1_W_V_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc1_fu_184.FC1_B_V_U", "Parent" : "30"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc1_fu_184.lenet_mac_muladd_fYi_U25", "Parent" : "30"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc2_fu_196", "Parent" : "0", "Child" : ["35", "36", "37"],
		"CDFG" : "fc2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1722", "EstimateLatencyMax" : "1722",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "FC1_out_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC2_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC2_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc2_fu_196.FC2_W_V_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc2_fu_196.FC2_B_V_U", "Parent" : "34"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc2_fu_196.lenet_mac_muladd_g8j_U31", "Parent" : "34"}]}


set ArgLastReadFirstWriteLatency {
	lenet {
		input_r {Type I LastRead 2 FirstWrite -1}
		Cout {Type IO LastRead 4 FirstWrite 15}
		K1_W_V {Type I LastRead -1 FirstWrite -1}
		K1_B_V {Type I LastRead -1 FirstWrite -1}
		C1_out_V {Type IO LastRead -1 FirstWrite -1}
		P1_out_V {Type IO LastRead -1 FirstWrite -1}
		K2_W_V {Type I LastRead -1 FirstWrite -1}
		K2_B_V {Type I LastRead -1 FirstWrite -1}
		C2_out_V {Type IO LastRead -1 FirstWrite -1}
		P2_out_V {Type IO LastRead -1 FirstWrite -1}
		K3_W_V {Type I LastRead -1 FirstWrite -1}
		K3_B_V {Type I LastRead -1 FirstWrite -1}
		C3_out_V_0_0 {Type IO LastRead -1 FirstWrite -1}
		Re_out_V {Type IO LastRead -1 FirstWrite -1}
		FC1_W_V {Type I LastRead -1 FirstWrite -1}
		FC1_B_V {Type I LastRead -1 FirstWrite -1}
		FC1_out_V {Type IO LastRead -1 FirstWrite -1}
		FC2_W_V {Type I LastRead -1 FirstWrite -1}
		FC2_B_V {Type I LastRead -1 FirstWrite -1}
		FC2_out_V {Type IO LastRead -1 FirstWrite -1}}
	softmax {
		out_r {Type IO LastRead 4 FirstWrite 15}
		FC2_out_V {Type I LastRead 3 FirstWrite -1}}
	conv1 {
		input_r {Type I LastRead 2 FirstWrite -1}
		out_V {Type IO LastRead 7 FirstWrite 6}
		K1_W_V {Type I LastRead -1 FirstWrite -1}
		K1_B_V {Type I LastRead -1 FirstWrite -1}}
	conv2 {
		out_V {Type IO LastRead 8 FirstWrite 6}
		P1_out_V {Type I LastRead 8 FirstWrite -1}
		K2_W_V {Type I LastRead -1 FirstWrite -1}
		K2_B_V {Type I LastRead -1 FirstWrite -1}}
	conv3 {
		out_0_0_V {Type IO LastRead 6 FirstWrite 4}
		P2_out_V {Type I LastRead 6 FirstWrite -1}
		K3_W_V {Type I LastRead -1 FirstWrite -1}
		K3_B_V {Type I LastRead -1 FirstWrite -1}}
	pool1 {
		out_V {Type O LastRead -1 FirstWrite 4}
		C1_out_V {Type I LastRead 5 FirstWrite -1}}
	pool2 {
		out_V {Type O LastRead -1 FirstWrite 4}
		C2_out_V {Type I LastRead 5 FirstWrite -1}}
	fc1 {
		out_V {Type IO LastRead 2 FirstWrite 2}
		Re_out_V {Type I LastRead 2 FirstWrite -1}
		FC1_W_V {Type I LastRead -1 FirstWrite -1}
		FC1_B_V {Type I LastRead -1 FirstWrite -1}}
	fc2 {
		out_V {Type IO LastRead 2 FirstWrite 2}
		FC1_out_V {Type I LastRead 2 FirstWrite -1}
		FC2_W_V {Type I LastRead -1 FirstWrite -1}
		FC2_B_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1744145", "Max" : "1744145"}
	, {"Name" : "Interval", "Min" : "1744146", "Max" : "1744146"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_r { bram {  { input_r_Addr_A MemPortADDR2 1 32 }  { input_r_EN_A MemPortCE2 1 1 }  { input_r_WEN_A MemPortWE2 1 4 }  { input_r_Din_A MemPortDIN2 1 32 }  { input_r_Dout_A MemPortDOUT2 0 32 }  { input_r_Clk_A mem_clk 1 1 }  { input_r_Rst_A mem_rst 1 1 } } }
	Cout { bram {  { Cout_Addr_A MemPortADDR2 1 32 }  { Cout_EN_A MemPortCE2 1 1 }  { Cout_WEN_A MemPortWE2 1 4 }  { Cout_Din_A MemPortDIN2 1 32 }  { Cout_Dout_A MemPortDOUT2 0 32 }  { Cout_Clk_A mem_clk 1 1 }  { Cout_Rst_A mem_rst 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
