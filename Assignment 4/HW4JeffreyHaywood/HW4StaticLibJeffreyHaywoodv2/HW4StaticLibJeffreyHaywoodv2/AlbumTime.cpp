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
//**************************************************

#include "AlbumTime.h"

Time::Time()
{
	minutes = 0;
	seconds = 0;
}

int Time::GetMinutes() { return minutes; }
int Time::GetSeconds() { return seconds; }

void Time::SetMinutes(int newMinutes) { minutes = newMinutes; }
void Time::SetSeconds(int newSeconds) { seconds = newSeconds; }