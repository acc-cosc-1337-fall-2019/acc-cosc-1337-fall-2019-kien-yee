#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test rectangle area")
{
	Rectanglee rectangle(5,4);
	REQUIRE(rectangle.get_area() == 20);


}
