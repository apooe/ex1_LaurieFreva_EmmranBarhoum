#pragma once
#include"Gate.h"


class And : public Gate
{
public:
	And();
	And(int inputs);
	~And();

	virtual string print();
	
	virtual int eval(int n1, int n2);
	virtual void table();
	
};
