#include "sd.h"


u32 float_to_u32(float value)
{
	u32 result;
	union float_byte
	{
		float v;
		u8 byte[4];
	}data;
	data.v =value ;
	result = (data.byte[3]<<24)+(data.byte[2]<<16)+(data.byte[1]<<8)+(data.byte[0]<<0);
	return result;
}

float u32_to_float(u32 value)
{
	return *((float*)&value);
}

//打印数据
void print_fp_1d_array(float arr[], int i_limit) {
	char buffer[50];
    for (int i = 0; i < i_limit; i++) {
    	//printf("arr[%d] = %f\r\n",i,arr[i]);
    	sprintf(buffer, "%f", arr[i]);
        xil_printf("arr[%d] = %s\r\n",i,buffer);
    }
}


int main(){

	//xil_printf("hello\r\n");
	float input[FEATURE_DIM] = {0};
	float output[10] = {0};
	char buffer[50];
	int status;
	u32 result,revs;
	XTime tEnd, tCur;
	u32 tUsed;

	XTime_GetTime(&tCur);

	SD_Init();
	//xil_printf("SD OK\r\n");

	//读SD卡存的浮点数据
	read_float(FILE_NAME, input, FEATURE_DIM);
	//print_fp_1d_array(input,FEATURE_DIM);

	for(int i=0;i<1024;i++)
	{
		result = float_to_u32(input[i]);
		//xil_printf("result = %d\r\n",result);
		Xil_Out32(XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR+i*4,result);
	}

	XLenet HlsXMem_test;             // 定义一个 XLenet 加速器实例
	XLenet_Config *ExamplePtr;       // 指向配置结构的指针

	// 查找设备配置
	//xil_printf("Look Up the device configuration.\r\n");
	ExamplePtr = XLenet_LookupConfig(XPAR_LENET_0_DEVICE_ID);
	if (!ExamplePtr)
	{
		xil_printf("ERROR: Lookup of accelerator configuration failed.\n\r");
		return XST_FAILURE;
	}

	// 初始化设备
	//xil_printf("Initialize the Device\r\n");
	status = XLenet_CfgInitialize(&HlsXMem_test, ExamplePtr);

	//xil_printf("here1\r\n");

	if (status != XST_SUCCESS)
	{
		xil_printf("ERROR: Could not initialize accelerator.\n\r");
		return(-1);
	}

	// 启动加速器
	XLenet_Start(&HlsXMem_test);

	// 等待加速器完成
	while (XLenet_IsDone(&HlsXMem_test) == 0);

	//xil_printf("here\r\n");

	// 读取结果并打印
	for(int i=0;i<10;i++)
	{
		revs = Xil_In32(XPAR_AXI_BRAM_CTRL_1_S_AXI_BASEADDR+4*i);
		float recvf = u32_to_float(revs);

		sprintf(buffer, "%f", recvf);
		xil_printf("out[%d]: %s\r\n",i,buffer);
		//printf("out[%d]: %f\r\n",i,recvf);
	}
	//xil_printf("all vision over\r\n");

	XTime_GetTime(&tEnd);

	// 时间计算
	tUsed = ((tEnd-tCur)*1000000)/(COUNTS_PER_SECOND);
	xil_printf("time elapsed is %d us\r\n",tUsed);

	return 0;
}
