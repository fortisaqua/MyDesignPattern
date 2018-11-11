#pragma once
#include "element.h"
#include "visitor.h"
#include <iostream>

class BellTower : public IPlace {
public:
	void Accept(IVisitor *visitor) override {
		std::cout << "Bell Tower is accepting visitor." << std::endl;
		visitor->Visit(this);
	}
};

class TerracottaWarriors : public IPlace
{
public:
	virtual void Accept(IVisitor *visitor) override {
		std::cout << "Terracotta Warriors is accepting visitor." << std::endl;
		visitor->Visit(this);
	}
};