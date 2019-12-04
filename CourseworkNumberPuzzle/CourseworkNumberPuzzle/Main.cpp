#include <iostream>
#include<string>
#include "Interface.h"
#include "Board.h"

int main();
void RestartProgram();

using namespace std;
int main()
{
	Interface ui;
	ui.out();
	if (ui.getChoice())
	{
		string* temp = new string;

		cout << "Would you like a user made board or a random one? u/r" << endl;
		cin >> *temp;
		if (*temp == "u")
		{
			Board<int> puzzle;
			puzzle.CreateBoardInput();
			puzzle.PrintArray();
			cin.get();
			cin.get();
			return 0;
		}
		else if (*temp == "r")
		{
			Board<int> puzzle;
			puzzle.CreateMultipleBoards();
			RestartProgram();
			cin.get();
			cin.get();
			return 0;
		}
	}
	else
	{
		int ComputersBoard[4][4]
		{
			1, 4, 5, 2,
			3, 10, 6, 8,
			9, 11, 12, 15,
			22, 55, 23,
		};

		for (int column = 0; column < 4; column++)
		{
			for (int row = 0; row < 4; row++)
			{
				cout << ComputersBoard[column][row] << " ";


			}
			cout << endl;

		}

	}
	cin.get();
	cin.get();
	return 0;
}

void RestartProgram()
{
	char ans;
	cout << "Would you like to run the program again? (y/n) ";
	cin >> ans;

	if (cin.fail())
	{
		cin.clear();
		cout << "Sorry that wasn't an appropiate value" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		RestartProgram();
	}
	switch (ans)
	{
	case 'y':
		main();
		break;

	case 'n':
		cout << "Thanks for using me" << endl;
		break;

	default:
		cout << "Sorry that wasn't a valid response" << endl;
		RestartProgram();

	}
}