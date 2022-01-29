//
// Created by zx on 1/28/22.
//

#ifndef GEOMETRY_FUNCTION_H
#define GEOMETRY_FUNCTION_H
#include <iostream>
#include <cmath>
using namespace std;

class Function
{
protected:
    double a, b;
public:
    virtual string evaluate(double x) = 0;
    void setParams(double a, double b) {
        this->a = a;
        this->b = b;
    }
};

#endif //GEOMETRY_FUNCTION_H
