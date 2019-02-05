#include "BankAccount.h"

BankAccount::BankAccount()
{
	name = "NO NAME";
	balance = 0.0;
}

BankAccount::BankAccount(string newName, double newBalance)
{
	name = newName;
	balance = newBalance;
}

BankAccount::~BankAccount()
{

}

string BankAccount::getName() { return name; }
double BankAccount::getBalance() { return balance; }

void BankAccount::setName(string newName) { name = newName; }
void BankAccount::setBalance(double newBalance) { balance = newBalance; }

void BankAccount::Deoposit(double b)
{
	balance += b;
}

void BankAccount::Withdraw(double b)
{
	balance -= b;
}

void BankAccount::Show()
{
	cout << name << endl << balance << endl;
}