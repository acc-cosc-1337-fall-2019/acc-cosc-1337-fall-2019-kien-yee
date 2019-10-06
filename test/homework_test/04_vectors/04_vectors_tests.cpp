#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test get max from vector")
{
	std::vector<int> ints{ 3,8,1,99,1000 };
	REQUIRE(get_max_from_vector(ints) == 1000);
}
TEST_CASE("Test is prime")
{
	REQUIRE(is_prime(2) == true);
}
TEST_CASE("Test vector of primes")
{
	vector<int> test_vec = { 2,3,5,7 };
	vector<int> test_vec_two = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };
	REQUIRE(vector_of_primes(10) == test_vec);
	REQUIRE(vector_of_primes(50) == test_vec_two);
}