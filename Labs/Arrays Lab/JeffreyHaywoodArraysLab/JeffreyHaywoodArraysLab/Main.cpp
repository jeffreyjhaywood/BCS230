#include <iostream>
#include "Sales.h"

using namespace std;

int main()
{

	double sales[12] = { 10, 20, 30, 40, 30, 25, 70, 60, 50, 30, 40, 40 };
	double a;

	a = Average(sales);

	cout << "Average is: " << a << endl;


	return 0;

}