//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H // header guards- to prevent class redefinition error
#define BANK_ACCOUNT_H



class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) :balance(b) {};
	virtual int get_balance() const;
	friend void display(const BankAccount& account);
	friend std::ostream & operator<<(std::ostream & out, const BankAccount & b);
	void deposit(int amount);
	void withdraw(int amount);
	friend std::istream & operator >> (std::istream & in, BankAccount & b);
	BankAccount operator+(const BankAccount& b);

protected:
	int balance;

};

#endif // !