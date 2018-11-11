#pragma once
#include "element.h"
#include <list>

class City {
public:
	void Attach(IPlace *place){
		m_places.push_back(place);
	}

	void Detach(IPlace *place) {
		m_places.remove(place);
	}

	//Ϊһ��Visitor��֯��һ��Element���������ʲ���
	void Accept(IVisitor *visitor) {
		for (auto it = m_places.begin(); it != m_places.end(); ++it) {
			(*it)->Accept(visitor);
		}
	}

private:
	std::list<IPlace *> m_places;
};