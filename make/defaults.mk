include $(dir $(abspath $(lastword ${MAKEFILE_LIST})))/../config.mk

TOOL_PREFIX  ?= 

CC           := gcc
ASM          ?= gcc
CXX          ?= g++
LD           ?= ld
SIZE         ?= size
OBJCPY       ?= objcopy
OBJDMP       ?= objdump
MKDIR        ?= mkdir -p
REMOVE       ?= rm -rf
LINK         ?= ln


CC           := @${TOOL_PREFIX}${CC}
ASM          := @${TOOL_PREFIX}${ASM}
CXX          := @${TOOL_PREFIX}${CXX}
LD           := @${TOOL_PREFIX}${LD}
SIZE         := @${TOOL_PREFIX}${SIZE}
OBJCPY       := @${TOOL_PREFIX}${OBJCPY}
OBJDMP       := @${TOOL_PREFIX}${OBJDMP}
MKDIR        := @${MKDIR}
REMOVE       := @${REMOVE}
LINK         := @${LINK}


SRC          ?= ./src
INC          ?= ./include
BIN          ?= ./bin
BUILD        ?= ./build
LDSCRIPTS    ?= ${HALIB_DIR}/ldscripts

HALIB        := LINUX

include ${PLATFORM}/config.mk

AVR_CFLAGS   := -fno-strict-aliasing \
#			    -fno-exceptions

AVR_ASMFLAGS := 
AVR_CXXFLAGS := -fno-strict-aliasing \
			    -fno-rtti \
				-fno-threadsafe-statics \
#			    -fno-exceptions \

AVR_LDFLAGS  := -Wl,--gc-sections

LIBS         += linux-halib
LDPATHS      += ${HALIB_DIR}/lib/${TARGET}
ARFLAGS      := rus

INCLUDES     := ${INC} \
				${INCLUDES} \
				${HALIB_DIR}/include

ADDITIONAL_DEPS += externals
