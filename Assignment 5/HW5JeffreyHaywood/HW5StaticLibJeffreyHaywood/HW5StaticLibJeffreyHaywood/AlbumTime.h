//**************************************************
// File: AlbumTime.h
//
// Purpose: Contains function definitions for AlbumTime.cpp
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
//	Name: Jeffrey Haywood
//	Date: 4/11/2018
//	Description: Changed name from Time.h to AlbumTime.h
//				 due to a naming conflict with iomanip library.
//
//	Name: Jeffrey Haywood
//	Date: 5/3/2018
//	Description: Added operator= and operator<<
//				overloads. Changed m_Seconds to pointer.
//				Added destructor.
//
//**************************************************

#ifndef ALBUMTIME_H
#define ALBUMTIME_H
#include <fstream>
#include <iostream>

class Time
{
private:
	int m_Minutes;
	int *m_Seconds;

public:
	Time();

	//Copy Constructor
	Time(const Time& rhs);

	int GetMinutes();
	int GetSeconds();

	void SetMinutes(int minutes);
	void SetSeconds(int seconds);

	Time& operator=(const Time& rhs);
	friend std::ostream& operator<<(std::ostream& os, Time& rhs);

	~Time();
};

#endif