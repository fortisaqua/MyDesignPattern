#pragma once

#include "memento.h"
#include <iostream>
#include <string>

using namespace std;

class Life {
public:
	void SetDateTime(string dt) {
		cout << "Set date time to " << dt << endl;
		m_dateTime = dt;
	}

	string GetDateTime() {
		return m_dateTime;
	}

	void SetMemento(DateTime *dt) {
		m_dateTime = dt->GetDateTime();
	}

	DateTime *CreateMemento() {
		return new DateTime(m_dateTime);
	}
private:
	string m_dateTime;
};