#pragma once

#include <linux-halib/drivers/console.h>
#include <linux-halib/drivers/sleep.h>

namespace platform {
namespace ros
{
    using linux_halib::logging::devices::Console;

    typedef Console::configure<>::type LoggingDevice;

    typedef linux_halib::power::Morpheus::configure<>::type Morpheus;

    struct Timer0BaseConfig{};
    struct Timer1BaseConfig{};
    struct Timer2BaseConfig{};
    struct Timer3BaseConfig{};
    struct Timer4BaseConfig{};
    struct Timer5BaseConfig{};
}
}
