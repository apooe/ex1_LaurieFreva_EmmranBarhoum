#include "Mux.h"

Mux::Mux() : m_inputs(3)
{
}

Mux::Mux(int inputs)
{
	m_inputs = inputs;
}

Mux::~Mux()
{
}

int Mux::getNumInputs()
{
	return m_inputs;
}

string Mux::print()
{
	return "MUX";
}

string Mux::printInput()
{
	return " (" + std::to_string(m_inputs) + " input)";
}

int Mux::eval()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if (n1 == 0)
		return n2;
	else if (n1 == 1)
		return n3;
	else
		return -1;

}
