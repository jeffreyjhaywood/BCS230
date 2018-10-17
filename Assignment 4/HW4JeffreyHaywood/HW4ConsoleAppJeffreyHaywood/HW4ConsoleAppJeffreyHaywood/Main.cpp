//**************************************************
// File: Main.cpp
//
// Purpose: 
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
//	N/A
//
//**************************************************

#include <iostream>
#include <fstream>
#include <string>
#include "Album.h"
#include <iomanip>

//**************************************************
// Function: main
//
// Purpose: To perform user specified task with data about a music album.
//			Asks user to enter menu choice. Will loop until '5' is pressed.
//			Will perform specified function based on user input.
//
//**************************************************

int main()
{
	int choice = 0, i = 0;
	std::string inputFile, outputFile;
	Album album;
	Time albumTotalTime;

	do
	{
		std::cout << "Album Program" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << "1 - Load song from data file" << std::endl;
		std::cout << "2 - Write data to output file" << std::endl;
		std::cout << "3 - Display Album Information" << std::endl;
		std::cout << "4 - Show total time" << std::endl;
		std::cout << "5 - Exit" << std::endl;
		std::cout << "Enter choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{
		case 1:
			std::cout << "Enter input file name: ";
			std::cin >> inputFile;
			album.Read(inputFile);
			std::cout << std::endl;
			break;

		case 2:
			std::cout << "Enter output file name: ";
			std::cin >> outputFile;
			album.Write(outputFile);
			std::cout << std::endl;
			break;

		case 3:
			album.Display();
			std::cout << std::endl;
			break;

		case 4:
			albumTotalTime = album.CalcTotalTime();
			std::cout << "Album Time: " << albumTotalTime.GetMinutes() << ":" << albumTotalTime.GetSeconds() << std::endl;
			std::cout << std::endl;
			break;

		case 5:
			std::cout << "Program has been terminated" << std::endl;
			std::cout << std::endl;
			break;

		default:
			std::cout << "Please enter a valid number..." << std::endl;
			std::cout << std::endl;
		}
	} while (choice != 5);

	return 0;
}