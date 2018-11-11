//
// Created by 王弘轩 on 2018/10/25.
//

#ifndef COMPOSITEPATTERN_LEAF_H
#define COMPOSITEPATTERN_LEAF_H

#include "component.h"

class Leaf : public Component{
public:
    Leaf(string name) : Component(name){}
    ~Leaf(){}
    /**
     * 叶子节点不能进行添加，删除和访问子节点
     * **/
    void Add(Component *cmpt) {
        cout << "Can't add to a Leaf" << endl;
    }
    void Remove(Component *cmpt) {
        cout << "Can't remove from a Leaf" << endl;
    }
    Component* GetChild(int index) {
        cout << "Can't get child from a Leaf" << endl;
        return NULL;
    }
    // 叶子节点的操作只是输出当前层次和叶子节点名字，不去访问子节点
    void Operation(int indent) {
        string newStr(indent, '-');
        cout << newStr << " " << m_strName << endl;
    }

private:
    Leaf(); //不允许默认构造函数，不要写实现体
};

#endif //COMPOSITEPATTERN_LEAF_H
