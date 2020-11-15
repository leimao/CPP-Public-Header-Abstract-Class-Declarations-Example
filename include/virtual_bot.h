#include <string>

class IBot
{
public:
    virtual void greet() const = 0;
};

IBot* createBot(std::string& botName);

class Bot : public IBot
{
public:

    Bot(std::string& botName);
    void greet() const override;

private:

    std::string mBotName;
};