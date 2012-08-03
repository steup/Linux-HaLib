#pragma once

#include "config.h"
#include <linux-halib/logging/loggingDevice.h>

namespace platform
{
    using namespace posix;
}

setLoggingDevice( platform::LoggingDevice );

#include <linux-halib/logging/logging.h>

using linux_halib::logging::log;
using platform::Morpheus;
