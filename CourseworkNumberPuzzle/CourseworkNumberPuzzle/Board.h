#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>


using namespace std;
template <typename T>
class Board
{
public:
	Board();

	~Board();
	void PrintArray();
	void AddNumbersToArray();
	void CreateBoardRandom();
	void CreateBoardInput();
	void CreateMultipleBoards();
	void VerifyFilename();
	int userValue = 10;
	int nums[4][4];
	int Np;
	ofstream file;
	ofstream Solution;
	vector <T> UserInputs;
	bool CheckUserDuplicates(int value);
	string input;

private:

};

template <typename T>
Board<T>::Board()
{
	VerifyFilename();
	Solution.open("Solution.txt");
}

template <typename T>
Board<T>::~Board()
{
	file.close();
	Solution.close();
}

template <typename T>
void Board<T>::VerifyFilename()
{

	try
	{
		cout << "Please enter the name you want your file to be called followed by .txt" << endl;
		cin >> input;

		string txt = "";

		for (int i = input.length() - 1; i > input.length() - 5; i--)
		{
			txt += input[i];
		}

		if (txt != "txt.")
		{
			throw string("You did not include a .txt at the end, please try again");
		}
	}

	catch (string invalid)
	{
		cout << invalid << endl << endl;
		VerifyFilename();
	}
	file.open(input);
}

template <typename T>
void Board<T>::CreateMultipleBoards()
{
	cout << "How many of these puzzles do you want? " << endl;
	cin >> Np;

	if (cin.fail())
	{
		cin.clear();
		cout << "That was not a valid value try again" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		CreateMultipleBoards();

	}
	for (int i = 0; i < Np; i++)
	{
		CreateBoardRandom();
		PrintArray();
		cout << endl;
	}
}

template <typename T>
void Board<T>::AddNumbersToArray()
{
	int temp = 0;
	cout << "Please enter a number: ";
	cin >> temp;

	if (cin.fail())
	{
		cin.clear();
		cout << "That was not a valid value try again" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		AddNumbersToArray();

	}
	else if (temp > 0 && temp < 21)
	{
		userValue = temp;
	}
	else
	{
		cout << "That value was out of my scope please try again" << endl;
		AddNumbersToArray();
	}
}

template<typename T>
void Board<T>::CreateBoardInput()
{
	srand(time(0));
	int index = 0;

	for (int column = 0; column < 4; column++)
	{
		for (int row = 0; row < 4; row++)
		{
			if (column == 3 && row == 3)
			{
				nums[column][row] = 0;
				break;
			}

			AddNumbersToArray();
			nums[column][row] = userValue;
		}
	}
}

template <typename T>
void Board<T>::CreateBoardRandom()
{
	UserInputs.clear();
	UserInputs = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	T Index = 0;

	std::random_shuffle(UserInputs.begin(), UserInputs.end());

	for (int i = 0; i < 4 * 4; i++)
	{
		UserInputs.push_back(i);
	}


	for (int column = 0; column < 4; column++)
	{
		for (int row = 0; row < 4; row++)
		{
			nums[column][row] = UserInputs[Index];
			Index++;

		}

	}

}

template <typename T>
void Board<T>::PrintArray()
{
	for (int column = 0; column < 4; column++)
	{
		for (int row = 0; row < 4; row++)
		{
			cout << nums[column][row] << " ";
			file << nums[column][row] << " ";
			Solution << nums[column][row] << " ";
		}
		cout << endl;
		file << endl;
		Solution << endl;
	}
	file << endl;
	Solution << endl;
}

template <typename T>
bool Board<T>::CheckUserDuplicates(int value)
{
	if (find(UserInputs.begin(), UserInputs.end(), value) != UserInputs.end())
	{
		return true;
	}
	else
		return false;
}