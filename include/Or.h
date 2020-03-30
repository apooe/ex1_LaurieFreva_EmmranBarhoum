#pragma once
#include"Gate.h"


class Or : public Gate
{
public:
	Or();
	Or(int inputs);
	~Or();
	int getNumInputs();
	virtual string print();
	virtual string printInput();
	virtual int eval();
	virtual void table();


private:
	int m_inputs;
};
