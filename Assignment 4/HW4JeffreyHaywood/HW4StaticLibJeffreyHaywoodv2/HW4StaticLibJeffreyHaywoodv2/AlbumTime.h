//**************************************************
// File: AlbumTime.h
//
// Purpose: Contains function definitions for AlbumTime.cpp
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
//	Description: Changed name from Time.h to AlbumTime.h
//				 due to a naming conflict with iomanip library.
//
//**************************************************

#ifndef ALBUMTIME_H
#define ALBUMTIME_H

class Time
{
private:
	int minutes;
	int seconds;

public:
	Time();

	int GetMinutes();
	int GetSeconds();

	void SetMinutes(int newMinutes);
	void SetSeconds(int newSeconds);
};

#endif