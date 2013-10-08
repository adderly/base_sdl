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
	g++ -DDEBUG -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


