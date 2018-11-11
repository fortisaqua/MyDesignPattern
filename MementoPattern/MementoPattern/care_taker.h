#pragma once
#include "originator.h"
#include <iostream>
#include <vector>

using namespace std;

class PandoraBox {
public:
	PandoraBox(Life *life) : m_pLife(life) {}
	~PandoraBox() {
		auto it = m_history.begin();
		while (it != m_history.end()) {
			cout << "deleting memento at " << (*it)->GetDateTime() << endl;
			delete *it;
			it = m_history.erase(it);
		}
		cout << "rest memento amount : " << m_history.size();
	}

	// �����save��undo����չ�������ʹ��vectorʵ��һ��ջ
	// ʹ��push_back��vectorĩβ���Ԫ�أ�
	// ʹ�� back() �����õ���ĩβ��Ԫ�أ���ʹ�� pop_back() ����ɾ����ĩβ��Ԫ��
	// ��ʵ���˺���ȳ�

	void Save() {
		cout << "Save ..." << endl;
		m_history.push_back(m_pLife -> CreateMemento());
	}

	void Undo() {
		cout << "Undo ..." << endl;
		m_pLife->SetMemento(m_history.back());
		m_history.pop_back();
	}
private:
	Life *m_pLife;
	vector<DateTime *> m_history;
};