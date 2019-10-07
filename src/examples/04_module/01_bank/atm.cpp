#include "atm.h"

//atm.cpp

ATM::ATM() :account(1000)
{
}

void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance();
}
