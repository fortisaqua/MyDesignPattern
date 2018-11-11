// MementoPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "originator.h"
#include "care_taker.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

/*
备忘录模式：用以保存一个时间点一个对象的部分或全部状态，并且在必要的时候恢复
			类似于一种特殊的观察者模式，即“发起者”(orginator)是主题对象，备忘录管理者对象（care_taker）
			是“观察者”，它在创建时反注册了一个“发起者”，复杂接收并保存这个发起者创建的
			“备忘录”对象。在需要恢复某一状态时，就从备忘录管理者对象(care_taker)读取一个状态，并
			赋值给“发起者”对象(orginator)

			例如：github中的代码状态分支，时间点，也可以用这种模式来理解，即一个时间点的备忘录(memento)
			      就是这个分支在这个时间点上的“快照”---有变化的部分
*/

int main()
{
	Life *life = new Life();
	PandoraBox *box = new PandoraBox(life);


	// 设置并保存一个历史时间
	life->SetDateTime("2000/10/01 00:00:00");
	box->Save();

	// 设置并保存一个历史时间
	life->SetDateTime("2010/10/01 00:00:00");
	box->Save();

	// 设置并保存一个历史时间
	life->SetDateTime("2013/10/01 00:00:00");
	box->Save();

	// 设置并保存一个历史时间
	life->SetDateTime("2016/10/01 00:00:00");
	box->Save();

	// 设置一个历史时间
	life->SetDateTime("2018/10/01 00:00:00");
	
	box->Undo();
	cout << "Actual date time is " << life->GetDateTime() << endl;

	box->Undo();
	cout << "Actual date time is " << life->GetDateTime() << endl;

	SAFE_DELETE(life);
	SAFE_DELETE(box);

	getchar();

    return 0;
}

