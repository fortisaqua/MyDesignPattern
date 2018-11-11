#pragma once
#include "collegue.h"
#include <iostream>

using namespace std;

//具体同事类
class ConcreteColleague : public IColleague {
public:
	using IColleague::IColleague;

	//调用中介者的方法发送消息
	//（const型的变量就是在这里起效果，即可以用常量接口引用的形式，来传递派生对象，并且调用接口的常量函数）
	// 当存在多个对 IMediator接口的实时当然就要根据具体的实现类型来访问函数了
	// 函数参数中的参数形式为对输入参数的“常量形式引用”，是一种比较安全的传值方式，
	// 在调用 sendMessage时，也不需要将参数强制转换到“常量形式引用”的形式，直接一般的对象即可，函数会在收到参数后自行转换
	virtual void sendMessage(const IMediator& mediator, const string& message) const override {
		mediator.distributeMessage(this, message);
	}

private:
	//接收来自发送者的消息
	//由发送者在发布消息时（调用 sendMessage ）显示调用
	virtual void receiveMessage(const IColleague* sender, const string& message) const override {
		cout << getName() << " received the message from "
			<< sender->getName() << " : " << message << endl;
	}
};