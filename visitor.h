#ifndef VISITOR
#define VISITOR

#include <string>

// We make a forward declaration of the Animal class to prevent cyclic dependency
class Animal;

class Visitor
{
protected:
    std::string name;

public:
    Visitor(std::string n) { setName(n); }
    virtual ~Visitor() = default;

    std::string getName() { return name; }
    void setName(std::string n) { name = n; }

    // Visit method
    virtual void visit(Animal *animal) = 0;
};

#endif