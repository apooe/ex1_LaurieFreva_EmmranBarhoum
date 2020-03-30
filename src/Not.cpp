#include"Not.h"

Not::Not() : m_inputs(1)
{
}

Not::Not(int inputs)
{
	m_inputs = inputs;
}

Not::~Not()
{
}

int Not::getNumInputs()
{
	return m_inputs;
}

string Not::print()
{
	return "NOT";
}

string Not::printInput()
{
	return " (" + std::to_string(m_inputs) + " input)";
}

int Not::eval()
{
	int n1;
	cin >> n1; 
	if (n1 == 0)
		return 1;
	else if(n1 == 1)
		return  0;
	else
		return -1;
}

void Not::table()
{
}
