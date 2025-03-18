#include "caregiverVisitor.h"
#include "dog.h"
#include "cat.h"
#include "lion.h"
#include <iostream>

void CaregiverVisitor::visit(Animal *animal)
{
    if (Dog *dog = dynamic_cast<Dog *>(animal))
    {
        std::cout << "Caregiver is examining the dog " << dog->getName() << std::endl;

        if (dog->getHungerLevel() > 5)
        {
            std::cout << "The dog is hungry. Feeding the dog." << std::endl;
            dog->eat();
        }
        else
        {
            std::cout << "The dog is not hungry." << std::endl;
        }
        return;
    }

    if (Cat *cat = dynamic_cast<Cat *>(animal))
    {
        std::cout << "Caregiver is examining the cat " << cat->getName() << std::endl;

        if (cat->getHungerLevel() > 3)
        {
            std::cout << "The cat is hungry. Feeding the cat." << std::endl;
            cat->eat();
        }
        else
        {
            std::cout << "The cat is not hungry." << std::endl;
        }
        return;
    }

    if (Lion *lion = dynamic_cast<Lion *>(animal))
    {
        std::cout << "Caregiver is examining the lion " << lion->getName() << std::endl;

        if (lion->getHungerLevel() > 2)
        {
            std::cout << "The lion is hungry. Feeding the lion." << std::endl;
            lion->eat();
        }
        else
        {
            std::cout << "The lion is not hungry." << std::endl;
        }
        return;
    }

    std::cout << "This type of animal (" << animal->getName() << " of type " << typeid(*animal).name() << ") is not supported by the caregiver." << std::endl;
}