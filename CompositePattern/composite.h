//
// Created by 王弘轩 on 2018/10/24.
//

#ifndef COMPOSITEPATTERN_COMPOSITE_H
#define COMPOSITEPATTERN_COMPOSITE_H

#include "component.h"
#include <vector>

class Composite : public Component{
public:
    // 参数列表初始化的方法初始化父类
    Composite(string name):Component(name){}
    ~Composite(){
        while(!m_elements.empty()){
            vector<Component *>::iterator it = m_elements.begin();
            SAFE_DELETE(*it);
            m_elements.erase(it);
        }
    }
    void Add(Component *cmpt){
        m_elements.push_back(cmpt);
    }
    void Remove(Component *cmpt){
        vector<Component *>::iterator it = m_elements.begin();
        while(!m_elements.empty()){
            if(*it == cmpt){
                SAFE_DELETE(cmpt);
                it = m_elements.erase(it);
                break;
            } else it++;
        }
    }
    Component * GetChild(int index){
        if(index > m_elements.size() || index < 0){
            return NULL;
        }
        return m_elements[index];
    }
    // 递归实现操作，分支节点的递归操作是输出当前层次和名字，并访问所有子节点，
    // 叶子节点的操作即输出当前层次和名字
    void Operation(int indent){
        string newStr(indent, '-');
        cout << newStr << "+" << m_strName << endl;
        vector<Component *>::iterator it = m_elements.begin();
        while(it != m_elements.end()){
            (*it) -> Operation(indent + 2);
            it++;
        }
    }
private:
    Composite();  //不允许默认构造函数，不要写实现体
    vector<Component *> m_elements;
};

#endif //COMPOSITEPATTERN_COMPOSITE_H
