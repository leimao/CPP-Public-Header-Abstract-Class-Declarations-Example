#include <string>

#include "public_bot.h"

int main()
{   
    std::string botName{"Bob"};
    Bot bot{botName};
    bot.greet();
}