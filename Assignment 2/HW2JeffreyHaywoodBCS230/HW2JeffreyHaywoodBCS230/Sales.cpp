//**************************************************
// File: Sales.cpp
//
// Purpose: Contains functions required to calculate the total
//			amount of sales, average of the sales, the index
//			where the lowest and highest sale took place.
//			Contains functions to read data into array from
//			input file and to output file in a organized manner.
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
#include <string>
#include <fstream>
#include <iomanip>
#include "Sales.h"

using namespace std;

//**************************************************
// Function: CalculateTotalSales
//
// Purpose: Calculates total sales amount.
//
//**************************************************
double CalculateTotalSales(double sales[], int numElements)
{
	double totalSales = 0;

	for (int i = 0; i < numElements; i++)
	{
		totalSales = totalSales + sales[i];
	}

	return totalSales;
}

//**************************************************
// Function: CalculateAvgSales
//
// Purpose: Calculates the average of the sales.
//
//**************************************************
double CalculateAvgSales(double sales[], int numElements)
{
	double avgSales = 0;

	// Uses total sales to calculate the average
	avgSales = CalculateTotalSales(sales, numElements) / numElements;

	return avgSales;
}

//**************************************************
// Function: FindMinSalesIndex
//
// Purpose: Searches sales array for minimum sales amount and returns its index.
//
//**************************************************
int FindMinSalesIndex(double sales[], int numElements, int &minSalesIndex)
{
	minSalesIndex = 0;
	double minSalesActual = sales[0];

	// Loops through array comparing which element has the lowest value
	for (int i = 0; i < numElements; i++)
	{
		if (sales[i] < minSalesActual)
		{
			minSalesActual = sales[i];
			minSalesIndex = i;
		}
	}

	return minSalesIndex;
}

//**************************************************
// Function: FindMaxSalesIndex
//
// Purpose: Searches sales array for maximum sales amount and returns its index.
//
//**************************************************
int FindMaxSalesIndex(double sales[], int numElements, int &maxSalesIndex)
{
	maxSalesIndex = 0;
	double maxSalesActual = sales[0];

	// Loops through array comparing which element has the highest value
	for (int i = 0; i < numElements; i++)
	{
		if (sales[i] > maxSalesActual)
		{
			maxSalesActual = sales[i];
			maxSalesIndex = i;
		}
	}
	return maxSalesIndex;
}

//**************************************************
// Function: SalesReport
//
// Purpose: Writes an organized sales report to user defined output file.
//
//**************************************************
void SalesReport(string outputFile, string firstName[], string lastName[], double sales[], int numElements)
{
	int minimumSalesIndex = 0;
	int maximumSalesIndex = 0;

	ofstream salesOutput;
	salesOutput.open(outputFile);

	// Writes header for the sales report.
	salesOutput << left << setw(15) << "First" << left << setw(15) << "Last" << left << setw(15) << "Sales" << endl;
	salesOutput << left << setw(15) << "-----" << left << setw(15) << "-----" << left << setw(15) << "-----" << endl;

	// Fills outputFile with data from arrays.
	for (int i = 0; i < numElements; i++)
	{
		salesOutput << left << setw(15) << firstName[i] << left << setw(15) << lastName[i] << left << setw(15) << fixed << setprecision(2) << sales[i] << endl;
	}

	salesOutput << endl;
	// Displays the average sales and total sales for company.
	salesOutput << "Average Sales: " << CalculateAvgSales(sales, numElements) << endl;
	salesOutput << "Total Sales: " << CalculateTotalSales(sales, numElements) << endl;

	salesOutput << endl;
	// Displays employee with highest sales amount.
	FindMaxSalesIndex(sales, numElements, maximumSalesIndex);
	salesOutput << "Max Sales Name: " << firstName[maximumSalesIndex] << " " << lastName[maximumSalesIndex] << endl;
	salesOutput << "Max Sales Amount: " << sales[maximumSalesIndex] << endl;

	salesOutput << endl;
	// Displays employee with lowest sales amount.
	FindMinSalesIndex(sales, numElements, minimumSalesIndex);
	salesOutput << "Min Sales Name: " << firstName[minimumSalesIndex] << " " << lastName[minimumSalesIndex] << endl;
	salesOutput << "Min Sales Amount: " << sales[minimumSalesIndex] << endl;
}

//**************************************************
// Function: ReadSalesFromFile
//
// Purpose: Reads sales data from user defined input file.
//			Populates multiple arrays with data from input file.
//
//**************************************************
void ReadSalesFromFile(string inputFile, string firstName[], string lastName[], double sales[])
{
	ifstream inputSales;
	inputSales.open(inputFile);
	
	int i = 0;
	// Loop to populate arrays with data until the end of input file.
	while (!inputSales.eof())
	{
		inputSales >> firstName[i] >> lastName[i] >> sales[i];
		i++;
	}
}