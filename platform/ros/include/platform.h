#pragma once

#include "config.h"

namespace platform
{
    using namespace ros;
}

setLoggingDevice( platform::LoggingDevice );

#include <linux-halib/logging/logging.h>

using linux_halib::logging::log;
using platform::Morpheus;
