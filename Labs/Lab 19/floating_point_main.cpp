/**
 * @file     L19_Floating_Point.cpp
 * @author   Student Name
 * @version  Jan 28, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <vector>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <vector>

// using sin, cos
#include <cmath>

#include "floating_point.hpp"

int main() {
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	//std::vector<int> v{ 1, 2, 3, 4, 5 };
	//for (size_t i = 2; i < v.size(); ++i) {
	//	++v[i];
	//	std::cout << v[i] << std::endl;
	//}
	//std::cout << std::endl << std::endl;
	
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.
	for (int i = 0; i <= 360; i++) {
		double resultsin = sin(i * M_PI / 180.0);
		double resultcos = cos(i * M_PI / 180.0);
		std::cout << i << "," << resultsin << "," << resultcos;
		std::cout << std::endl;
	}

	// *****************************************************************

	return 0;
}
