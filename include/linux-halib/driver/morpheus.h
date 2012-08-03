#pragma once

#include <boost/thread.hpp>
#include <boost/chrono.hpp>


namespace linux_halib
{
namespace driver
{
	struct Morpheus
	{
            struct DefaultConfig
            {
                typedef boost::chrono::milliseconds SleepTimeType;
                static const unsigned long long sleepTime = 100;
            };

            struct SleepModes
            {
                /**\brief Possible sleep modes
                 **/
                enum SleepModeType
                {
                    idle=0			/**<Default task sleep**/
                };
            };

            typedef SleepModes::SleepModeType SleepModeType;

            template<typename Config = DefaultConfig>
            struct configure
            {
                struct type
                {
                    typedef Morpheus::SleepModes    SleepModes;
                    typedef Morpheus::SleepModeType SleepModeType;

                    /**\brief sleep the mcu
                     * \param mode the sleep mode to use
                     *
                     * this call puts the cpu to sleep. The operation will be resumed when an
                     * interrupt occurs, however dependant on the selected sleep mode some
                     * interrupt sources may not trigger.
                     **/
                    static void sleep(SleepModeType mode = SleepModes::idle)
                    {
                        boost::this_thread::sleep_for(typename Config::SleepTimeType(Config::sleepTime));
                    }

                    template<SleepModeType mode>
                    static void sleep()
                    {
                        sleep(mode);
                    }
                };
            };
    };
}
}
