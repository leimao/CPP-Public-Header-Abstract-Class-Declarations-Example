#include <string>

class IBot
{
public:
    virtual void greet() const = 0;
};

IBot* createBot(std::string& botName);
