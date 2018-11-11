// ObserverPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; (p) = NULL;} }
#endif // !SAFE_DELETE


int main()
{
	//�������� �� �۲��ߣ�������۲��߿��Թ���һ�Զ�Ĺ�ϵ��
	ConcreteSubject *pSubject = new ConcreteSubject();
	IObserver *pObserver1 = new ConcreteObserver("Jack Ma");
	IObserver *pObserver2 = new ConcreteObserver("Pony");

	//Ϊ����ע��۲���
	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);

	// ���ļ۸�������������ʾ����֪ͨ������֪�۲���������
	// ������̶��������������ģ����ڹ۲����Ǳ�����
	pSubject->SetPrice(12.5);
	pSubject->Notify();

	pSubject->Detach(pObserver2);
	pSubject->SetPrice(15);
	pSubject->Notify();

	SAFE_DELETE(pObserver1);
	SAFE_DELETE(pObserver2);
	SAFE_DELETE(pSubject);

	getchar();
    return 0;
}

