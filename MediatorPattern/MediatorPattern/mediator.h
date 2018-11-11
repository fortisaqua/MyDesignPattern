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
	// �ں�������ĺ������ const �ؼ��ֵ����ã�����������ķ���Ȩ�����ڳ��������ϣ�const��
	// �ǳ��������޷������������
	virtual void distributeMessage(const IColleague* sender, const string message) const = 0;

	// �������ȥ����� const �ؼ��֣���ṹ��һ���µķ��������ǳ����������
	virtual void distributeMessage(const IColleague* sender, const string message) {
		cout << "not a const object!" << endl;
	}

private:
	list<IColleague*> m_collegues;
};

#endif // !MEDIATOR_H
