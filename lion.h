#ifndef LION
#define LION

#include "animal.h"
#include "visitor.h"
#include <string>

class Lion : public Animal
{
public:
    Lion(std::string name, int hungerLevel, int healthLevel);
    ~Lion() = default;

    void eat() override;
    void heal() override;
    void displayStatus() override;
};

#endif