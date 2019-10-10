#include "atm.h"

//atm.cpp

ATM::ATM(BankAccount a) :account(a)
{
}


void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance() << "\n";
}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

