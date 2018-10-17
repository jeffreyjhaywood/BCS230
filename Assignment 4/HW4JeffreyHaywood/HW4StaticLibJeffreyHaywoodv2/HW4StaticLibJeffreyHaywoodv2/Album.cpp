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
//**************************************************


#include "Album.h"

// Default constructor
Album::Album()
{
	title = " ";
}

// Accessor method
std::string Album::GetTitle() { return title; }

// Mutator method
void Album::SetTitle(std::string newTitle) { title = newTitle; }

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
		totalMinutes += song[i].GetTime().GetMinutes();
		totalSeconds += song[i].GetTime().GetSeconds();

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
	artist.SetName(newName);

	getline(songInput, newCountry);
	artist.SetCountry(newCountry);

	int i = 0;
	while (i < 6)
	{
		getline(songInput, newSongTitle);
		song[i].SetTitle(newSongTitle);

		getline(songInput, newMinutesTemp);
		newMinutes = stoi(newMinutesTemp);

		getline(songInput, newSecondsTemp);
		newSeconds = stoi(newSecondsTemp);

		newTime.SetMinutes(newMinutes);
		newTime.SetSeconds(newSeconds);

		song[i].SetTime(newTime);
		
		i++;
	}
}

//**************************************************
// Function: Writes
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

	newName = artist.GetName();
	outputFile << newName << std::endl;

	newCountry = artist.GetCountry();
	outputFile << newCountry << std::endl;

	std::string newSongTitle;
	int newMinutes, newSeconds;

	int i = 0;
	while (i < 6)
	{
		newSongTitle = song[i].GetTitle();
		outputFile << newSongTitle << std::endl;

		newMinutes = song[i].GetTime().GetMinutes();
		outputFile << newMinutes << std::endl;

		newSeconds = song[i].GetTime().GetSeconds();
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
	std::cout << "Artist:" << std::setw(17) << artist.GetName() << std::endl;
	std::cout << "Country:" << std::setw(4) << artist.GetCountry() << std::endl;
	std::cout << std::endl;

	int i = 0;
	while (i < 6)
	{
		std::cout << std::left << std::setw(20) << song[i].GetTitle() << song[i].GetTime().GetMinutes() << ":" << std::right << std::setw(2) << std::setfill('0') << song[i].GetTime().GetSeconds() << std::setfill(' ') << std::endl;

		i++;
	}
}