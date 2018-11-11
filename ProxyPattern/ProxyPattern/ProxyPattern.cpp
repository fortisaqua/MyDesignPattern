// ProxyPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; (p) = NULL;} }
#endif // !SAFE_DELETE

/*
代理模式：从一个统一的接口中，派生出一个代理器（“功能”转发），
          和一个执行实体（转发时自行生成，或者提前生成，转发调用）
		  来实现功能的代理，即将功能的接口调用和实现分离开来，这样
		  可以有效保护真正的执行类（例如有些功能不希望部分用户调用），
		  不让客户直接访问真正的执行类的全部内容
*/

int main()
{
	Proxy* proxy = new Proxy();
	proxy->Recharge(20);
	proxy->Recharge(100);

	SAFE_DELETE(proxy);

	getchar();
		
    return 0;
}

