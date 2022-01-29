//
// Created by zx on 1/28/22.
//
#include "headers/Function.h"

class Parabola: public Function
{
public:
    string evaluate(double x)
    {
        double y;
        if (x > p / 2) {
            y = sqrt((2 * p * x));
        } else throw "для элипса x должен находиться в диапазоне x > (p / 2)";

        return "(y1=" + to_string(y) + ", y2=" + to_string(-y) + ")";
    }
};
