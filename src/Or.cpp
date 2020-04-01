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


string Or::print()
{
	return  "OR (2 inputs)";
}



int Or::eval(int n1, int n2)
{
	return (n1 == 0 && n2 == 0) ? 0 : 1;
		
}

void Or::table()
{
}
