################################################################################
# Automatically-generated file. Do not edit!
################################################################################

### Toolchain: beaglebone_black-armv7l-timesys-linux-gnueabihf-gcc-4.9.3- ###
CC=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-gcc
STRIP=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-strip
CXX=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-g++
CPP=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-cpp
RANLIB=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-ranlib
DEBUGGER=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-gdb
AR=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-ar
AS=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-as
OBJCOPY=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-objcopy
OBJDUMP=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-objdump
LD=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-ld
NM=/home/zigi/timesys/beaglebone_black/toolchain/bin/armv7l-timesys-linux-gnueabihf-nm

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Jai_Debug

# Tool invocations
Jai_Debug: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	$(CC)  -o "Jai_Debug" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Jai_Debug
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
