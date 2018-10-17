//**************************************************
// File: CalcTips.cpp
//
// Purpose: Function that takes double data types from main to calculate the final price of a restaurant bill.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
// N/A
//
//**************************************************
#include "CalcTips.h"

double CalculateFinalBill(double billAmount, double taxPct, double tipPct) {
	
	// Will figure out the bill with taxes first to make the operation easier to understand
	double billWithTax = (billAmount + (taxPct * billAmount));
	double finalBill = (billWithTax * tipPct) + billWithTax;

	return finalBill;
}