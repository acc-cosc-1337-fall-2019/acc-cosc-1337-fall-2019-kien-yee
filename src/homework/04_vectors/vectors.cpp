#include"vectors.h"

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const vector<int>& ints)
{
	auto max = 0;
	for (auto i = 0; i < ints.size(); i++)
	{
		if (ints[i] > max)
		{
			max = ints[i];
		}
	}
	return max;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int number)
{
	bool isPrime = true;
	if (number == 1)
	{
		isPrime = false;
	}
	for (auto i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			isPrime = false;
		}
	}

	return isPrime;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
vector<int> vector_of_primes(int num)
{
	vector<int> vec_primes;
	for (auto i = 1; i <= num; i++)
	{
		if (is_prime(i))
		{
			vec_primes.push_back(i);
		}
	}
	return vec_primes;
}
