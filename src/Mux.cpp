#include "Mux.h"

Mux::Mux() 
{
}

Mux::Mux(int inputs)
{
	m_inputs = inputs;
}

Mux::~Mux()
{
}


string Mux::print()
{
	return "MUX (3 inputs)";
}



int Mux::eval(int n1, int n2)
{
	int n3;
	cin >> n3;

	if (n1 == 0)
		return n2;
	else if (n1 == 1)
		return n3;
	else
		return -1;

}

void Mux::table()
{
}
