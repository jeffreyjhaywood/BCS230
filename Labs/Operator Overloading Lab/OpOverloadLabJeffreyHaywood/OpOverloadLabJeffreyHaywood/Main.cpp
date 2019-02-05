#include <iostream>
#include <fstream>
#include "Score.h"

int main()
{
	Score s1("Jeffrey", 100);
	Score s2("Bob", 0);

	s2 = s1;

	std::cout << s2;

	/*std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	std::cin >> s1;
	std::cout << "Read in values for s1" << std::endl;
	std::cout << s1 << std::endl;

	std::ifstream infile("input.txt");
	infile >> s1;

	std::cout << "Read in values from value to s1" << std::endl;
	std::cout << s1 << std::endl;

	Score sum("SUM", 0);
	sum = s1 + s2;
	std::cout << sum << std::endl;*/
	return 0;
}