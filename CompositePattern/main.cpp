#include <iostream>
#include "composite.h"
#include "leaf.h"

/**
 * 组合模式（适用于 部分-整体 的设计场景中，将分支节点看成相对的整体，保存一个包含*个指向子节点指针的容器，
 *         可以统一对单个对象和组合对象的操作，其实就是统一树形结构的对象访问接口）：
 * 使用统一的接口描述叶子节点和分支（容器）节点的一种模式
 * 其中分支容器所容纳的子节点均以统一接口的指针形式保存，即
 * 要删除这个节点，就是删除这个指针所指向的对象，设置为空指针，并将其从
 * 容器中删除出去。
 *
 * 注意一般使用的是这种透明组合模式，即叶子节点也实现了接口中对子节点的增删查等功能
 * 只不过是以报错的形式返回。这么做的好处就是可以统一两个类的接口，当然就是需要手动进行
 * 异常处理来应对叶子节点的非法函数访问。
 * **/

int main() {
    //创建属性结构跟节点
    Component *pRoot = new Composite("江湖公司（任我行）");

    //创建分支
    Component *pDepart1 = new Composite("日月神教（东方不败）");
    pDepart1 -> Add(new Leaf("光明右使（曲洋）"));
    pDepart1 -> Add(new Leaf("日月神教（东方不败）"));
    pRoot -> Add(pDepart1);

    Component *pDepart2 = new Composite("五岳剑派（左冷蝉）");
    pDepart2->Add(new Leaf("嵩山（左冷蝉）"));
    pDepart2->Add(new Leaf("衡山（莫大）"));
    pDepart2->Add(new Leaf("华山（岳不群）"));
    pDepart2->Add(new Leaf("泰山（天门道长）"));
    pDepart2->Add(new Leaf("恒山（定闲师太）"));
    pRoot->Add(pDepart2);

    // 添加和删除叶子
    // 首先在跟节点上添加叶子节点
    pRoot->Add(new Leaf("少林（方证大师）"));
    pRoot->Add(new Leaf("武当（冲虚道长）"));
    Component *pLeaf = new Leaf("青城（余沧海）");
    pRoot->Add(pLeaf);

    // 根据指针直接删除一个叶子
    pRoot -> Remove(pLeaf);

    // 递归地访问每一个节点
    pRoot -> Operation(1);

    // 删除对象内存
    SAFE_DELETE(pRoot);

    getchar();

    return 0;

}