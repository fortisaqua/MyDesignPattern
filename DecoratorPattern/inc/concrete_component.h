//
// Created by 王弘轩 on 2018/10/18.
//

#ifndef DECORATORPATTERN_CONCRETE_COMPONENT_H
#define DECORATORPATTERN_CONCRETE_COMPONENT_H

#include "component.h"

using namespace std;

/** 具体饮料类，是接受装饰的基底 **/

//黑咖啡，兑水浓缩，属于混合咖啡
class HouseBlend : public IBeverage{
public:
    virtual string Name() override {
        return "House Blend";
    }
    virtual double Cost() override {
        return 30.0;
    }
    virtual ~HouseBlend(){
        cout << "destruct House Blend" << endl;
    }
};

//深度烘焙咖啡
class DarkRoast : public IBeverage{
public:
    string Name(){
        return "Dark Roast";
    }
    double Cost(){
        return 25.0;
    }
    virtual ~DarkRoast(){
        cout << "destruct Dark Roast" << endl;
    }
};


#endif //DECORATORPATTERN_CONCRETE_COMPONENT_H
