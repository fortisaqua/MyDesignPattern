#pragma once
#ifndef REAL_SUBJECT
#define REAL_SUBJECT

#include "Subject.h"
#include <iostream>
using namespace std;

//ͨ�Ź�˾
class CMCC : public ITelco {
public:
	void Recharge(int money) override {
		cout << "Recharge " << money << endl;
	}
};

#endif