//#write includes statements
#include"loops.h"
#include<iostream>
using std::cout;
using std::cin;


//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	auto user_choice = 'y';
	int user_num;
	int fac;
	do
	{
		cout << "Enter a number: ";
		cin >> user_num;

		fac = factorial(user_num);

		cout << "Factorial of number is: " << fac << "\n";
		cout << "Continue? y or n ";
		cin >> user_choice;


	} while (user_choice == 'y');
	return 0;
}