#include <string>

class Bot
{
public:

    Bot(std::string& botName);
    void greet() const;

private:

    std::string mBotName;
};