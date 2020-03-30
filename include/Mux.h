#pragma once
#include"Gate.h"


class Mux : public Gate
{
public:
	Mux();
	Mux(int inputs);
	~Mux();
	int getNumInputs();
	virtual string print();
	virtual string printInput();
	virtual int eval();



private:
	int m_inputs;
};
