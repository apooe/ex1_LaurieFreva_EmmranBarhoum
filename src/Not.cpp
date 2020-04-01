#include"Not.h"

Not::Not()
{
}

Not::Not(int inputs)
{
	m_inputs = inputs;
}

Not::~Not()
{
}



string Not::print()
{
	return "NOT (1 input)";
}


int Not::eval(int n1, int n2)
{
	
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
