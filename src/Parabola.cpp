//
// Created by zx on 1/28/22.
//
#include "headers/Function.h"

class Parabola: public Function
{
public:
    double evaluate(double x)
    {
        return  a * x * x + b * x + c;
    }
};
