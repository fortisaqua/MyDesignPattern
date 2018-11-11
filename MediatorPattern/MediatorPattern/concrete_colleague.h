#pragma once
#include "collegue.h"
#include <iostream>

using namespace std;

//����ͬ����
class ConcreteColleague : public IColleague {
public:
	using IColleague::IColleague;

	//�����н��ߵķ���������Ϣ
	//��const�͵ı���������������Ч�����������ó����ӿ����õ���ʽ���������������󣬲��ҵ��ýӿڵĳ���������
	// �����ڶ���� IMediator�ӿڵ�ʵʱ��Ȼ��Ҫ���ݾ����ʵ�����������ʺ�����
	// ���������еĲ�����ʽΪ����������ġ�������ʽ���á�����һ�ֱȽϰ�ȫ�Ĵ�ֵ��ʽ��
	// �ڵ��� sendMessageʱ��Ҳ����Ҫ������ǿ��ת������������ʽ���á�����ʽ��ֱ��һ��Ķ��󼴿ɣ����������յ�����������ת��
	virtual void sendMessage(const IMediator& mediator, const string& message) const override {
		mediator.distributeMessage(this, message);
	}

private:
	//�������Է����ߵ���Ϣ
	//�ɷ������ڷ�����Ϣʱ������ sendMessage ����ʾ����
	virtual void receiveMessage(const IColleague* sender, const string& message) const override {
		cout << getName() << " received the message from "
			<< sender->getName() << " : " << message << endl;
	}
};