#pragma once

class BellTower;
class TerracottaWarriors;

class IVisitor {
public:
	virtual ~IVisitor() {}
	virtual void Visit(BellTower *) = 0;
	virtual void Visit(TerracottaWarriors *) = 0;
};