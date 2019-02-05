#include <iostream>
#include <string>
#include "InterestAccount.h"

using namespace std;

int main()
{

	InterestAccount ia("Jeffrey", 100, .1);

	ia.Show();
	ia.ApplyInterest();
	ia.Show();

	return 0;
}