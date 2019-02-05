#include <string>
#include <iostream>

using namespace std;

enum RatingType { EVERYONE, EVERYONE10PLUS, TEEN, MATURE };
enum SystemType { XBOXONE, PLAYSTATION4, PC };


class VideoGame
{
private:
	string title;
	double cost;
	RatingType rating;
	SystemType system;

public:
	VideoGame();
	VideoGame(string newTitle, double newCost, RatingType newRating, SystemType newSystem);
	~VideoGame();
	string GetTitle();
	double GetCost();
	RatingType GetRating();
	SystemType GetSystem();

	void SetTitle(string newTitle);
	void SetCost(double newCost);
	void SetRating(RatingType newRating);
	void SetSystem(SystemType newSystem);
};

