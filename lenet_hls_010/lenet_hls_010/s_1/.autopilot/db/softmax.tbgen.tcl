set moduleName softmax
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
set C_modelName {softmax}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_r float 32 regular {bram 10 { 2 3 } 1 1 }  }
	{ FC2_out_V int 16 regular {array 10 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_r", "interface" : "bram", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "FC2_out_V", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ out_r_Addr_A sc_out sc_lv 32 signal 0 } 
	{ out_r_EN_A sc_out sc_logic 1 signal 0 } 
	{ out_r_WEN_A sc_out sc_lv 4 signal 0 } 
	{ out_r_Din_A sc_out sc_lv 32 signal 0 } 
	{ out_r_Dout_A sc_in sc_lv 32 signal 0 } 
	{ FC2_out_V_address0 sc_out sc_lv 4 signal 1 } 
	{ FC2_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ FC2_out_V_q0 sc_in sc_lv 16 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "out_r_Addr_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "Addr_A" }} , 
 	{ "name": "out_r_EN_A", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "EN_A" }} , 
 	{ "name": "out_r_WEN_A", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_r", "role": "WEN_A" }} , 
 	{ "name": "out_r_Din_A", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "Din_A" }} , 
 	{ "name": "out_r_Dout_A", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_r", "role": "Dout_A" }} , 
 	{ "name": "FC2_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "FC2_out_V", "role": "address0" }} , 
 	{ "name": "FC2_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "FC2_out_V", "role": "ce0" }} , 
 	{ "name": "FC2_out_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "FC2_out_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fadd_32ns_3hbi_U37", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fdiv_32ns_3ibs_U38", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fexp_32ns_3jbC_U39", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax {
		out_r {Type IO LastRead 4 FirstWrite 15}
		FC2_out_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "301", "Max" : "301"}
	, {"Name" : "Interval", "Min" : "301", "Max" : "301"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	out_r { bram {  { out_r_Addr_A MemPortADDR2 1 32 }  { out_r_EN_A MemPortCE2 1 1 }  { out_r_WEN_A MemPortWE2 1 4 }  { out_r_Din_A MemPortDIN2 1 32 }  { out_r_Dout_A MemPortDOUT2 0 32 } } }
	FC2_out_V { ap_memory {  { FC2_out_V_address0 mem_address 1 4 }  { FC2_out_V_ce0 mem_ce 1 1 }  { FC2_out_V_q0 mem_dout 0 16 } } }
}
