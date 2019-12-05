//
#include "report.h"
#include<iostream>

Report::Report()
{
	//creates dynamic(heap) memory
	accounts = new BankAccount[SIZE];//defaut constructor
}

void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
	
}

Report::~Report()
{
	delete[] accounts;
}
