#include<iostream>
#include<vector>
#include"atm.h"
#include"bank_account.h"
using std::cout;
using std::vector;
using std::cin;

int main()
{

	BankAccount a;
	BankAccount b = a;
	display(a);//friend function
	
	vector<BankAccount> accounts{ BankAccount(500),BankAccount(1000),BankAccount(600) };
	
	
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a;

	return 0;
}