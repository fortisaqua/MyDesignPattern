#pragma once
#include "concrete_state.h"

enum TLState {
	Red,
	Green,
	Yellow
};

class TrafficLights
{
public:
	TrafficLights(): m_pState(new RedLight(this)){}
	void SetState(IState* state) { m_pState = state; }
	void Request() { m_pState->Handle(); }
	string GetState() { return m_pState->GetState(); }
private:
	IState *m_pState;
};