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
//	N/A
//
//**************************************************

#include "Song.h"

Song::Song()
{
	title = " ";
	time.SetMinutes(0);
	time.SetSeconds(0);
}

std::string Song::GetTitle() { return title; }
Time Song::GetTime() { return time; }

void Song::SetTitle(std::string newTitle) { title = newTitle; }
void Song::SetTime(Time newTime) { time = newTime; }