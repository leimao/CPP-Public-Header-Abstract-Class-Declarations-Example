#include <iostream>

#include "bot.h"

Bot::Bot(std::string& botName) : mBotName{botName}
{
}

void Bot::greet() const
{
    std::cout << "Hello, I'm " << this->mBotName << ". " << std::endl;
    std::cout << "Nice to meet you." << std::endl;
}