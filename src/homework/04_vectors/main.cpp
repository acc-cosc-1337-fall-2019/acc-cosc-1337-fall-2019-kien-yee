#include"vectors.h"
#include<vector>
#include<iostream>

using std::cout;
using std::vector;
using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int menu_choice;
	auto user_continue = 'y';
	int user_element;
	int vector_stop;
	int user_prime_upto;

	do
	{
		cout << "Press 1 for Get Max from vector or 2 for Get primes: ";
		cin >> menu_choice;

		if (menu_choice == 1)
		{
			vector<int> user_vector;
			cout << "Enter number of vector elements: ";
			cin >> vector_stop;
			for (auto i = 1; i <= vector_stop; i++)
			{
				cout << "Enter vector element " << i << " : ";
				cin >> user_element;
				user_vector.push_back(user_element);
			}
			cout << "Max value from vector: " << get_max_from_vector(user_vector) << "\n";
		}
		else if (menu_choice == 2)
		{
			cout << "Enter number to get prime numbers up to that number: ";

			cin >> user_prime_upto;

			vector<int> vector_primes = vector_of_primes(user_prime_upto);

			cout << "Prime numbers up to " << user_prime_upto << ": ";
			for (auto prime : vector_primes)
			{
				cout << prime << "\n";
			}
		}
		else
			cout << "Invalid entry";

		cout << "Continue? y/Y for yes: ";
		cin >> user_continue;
	} 
	while (user_continue == 'y' || user_continue == 'Y');

	return 0;
}