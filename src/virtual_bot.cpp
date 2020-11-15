#include <iostream>

#include "virtual_bot.h"

Bot::Bot(std::string& botName) : mBotName{botName}
{
}

void Bot::greet() const
{
    std::cout << "Hello, I'm " << this->mBotName << ". " << std::endl;
    std::cout << "Nice to meet you." << std::endl;
}

IBot* createBot(std::string& botName)
{
    IBot* bot = new Bot{botName};
    return bot;
}