//
// Created by zx on 1/28/22.
//

#include "headers/Function.h"

class Hyperbola : public Function {
public:
    string evaluate(double x) {
        double y;
        if (x < -a || x > a) {
            _x = x;
            _y = sqrt((b * b * x * x) / (a * a) - (b * b));
        } else throw "для элипса x должен находиться в диапазоне a < x > -a!";

        return "(y1=" + to_string(_y) + ", y2=" + to_string(-_y) + ")";
    }

    void showParams() {
        cout << "a = " + to_string(a) << endl;
        cout << "b = " + to_string(b) << endl;
        cout << "x = " + to_string(_x) << endl;
        cout << "y1 = " + to_string(_y) << endl;
        cout << "y2 = " + to_string(-_y) << endl;
    }
};