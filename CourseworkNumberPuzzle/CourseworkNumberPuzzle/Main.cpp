//15 Puzzle game
//By Aaron Robson
#include <iostream>
#include<string>

using namespace std;

string Uname;
int userValue = 10;
int nums[4][4];

void AddNumbersToArray()
{
	cout << "Please enter a number";    //Input from the user.
	cin >> userValue;

}
void PrintArray()
{
	for (int column = 0; column < 4; column++)   //print out the column and row (their location)
	{
		for (int row = 0; row < 4; row++)
		{
			cout << nums[column][row] << " ";
		}
		cout << endl;
	}

}
void IntroText()
{
	string title = "";

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
}

int main()
{
	IntroText();
   
	cout << "Please enter your name: ";
	cin >> Uname;
	cout << "Hello " << Uname << endl;


	for (int column = 0; column < 4; column++)     //Iterate from the column and then the row, setting the values.
	{
		for (int row = 0; row < 4; row++)
		{
			AddNumbersToArray();
			nums[column][row] = userValue;       //Sets the values of the user in these index of the array.
		}
	}

	PrintArray();


	cin.get();
	cin.get();
	return 0;
}