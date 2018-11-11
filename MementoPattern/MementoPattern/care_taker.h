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

	// 这里的save和undo方法展现了如何使用vector实现一个栈
	// 使用push_back在vector末尾添加元素，
	// 使用 back() 函数得到最末尾的元素，并使用 pop_back() 函数删除最末尾的元素
	// 即实现了后进先出

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