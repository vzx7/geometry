//
// Created by zx on 1/28/22.
//

#include "headers/Function.h"

class Hyperbola : public Function {
public:
    string evaluate(double x) {
        double y;
        if (x < -a || x > a) {
            y = sqrt((b * b * x * x) / (a * a) - (b * b));
        } else throw "для элипса x должен находиться в диапазоне a < x > -a!";

        return "(y1=" + to_string(y) + ", y2=" + to_string(-y) + ")";
    }
};