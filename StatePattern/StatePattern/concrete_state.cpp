#include "stdafx.h"
#include "concrete_state.h"
#include "context.h"
#include <iostream>

using namespace std;

RedLight::RedLight(TrafficLights* context): m_pContext(context),IState("Red Light"){}

void RedLight::Handle() {
	cout << m_pContext->GetState() << endl;
	m_pContext->SetState(new GreenLight(m_pContext));
	delete this;
}

GreenLight::GreenLight(TrafficLights* context) : m_pContext(context),IState("Green Light"){}

void GreenLight::Handle() {
	cout << m_pContext->GetState() << endl;
	m_pContext->SetState(new YellowLight(m_pContext));
	delete this;
}

YellowLight::YellowLight(TrafficLights* context) : m_pContext(context),IState("YEllow Light"){}

void YellowLight::Handle() {
	cout << m_pContext->GetState() << endl;
	m_pContext->SetState(new RedLight(m_pContext));
	delete this;
}