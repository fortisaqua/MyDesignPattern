//
// Created by 王弘轩 on 2018/10/18.
//

#ifndef DECORATORPATTERN_CONCRETE_DECORATOR_H
#define DECORATORPATTERN_CONCRETE_DECORATOR_H

#include "decorator.h"

/** 具体调味品类，是具体的装饰品类 **/

class Cream : public CondimentDecorator{
public:
    Cream(IBeverage *beverage): CondimentDecorator(beverage){}

    string Name() {
        return m_pBeverage -> Name() + "-Cream";
    }

    double Cost(){
        return m_pBeverage -> Cost() + 3.5;
    }

    ~Cream(){
        cout << "destruct Cream" << endl;
    }
};

class Mocha : public CondimentDecorator
{
public:
    Mocha(IBeverage *beverage) : CondimentDecorator(beverage) {}

    string Name() {
        return m_pBeverage->Name() + "-Mocha";
    }

    double Cost() {
        return m_pBeverage->Cost() + 2.0;
    }

    ~Mocha(){
        cout << "deconstruct Mocha" << endl;
    }
};

class Syrup : public CondimentDecorator{
public:
    Syrup(IBeverage *beverage) : CondimentDecorator(beverage){}

    string Name(){
        return m_pBeverage -> Name() + "-Syrup";
    }

    double Cost(){
        return m_pBeverage -> Cost() + 2.0;
    }

    ~Syrup(){
        cout << "deconstruct Syrup" << endl;
    }
};

#endif //DECORATORPATTERN_CONCRETE_DECORATOR_H
