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
//	Name: Jeffrey Haywood
//	Date: 5/3/2018
//	Description: Added operator= and operator<<
//				overloads. Changed m_Name to pointer.
//				Added destructor.
//
//**************************************************

#include "Artist.h"

//**************************************************
// Function: Artist Default Constructor
//
// Purpose: Default constructor, initializes
//			member variables to a default value.
//
//**************************************************

Artist::Artist()
{
	m_Name = new std::string;
	*m_Name = "N/A";
	m_Country = "N/A";
}

//**************************************************
// Function: Artist Copy Constructor
//
// Purpose: Copy constructor, deep copies
//			member variables.
//
//**************************************************

Artist::Artist(const Artist& rhs)
{
	m_Name = new std::string;
	*m_Name = *rhs.m_Name;
	m_Country = rhs.m_Country;

	*this = rhs;
}

std::string Artist::GetName() { return *m_Name; }
std::string Artist::GetCountry() { return m_Country; }

void Artist::SetName(std::string name) { *m_Name = name; }
void Artist::SetCountry(std::string country) { m_Country = country; }

//**************************************************
// Function: operator=
//
// Purpose: operator= Overload.
//
//**************************************************

Artist& Artist::operator=(const Artist& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	*m_Name = *rhs.m_Name;
	m_Country = rhs.m_Country;

	return *this;
}

//**************************************************
// Function: operator<<
//
// Purpose: operator<< Overload.
//
//**************************************************

std::ostream& operator<<(std::ostream& os, Artist& rhs)
{
	os << *rhs.m_Name << std::endl;
	os << rhs.m_Country << std::endl;

	return os;
}

//**************************************************
// Function: Artist Destructor
//
// Purpose: Deletes the allocated heap memory.
//
//**************************************************

Artist::~Artist()
{
	delete m_Name;
}