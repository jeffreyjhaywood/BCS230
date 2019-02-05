#include "Player.h"

Player::Player() 
{
	m_Name = "John Doe";
	m_Score = 0;
}

std::string Player::GetName() { return m_Name; }
int Player::GetScore() { return m_Score; }

void Player::SetName(std::string name) { m_Name = name; }
void Player::SetScore(int score) { m_Score = score; }

Player::~Player()
{
	std::cout << "Destructor called" << std::endl;
}
