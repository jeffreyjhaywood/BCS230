#include "VideoGame.h"

		string VideoGame::GetTitle() { return title; }
		double VideoGame::GetCost() { return cost; }
		RatingType VideoGame::GetRating() { return rating; }
		SystemType VideoGame::GetSystem() { return system; }

		void VideoGame::SetTitle(string newTitle) { title = newTitle; }
		void VideoGame::SetCost(double newCost) { cost = newCost; }
		void VideoGame::SetRating(RatingType newRating) { rating = newRating; }
		void VideoGame::SetSystem(SystemType newSystem) { system = newSystem; }

		VideoGame::VideoGame() {
			title = " ";
			cost = 0;
			rating = EVERYONE;
			system = XBOXONE;
		}

		VideoGame::VideoGame(string newTitle, double newCost, RatingType newRating, SystemType newSystem) {
			title = newTitle;
			cost = newCost;
			rating = newRating;
			system = newSystem;
		}

		VideoGame::~VideoGame()
		{
			cout << "Destructor called" << endl;
		}