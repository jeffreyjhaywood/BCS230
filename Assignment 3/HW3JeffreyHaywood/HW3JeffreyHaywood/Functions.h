//**************************************************
// File: Functions.h
//
// Purpose: Contains all function definitions used
//			while running this program.
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
#include <fstream>
#include "Structs.h"

using namespace std;

void LoadSongDataFromFile(Song s[]);
void ShowSongData(Song s[]);
Time GetTotalTime(Song s[]);