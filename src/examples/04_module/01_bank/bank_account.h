//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H // header guards- to prevent class redefinition error
#define BANK_ACCOUNT_H



class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) :balance(b) {};
	void deposit(int amount);
	int get_balance() const;
	void withdraw(int amount);
	friend void display(const BankAccount& account);
	friend std::ostream & operator<<(std::ostream & out, const BankAccount & b);
	
	friend std::istream & operator >> (std::istream & in, BankAccount & b);

private:
	int balance;
};

#endif // !