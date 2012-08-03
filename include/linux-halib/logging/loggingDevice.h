#pragma once

#define setLoggingDevice(device) 							\
	namespace linux_halib 									\
	{														\
	namespace logging 										\
	{														\
	namespace config										\
	{														\
		typedef device LoggingDevice;                       \
	}														\
	}														\
	}														
