#pragma once
#include"Gate.h"


class Comp : public Gate
{
public:
	Comp();
	Comp(shared_ptr<Gate>g1, shared_ptr<Gate> g2, int inp);
	~Comp();

	virtual string print();
	
	virtual int eval(int n1, int n2);
	virtual void table();

private:
	shared_ptr<Gate> m_g1;
	shared_ptr<Gate> m_g2;
	int m_i;


};