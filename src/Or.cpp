#include"Or.h"

Or::Or() : m_inputs(2)
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

int Or::eval()
{
	int n1, n2;
	cin >> n1 >> n2;
	return (n1 == 0 && n2 == 0) ? 0 : 1;
		
}

void Or::table()
{
}
