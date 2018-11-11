// ObserverPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; (p) = NULL;} }
#endif // !SAFE_DELETE


int main()
{
	//创建主题 、 观察者（主题与观察者可以构成一对多的关系）
	ConcreteSubject *pSubject = new ConcreteSubject();
	IObserver *pObserver1 = new ConcreteObserver("Jack Ma");
	IObserver *pObserver2 = new ConcreteObserver("Pony");

	//为主题注册观察者
	pSubject->Attach(pObserver1);
	pSubject->Attach(pObserver2);

	// 更改价格，在主函数中显示调用通知函数告知观察者新数据
	// 这个过程对于主题是主动的，对于观察者是被动的
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

