#include <platform.h>

int main()
{
    log::emit() << "Hello World!" << log::endl;
    while(true)
        Morpheus::sleep();
    return 0;
}
