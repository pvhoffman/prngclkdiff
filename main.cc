#include <iostream>
#include <chrono>


/*---------------------------------------------------------------------------*/
static std::chrono::milliseconds
millis()
{
    auto ret = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
    return ret;
}
/*---------------------------------------------------------------------------*/
static bool
flip_coin()
{
    using namespace std::chrono_literals;

    auto n = false;
    auto then = millis() + 1ms;
    while(millis() <= then)
    {
        n = !n;
    }
    return n;
}
/*---------------------------------------------------------------------------*/
static int 
get_fair_bit()
{
    for(;;)
    {
        auto a = flip_coin();
        if(a != flip_coin())
        {
            return a;
        }
    }
    return 0;
}
/*---------------------------------------------------------------------------*/
static int 
get_random_byte()
{
    int n = 0;
    int bits = 8;
    while(bits--)
    {
        n <<= 1;
        n |= get_fair_bit();
    }
    return n;
}
/*---------------------------------------------------------------------------*/
int 
main(int argc, char** argv)
{
    for(;;)
    {
        std::cout << get_random_byte() << std::endl;
    }
    return 0;
}
/*---------------------------------------------------------------------------*/
