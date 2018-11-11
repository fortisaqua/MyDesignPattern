#pragma once
#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "mediator.h"

// �����н���
class ConcreteMediator : public IMediator {
	void distributeMessage(const IColleague* sender, const string message) const override {
		for (IColleague* c : getCollegues()){
			// �����֤��򵥵İ취��ֱ�Ӵ��ݴ����ߵĶ����ַ��Ȼ����ÿһ��������ָ�룬ֱ�ӶԱ��Ƿ���ȣ���ͬһ��ʵ����
			// ����ĵ�����ʽ�У�getCollegues() �޶��˷��ص���һ������ list ��
			// ���Ҳ�Զ��Ľ�ÿһ��Ԫ��ת���ɡ�ָ�������󡱵�ָ�룬���Ե��ó�������
			if (c != sender) {
				c->receiveMessage(sender, message);
			}
		}
	}
};

#endif // !CONCRETE_MEDIATOR_H
