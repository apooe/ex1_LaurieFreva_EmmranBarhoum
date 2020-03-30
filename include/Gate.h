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
	virtual string printInput() = 0;
	virtual int eval() = 0;
	virtual void table() = 0;

private:
	
}; 
