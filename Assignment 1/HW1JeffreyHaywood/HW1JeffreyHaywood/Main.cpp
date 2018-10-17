//**************************************************
// File: Main.cpp
//
// Purpose: Write records to BillOutput.txt
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
// 
// Name: Jeffrey Haywood
// Date: 2/15/2018
// Description: Fixed the alignment of the output file's columns.
//				Columns will now align from the left.
//				Output will now display double in hundreths place.
//
//**************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include "CalcTips.h"

using namespace std;

int main() {

	double billAmount, taxPct, tipPct, finalBill;

	ifstream inputData;
	inputData.open("BillInput.txt");
	ofstream outputData;
	outputData.open("BillOutput.txt");

	// Puts the headers at the top of BillOutput.txt
	outputData << left << setw(15) << "Bill" << left << setw(15) << "Tax Pct" << left << setw(15) << "Tip Pct" << left << setw(15) << "Final Bill" << endl;
	
	// Loop will keep running and reading data into BillOutput.txt until it hits the last piece of data in the BillInput.txt file
	while (!inputData.eof()) 
	{
		inputData >> billAmount >> taxPct >> tipPct;
		finalBill = CalculateFinalBill(billAmount, taxPct, tipPct);

		outputData << left << setw(15) << fixed << setprecision(2) << billAmount << left << setw(15) << taxPct << left << setw(15) << tipPct << left << setw(15) << finalBill << endl;

		// Where the loop will realize it is at the end of the BillInput.txt file and then close
		if (inputData.eof())
		{
			inputData.close();
		}
	}
	
	return 0;

}