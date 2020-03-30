#pragma once
#include"Gate.h"


class Xor : public Gate
{
public:
	Xor();
	Xor(int inputs);
	~Xor();
	int getNumInputs();
	virtual string print();
	virtual string printInput();
	virtual int eval();
	virtual void table();
	


private:
	int m_inputs;
};