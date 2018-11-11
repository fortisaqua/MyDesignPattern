#pragma once

#ifndef SUBJECT_H
#define SUBJECT_H

// ткс╙ил 
class ITelco {
public:
	virtual ~ITelco() {}
	virtual void Recharge(int money) = 0;
};

#endif