#include "Interface.h"



Interface::Interface()
{
	Uname = " ";
}


Interface::~Interface()
{
}


void Interface::out()
{
	cout << "Please enter your name: ";
	cin >> Uname;
	cout << "Hello " << Uname << endl;
}
