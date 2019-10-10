#include"bank_account.h"

//bank_account.cpp
BankAccount::BankAccount()
{
	//code to read balance from database
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

int BankAccount::get_balance() const
{
	return balance;
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;
	}
}

void display(const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	// TODO: insert return statement here
	std::cout << "Balance: " << b.balance << "\n";
	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	// TODO: insert return statement here
	int amt;
	std::cout << "Enter amount: ";
	in >> amt;

	b.deposit(amt);
	return in;
}
