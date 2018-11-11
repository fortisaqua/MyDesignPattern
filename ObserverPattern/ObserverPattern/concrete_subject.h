#pragma once
#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "subject.h"
#include "observer.h"
#include <iostream>
#include <list>

using namespace std;

// 具体主题
class ConcreteSubject : public ISubject {
public:
	ConcreteSubject() { m_price = 10.0; }

	void SetPrice(float price) {
		m_price = price;
	}

	void Attach(IObserver *observer) override {
		m_observers.push_back(observer);
	}

	void Detach(IObserver *observer) override {
		m_observers.remove(observer);
	}

	void Notify() override {
		list<IObserver *>::iterator it = this->m_observers.begin();
		while (it != this->m_observers.end()) {
			(*it)->Update(m_price);
			++it;
		}
	}
private:
	list<IObserver *> m_observers;
	float m_price;
};

#endif // !CONCRETE_SUBJECT_H
