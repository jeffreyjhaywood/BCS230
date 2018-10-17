//**************************************************
// File: Artist.h
//
// Purpose: Function definitions for Artist.cpp
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
//	Name: Jeffrey Haywood
//	Date: 5/3/2018
//	Description: Added operator= and operator<<
//				overloads. Changed m_Name to pointer.
//				Added destructor.
//
//**************************************************

#ifndef ARTIST_H
#define ARTIST_H

#include <string>
#include <iostream>
#include <fstream>

class Artist
{
private:
	std::string *m_Name;
	std::string m_Country;

public:
	Artist();

	//Copy Constructor
	Artist(const Artist& rhs);

	std::string GetName();
	std::string GetCountry();

	void SetName(std::string name);
	void SetCountry(std::string country);
	
	~Artist();

	Artist& operator=(const Artist& rhs);
	friend std::ostream& operator<<(std::ostream& os, Artist& rhs);

};

#endif