#include "Interface.h"



Interface::Interface()
{
	Uname = "qwe";
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
