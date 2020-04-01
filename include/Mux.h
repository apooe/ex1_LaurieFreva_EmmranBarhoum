#pragma once
#include"Gate.h"


class Mux : public Gate
{
public:
	Mux();
	Mux(int inputs);
	~Mux();

	virtual string print();
	
	virtual int eval(int n1, int n2);
	virtual void table();



};
