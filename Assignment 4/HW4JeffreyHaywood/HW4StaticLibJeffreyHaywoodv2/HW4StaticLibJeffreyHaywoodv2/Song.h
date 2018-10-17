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
//	N/A
//
//**************************************************

#ifndef SONG_H
#define SONG_H

#include <string>
#include "AlbumTime.h"

class Song
{
private:
	std::string title;
	Time time;

public:
	Song();

	std::string GetTitle();
	Time GetTime();

	void SetTitle(std::string newTitle);
	void SetTime(Time newTime);
};

#endif