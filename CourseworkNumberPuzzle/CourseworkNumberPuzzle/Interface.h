#pragma once
#include <iostream>
#include <string>

using namespace std;
class Interface
{
public:
	Interface();

	~Interface();
	bool getChoice();

	void out();


private:
	string Uname;
	bool choice;

};