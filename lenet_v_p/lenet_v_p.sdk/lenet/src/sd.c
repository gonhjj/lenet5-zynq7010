#include "sd.h"

int SD_Init()
{
    FRESULT rc;

    // 尝试挂载文件系统
    rc = f_mount(&fatfs, "", 0);
    if(rc){
    	xil_printf("ERROR : f_mount returned %d\r\n",rc);
        return XST_FAILURE;
    }
    return XST_SUCCESS;
}

int SD_Transfer_read(char *FileName,u32 DestinationAddress,u32 ByteLength)
{
    FIL fil;
    FRESULT rc;
    UINT br;

    rc = f_open(&fil,FileName,FA_READ);
    if(rc){
    	xil_printf("ERROR : f_open returned %d\r\n",rc);
    	return XST_FAILURE;
    }
    rc = f_lseek(&fil, 0);
    if(rc){
    	xil_printf("ERROR : f_lseek returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_read(&fil, (void*)DestinationAddress,ByteLength,&br);
    if(rc){
        xil_printf("ERROR : f_read returned %d\r\n",rc);
        return XST_FAILURE;
    }
    rc = f_close(&fil);
    if(rc){
        xil_printf(" ERROR : f_close returned %d\r\n", rc);
        return XST_FAILURE;
    }
    return XST_SUCCESS;
}


void read_float(char *filename, float* x, int length){
	SD_Transfer_read(filename,(u32)x,(u32)(sizeof(float)*length));
	//xil_printf("Finish reading \r\n");
}


