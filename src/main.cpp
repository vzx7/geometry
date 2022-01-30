//
// Created by zx on 1/28/22.
//
#include "Ellipse.cpp"
#include "Parabola.cpp"
#include "Hyperbola.cpp"



void task() {
    cout << "Создать абстрактный класс Function (функция) с виртуальными методами вычисления значения функции y = f(x)\n"
            "в заданной точке х и вывода результата на экран. На его основе реализовать классы Ellipse, Hiperbola и Parabola.\n"
            "Создать класс Series (набор), содержащий параметризованную коллекцию объектов этих классов в динамической памяти.\n"
            "Предусмотреть возможность вывода характеристик объектов списка. Написать демонстрационную программу,\n"
            "в которой будут использоваться все методы классов.\n" << endl;
}

void getResult(Function *f) {
    int x;
    cin >> x;
    string res;
    try {
        res = f->evaluate(x);
        cout << "f(" << x << ")=" << res << endl;
    } catch (char const *msg) {
        cerr << "\n" << msg << "\n" << endl;
        getResult(f);
    }
};

int main(int argc, const char *argv[]) {
    task();
    int count;
    Function *f;
    double a, b, p;
    cout << "1) ellipse" << endl;
    cout << "2) parabola" << endl;
    cout << "3) hyperbola" << endl;
    cout << "Введите номер функции (int): ";
    char ch;
    cin >> ch;

    switch (ch)
    {
        case '1':
            f = new Ellipse;
            cout << "Введите два числа (double), первое \"a\", второе \"b\": ";
            cin >> a >> b;
            f->setParams(a, b);
            break;
        case '2':
            f = new Parabola;
            cout << "Введите число (double) \"p\": " << endl;
            cin >> p;
            f->setParams(p);
        break;
        case '3':
            f = new Hyperbola;
            cout << "Введите два числа (double), первое \"a\", второе \"b\": ";
            cin >> a >> b;
            f->setParams(a, b);
            break;
    }

    cout << "Введите аргумент \"x\": ";
    getResult(f);
    cin.get();
    delete f;
    return 0;
}