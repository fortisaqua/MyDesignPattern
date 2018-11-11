#pragma once
#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "collegue.h"
#include <iostream>
#include <list>
using namespace std;

class IColleague;

class IMediator {
public:
	// register participatians
	virtual void registerColleague(IColleague *collegue) {
		m_collegues.emplace_back(collegue);
	}
	const list<IColleague *>& getCollegues() const {
		return m_collegues; 
	}

	// broadcast message to all the participatians
	// 在函数定义的后面加上 const 关键字的作用：将这个函数的访问权限制在常量对象上（const）
	// 非常量对象无法访问这个函数
	virtual void distributeMessage(const IColleague* sender, const string message) const = 0;

	// 但是如果去掉这个 const 关键字，则会构成一个新的方法，供非常量对象访问
	virtual void distributeMessage(const IColleague* sender, const string message) {
		cout << "not a const object!" << endl;
	}

private:
	list<IColleague*> m_collegues;
};

#endif // !MEDIATOR_H
