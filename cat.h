#ifndef CAT
#define CAT

#include "animal.h"
#include "visitor.h"
#include <string>

class Cat : public Animal
{
public:
    Cat(std::string name, int hungerLevel, int healthLevel);
    ~Cat() = default;

    void eat() override;
    void heal() override;
    void displayStatus() override;
};

#endif