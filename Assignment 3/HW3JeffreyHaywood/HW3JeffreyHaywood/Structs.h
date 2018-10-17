//**************************************************
// File: Structs.h
//
// Purpose: Contains all struct definitions used in this program.
//
// Written By: Jeffrey Haywood
//
// Compiler: Visual C++ 2017
//
// Update Information
// -------------------
//
// N/A
//
//**************************************************

#include <iostream>
#include <string>

using namespace std;

struct Artist
{
	string name;
	string country;
};

struct Time
{
	int minutes;
	int seconds;
};

struct Song
{
	string title;
	Artist artist;
	Time length;
};