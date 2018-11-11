#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H

class IObserver;

//��������
class ISubject
{
public:
	virtual void Attach(IObserver *) = 0; // Ϊ����ע��۲���
	virtual void Detach(IObserver *) = 0; // ע���۲���
	virtual void Notify() = 0; // ֪ͨ�۲���
};

#endif