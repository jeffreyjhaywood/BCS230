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
//	N/A
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
	std::string title;
	Artist artist;
	Song song[6];

public:
	Album();

	std::string GetTitle();

	void SetTitle(std::string newTitle);

	Time CalcTotalTime();
	void Read(std::string fileName);
	void Write(std::string fileName);
	void Display();
};

#endif