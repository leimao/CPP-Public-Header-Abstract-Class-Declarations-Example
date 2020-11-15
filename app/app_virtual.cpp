#include <string>

#include "public_virtual_bot.h"

int main()
{
    std::string botName{"Bob"};
    IBot* bot = createBot(botName);
    bot->greet();
}