//**************************************************
// File: Song.cpp
//
// Purpose: Creates a Song object to be used by Album class
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
//				overloads. Changed m_Time to pointer.
//				Added destructor.
//
//**************************************************

#include "Song.h"

//**************************************************
// Function: Song Default Constructor
//
// Purpose: Default constructor, initializes
//			member variables to a default value.
//
//**************************************************

Song::Song()
{
	m_Title = "N/A";

	m_Time = new Time;
	m_Time->SetMinutes(0);
	m_Time->SetSeconds(0);
}

//**************************************************
// Function: Song Copy Constructor
//
// Purpose: Copy constructor, deep copies
//			member variables.
//
//**************************************************

Song::Song(const Song& rhs)
{
	m_Title = rhs.m_Title;
	m_Time = new Time;
	*m_Time = *rhs.m_Time;

	*this = rhs;
}

std::string Song::GetTitle() { return m_Title; }
Time Song::GetTime() { return *m_Time; }

void Song::SetTitle(std::string title) { m_Title = title; }
void Song::SetTime(Time time) { *m_Time = time; }

//**************************************************
// Function: operator=
//
// Purpose: operator= Overload.
//
//**************************************************

Song& Song::operator=(const Song& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	m_Title = rhs.m_Title;
	*m_Time = *rhs.m_Time;

	return *this;
}

//**************************************************
// Function: operator<<
//
// Purpose: operator<< Overload.
//
//**************************************************

std::ostream& operator<<(std::ostream& os, Song& rhs)
{
	os << rhs.m_Title << std::endl;
	os << *rhs.m_Time << std::endl;

	return os;
}

//**************************************************
// Function: Song Destructor
//
// Purpose: Deletes the allocated heap memory.
//
//**************************************************

Song::~Song()
{
	delete m_Time;
}