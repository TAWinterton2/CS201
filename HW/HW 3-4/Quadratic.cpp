#include<iostream>
#include<string>
#include<math.h>
#include"Quadratic.h"


using std::cout;
using std::cin;
using std::endl;



//computes roots of a function with given varibales form user
void QuadraticComp(float a, float b, float c) {

	float root_1;
	float root_2;
	float discriminant = b * b - 4*a*c;
	float real;
	float imaginary;

	if (discriminant > 0) {
		root_1 = (-1 * b + sqrt(discriminant)) / (2 * a);
		root_2 = (-1 * b - sqrt(discriminant)) / (2 * a);

		cout << "this quadratic has 2 real number solutions" << endl;
		cout << "Root 1 = " << root_1 << endl;
		cout << "Root 2 = " << root_2 << endl;

	}
	else if (discriminant == 0) {
		cout << "Roots are real and all the same";
		root_1 = (-1 * b + sqrt(discriminant) ) / (2 * a);
		cout << "Root 1 and Root 2 = " << root_1 << endl;
	}
	else {
		cout << "Equation has no real roots" << endl;
	}
	
}