#include <iostream>
using namespace std;

#include "StringMethods.h"

int main()
{
	char a[10] = { 'd', 'o', 'g', '\0' };
	char b[10] = { 'c', 'a', 't', 's', 's', 's', '\0' };
	char c[10] = { 't', 'o', '\0' };

	print(a);
	print(b);

	copy(b, a); // copy from a to b
	print(b);

	return 0;
}