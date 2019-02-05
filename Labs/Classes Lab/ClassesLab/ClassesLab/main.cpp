#include <iostream>
#include "VideoGame.h"

using namespace std;

int main()
{

	VideoGame halo;

	halo.SetTitle("Halo 5");
	halo.SetCost(30.00);
	halo.SetRating(MATURE);
	halo.SetSystem(XBOXONE);

	cout << halo.GetTitle() << endl;
	cout << halo.GetCost() << endl;
	cout << halo.GetRating() << endl;
	cout << halo.GetSystem() << endl;

	return 0;
}