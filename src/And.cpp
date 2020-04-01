#include"And.h"

And::And()
{
}

And::And(int inputs)
{
	m_inputs = inputs;
}

And::~And()
{
}



string And::print()
{
	return "AND (2 inputs)";
}


int And::eval(int n1, int n2)
{
	
	return  (n1 == 1 && n2 == 1) ? 1 : 0;

}

void And::table()
{
}
