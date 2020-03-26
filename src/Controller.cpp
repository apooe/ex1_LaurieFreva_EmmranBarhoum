#include"Controller.h"

Controller::Controller(){}

Controller::~Controller(){}

void Controller::run()
{
	m_gates.push_back(make_shared<Or>(2));

	printCommandsList();


}

void Controller::printCommandsList()
{
	cout << "List of available gates:" << endl;
	for (int i = 0; i < m_gates.size(); i++)
		cout << i << ":  " << m_gates[i]->print() << m_gates[i]->printInput() << std::endl;

	cout << "Enter command ('help' for the list of available commands):\n";

}
