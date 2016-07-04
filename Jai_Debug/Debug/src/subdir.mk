################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Jai_Debug.c \
../src/sub.c 

OBJS += \
./src/Jai_Debug.o \
./src/sub.o 

C_DEPS += \
./src/Jai_Debug.d \
./src/sub.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	$(CC) -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


