#include "Score.h"

Score::Score(std::string name, int score)
{
	m_Name = name;
	m_Score = score;
}

std::string Score::GetName() { return m_Name; }
int Score::GetString() { return m_Score; }

void Score::SetName(std::string name) { m_Name = name; }
void Score::SetScore(int score) { m_Score = score; }

Score& Score::operator=(const Score& rhs)
{
	//Dereference both variables for HW
	m_Name = rhs.m_Name;
	m_Score = rhs.m_Score;

	return *this;
}

std::ostream& operator<<(std::ostream& os, Score& rhs)
{
	os << rhs.m_Name << std::endl;
	os << rhs.m_Score << std::endl;

	return os;
}

/*std::istream& operator>>(std::istream& is, Score& rhs)
{
	is >> rhs.m_Name;
	is >> rhs.m_Score;

	return is;
}

Score operator+(Score& lhs, Score& rhs)
{
	Score sum("SUM", 0);
	
	int total = lhs.m_Score + rhs.m_Score;
	sum.SetScore(total);

	return sum;
}*/