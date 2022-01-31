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
    double a, b, p, _x, _y;
public:
    Function() {};
    virtual string evaluate(double x) = 0;
    virtual void showParams() = 0;
    void setParams(double a, double b) {
        this->a = a;
        this->b = b;
    }
    void setParams(double p) {
        this->p = p;
    }
};

#endif //GEOMETRY_FUNCTION_H
