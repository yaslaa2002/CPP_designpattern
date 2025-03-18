#ifndef CARE_CENTER_H
#define CARE_CENTER_H

#include <vector>
#include <memory>
#include "animal.h"
#include "visitor.h"

class CareCenter
{
private:
    std::vector<std::unique_ptr<Animal>> animals;

public:
    CareCenter() = default;
    ~CareCenter() = default;

    void addAnimal(Animal *animal);

    void check(Visitor *visitor);
};

#endif