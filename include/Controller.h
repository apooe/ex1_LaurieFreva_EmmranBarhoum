#pragma once
#include<iostream>
#include <vector>
#include <Gate.h>
#include <Or.h>
#include <And.h>
#include <Xor.h>
#include <Not.h>
#include <Mux.h>

using namespace std;
using std::vector;
using std::make_shared;


enum Command_t {
	Eval_t, Comp_t, Table_t, Del_t, Exit_t, Help_t,

};

class Controller
{
public:
	Controller();
	~Controller();
	void run();
	void printCommandsList();
	Command_t commandIndex(string str);
	bool doCommand(Command_t cmd);
	void do_help();
	void do_eval();

private:
	vector<shared_ptr<Gate>> m_gates; //or vector <Gate*> m_gates;
};
