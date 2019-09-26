//write include statements
#include"dna.h"
#include<string>
#include<iostream>
//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int menu_choice;
	auto user_continue = 'y';
	string user_dna;
	do
	{
		cout << "Enter 1 for Get GC Content or 2 for GET DNA Complement: ";
		cin >> menu_choice;
		
		if (menu_choice == 1)
		{
			cout << "Enter a DNA string: ";
			cin >> user_dna;
			cout << "GC Content: " << get_gc_content(user_dna) << "\n";
		}
		else if (menu_choice == 2)
		{
			cout << "Enter a DNA string: ";
			cin >> user_dna;
			cout << "DNA Complement: " << get_dna_complement(user_dna) << "\n";
		}
		else
			cout << "Invalid entry" << "\n";

		cout << "Continue? y/ Y for yes: ";
		cin >> user_continue;

	} while (user_continue == 'y' || user_continue == 'Y');
	
	return 0;
}