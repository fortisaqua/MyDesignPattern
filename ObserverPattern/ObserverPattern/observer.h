#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

//≥ÈœÛπ€≤Ï’ﬂ
class IObserver {
public:
	virtual void Update(float price) = 0;
};


#endif // !OBSERVER_H
