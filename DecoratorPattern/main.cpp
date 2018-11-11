#include <iostream>

#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>
using namespace std;
#ifndef SAFE_DELETE
#define SAFE_DELETE(p){if(p){delete p; p = NULL;}}
#endif

/**
 * 装饰器模式：
 * 是一种可以通过特殊的构建函数来不断为对象添加新增特性的框架
 * 这种特殊的构架函数是将其虚基类的一个指针作为参数传入构建函数，
 * 并在实现类中保存一个对虚基类的指针
 *
 * 实现类分为两种：基础产品和装饰器，两者均实现同一个虚基类（接口）
 *              这种引用虚基类指针的类就是装饰器类，它们可以通过
 *              一种"迭代"创建的方式实现无限次的叠加，下面的 "双倍奶油 + 摩卡"
 *              就是一个例子，所做的就是需要创建一个我们需要的装饰组合
 *              然后一层层地创建就可以，并且所有的对象，均可以用虚基类
 *              指针来指向，因此在实现上也可以做到统一，即先开好指针数组
 * **/

void PrintBev(IBeverage *bev){
    cout << bev -> Name() << " : " << bev -> Cost() << endl;
}

int main() {
    IBeverage *bev;
    IBeverage *dec;
    IBeverage *decs[] = {};
    // 这样设置指针也可以
    IBeverage *Decs[] = {};
    /** 黑咖啡 **/
    bev = new HouseBlend();
    PrintBev(bev);
    // 黑咖啡 + 摩卡
    dec = new Mocha(bev);
    PrintBev(dec);
    SAFE_DELETE(dec);
    // 黑咖啡 + 奶油
    dec = new Cream(bev);
    PrintBev(dec);
    SAFE_DELETE(dec);

    SAFE_DELETE(bev)

    cout << "==================================" << endl;

    /** 深度烘焙 **/
    bev = new DarkRoast();
    PrintBev(bev);
    // 深度烘焙 + 糖浆
    dec = new Syrup(bev);
    PrintBev(dec);
    SAFE_DELETE(dec);
    // 深度烘焙 + 双倍奶油 + 双倍摩卡
    dec = new Cream(bev);
    PrintBev(dec);
    decs[0] = new Cream(dec);
    PrintBev(decs[0]);
    decs[1] = new Mocha(decs[0]);
    PrintBev(decs[1]);
    decs[2] = new Mocha(decs[1]);
    PrintBev(decs[2]);
    SAFE_DELETE(dec);
    SAFE_DELETE(decs[0]);
    SAFE_DELETE(decs[1]);
    SAFE_DELETE(decs[2]);
    SAFE_DELETE(bev);

    return 0;
}