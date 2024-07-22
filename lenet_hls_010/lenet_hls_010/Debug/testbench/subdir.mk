################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
D:/FPGA_project/lenet_7010/lenet_hls_010/test.cpp 

OBJS += \
./testbench/test.o 

CPP_DEPS += \
./testbench/test.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/test.o: D:/FPGA_project/lenet_7010/lenet_hls_010/test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -ID:/vivado/xilinx/Vivado/2019.1/include/etc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/systemc/include -ID:/vivado/xilinx/Vivado/2019.1/include/ap_sysc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/auto_cc/include -ID:/vivado/xilinx/Vivado/2019.1/include -ID:/FPGA_project/lenet_7010/lenet_hls_010 -O0 -g3 -Wall -Wno-unknown-pragmas -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"testbench/test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


