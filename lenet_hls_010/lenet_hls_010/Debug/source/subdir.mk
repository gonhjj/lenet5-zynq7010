################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
D:/FPGA_project/lenet_7010/lenet_hls_010/function.cpp \
D:/FPGA_project/lenet_7010/lenet_hls_010/lenet.cpp 

OBJS += \
./source/function.o \
./source/lenet.o 

CPP_DEPS += \
./source/function.d \
./source/lenet.d 


# Each subdirectory must supply rules for building sources it contributes
source/function.o: D:/FPGA_project/lenet_7010/lenet_hls_010/function.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -ID:/vivado/xilinx/Vivado/2019.1/include/etc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/systemc/include -ID:/vivado/xilinx/Vivado/2019.1/include/ap_sysc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/auto_cc/include -ID:/vivado/xilinx/Vivado/2019.1/include -ID:/FPGA_project/lenet_7010/lenet_hls_010 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/lenet.o: D:/FPGA_project/lenet_7010/lenet_hls_010/lenet.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -ID:/vivado/xilinx/Vivado/2019.1/include/etc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/systemc/include -ID:/vivado/xilinx/Vivado/2019.1/include/ap_sysc -ID:/vivado/xilinx/Vivado/2019.1/win64/tools/auto_cc/include -ID:/vivado/xilinx/Vivado/2019.1/include -ID:/FPGA_project/lenet_7010/lenet_hls_010 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


