//atm.h
#include"bank_account.h"
#include<iostream>

using std::cout;
class ATM {

public:
	ATM();
	void display_balance() const;

private:
	BankAccount account;
};