#include "InterestAccount.h"

InterestAccount::InterestAccount()
{
	interest = .1;
}

InterestAccount::InterestAccount(string n, double b, double i) : BankAccount(n, b)
{
	interest = .1;
}

double InterestAccount::getInterest()
{
	return interest;
}

void InterestAccount::setInterest(double i)
{
	interest = i;
}

void InterestAccount::ApplyInterest()
{
	double ia;
	ia = balance * interest;
	balance += ia;
}