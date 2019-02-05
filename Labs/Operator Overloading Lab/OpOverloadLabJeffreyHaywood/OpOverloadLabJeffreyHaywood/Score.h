#ifndef SCORE_H
#define SCORE_H

#include <string>
#include <fstream>

class Score
{
	private:
		std::string m_Name;
		int m_Score;

	public:
		Score(std::string name, int score);

		std::string GetName();
		int GetString();

		void SetName(std::string name);
		void SetScore(int score);

		//Operator overload prototypes
		Score& operator=(const Score& rhs);
		friend std::ostream& operator<<(std::ostream& os, Score& rhs);
		//friend std::istream& operator==(std::istream& is, Score& rhs);
		//friend Score operator+(Score& lhs, Score& rhs);

};

//Non-member. Outside the class definition.
//std::ostream& operator<<(std::ostream& os, Score& rhs);
//std::istream& operator>>(std::istream& is, Score& rhs);

#endif