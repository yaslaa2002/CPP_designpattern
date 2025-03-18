#ifndef CAREGIVER_VISITOR
#define CAREGIVER_VISITOR

#include "visitor.h"

class CaregiverVisitor : public Visitor
{
public:
    CaregiverVisitor(std::string n) : Visitor(n) {};
    ~CaregiverVisitor() = default;

    // Visitor method
    void visit(Animal *a) override;
};

#endif