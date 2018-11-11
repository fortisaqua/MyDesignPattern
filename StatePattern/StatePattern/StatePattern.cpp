// StatePattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "context.h"
#include <iostream>
#include <windows.h>

/*
状态模式：将具体的状态类应用到多态的架构之中，虽然在调用中依然逃不掉if else 或者 switch
		  的判断，不过可以将判断流程简化许多，即判断流程的目的不再是具体调用，而是定义
		  状态转移逻辑，真正的多态交给上下文来做（context.h）

		  状态与上下文相互引用：具体状态对象含有具体的处理方法，会作用在上下文上；
		                        （同一个上下文可以在不同的具体状态的创建和删除之间相互传递，
								只要在转移时，让自身绑定的上下文设置一个新的状态，并绑定此上下文，
								然后将当前的状态对象删除）
		                        上下文对象也需要有一个状态对象来显式地说明自身的状态
*/

using namespace std;

int main()
{
	TrafficLights tl;

	TLState state = Red;
	int i = 0;
	int seconds;

	while (true) {
		// 代表完成一次 红 -> 绿 -> 黄 的循环，开始下一个大循环
		if (i % 3 == 0)
			cout << "**********" << "Session " << ((i+1)/3)+1 << "**********" << endl;
	
		if (state == Red) {
			seconds = 6;
			state = Green;
		}
		else if (state == Green) {
			seconds = 4;
			state = Yellow;
		}
		else if (state == Yellow) {
			seconds = 2;
			state = Red;
		}

		//休眠second所指定的时间
		Sleep(seconds * 1000);

		/*
		这里的状态转变其实和初始定义的状态枚举值是断开的,需要手动去对其初始值，
		即初始化TrafficLight类的时候它的状态是“红灯”，则一开始的初始状态枚举值也应该是 “Red” 
		当然也可以以Red为输入来做，具体看需求
		*/
		
		tl.Request();
		i++;
	}

    return 0;
}

