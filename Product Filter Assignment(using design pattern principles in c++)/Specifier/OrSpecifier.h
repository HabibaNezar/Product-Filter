#pragma once
#include "Specifier.h"
#include "../Product/Product.h"

// Combine two specifiers with OR logic
class OrSpecifier : public Specifier
{
    Specifier *first;
    Specifier *second;

public:
    OrSpecifier(Specifier *a, Specifier *b) : first(a), second(b) {}
    bool specify(Product p) override
    {
        return first->specify(p) || second->specify(p);
    }
};
