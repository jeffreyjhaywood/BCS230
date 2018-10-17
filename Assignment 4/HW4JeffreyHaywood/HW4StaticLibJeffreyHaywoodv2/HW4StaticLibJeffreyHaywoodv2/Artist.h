//**************************************************
// File: Artist.h
//
// Purpose: Function definitions for Artist.cpp
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

#ifndef ARTIST_H
#define ARTIST_H

#include <string>

class Artist
{
public:
	std::string name;
	std::string country;

public:
	Artist();

	std::string GetName();
	std::string GetCountry();

	void SetName(std::string newName);
	void SetCountry(std::string newCountry);
};

#endif