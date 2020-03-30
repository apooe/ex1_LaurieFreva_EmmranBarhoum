#include"Xor.h"

Xor::Xor() : m_inputs(2)
{
}

Xor::Xor(int inputs)
{
	m_inputs = inputs;
}

Xor::~Xor()
{
}

int Xor::getNumInputs()
{
	return m_inputs;
}

string Xor::print()
{
	return "XOR";
}

string Xor::printInput()
{
	return " (" + std::to_string(m_inputs) + " input)";
}

int Xor::eval()
{
	int n1, n2;
	cin >> n1 >> n2;
	return (n1 == n2) ? 0 : 1;

}
