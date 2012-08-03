DBG_CLIENT         ?= gdb
DBG_CLIENT_OPTS    +=


.PHONY: %.debug_server %.debug

%.debug: ${BIN}/%.elf
	@echo "(DBG  ) <- $(basename $(notdir $<))"
	@${DBG_CLIENT} ${DBG_CLIENT_OPTS} $<

%.debug_server:
