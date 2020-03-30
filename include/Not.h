#pragma once
#include"Gate.h"


class Not : public Gate
{
public:
	Not();
	Not(int inputs);
	~Not();
	int getNumInputs();
	virtual string print();
	virtual string printInput();
	virtual int eval();



private:
	int m_inputs;
};
