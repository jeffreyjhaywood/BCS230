#include "StringMethods.h"

void print(char x[])
{
	int i = 0;

	while (x[i] != '\0')
	{
		cout << x[i];
		i++;
	}
	cout << endl;
}

void copy(char target[], char source[])
{
	int i = 0;

	while (source[i] != '\0')
	{
		target[i] = source[i];
		i++;
	}
	target[i] = '\0';
}