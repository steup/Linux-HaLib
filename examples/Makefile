#------- USER_CONFIG -------------

HALIB_DIR        := ..

CFLAGS           += -Wall -Os
CXXFLAGS         += -Wall -Os -fno-keep-inline-functions -ffunction-sections #-DLOGGING_DISABLE
LDFLAGS          += -Os -Wl,--gc-sections

PLATFORM         := ${HALIB_DIR}/platform/posix

#----------END USER_CONFIG --------

include ${HALIB_DIR}/make/singleObjectApp.mk
include ${HALIB_DIR}/make/clean.mk

