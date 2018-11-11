#pragma once
#include <iostream>
#include <string>

using namespace std;

class DateTime {
public:
	DateTime(string dt) : m_dateTime(dt) {}

	void SetDateTime(string dt) {
		m_dateTime = dt;
	}

	string GetDateTime() {
		return m_dateTime;
	}
private:
	string m_dateTime;
};