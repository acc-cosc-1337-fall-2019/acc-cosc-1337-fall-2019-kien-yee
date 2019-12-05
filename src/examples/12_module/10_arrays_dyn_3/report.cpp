//
#include "report.h"
#include<iostream>

MyReport::MyReport()
	//save 5 memory addresses 
{
	accounts = new BankAccount * [SIZE];
	//creates dynamic(heap) memory for each of the 5 memory addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10); ;//defaut constructor
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}

}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;
}
