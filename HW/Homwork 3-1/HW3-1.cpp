#include<iostream>
#include<vector>
#include<string>
#include"HW3func.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;




/*
TRAVIS WINTERTON
CS 201
HOMEWORK 3 PROGRAM 1

WEEK OF 09/28/20

PURPOSE OF PROGRAM
	PROGRAM HAS 3 FILES THAD REPEATEDLY DOES THE FOLLOWING:
		INPUT A STRING AND AN INTEGER FROM THE USER
		PRINT THE STRING INSIDE A BOX MADE OF ASTERISKS
		THE INTEGER SPECIFIES THE NUMBER OF LAYERS IN THE BOX.
*/

//main function
int main() {
	int layers;
	string message;

	//get infro from user
	cout << "Enter the # of layers you want: ";
	cin >> layers;
	cout << "Enter in message you want to display: ";
	cin >> message;

	//display box using functoin
	BoxCreate(layers, message);
	return 0;
}