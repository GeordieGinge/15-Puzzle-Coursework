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
	string* ptruname = &Uname;
	string** PtrRef = &ptruname;

	string title = " ";
	string temp = " ";
	title =
		"  @@@  @@@@@@@    @@@@@@@   @@@  @@@  @@@@@@@@  @@@@@@@@   @@@       @@@@@@@@      @@@@@@@@   @@@@@@   @@@@@@@@@@   @@@@@@@@  \n"
		" @@@@  @@@@@@@    @@@@@@@@  @@@  @@@  @@@@@@@@  @@@@@@@@   @@@       @@@@@@@@     @@@@@@@@@  @@@@@@@@  @@@@@@@@@@@  @@@@@@@@  \n"
		"@@@!!  !@@        @@!  @@@  @@!  @@@       @@!       @@!   @@!       @@!          !@@        @@!  @@@  @@! @@! @@!  @@!       \n"
		"  !@!  !@!        !@!  @!@  !@!  @!@      !@!       !@!   !@!       !@!          !@!        !@!  @!@  !@! !@! !@!  !@!       \n"
		"  @!@  !!@@!!     @!@@!@!   @!@  !@!     @!!       @!!    @!!       @!!!:!       !@! @!@!@  @!@!@!@!  @!! !!@ @!@  @!!!:!    \n"
		"  !@!  @!!@!!!    !!@!!!    !@!  !!!    !!!       !!!     !!!       !!!!!:       !!! !!@!!  !!!@!!!!  !@!   ! !@!  !!!!!:    \n"
		"  !!:      !:!    !!:       !!:  !!!   !!:       !!:      !!:       !!:          :!!   !!:  !!:  !!!  !!:     !!:  !!:       \n"
		"  :!:      !:!    :!:       :!:  !:!  :!:       :!:        :!:      :!:          :!:   !::  :!:  !:!  :!:     :!:  :!:       \n"
		"  :::  :::: ::     ::       ::::: ::   :: ::::   :: ::::   :: ::::   :: ::::      ::: ::::  ::   :::  :::     ::    :: ::::  \n";
	cout << title << endl;
	cout << "Made by Aaron Robson - 190588142 - (2019)" << endl;
	cout << "Please enter your first name: ";
	cin >> **PtrRef;
	cout << "Hello " << **PtrRef << endl;


	cout << "Would you like to make your own puzzle? y/n ";
	cin >> temp;
	if (temp == "y")
	{
		choice = true;
	}
	else if (temp == "n")
	{
		choice = false;
	}	
	PtrRef = NULL;
	delete PtrRef;
	ptruname = NULL;
	delete ptruname;
}

bool Interface::getChoice()
{
	return choice;
}