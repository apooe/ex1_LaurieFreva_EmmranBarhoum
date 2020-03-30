#pragma once
#include"Gate.h"


class And : public Gate
{
public:
	And();
	And(int inputs);
	~And();
	int getNumInputs();
	virtual string print();
	virtual string printInput();
	virtual int eval();
	virtual void table();
	


private:
	int m_inputs;
};
