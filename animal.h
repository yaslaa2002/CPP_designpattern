#ifndef ANIMAL
#define ANIMAL

#include <string>
#include "visitor.h"

class Animal
{
protected:
    std::string name;
    int hungerLevel;
    int healthLevel;

public:
    // Getters and setters
    std::string getName() { return name; }
    int getHungerLevel() { return hungerLevel; }
    int getHealthLevel() { return healthLevel; }

    void setName(std::string n) { name = n; }
    void setHungerLevel(int h) { hungerLevel = h; }
    void setHealthLevel(int h) { healthLevel = h; }

    // Accept the Visitor method
    void accept(Visitor *v)
    {
        v->visit(this);
    }

    // Virtual methods
    virtual void eat() = 0;
    virtual void heal() = 0;
    virtual void displayStatus() = 0;
};

#endif