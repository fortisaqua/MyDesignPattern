#pragma once

#include "state.h"
//#include "context.h"
/*
	这里不能直接引用 context.h ，涉及到两个类之间互相引用的问题
	如果相互引用，会产生 “未定义类型” 的错误

	解决办法就是这里，让 context.h 引用 concrete_state.h ，而在 
	concrete_state.h 中，以 “class TrafficLights;” 的声明形式
	并且对 TrafficLights 的访问都要以指针的形式，因为它没有定义实体
	或者反过来做，但是这里 context.h 里面有对 RedLight 类的构建函数的调用，
	因此在这里只能把空类型声明放在 concrete_state.h 中
*/
class TrafficLights;

class RedLight : public IState {
public:
	RedLight(TrafficLights*);
	virtual void Handle() override;
private:
	TrafficLights* m_pContext;
};

class GreenLight : public IState {
public:
	GreenLight(TrafficLights*);
	virtual void Handle() override;
private:
	TrafficLights* m_pContext;
};

class YellowLight : public IState {
public:
	YellowLight(TrafficLights*);
	virtual void Handle() override;
private:
	TrafficLights* m_pContext;
};