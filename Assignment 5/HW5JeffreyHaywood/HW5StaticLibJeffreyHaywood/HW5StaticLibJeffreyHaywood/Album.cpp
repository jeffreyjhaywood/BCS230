//**************************************************
// File: Album.cpp
//
// Purpose: Contains functions that read user specified file
//			into program variables, writes data stored in variables
//			to a user specified output file. Calculates total time of album.
//			Displays the contents of album in organized manner.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
//	Name: Jeffrey Haywood
//	Date: 4/10/2018
//	Description: Made formatting changes for Display() function.
//				 Deleted various lines of unnecessary code.
//
//	Name: Jeffrey Haywood
//	Date: 5/3/2018
//	Description: Added operator= and operator<<
//				overloads. Changed m_Song to pointer, dynamic array.
//				Added destructor.
//
//**************************************************


#include "Album.h"

//**************************************************
// Function: Album Default Constructor
//
// Purpose: Default constructor, initializes
//			member variables to a default value.
//
//**************************************************
Album::Album()
{
	m_Title = " ";
	m_Artist.SetName(" ");
	m_Artist.SetCountry(" ");
	m_Song = new Song[6];
	Time t;
	t.SetMinutes(1);
	t.SetSeconds(0);
	for (int i = 0; i < 6; i++)
	{
		m_Song[i].SetTitle("N/A");
		m_Song[i].SetTime(t);
	}
}

//**************************************************
// Function: Album Copy Constructor
//
// Purpose: Copy constructor, deep copies
//			member variables.
//
//**************************************************
Album::Album(const Album& rhs)
{
	m_Title = rhs.m_Title;
	m_Artist = rhs.m_Artist;
	m_Song = new Song[6];
	for (int i = 0; i < 6; i++)
	{
		m_Song[i] = rhs.m_Song[i];
	}

	*this = rhs;
}

// Accessor method
std::string Album::GetTitle() { return m_Title; }

// Mutator method
void Album::SetTitle(std::string title) { m_Title = title; }

//**************************************************
// Function: CalcTotalTime
//
// Purpose: Calculates the total time of all the songs
//			on the given album data text file.
//
//**************************************************

Time Album::CalcTotalTime()
{
	int totalMinutes = 0, totalSeconds = 0, remSeconds = 0;
	Time totalTime;

	int i = 0;
	while (i < 6)
	{
		totalMinutes += m_Song[i].GetTime().GetMinutes();
		totalSeconds += m_Song[i].GetTime().GetSeconds();

		i++;
	}

	remSeconds = totalSeconds % 60;
	totalMinutes += totalSeconds / 60;

	totalTime.SetMinutes(totalMinutes);
	totalTime.SetSeconds(remSeconds);

	return totalTime;
}

//**************************************************
// Function: Read
//
// Purpose: Reads all data from given input file
//			into member variables.
//
//**************************************************

void Album::Read(std::string fileName)
{
	std::ifstream songInput;
	songInput.open(fileName);

	Artist newArtist;
	Time newTime;
	std::string newTitle, newName, newCountry, newSongTitle, newMinutesTemp, newSecondsTemp;
	int newMinutes, newSeconds;

	getline(songInput, newTitle);
	SetTitle(newTitle);

	getline(songInput, newName);
	m_Artist.SetName(newName);

	getline(songInput, newCountry);
	m_Artist.SetCountry(newCountry);

	int i = 0;
	while (i < 6)
	{
		getline(songInput, newSongTitle);
		m_Song[i].SetTitle(newSongTitle);

		getline(songInput, newMinutesTemp);
		newMinutes = stoi(newMinutesTemp);

		getline(songInput, newSecondsTemp);
		newSeconds = stoi(newSecondsTemp);

		newTime.SetMinutes(newMinutes);
		newTime.SetSeconds(newSeconds);

		m_Song[i].SetTime(newTime);

		i++;
	}
}

//**************************************************
// Function: Write
//
// Purpose: Writes all data to given output file
//			from member variables.
//
//**************************************************

void Album::Write(std::string fileName)
{
	std::ofstream outputFile;
	outputFile.open(fileName);

	std::string newTitle, newName, newCountry;

	newTitle = GetTitle();
	outputFile << newTitle << std::endl;

	newName = m_Artist.GetName();
	outputFile << newName << std::endl;

	newCountry = m_Artist.GetCountry();
	outputFile << newCountry << std::endl;

	std::string newSongTitle;
	int newMinutes, newSeconds;

	int i = 0;
	while (i < 6)
	{
		newSongTitle = m_Song[i].GetTitle();
		outputFile << newSongTitle << std::endl;

		newMinutes = m_Song[i].GetTime().GetMinutes();
		outputFile << newMinutes << std::endl;

		newSeconds = m_Song[i].GetTime().GetSeconds();
		outputFile << newSeconds << std::endl;

		i++;
	}
}

//**************************************************
// Function: Display
//
// Purpose: Prints album info from member variables
//			to screen.
//
//**************************************************

void Album::Display()
{
	std::cout << "Title:" << std::setw(20) << GetTitle() << std::endl;
	std::cout << "Artist:" << std::setw(17) << m_Artist.GetName() << std::endl;
	std::cout << "Country:" << std::setw(4) << m_Artist.GetCountry() << std::endl;
	std::cout << std::endl;

	int i = 0;
	while (i < 6)
	{
		std::cout << std::left << std::setw(20) << m_Song[i].GetTitle() << m_Song[i].GetTime().GetMinutes() << ":" << std::right << std::setw(2) << std::setfill('0') << m_Song[i].GetTime().GetSeconds() << std::setfill(' ') << std::endl;

		i++;
	}
}

//**************************************************
// Function: operator=
//
// Purpose: operator= Overload.
//
//**************************************************

Album& Album::operator=(const Album& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	m_Title = rhs.m_Title;
	m_Artist = rhs.m_Artist;

	for (int i = 0; i < 6; i++)
	{
		m_Song[i] = rhs.m_Song[i];
	}

	return *this;
}

//**************************************************
// Function: operator<<
//
// Purpose: operator<< Overload.
//
//**************************************************

std::ostream& operator<<(std::ostream& os, Album& rhs)
{
	os << rhs.m_Title << std::endl;
	os << rhs.m_Artist << std::endl;
	for (int i = 0; i < 6; i++)
	{
		os << rhs.m_Song[i] << std::endl;
	}
	return os;
}

//**************************************************
// Function: Album Destructor
//
// Purpose: Deletes the allocated heap memory.
//
//**************************************************

Album::~Album()
{
	delete [] m_Song;
}