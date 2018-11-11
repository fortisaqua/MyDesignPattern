//
// Created by 王弘轩 on 2018/10/24.
//

#ifndef COMPOSITEPATTERN_COMPONENT_H
#define COMPOSITEPATTERN_COMPONENT_H

#include <iostream>
#include <string>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete p; (p)=NULL;}}
#endif

using namespace std;

class Component
{
public:
    Component(string name) : m_strName(name) {}
    // 虚析构函数需要写出函数实体，因为子类在实现自己的析构函数时
    // 如果基类有同接口的虚析构函数，则会触发 重写机制，如果基类中没有
    // 同接口的析构函数的函数实体，则会报类似 "连接失败" 的错误
    virtual ~Component() {}
//    virtual ~Component();
    virtual void Add(Component *cmpt) = 0;  // 添加构件
    virtual void Remove(Component *cmpt) = 0;  // 删除构件
    virtual Component* GetChild(int index) = 0;  // 获取构件
    virtual void Operation(int indent) = 0;  // 显示构件（以缩进的方式）

private:
    Component();  // 不允许

protected:
    string m_strName;
};

#endif //COMPOSITEPATTERN_COMPONENT_H
