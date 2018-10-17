//**************************************************
// File: AlbumTime.cpp
//
// Purpose: Contains Time object to be used by Song class.
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
//	Description: Changed name from Time.cpp to AlbumTime.cpp
//				 due to a naming conflict with iomanip library.
//
//	Name: Jeffrey Haywood
//	Date: 5/3/2018
//	Description: Added operator= and operator<<
//				overloads. Changed m_Seconds to pointer.
//				Added destructor.
//**************************************************

#include "AlbumTime.h"

//**************************************************
// Function: Time Default Constructor
//
// Purpose: Default constructor, initializes
//			member variables to a default value.
//
//**************************************************

Time::Time()
{
	m_Minutes = 0;

	m_Seconds = new int;
	*m_Seconds = 0;

}

//**************************************************
// Function: Time Copy Cunstructor
//
// Purpose: Copy constructor, deep copies
//			member variables.
//
//**************************************************

Time::Time(const Time& rhs)
{
	m_Minutes = rhs.m_Minutes;
	m_Seconds = new int;
	*m_Seconds = *rhs.m_Seconds;

	*this = rhs;
}

int Time::GetMinutes() { return m_Minutes; }
int Time::GetSeconds() { return *m_Seconds; }

void Time::SetMinutes(int minutes) { m_Minutes = minutes; }
void Time::SetSeconds(int seconds) { *m_Seconds = seconds; }

//**************************************************
// Function: operator=
//
// Purpose: operator= Overload.
//
//**************************************************

Time& Time::operator=(const Time& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	m_Minutes = rhs.m_Minutes;
	*m_Seconds = *rhs.m_Seconds;

	return *this;
}

//**************************************************
// Function: operator<<
//
// Purpose: operator<< Overload.
//
//**************************************************

std::ostream& operator<<(std::ostream& os, Time& rhs)
{
	os << rhs.m_Minutes << std::endl;
	os << *rhs.m_Seconds << std::endl;

	return os;
}

//**************************************************
// Function: Time Destructor
//
// Purpose: Deletes the allocated heap memory.
//
//**************************************************

Time::~Time()
{
	delete m_Seconds;
}