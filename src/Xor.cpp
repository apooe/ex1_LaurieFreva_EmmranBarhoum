#include"Xor.h"

Xor::Xor() 
{
}

Xor::Xor(int inputs)
{
	m_inputs = inputs;
}

Xor::~Xor()
{
}


string Xor::print()
{
	return "XOR (2 inputs)";
}



int Xor::eval(int n1, int n2)
{
	
	return (n1 == n2) ? 0 : 1;

}

void Xor::table()
{
}
