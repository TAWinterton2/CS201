#include<iostream>
using std::cout;
using std::endl;
using std::cin;

/*
TRAVIS WINTERTON
HW 1
CS 201
WEEK OF 09/07/20

PURPOSE OF PROGRAM
	PROGRAM PROMTS USER FOR AN INTEGER FORM THE USER USING LINE-ORIENTED INPUT WITH PROPER ERROR HANDLING\

	PROGRAM THEN PRINTS A CORRESPONDINGLY SIZED DIAMOND MADE OF POUND (#) SGNS.

	EXAMPLE:
		IF USER INPUTS 3, THEN PROGRAM SHOULD PRINT OUT:
							#
						   ###
						  #####
						   ###
						    #
		SIMILARLY, IF THE USER ENTERS 7, THE PROGRAM SHOULD PRINT THE FOLLOWING:
							#
						   ###
						  #####
						#########
					   ###########
					  #############
					 ###############
					  #############
					   ###########
					    #########
						  #####
						   ###
							#
*/			


int main() {
	//variable list
	int user_input;
	int input_limit = 0;
	int k;
	int space;
	
	//User Input
	do {
		cout << "Please enter a  postive integer: " << '\n';
			cin >> user_input;
			if (user_input < input_limit) {
				cout << user_input << " Is not a postive integer" << endl;
		}
	} while (user_input < input_limit);


	space = user_input - 1;
	//Code for Creating Diamond

	for (k = 1; k <= user_input; k++) { // outer loop that creates top half for rows == to user input
		for (int c = 1; c <= space; c++)  //loop that creates spaces to make room for diamond shape
			cout << " ";
			space--;
		
			
		for (int c = 1; c <= 2 * k - 1; c++) 
			cout << "#"; // print character
			cout << "\n"; // go to next line
		
	}
	space = 1;

	for (k = 1; k <= user_input - 1; k++) { // outer loop that creates bottome half of rows == to user input
		for (int c = 1; c <= space; c++) 
			cout << " "; // print space = inner for loop 
		
		space++;
		for (int c = 1; c <= 2 * (user_input - k) - 1; c++) 
			cout << "#"; //print character
			cout << "\n"; // go to next line
		
	}

	return 0;
}