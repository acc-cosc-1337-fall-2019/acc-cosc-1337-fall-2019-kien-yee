//atm.h
#ifndef ATM_H
#define ATM_H
#include"bank_account.h"
#include<iostream>

using std::cout;
class ATM {

public:
	ATM(BankAccount a);
	void display_balance() const;
	void deposit(int amount);
	void withdraw(int amount);

private:
	BankAccount account;
};

#endif ATM_H