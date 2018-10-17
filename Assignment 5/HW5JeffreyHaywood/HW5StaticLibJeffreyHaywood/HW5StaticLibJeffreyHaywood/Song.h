//**************************************************
// File: Song.h
//
// Purpose: Function definitions for Song.cpp
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

#ifndef SONG_H
#define SONG_H

#include <string>
#include <iostream>
#include "AlbumTime.h"

class Song
{
private:
	std::string m_Title;
	Time *m_Time;

public:
	Song();

	//Copy Constructor
	Song(const Song& rhs);

	std::string GetTitle();
	Time GetTime();

	void SetTitle(std::string title);
	void SetTime(Time time);

	Song& operator=(const Song& rhs);
	friend std::ostream& operator<<(std::ostream& os, Song& rhs);

	~Song();
};

#endif