#include"Comp.h"

Comp::Comp() 
{
}

Comp::Comp(shared_ptr<Gate> g1, shared_ptr<Gate> g2, int inp)
{
	
	m_inputs = g1->getInput() + g2->getInput() - 1;
	if (inp < m_inputs || inp < m_inputs) {
		//input not good 
	}
	m_g1 = g1;
	m_g2 = g2;
	m_i = inp;

}

Comp::~Comp()
{
}

string Comp::print()
{
	return "{" + m_g1->print() + "->" + "[" + std::to_string(m_i) + "] " 
		+ m_g2->print() + "}" + " (" + std::to_string(m_inputs) + " inputs)" ;
}



int Comp::eval(int n1, int n2)
{

	return  m_g2->eval(m_g1->eval(n1, n2), m_i);
}

void Comp::table()
{
}

