#include "vetVisitor.h"
#include "dog.h"
#include "cat.h"
#include <iostream>

void VetVisitor::visit(Animal *animal)
{

    if (Dog *dog = dynamic_cast<Dog *>(animal))
    {
        std::cout << "Vet is examining the dog " << dog->getName() << std::endl;

        if (dog->getHealthLevel() < 5)
        {
            std::cout << "The dog is sick. Healing the dog." << std::endl;
            dog->heal();
        }
        else
        {
            std::cout << "The dog is healthy." << std::endl;
        }
        return;
    }

    if (Cat *cat = dynamic_cast<Cat *>(animal))
    {
        std::cout << "Vet is examining the cat " << cat->getName() << std::endl;

        if (cat->getHealthLevel() < 3)
        {
            std::cout << "The cat is sick. Healing the cat." << std::endl;
            cat->heal();
        }
        else
        {
            std::cout << "The cat is healthy." << std::endl;
        }
        return;
    }

    std::cout << "This type of animal (" << animal->getName() << " of type " << typeid(*animal).name() << ") is not supported by the vet." << std::endl;
}