#include "xparameters.h"
#include "xil_printf.h"
#include "ff.h"
#include "xdevcfg.h"
#include  <stdio.h>
#include  <stdlib.h>
#include "xil_printf.h"
#include "xil_io.h"
#include "xlenet.h"
#include "xtime_l.h"

#define FILE_NAME "in7.bin"
#define FEATURE_DIM 1024

static FATFS fatfs;


int SD_Init();


void read_float(char *filename, float* x, int length);

