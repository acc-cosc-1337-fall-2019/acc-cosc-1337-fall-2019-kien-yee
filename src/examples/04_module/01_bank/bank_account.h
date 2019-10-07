//bank_account.h
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

private:
	int balance;
};

#endif // !