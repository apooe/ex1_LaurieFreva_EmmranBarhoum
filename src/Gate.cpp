#include"Gate.h"

Gate::Gate(): m_inputs(0){}

Gate::~Gate(){}

int Gate::getInput()
{
	return m_inputs;
}


