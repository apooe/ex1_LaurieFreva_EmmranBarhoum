#pragma once
#include"Gate.h"


class Xor : public Gate
{
public:
	Xor();
	Xor(int inputs);
	~Xor();

	virtual string print();

	virtual int eval(int n1, int n2);
	virtual void table();
	

};