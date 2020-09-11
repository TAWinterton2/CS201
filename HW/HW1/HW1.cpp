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
	
	do {
		cout << "Please enter a  postive integer: " << '\n';
			cin >> user_input;
			if (user_input < input_limit) {
				cout << user_input << " Is not a postive integer" << endl;
		}
	} while (user_input < input_limit);
	for (k = 1; k <= user_input * 2 - 1; k++) {
		cout << "bruh" << endl;

	}
	return 0;
}