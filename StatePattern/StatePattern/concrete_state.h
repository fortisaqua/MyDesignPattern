#pragma once

#include "state.h"
//#include "context.h"
/*
	���ﲻ��ֱ������ context.h ���漰��������֮�以�����õ�����
	����໥���ã������ ��δ�������͡� �Ĵ���

	����취��������� context.h ���� concrete_state.h ������ 
	concrete_state.h �У��� ��class TrafficLights;�� ��������ʽ
	���Ҷ� TrafficLights �ķ��ʶ�Ҫ��ָ�����ʽ����Ϊ��û�ж���ʵ��
	���߷����������������� context.h �����ж� RedLight ��Ĺ��������ĵ��ã�
	���������ֻ�ܰѿ������������� concrete_state.h ��
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