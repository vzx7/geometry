//
// Created by zx on 1/31/22.
//
#include <list>
#include "headers/Function.h"
#include "headers/Type.h"

class Series {
public:
    list <Hyperbola> hyperbolaList;
    list <Parabola> parabolaList;
    list <Ellipse> ellipseList;

    void showAllParams() {
        _showHyperbolaParams();
        _showElipseParams();
        _showParabolaParams();
    }

    void showParamsByType(Type type) {
        switch (type) {
            case ELLIPSE:
                _showElipseParams();
                break;
            case PARABOLA:
                _showParabolaParams();
                break;
            case HYPERBOLA:
                _showHyperbolaParams();
                break;
        }
    }

private:
    void _showHyperbolaParams() {
        for (std::list<Hyperbola>::iterator hp = hyperbolaList.begin(); hp != hyperbolaList.end(); ++hp) {
            hp->showParams();
        }
    }

    void _showElipseParams() {
        for (std::list<Ellipse>::iterator el = ellipseList.begin(); el != ellipseList.end(); ++el) {
            el->showParams();
        }
    }

    void _showParabolaParams() {
        for (std::list<Parabola>::iterator pr = parabolaList.begin(); pr != parabolaList.end(); ++pr) {
            pr->showParams();
        }
    }
};
