#include "cat.h"
#include "animal.h"
#include <random>
#include <iostream>

Cat::Cat(std::string name, int hungerLevel, int healthLevel)
{
    setName(name);
    setHungerLevel(hungerLevel);
    setHealthLevel(healthLevel);
}

void Cat::eat()
{
    setHungerLevel(--hungerLevel);
}

void Cat::heal()
{
    setHealthLevel(++healthLevel);
}

void Cat::displayStatus()
{
    int cat_hunger = getHungerLevel();
    int cat_health = getHealthLevel();
    std::string cat_name = getName();

    std::cout << "For the cat " << cat_name << " HungerLevel=" << cat_hunger << " and HealthLevel=" << cat_health << std::endl;
}