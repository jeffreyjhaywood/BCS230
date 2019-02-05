#include "Player.h"
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	int arraySize;
	std::string name, temp;
	int score;

	std::ifstream infile;
	infile.open("i.txt");

	Player *p2;
	
	// Read in the number of players
	std::getline(infile, temp);
	arraySize = std::stoi(temp);

	p2 = new Player[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		std::getline(infile, name);
		std::getline(infile, temp);
		score = std::stoi(temp);


		p2[i].SetName(name);
		p2[i].SetScore(score);
	}

	for (int i = 0; i < arraySize; i++)
	{
		std::cout << p2[i].GetName() << std::endl;
		std::cout << p2[i].GetScore() << std::endl;
	}

	// Release the array
	delete[] p2;
	p2 = NULL;

	return 0;
}