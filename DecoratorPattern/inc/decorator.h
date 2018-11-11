//
// Created by 王弘轩 on 2018/10/18.
//

#ifndef DECORATORPATTERN_DECORATOR_H
#define DECORATORPATTERN_DECORATOR_H

#include "component.h"
using namespace std;

//调味品类，继承自饮料接口，是装饰器的接口
class CondimentDecorator : public IBeverage{
public:
    CondimentDecorator(IBeverage *beverage): m_pBeverage(beverage){}
    string Name() {
        return m_pBeverage->Name();
    }
    double Cost(){
        return m_pBeverage->Cost();
    }

protected:
    IBeverage *m_pBeverage;
};

#endif //DECORATORPATTERN_DECORATOR_H
