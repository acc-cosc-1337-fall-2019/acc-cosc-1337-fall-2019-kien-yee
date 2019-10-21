#include<functional>
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
using std::reference_wrapper;

int main()
{
	CheckingAccount c(1500);
	SavingsAccount s(500);


	vector<reference_wrapper<BankAccount>> accounts{c, s};
	
	for (auto account : accounts)
	{
		cout << "Balance: " << account.get().get_balance() << "\n";
	}
	
	return 0;
}




