#include <string>
#include <iostream>

using namespace std;

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class  BankAccount
{
	protected:
		string name;
		double balance;

	public:
		string getName();
		double getBalance();
		~BankAccount();

		void setName(string newName);
		void setBalance(double newBalance);
		
		void Deoposit(double amount);
		void Withdraw(double amount);
		void Show();

		BankAccount();
		BankAccount(string newName, double newBalance);
};

#endif