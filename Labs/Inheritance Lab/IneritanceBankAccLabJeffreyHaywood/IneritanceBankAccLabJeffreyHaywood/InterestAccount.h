#include "BankAccount.h"

class InterestAccount : public BankAccount
{
	private:
		double interest;

	public:
		InterestAccount();
		InterestAccount(string n, double b, double i);

		double getInterest();
		
		void setInterest(double i);

		void ApplyInterest();
};