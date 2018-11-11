#pragma once
class IVisitor;

class IPlace {
public:
	virtual ~IPlace(){}
	virtual void Accept(IVisitor *visitor) = 0;
};