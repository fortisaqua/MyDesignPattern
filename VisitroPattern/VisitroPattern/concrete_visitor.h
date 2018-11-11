#pragma once
#include "visitor.h"
#include "concrete_element.h"

class Tourist : public IVisitor {
public:
	virtual void Visit(BellTower *) override {
		std::cout << "I'm visiting the Bell Tower!" << std::endl;
	}

	virtual void Visit(TerracottaWarriors *) override {
		std::cout << "I'm visiting the Terracotta Warriors!" << std::endl;
	}
};

class Cleaner : public IVisitor {
public:
	virtual void Visit(BellTower *) override {
		std::cout << "I'm cleaning up the garbage of Bell Tower!" << std::endl;
	}

	virtual void Visit(TerracottaWarriors *) override {
		std::cout << "I'm cleaning up the garbage of Terracotta Warriors!" << std::endl;
	}
};