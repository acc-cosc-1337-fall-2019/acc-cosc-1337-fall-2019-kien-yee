#include "C:\Users\Kien Yee\Source\Repos\acc-cosc-1337-fall-2019-kien-yee\src\examples\12_module\08_arrays_dyn_1\bank_account.h"
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class Report 
{
public:
	Report();
	void display()const;
	~Report();
private:
	BankAccount* accounts;
	const int SIZE = 5;
};