//
// Created by zx on 1/28/22.
//

#include "headers/Function.h"

class Hyperbola : public Function
{
public:
    double evaluate(double x)
    {
        return a / (x - b) +c;
    }
};
