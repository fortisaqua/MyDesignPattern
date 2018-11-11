#pragma once
#ifndef CONCRETE_OBSERVER

#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

//具体观察者
class ConcreteObserver : public IObserver {
public:
	ConcreteObserver(string name) { m_strName = name; }

	void Update(float price) override {
		cout << m_strName << " read price : " << price << endl;
	}
private:
	string m_strName;
};

#endif // !CONCRETE_OBSERVER
