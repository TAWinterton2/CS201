/*
TRAVIS WINTERTON
CS 201
HOMEWORK 3 PROGRAM 1

WEEK OF 09/28/20

PURPOSE OF PROGRAM:
	write a progam the repeadtely does the following.
	1) Input a postiive integer from the user
	2) print the Collatz sequence starting at that integer w/ item seperated by blanks
	3) follow by newline, sequence ends when value = 1
*/

#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include"sequence.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	int user_input = 0;
	cout << "Enter in a postitive number to run through the Collatz sequence" << "\n";
	do{
		cout << "Enter in a number: ";
		cin >> user_input;
		if (user_input <=0) {
			cout << "Please Enter in a Positive Integer" << '\n';
		}
		
	} while (user_input <=0);
	cout << user_input << '\n';
	while (user_input != 1) {
		user_input = Collatz(user_input);
		cout << user_input << '\n';
	}
	return 0;
}