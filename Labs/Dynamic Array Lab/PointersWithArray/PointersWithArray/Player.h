#ifndef PLAYER_H
#define PLAYER_H

#include <string>;
#include <iostream>

class Player 
{
	private:
		std::string m_Name;
		int m_Score;

	public:
		Player();

		std::string GetName();
		int GetScore();

		void SetName(std::string name);
		void SetScore(int score);

		~Player();
};

#endif