#include <string>

#include "bot.h"

int main()
{   
    std::string botName{"Bob"};
    Bot bot{botName};
    bot.greet();
}