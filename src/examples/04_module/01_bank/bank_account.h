//bank_account.h
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