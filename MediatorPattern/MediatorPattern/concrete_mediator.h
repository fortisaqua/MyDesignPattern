#pragma once
#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "mediator.h"

// 具体中介类
class ConcreteMediator : public IMediator {
	void distributeMessage(const IColleague* sender, const string message) const override {
		for (IColleague* c : getCollegues()){
			// 身份验证最简单的办法，直接传递传送者的对象地址，然后检查每一个接受者指针，直接对比是否相等（即同一个实例）
			// 这里的迭代方式中，getCollegues() 限定了返回的是一个常量 list ，
			// 因此也自动的将每一个元素转换成“指向常量对象”的指针，用以调用常量函数
			if (c != sender) {
				c->receiveMessage(sender, message);
			}
		}
	}
};

#endif // !CONCRETE_MEDIATOR_H
