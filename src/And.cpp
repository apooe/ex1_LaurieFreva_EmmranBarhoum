#include"And.h"

And::And(): m_inputs(2)
{
}

And::And(int inputs)
{
	m_inputs = inputs;
}

And::~And()
{
}

int And::getNumInputs()
{
	return m_inputs;
}

string And::print()
{
	return "AND";
}

string And::printInput()
{
	return " (" + std::to_string(m_inputs) + " input)";
}

int And::eval()
{
	int n1, n2;
	cin >> n1 >> n2; 

	return  (n1 == 1 && n2 == 1) ? 1 : 0;

}

void And::table()
{
}
