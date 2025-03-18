#ifndef DOG
#define DOG

#include "animal.h"
#include "visitor.h"
#include <string>

class Dog : public Animal
{
public:
    Dog(std::string name, int hungerLevel, int healthLevel);
    ~Dog() = default;

    void eat() override;
    void heal() override;
    void displayStatus() override;
};

#endif