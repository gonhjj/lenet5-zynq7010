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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162"],
		"CDFG" : "lenet",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "161063", "EstimateLatencyMax" : "161063",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_r", "Type" : "Bram", "Direction" : "I"},
			{"Name" : "Cout", "Type" : "Bram", "Direction" : "IO"},
			{"Name" : "K1_W_V_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "C1_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K1_W_V_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_3_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_4_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_5_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_1_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_2_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_3_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_4_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_5_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_1_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_2_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_3_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_4_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_5_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_1_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_2_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_3_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_4_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_5_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_0_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_1_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_2_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_3_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_4_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_W_V_5_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K1_B_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "P1_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K2_W_V_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "C2_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K2_W_V_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_0_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_0_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_1_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_2_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_3_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_4_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_5_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_6_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_7_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_8_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_9_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_10_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_11_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_12_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_13_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_14_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K2_W_V_15_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "P2_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K3_W_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "C3_out_V_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "K3_W_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_W_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "K3_B_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Re_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "FC1_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "FC1_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC1_B_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC2_out_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "FC2_W_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "FC2_B_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C1_out_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_1_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_2_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_3_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_4_0_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_5_0_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_0_1_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_1_1_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_2_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_3_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_4_1_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_5_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_0_2_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_1_2_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_2_2_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_3_2_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_4_2_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_5_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_0_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_1_3_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_2_3_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_3_3_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_4_3_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_5_3_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_0_4_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_1_4_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_2_4_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_3_4_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_4_4_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_W_V_5_4_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K1_B_V_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.P1_out_V_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_0_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C2_out_V_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_1_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_2_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_3_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_4_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_0_5_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_0_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_1_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_2_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_3_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_4_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_1_5_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_0_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_1_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_2_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_3_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_4_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_2_5_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_0_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_1_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_2_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_3_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_4_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_3_5_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_0_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_1_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_2_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_3_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_4_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_4_5_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_0_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_1_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_2_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_3_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_4_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_5_5_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_0_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_1_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_2_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_3_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_4_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_6_5_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_0_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_1_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_2_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_3_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_4_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_7_5_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_0_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_1_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_2_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_3_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_4_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_8_5_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_0_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_1_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_2_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_3_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_4_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_9_5_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_0_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_1_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_2_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_3_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_4_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_10_5_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_0_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_1_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_2_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_3_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_4_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_11_5_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_0_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_1_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_2_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_3_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_4_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_12_5_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_0_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_1_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_2_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_3_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_4_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_13_5_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_0_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_1_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_2_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_3_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_4_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_14_5_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_0_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_1_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_2_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_3_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_4_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K2_W_V_15_5_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.P2_out_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_0_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C3_out_V_0_0_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_1_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_2_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_3_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_4_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_5_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_6_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_7_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_8_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_9_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_10_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_11_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_12_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_13_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_14_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_W_V_15_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.K3_B_V_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Re_out_V_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC1_out_V_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC1_W_V_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC1_B_V_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC2_out_V_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC2_W_V_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.FC2_B_V_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_Crtl_s_axi_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.in_V_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fadd_32ns_3bkb_U1", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fdiv_32ns_3cud_U2", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fpext_32ns_dEe_U3", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.lenet_fexp_32ns_3eOg_U4", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	lenet {
		input_r {Type I LastRead 2 FirstWrite -1}
		Cout {Type IO LastRead 22 FirstWrite 33}
		K1_W_V_0_0 {Type I LastRead -1 FirstWrite -1}
		C1_out_V {Type IO LastRead -1 FirstWrite -1}
		K1_W_V_1_0 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_2_0 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_3_0 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_4_0 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_5_0 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_0_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_1_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_2_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_3_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_4_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_5_1 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_0_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_1_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_2_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_3_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_4_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_5_2 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_0_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_1_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_2_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_3_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_4_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_5_3 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_0_4 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_1_4 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_2_4 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_3_4 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_4_4 {Type I LastRead -1 FirstWrite -1}
		K1_W_V_5_4 {Type I LastRead -1 FirstWrite -1}
		K1_B_V {Type I LastRead -1 FirstWrite -1}
		P1_out_V {Type IO LastRead -1 FirstWrite -1}
		K2_W_V_0_0 {Type I LastRead -1 FirstWrite -1}
		C2_out_V {Type IO LastRead -1 FirstWrite -1}
		K2_W_V_0_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_0_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_0_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_0_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_0_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_1_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_2_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_3_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_4_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_5_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_6_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_7_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_8_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_9_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_10_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_11_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_12_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_13_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_14_5 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_0 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_1 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_2 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_3 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_4 {Type I LastRead -1 FirstWrite -1}
		K2_W_V_15_5 {Type I LastRead -1 FirstWrite -1}
		P2_out_V {Type IO LastRead -1 FirstWrite -1}
		K3_W_V_0 {Type I LastRead -1 FirstWrite -1}
		C3_out_V_0_0 {Type IO LastRead -1 FirstWrite -1}
		K3_W_V_1 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_2 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_3 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_4 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_5 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_6 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_7 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_8 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_9 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_10 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_11 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_12 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_13 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_14 {Type I LastRead -1 FirstWrite -1}
		K3_W_V_15 {Type I LastRead -1 FirstWrite -1}
		K3_B_V {Type I LastRead -1 FirstWrite -1}
		Re_out_V {Type IO LastRead -1 FirstWrite -1}
		FC1_out_V {Type IO LastRead -1 FirstWrite -1}
		FC1_W_V {Type I LastRead -1 FirstWrite -1}
		FC1_B_V {Type I LastRead -1 FirstWrite -1}
		FC2_out_V {Type IO LastRead -1 FirstWrite -1}
		FC2_W_V {Type I LastRead -1 FirstWrite -1}
		FC2_B_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "161063", "Max" : "161063"}
	, {"Name" : "Interval", "Min" : "161064", "Max" : "161064"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
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
