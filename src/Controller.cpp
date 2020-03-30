#include"Controller.h"

Controller::Controller(){}

Controller::~Controller(){}

void Controller::run()
{
	m_gates.push_back(make_shared<Or>(2));// 2 is the num of inputs 
	m_gates.push_back(make_shared<And>(2));// 2 is the num of inputs 
	m_gates.push_back(make_shared<Xor>(2));// 2 is the num of inputs 
	m_gates.push_back(make_shared<Not>(1));// 2 is the num of inputs 
	m_gates.push_back(make_shared<Mux>(3));// 2 is the num of inputs 

	printCommandsList();
	string str;

	cin >> str;

	while (true) {

		Command_t cmd = commandIndex(str);
		if (doCommand(cmd))
			printCommandsList();

		cin >> str;
		
	}
}

void Controller::printCommandsList()
{
	cout << "List of available gates:" << endl;

	for (int i = 0; i < m_gates.size(); i++)
		cout << i << ":  " << m_gates[i]->print() << m_gates[i]->printInput() << std::endl;

	cout << "Enter command ('help' for the list of available commands):\n";
	

}

Command_t Controller::commandIndex(string str)
{
	if (str == "eval")
		return Eval_t;
	else if (str == "comp")
		return Comp_t;
	else if (str == "del")
		return Del_t;
	else if (str == "table")
		return Table_t;
	else if (str == "help")
		return Help_t;
	else if (str == "exit")
		return Exit_t;
}

bool Controller::doCommand(Command_t cmd)
{
	switch (cmd)
	{
	case Eval_t:
		do_eval();
		return true;

	/*case Comp_t:
		do_comp();
		return true;

		*/

	case Help_t:
		do_help();
		return true;

	case Table_t:
		do_table();
		return true;

	case Exit_t:
		do_exit();
		return true;
	
	case Del_t:
		do_delete();
		return true;
	}
	return false;
}

void Controller::do_help()
{
	cout << "The available commands are:" << endl;
	cout << "* eval <x> <param1> <param2> ... - evaluation, compute the result of gate x when\n"
	 	 << "the inputs are param1 param2 ..." << endl;
	cout << "* comp <x1> <x2> <y> -composition, connect gate x1 output to input y of gate x2\n"
		 << "and add it to the list of the gates " << endl;
	cout << "* table <x> -display the truth table of gate x" << endl;
	cout << "* del <x> -delete gate x from the list" << endl;
	cout << "* exit - print a greeting to the user and close the program" << endl;
	cout << "* help - print this command list" << endl << endl;
}

void Controller::do_eval()
{
	int gate;
	cin >> gate;
	cout << m_gates[gate]->print();
	cout << m_gates[gate]->printInput();

	int result = m_gates[gate]->eval();

	if (result != -1)
		cout << " result : " << result << endl << endl;
	else
		cout << "error" << endl;

}

void Controller::do_exit()
{
	cout << "Goodbye !";
	exit(EXIT_SUCCESS);
}

void Controller::do_delete()
{
	int gate;
	cin >> gate;
	if(checkVector(gate))
		m_gates.erase(m_gates.begin() + gate);
	//else  = message or error
	cout << endl;
}

void Controller::do_table()
{
	int gate;
	cin >> gate;
	m_gates[gate]->
}

bool Controller::checkVector(int index)
{
	return  (index <= m_gates.size() - 1);
}
