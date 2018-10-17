//**************************************************
// File: Sales.h
//
// Purpose: Contains all function definitions used
//			while running this program.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
// N/A
//
//**************************************************
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

double CalculateTotalSales(double sales[], int numElements);
double CalculateAvgSales(double sales[], int numElements);
int FindMinSalesIndex(double sales[], int numElements, int &minSalesIndex);
int FindMaxSalesIndex(double sales[], int numElements, int &maxSalesIndex);
void SalesReport(string outputFile, string firstName[], string lastName[], double sales[], int numElements);
void ReadSalesFromFile(string inputFile, string firstName[], string lastName[], double sales[]);