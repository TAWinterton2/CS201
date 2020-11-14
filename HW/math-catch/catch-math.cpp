#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<numeric>
#define PI 3.14159265

using std::cout;
using std::endl;
using std::cin;


//test case for atan2
TEST_CASE("Show that atan2 computes given value properly", "atan2(-10.0, 10.0) == 130 degrees" ) {
	double x, y, result;
	x = -10.0;
	y = 10.0;
	result = atan2(y, x) * 180 / PI;
	
	REQUIRE(std::round(result) == 135);
}

//test case for accumulate()
TEST_CASE("Show that Accumulate() computes given values properly", "Accumulate(v.begin(), v.end(), 0) == 55") {
	std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int sum = std::accumulate(v.begin(), v.end(), 0);

	REQUIRE(sum == 55);
}

