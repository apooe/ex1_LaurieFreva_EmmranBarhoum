#pragma once
#include"Gate.h"


class Not : public Gate
{
public:
	Not();
	Not(int inputs);
	~Not();

	virtual string print();

	virtual int eval(int n1, int n2);
	virtual void table();


};
