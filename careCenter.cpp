#include "careCenter.h"
#include "animal.h"
#include "visitor.h"

void CareCenter::addAnimal(Animal *animal)
{
    animals.push_back(std::unique_ptr<Animal>(animal));
}

void CareCenter::check(Visitor *visitor)
{
    for (const auto &animal : animals)
    {
        animal->accept(visitor);
    }
}