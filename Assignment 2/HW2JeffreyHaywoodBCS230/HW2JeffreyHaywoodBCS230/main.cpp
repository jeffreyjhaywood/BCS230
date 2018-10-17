//**************************************************
// File: main.cpp
//
// Purpose: To generate a sales report for 'xxxxxx' company.
//			User will provide the input and output file names.
//			Multiple arrays will be filled with sales data from input.
//			Data stored in array elements will be streamed to output file
//			in an organized fashion.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
// Name: Jeffrey Haywood
// Date: 2/25/2018
// Description: Added various formatting functions for output organization.
//				Output is now formatted in a more readable manner.
//
//**************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
#include "Sales.h"

using namespace std;

//**************************************************
// Function: main
//
// Purpose: Specifies how many elements to be in array.
//			Asks user for string to name input and output files.
//			Populates arrays with data from user defined input file.
//			Generates organized sales report to user defined output file.
//
//**************************************************
int main()
{
	const int numElements = 5;

	string inputFile;
	string outputFile;
	
	double salesFigures[numElements];
	string firstNames[numElements];
	string lastNames[numElements];
	
	cout << "Please enter input file name. (Use 'InputFile.txt' for testing purposes.)" << endl;
	cin >> inputFile;

	cout << "Please enter output file name." << endl;
	cin >> outputFile;

	ReadSalesFromFile(inputFile, firstNames, lastNames, salesFigures);
	SalesReport(outputFile, firstNames, lastNames, salesFigures, numElements);

	return 0;
}