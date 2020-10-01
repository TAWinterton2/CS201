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
		cout << a << root_1 << "^2 + " << b << root_1 << " + " << c << " = " << (a * (root_1 * root_1)) + ( b * root_1) + c << endl;
		cout << a << root_2 << "^2 + " << b << root_2 << " + " << c << " = " << (a * (root_2 * root_2)) + ( b * root_2) + c << endl;
	}
	else if (discriminant == 0) {
		cout << "Roots are real and all the same ";
		root_1 = (-1 * b + sqrt(discriminant) ) / (2 * a);
		cout << "Root 1 and Root 2 = " << root_1 << endl;
		cout << a << "*" <<  root_1 << "^2 + " << b << root_1 << " + " << c << " = " << (a * (root_1 * root_1)) + (b * root_1) + c << endl;

	}
	else {
		cout << "Equation has no real roots" << endl;
	}
	
}