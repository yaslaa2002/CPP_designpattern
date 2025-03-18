#ifndef VET_VISITOR
#define VET_VISITOR

#include "visitor.h"

class VetVisitor : public Visitor
{
public:
    VetVisitor(std::string n) : Visitor(n) {}
    ~VetVisitor() = default;

    void visit(Animal *animal) override;
};

#endif