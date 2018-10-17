//**************************************************
// File: Artist.cpp
//
// Purpose: Creates an Artist object to be used by Album class.
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

#include "Artist.h"

Artist::Artist()
{
	name = " ";
	country = " ";
}

std::string Artist::GetName() { return name; }
std::string Artist::GetCountry() { return country; }

void Artist::SetName(std::string newName) { name = newName; }
void Artist::SetCountry(std::string newCountry) { country = newCountry; }