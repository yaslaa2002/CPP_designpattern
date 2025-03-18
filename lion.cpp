#include "lion.h"
#include "animal.h"
#include <random>
#include <iostream>

Lion::Lion(std::string name, int hungerLevel, int healthLevel)
{
    setName(name);
    setHungerLevel(hungerLevel);
    setHealthLevel(healthLevel);
}

void Lion::eat()
{
    setHungerLevel(--hungerLevel);
}

void Lion::heal()
{
    setHealthLevel(++healthLevel);
}

void Lion::displayStatus()
{
    int lion_hunger = getHungerLevel();
    int lion_health = getHealthLevel();
    std::string lion_name = getName();

    std::cout << "For the lion " << lion_name << " HungerLevel=" << lion_hunger << " and HealthLevel=" << lion_health << std::endl;
}