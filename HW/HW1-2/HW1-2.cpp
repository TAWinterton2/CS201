#include<iostream>
#include<math.h>
using std::endl;
using std::cin;
using std::cout;

/*
TRAVIS WINTERTON
HW 1
CS 201
WEEK OF 09/07/20

PURPOSE OF PROGRAM
	WRITE A PROGRAM THAT GETS POSTIVE INPUTS FORM USER UNTIL THE USER INPUTS A NUMBER THAT IS EITHER A NEGATIVE OR A 0.
	THE PROGRAM THEN PRINTS THE GREATEST POSITVE NUMBER ENTERED.
*/

int main() {
	int user_input, greatest = 0;

	cout << "Enter in a sequence of postiive integers" << endl;
	cout << "I will print the greatest positive number entered." << endl;
	do {
		cout << "Enter a positive integer (enter 0 to end): ";
		cin >> user_input;
		if (isgreater(user_input, greatest) == 1) { //determin greatist value w/ isgreater function to test user_input vs current greatest value. 
			greatest = user_input; 
		 }
			

	} while (user_input > 0);

	// if no number was entered, first statement will be executed, otherwise second one will execute
	if (greatest == 0) {
		cout << "No positive integers were entered." << endl;
	}
	else {
		cout << "The greatest number entered: " << greatest << endl;
	}
	
	return 0;
}