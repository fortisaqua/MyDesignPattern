#pragma once
#ifndef PROXY_H
#define PROXY_H

#include "Subject.h"
#include "real_subject.h"
#include <iostream>
using namespace std;

class Proxy : public ITelco {
public:
	Proxy() : m_pCMCC(NULL) {}
	~Proxy() { if (m_pCMCC) { delete m_pCMCC; } };

	void Recharge(int money) override {
		if (money >= 50) {
			if (m_pCMCC == NULL)
				m_pCMCC = new CMCC();
			m_pCMCC->Recharge(money);
		}
		else {
			cout << "Sorry, too little money" << endl;
		}
	}
private:
	CMCC *m_pCMCC;
};

#endif // !PROXY_H
