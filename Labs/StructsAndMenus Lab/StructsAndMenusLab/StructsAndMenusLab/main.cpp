#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	//************************************************	
	//int choice = 0;
	//
	//cout << "Menu" << endl;
	//cout << "1 - Print the word Yankees" << endl;
	//cout << "2 - Print the word Mets" << endl;
	//cout << "3 - Exit the program" << endl;
	//cout << "Enter choice: " << endl;
	//cin >> choice;
	//
	//while (choice >= 0 || choice < 3)
	//{
	//	if (choice == 1)
	//	{
	//		cout << "Yankees" << endl;
	//		break;
	//	}
	//
	//	else if (choice == 2)
	//	{
	//		cout << "Mets" << endl;
	//		break;
	//	}
	//
	//	else if (choice == 3)
	//	{
	//		cout << "Program has been terminated" << endl;
	//		break;
	//	}
	//
	//	else
	//	{
	//		cout << "Please enter a valid number:" << endl;
	//		cin >> choice;
	//	}
	//}
	

	Address jeffrey;

	jeffrey.number = "19";
	jeffrey.city = "Hicksville";
	jeffrey.state = "New York";
	jeffrey.zip = "11801";

	DisplayAddress(jeffrey);

	return 0;
}