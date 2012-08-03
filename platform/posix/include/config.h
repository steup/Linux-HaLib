#pragma once

#include <linux-halib/driver/console.h>
#include <linux-halib/driver/morpheus.h>

namespace platform {
namespace posix
{
    using linux_halib::driver::Console;

    typedef Console::configure<>::type LoggingDevice;

    typedef linux_halib::driver::Morpheus::configure<>::type Morpheus;

    /*    struct Timer0BaseConfig{};
    struct Timer1BaseConfig{};
    struct Timer2BaseConfig{};
    struct Timer3BaseConfig{};
    struct Timer4BaseConfig{};
    struct Timer5BaseConfig{};*/
}
}
