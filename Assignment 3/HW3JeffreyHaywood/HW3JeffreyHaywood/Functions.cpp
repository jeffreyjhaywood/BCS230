//**************************************************
// File: Functions.cpp
//
// Purpose: Contains functions to read data into array from
//			input file.
//			Contains functions to display song data and total time
//			of all songs.
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

#include "Functions.h"

//**************************************************
// Function: LoadSongDataFromFile
//
// Purpose: Asks user for name of input file.
//			Uses getline to write each line to it's
//			corresponding variable.
//
//**************************************************

void LoadSongDataFromFile(Song s[])
{
	string inputFileName;

	cout << "Please Enter File Name (SongInput.txt)" << endl;
	cin >> inputFileName;

	ifstream songInput;
	songInput.open(inputFileName);

	string minStr;
	string secStr;
	int i = 0;

	while (i < 5)
	{
		getline(songInput, s[i].title);
		getline(songInput, s[i].artist.name);
		getline(songInput, s[i].artist.country);

		// Assigns lines with desired integers from .txt file to a string variable
		getline(songInput, minStr);
		getline(songInput, secStr);

		// Converts the string variable to an integer
		s[i].length.minutes = stoi(minStr);
		s[i].length.seconds = stoi(secStr);

		i++;
	}
}

//**************************************************
// Function: ShowSongData
//
// Purpose: Displays each Song struct object and it's members.
//
//**************************************************

void ShowSongData(Song s[])
{

	int i = 0;

	while (i < 5)
	{
		cout << "Title: " << s[i].title << endl;
		cout << "Artist: " << s[i].artist.name << endl;
		cout << "Country: " << s[i].artist.country << endl;
		cout << "Minutes: " << s[i].length.minutes << endl;
		cout << "Seconds: " << s[i].length.seconds << endl;
		i++;
	}
}

//**************************************************
// Function: GetTotalTime
//
// Purpose: Calculates the total amount of time of each song.
//			Converts the seconds into minutes if exceeds 60.
//
//**************************************************

Time GetTotalTime(Song s[])
{
	Time totalTime;
	int totalMinutes = 0, totalSeconds = 0, remSeconds = 0;
	int i = 0;

	while (i < 5)
	{
		totalMinutes += s[i].length.minutes;
		totalSeconds += s[i].length.seconds;

		i++;
	}
	
	remSeconds = totalSeconds % 60;
	totalMinutes += totalSeconds / 60;

	totalTime.minutes = totalMinutes;
	totalTime.seconds = remSeconds;

	return totalTime;
}