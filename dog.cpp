#include "dog.h"
#include "animal.h"
#include <random>
#include <iostream>

Dog::Dog(std::string name, int hungerLevel, int healthLevel)
{
    setName(name);
    setHungerLevel(hungerLevel);
    setHealthLevel(healthLevel);
}

void Dog::eat()
{
    setHungerLevel(--hungerLevel);
}

void Dog::heal()
{
    setHealthLevel(++healthLevel);
}

void Dog::displayStatus()
{
    int dog_hunger = getHungerLevel();
    int dog_health = getHealthLevel();
    std::string dog_name = getName();

    std::cout << "For the dog " << dog_name << " HungerLevel=" << dog_hunger << " and HealthLevel=" << dog_health << std::endl;
}