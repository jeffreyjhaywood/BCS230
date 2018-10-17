//**************************************************
// File: Artist.h
//
// Purpose: Function definitions for Album.cpp
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
//				overloads. Changed m_Song to pointer, dynamic array.
//				Added destructor.
//
//**************************************************

#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "Artist.h"
#include "Song.h"

//using namespace std;

class Album
{
private:
	std::string m_Title;
	Artist m_Artist;
	Song *m_Song;

public:
	Album();

	//Copy Constructor
	Album(const Album& rhs);

	std::string GetTitle();

	void SetTitle(std::string title);

	Time CalcTotalTime();
	void Read(std::string fileName);
	void Write(std::string fileName);
	void Display();

	Album& operator=(const Album& rhs);
	friend std::ostream& operator<<(std::ostream& os, Album& rhs);

	~Album();
};

#endif