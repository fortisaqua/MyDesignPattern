#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

//����۲���
class IObserver {
public:
	virtual void Update(float price) = 0;
};


#endif // !OBSERVER_H
