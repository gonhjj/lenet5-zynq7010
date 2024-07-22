set moduleName conv1
set isTopModule 0
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
set C_modelName {conv1}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_r float 32 regular {bram 1024 { 1 3 } 1 1 }  }
	{ out_V int 16 regular {array 4704 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_r", "interface" : "bram", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_r_Addr_A sc_out sc_lv 32 signal 0 } 
	{ input_r_EN_A sc_out sc_logic 1 signal 0 } 
	{ input_r_WEN_A sc_out sc_lv 4 signal 0 } 
	{ input_r_Din_A sc_out sc_lv 32 signal 0 } 
	{ input_r_Dout_A sc_in sc_lv 32 signal 0 } 
	{ out_V_address0 sc_out sc_lv 13 signal 1 } 
	{ out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ out_V_d0 sc_out sc_lv 16 signal 1 } 
	{ out_V_q0 sc_in sc_lv 16 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_r_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Addr_A" }} , 
 	{ "name": "input_r_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "EN_A" }} , 
 	{ "name": "input_r_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_r", "role": "WEN_A" }} , 
 	{ "name": "input_r_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Din_A" }} , 
 	{ "name": "input_r_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "Dout_A" }} , 
 	{ "name": "out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "out_V", "role": "address0" }} , 
 	{ "name": "out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V", "role": "ce0" }} , 
 	{ "name": "out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_V", "role": "we0" }} , 
 	{ "name": "out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V", "role": "d0" }} , 
 	{ "name": "out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_B_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fpext_32ns_bkb_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_mac_muladd_cud_U2", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv1 {
		input_r {Type I LastRead 2 FirstWrite -1}
		out_V {Type IO LastRead 7 FirstWrite 6}
		K1_W_V {Type I LastRead -1 FirstWrite -1}
		K1_B_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "436259", "Max" : "436259"}
	, {"Name" : "Interval", "Min" : "436259", "Max" : "436259"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_r { bram {  { input_r_Addr_A MemPortADDR2 1 32 }  { input_r_EN_A MemPortCE2 1 1 }  { input_r_WEN_A MemPortWE2 1 4 }  { input_r_Din_A MemPortDIN2 1 32 }  { input_r_Dout_A MemPortDOUT2 0 32 } } }
	out_V { ap_memory {  { out_V_address0 mem_address 1 13 }  { out_V_ce0 mem_ce 1 1 }  { out_V_we0 mem_we 1 1 }  { out_V_d0 mem_din 1 16 }  { out_V_q0 mem_dout 0 16 } } }
}
