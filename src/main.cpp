//
// Created by zx on 1/28/22.
//
#include "Ellipse.cpp"
#include "Parabola.cpp"
#include "Hyperbola.cpp"
#include "Series.cpp"



void task() {
    cout << "Создать абстрактный класс Function (функция) с виртуальными методами вычисления значения функции y = f(x)\n"
            "в заданной точке х и вывода результата на экран. На его основе реализовать классы Ellipse, Hiperbola и Parabola.\n"
            "Создать класс Series (набор), содержащий параметризованную коллекцию объектов этих классов в динамической памяти.\n"
            "Предусмотреть возможность вывода характеристик объектов списка. Написать демонстрационную программу,\n"
            "в которой будут использоваться все методы классов.\n" << endl;
}

void getResult(Function *f, bool isFirst) {
    if (isFirst) {
        cout << "Введите аргумент \"x\": ";
    }
    int x;
    cin >> x;
    string res;
    try {
        res = f->evaluate(x);
        cout << "f(" << x << ")=" << res << endl;
    } catch (char const *msg) {
        cerr << "\n" << msg << "\n" << endl;
        getResult(f, false);
    }
};

int main(int argc, const char *argv[]) {
    task();
    double a, b, p;
    cout << "1) ellipse" << endl;
    cout << "2) parabola" << endl;
    cout << "3) hyperbola" << endl;
    cout << "Введите номер функции (int): ";
    char ch;
    cin >> ch;
    Series series;

    switch (ch)
    {
        case '1': {
            Ellipse elipse;
            cout << "Введите два числа (double), первое \"a\", второе \"b\": ";
            cin >> a >> b;
            elipse.setParams(a, b);
            getResult(&elipse, true);
           series.ellipseList.push_back(elipse);
        }
            break;
        case '2': {
            Parabola parabola;
            cout << "Введите число (double) \"p\": " << endl;
            cin >> p;
            parabola.setParams(p);
            getResult(&parabola, true);
            series.parabolaList.push_back(parabola);
        }
        break;
        case '3': {
            Hyperbola hyperbola;
            cout << "Введите два числа (double), первое \"a\", второе \"b\": ";
            cin >> a >> b;
            hyperbola.setParams(a, b);
            getResult(&hyperbola, true);
            series.hyperbolaList.push_back(hyperbola);
        }
            break;
    }

    series.showAllParams();
    series.showParamsByType(PARABOLA);
    cin.get();

    return 0;
}