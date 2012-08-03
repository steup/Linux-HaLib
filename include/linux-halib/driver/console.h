#include <stdint.h>
#include <iostream>


namespace linux_halib{
namespace driver
{
    struct Console
    {
        struct DefaultConfig
        {

        };

        template<typename Config = DefaultConfig>
        struct configure
        {
            struct type
            {
                type& operator<<(char c)
                {
                    std::cout << c;
                    return *this;
                }

                uint8_t getPos()
                {
                    return 0;
                }

                void setPos(uint8_t pos)
                {

                }
            };
        };
        
    };
}
}
