//**************************************************
// File: main.cpp
//
// Purpose: Reads in data from a user specified .txt file.
//			Assigns data from the input file to variables.
//			Prints variables as output.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
//	Name: Jeffrey Haywood
//	Date: 3/15/2018
//	Description: Changed menu from a while loop to a switch
//					statement.
//
//**************************************************

#include <iostream>
#include <string>
#include <fstream>
#include "Functions.h"

using namespace std;

//**************************************************
// Function: main
//
// Purpose: Specifies how many elements to be in array.
//			Asks user to enter menu choice. Will loop until '4' is pressed.
//			Will perform specified function based on user input.
//
//**************************************************

int main()
{
	const int songElements = 5;

	Song song[songElements];
	int choice = 0;

	do
	{
		cout << "Song Program" << endl;
		cout << "------------" << endl;
		cout << "1 - Load song from data file" << endl;
		cout << "2 - Show all song data" << endl;
		cout << "3 - Show total time" << endl;
		cout << "4 - Exit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
				LoadSongDataFromFile(song);
				cout << endl;
				break;

			case 2:
				ShowSongData(song);
				cout << endl;
				break;

			case 3:
				cout << "Total time: " << GetTotalTime(song).minutes << ":" << GetTotalTime(song).seconds << endl;
				cout << endl;
				break;

			case 4:
				cout << "Program has been terminated" << endl;
				cout << endl;
				break;

			default:
				cout << "Please enter a valid number..." <<endl;
				cout << endl;
		}
	} while (choice != 4);

	return 0;
}