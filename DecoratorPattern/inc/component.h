//
// Created by 王弘轩 on 2018/10/18.
//

#ifndef DECORATORPATTERN_COMPONENT_H
#define DECORATORPATTERN_COMPONENT_H

#include <string>
using namespace std;
//饮料接口

class IBeverage{
public:
    virtual string Name() = 0;
    virtual double Cost() = 0;

    // 在删除一个指向子类对象的基类指针时，
    // 这个虚析构函数会先调用子类的析构函数，在调用自身的析构函数
    // 以达到彻底删除，防止内存泄漏的目的

    virtual ~IBeverage(){ cout << "destruct Interface Beverate" << endl; }
};

#endif //DECORATORPATTERN_COMPONENT_H
