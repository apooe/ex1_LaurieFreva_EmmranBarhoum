#pragma once
#include<iostream>
#include <string> 
using namespace std;
using std::string;

class Gate
{
public:
	Gate();
	~Gate();
	virtual string print() = 0;

	int getInput();
	virtual int eval(int n1, int n2) = 0;
	virtual void table() = 0;

protected:
	int m_inputs;
}; 
