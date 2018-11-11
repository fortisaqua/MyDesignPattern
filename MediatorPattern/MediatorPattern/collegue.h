#pragma once

#include "mediator.h"
#include <string>

using namespace std;

// 通信体接口（抽象同事类）和通信中介接口（抽象中介类）有一对多的互相引用关系
// 因此在接口定义的头文件中，需要先显示定一个对方的“同名空类”，在这个纯虚的同事类
// 类中就是要显示定义一个空的“中介类”IMediator，这样可以防止类中引用中介接口的时候发生未定义的错误 ！！！！
/*
	这里涉及一个“相互引用”的问题，两个头文件相互引用的时候会有“未定义”的错误，毕竟编译还要有顺序
	所以在这里就先以 “class IMediator;” 显示的声明所引用的头文件中在这里需要用到的类（虚基类也是）
	并且在这里只能使用对它的指针或者引用，不能访问具体内容
	
	如果要在互相引用中访问具体内容的话，则对方头文件不能引用此头文件!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	（例如这里需要访问 IMediator 中的构建函数等具体内容，则 mediator.h 不能引用此文件 collegue.h，但是为了
	访问到具体内容，此文件 collegue.h 就必须要引用 mediator.h）

	这里的情况是，collegue.h中的类会以引用的形式引用 mediator.h 中的类，mediator.h 中的类会以指针的形式
	引用 colelgur.h 中的类， 因此这里可以显式地互相引用头文件，但是双方都要显式的声明一下要引用的类
	（例如这里的“class IMediator;” 和 mediator.h 中的 “class IColleague;”）
*/

class IMediator;


// 抽象同事类
class IColleague {
public:
	IColleague(const string &name): m_strName(name) {}
	string getName() const { return m_strName; }

	//通过中介者发布自己的消息
	virtual void sendMessage(const IMediator& mediator, const string& message) const = 0;

	//接收来自发送者的消息
	virtual void receiveMessage(const IColleague* sender, const string& message) const = 0;
private:
	string m_strName;
};