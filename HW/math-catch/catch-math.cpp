#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#define PI 3.14159265

using std::cout;
using std::endl;
using std::cin;


//test case for atan2
TEST_CASE("Show that atan2 computes given value properly", "" ) {
	double x, y, result;
	x = -10.0;
	y = 10.0;
	result = atan2(y, x) * 180 / PI;
	
	REQUIRE(std::round(result) == 135);
}
