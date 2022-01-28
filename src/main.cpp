//
// Created by zx on 1/28/22.
//

#include "Ellipse.cpp"
#include "Parabola.cpp"
#include "Hyperbola.cpp"

int main(int argc, const char *argv[]) {
    Function *f;
    double a, b, c;
    cout << "1) ellipse" << endl;
    cout << "2) parabola" << endl;
    cout << "3) hyperbola" << endl;
    cout << "select function (input digit):";
    char ch;
    cin >> ch;
    switch (ch)
    {
        case '1': f = new Ellipse; break;
        case '2': f = new Parabola; break;
        case '3': f = new Hyperbola; break;
    }
    cout << "input 3 numerical params(double):";
    cin >> a >> b >> c;
    f->setParams(a, b, c);
    cout << "input argument(double):";
    cin >> a;
    cout << "f(" << a << ")=" << f->evaluate(a) << endl;
    cin.get();
    delete f;
    return 0;
}