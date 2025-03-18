#include <iostream>
#include "dog.h"
#include "cat.h"
#include "lion.h"
#include "careCenter.h"
#include "vetVisitor.h"
#include "caregiverVisitor.h"

int main()
{
    // Create a care center
    CareCenter careCenter;

    // Create two dogs with different health and hunger levels
    Dog *dog1 = new Dog("Rex", 7, 8); // hungry but healthy
    Dog *dog2 = new Dog("Max", 2, 4); // not hungry but not healthy

    // Create two cats with different health and hunger levels
    Cat *cat1 = new Cat("Fluffy", 7, 8);   // hungry but healthy
    Cat *cat2 = new Cat("Whiskers", 2, 2); // not hungry but not healthy

    // Create a lion
    Lion *lion = new Lion("Simba", 3, 2); // hungry and not healthy

    // Add dogs to the care center
    careCenter.addAnimal(dog1);
    careCenter.addAnimal(dog2);

    // Add cats to the care center
    careCenter.addAnimal(cat1);
    careCenter.addAnimal(cat2);

    // Add the lion to the care center
    careCenter.addAnimal(lion);

    // Create visitors
    VetVisitor vet("Dr. Smith");
    CaregiverVisitor caregiver("John");

    std::cout << "[🐶] Initial status of dogs:\n";
    dog1->displayStatus();
    dog2->displayStatus();
    std::cout << "\n";

    std::cout << "[🐱] Initial status of cats:\n";
    cat1->displayStatus();
    cat2->displayStatus();
    std::cout << "\n";

    std::cout << "[🦁] Initial status of lion:\n";
    lion->displayStatus();
    std::cout << "\n";

    // Have the vet check all animals
    std::cout << "[👩‍⚕️] Vet " << vet.getName() << " making rounds:\n";
    careCenter.check(&vet);
    std::cout << "\n";

    // Have the caregiver check all animals
    std::cout << "[🤠] Caregiver " << caregiver.getName() << " making rounds:\n";
    careCenter.check(&caregiver);
    std::cout << "\n";

    std::cout << "[🐶] Final status of dogs:\n";
    dog1->displayStatus();
    dog2->displayStatus();

    std::cout << "[🐱] Final status of cats:\n";
    cat1->displayStatus();
    cat2->displayStatus();

    std::cout << "[🦁] Final status of lion:\n";
    lion->displayStatus();

    return 0;
}