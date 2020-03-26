#include"Or.h"

Or::Or()
{
}

Or::Or(int inputs)
{
	m_inputs = inputs;
}

Or::~Or()
{
}

int Or::getNumInputs()
{
	return m_inputs;
}

string Or::print()
{
	return  "OR";
}

string Or::printInput()
{
	return " (" + std::to_string(m_inputs) + " input)";
}
