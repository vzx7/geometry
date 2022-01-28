//
// Created by zx on 1/28/22.
//
#include "headers/Function.h"

class Ellipse : public Function
{
public:
    double evaluate(double x)
    {
        double y = b * sqrt(1 - pow(x, 2) / pow(a, 2));
        double *zero =  new double[] { 0 };
        double *res =  new double[] { y, -y };
        return sqrt(a - x * x * b) +c; //y == 0 ? zero : res;
    }
};