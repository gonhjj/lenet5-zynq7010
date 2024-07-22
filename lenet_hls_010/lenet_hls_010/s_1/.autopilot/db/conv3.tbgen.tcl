set moduleName conv3
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
set C_modelName {conv3}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_0_0_V int 16 regular {array 120 { 2 3 } 1 1 }  }
	{ P2_out_V int 16 regular {array 400 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_0_0_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READWRITE"} , 
 	{ "Name" : "P2_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ out_0_0_V_address0 sc_out sc_lv 7 signal 0 } 
	{ out_0_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ out_0_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ out_0_0_V_d0 sc_out sc_lv 16 signal 0 } 
	{ out_0_0_V_q0 sc_in sc_lv 16 signal 0 } 
	{ P2_out_V_address0 sc_out sc_lv 9 signal 1 } 
	{ P2_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ P2_out_V_q0 sc_in sc_lv 16 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "out_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "out_0_0_V", "role": "address0" }} , 
 	{ "name": "out_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0_0_V", "role": "ce0" }} , 
 	{ "name": "out_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0_0_V", "role": "we0" }} , 
 	{ "name": "out_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_0_0_V", "role": "d0" }} , 
 	{ "name": "out_0_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_0_0_V", "role": "q0" }} , 
 	{ "name": "P2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "P2_out_V", "role": "address0" }} , 
 	{ "name": "P2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "P2_out_V", "role": "ce0" }} , 
 	{ "name": "P2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "P2_out_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_B_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_mac_muladd_eOg_U19", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv3 {
		out_0_0_V {Type IO LastRead 6 FirstWrite 4}
		P2_out_V {Type I LastRead 6 FirstWrite -1}
		K3_W_V {Type I LastRead -1 FirstWrite -1}
		K3_B_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "199322", "Max" : "199322"}
	, {"Name" : "Interval", "Min" : "199322", "Max" : "199322"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	out_0_0_V { ap_memory {  { out_0_0_V_address0 mem_address 1 7 }  { out_0_0_V_ce0 mem_ce 1 1 }  { out_0_0_V_we0 mem_we 1 1 }  { out_0_0_V_d0 mem_din 1 16 }  { out_0_0_V_q0 mem_dout 0 16 } } }
	P2_out_V { ap_memory {  { P2_out_V_address0 mem_address 1 9 }  { P2_out_V_ce0 mem_ce 1 1 }  { P2_out_V_q0 mem_dout 0 16 } } }
}
