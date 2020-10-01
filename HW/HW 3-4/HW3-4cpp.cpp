/*
Travis Winterton
CS201
HW3-4
Week of 09/28/20

Purpose of Program
	Write a program that can calcuate x for a quadratic equation. 
	Create a function that prints out the roots of a quadratic euqation, given a,b,c
	When the program detects an equation with no real roots, have it print out a message.

*/


#include<math.h>
#include<iostream>
#include<string>
#include"Quadratic.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;


//main gets inputs from user and computes the roots of function with function QuadtraicComp();
int main() {
	double a;
	double b;
	double c;
	cout << "The Format for a quadratic equation goes as follows" << '\n';
	cout << "ax^2 + bx + c = 0";

	cout << '\n';

	cout << "Enter in a value for A: ";
	cin >> a;

	cout << "Enter in a value for B: ";
	cin >> b;

	cout << "Enter in a value for C: ";
	cin >> c;

	//comput roots and display them 
	 QuadraticComp(a, b, c);
	return 0;

}