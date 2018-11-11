#pragma once
#include <string>
#include <iostream>
using namespace std;
class IState
{
public:
	virtual void Handle() = 0;
	IState(string stateName) :m_stateName(stateName) {}
	string GetState() { return m_stateName; }
	~IState() {
		cout << "delete state: " << GetState() << endl;
	}
private:
	IState();
	string m_stateName;
};