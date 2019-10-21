#include<iostream>
#include<vector>
#include"atm.h"
#include"bank_account.h"
#include"customer.h"
#include"checking_account.h"
#include"savings_account.h"

using std::cout;
using std::vector;
using std::cin;

int main()
{

	/*BankAccount a;
	BankAccount b = a;
	display(a);//friend function
	
	vector<BankAccount> accounts{ BankAccount(500),BankAccount(1000),BankAccount(600) };
	Cust
	
	
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a
	cout << a;*/

	/*Customer customer;
	customer.add_account(BankAccount(500));
	customer.add_account(BankAccount(1500));
	customer.add_account(BankAccount(5000));

	cout << customer;*/
	CheckingAccount checking(1500);

	cout << "\nChecking get_balance " << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	
	cout << "\nSavings get balance " << savings.get_balance() << "\n";

	BankAccount& account = savings;
	cout << "\nRef to savings get_balance: " << account.get_balance() << "\n";
	
	return 0;
}




