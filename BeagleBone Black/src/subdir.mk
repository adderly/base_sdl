################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Debug.cpp \
../src/Main.cpp \
../src/SDLWindowManager.cpp 

OBJS += \
./src/Debug.o \
./src/Main.o \
./src/SDLWindowManager.o 

CPP_DEPS += \
./src/Debug.d \
./src/Main.d \
./src/SDLWindowManager.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	arm-linux-gnueabihf-g++ -DDEBUG -I"/home/aaron/repositories/BaseSDL/lib/sdl2/beaglebone/include" -I/usr/arm-linux-gnueabihf/include/c++/4.8.1 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


