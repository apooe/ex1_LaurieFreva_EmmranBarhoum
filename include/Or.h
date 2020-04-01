#pragma once
#include"Gate.h"


class Or : public Gate
{
public:
	Or();
	Or(int inputs);
	~Or();

	virtual string print();

	virtual int eval(int n1, int n2);
	virtual void table();


};
