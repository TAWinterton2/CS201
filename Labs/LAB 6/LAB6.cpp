#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*
TRAVIS WINTERTON
CS201
WEEK OF 09/14/20
LAB 6
PURPOSE OF PROGRAM:
	FUNCTION TAKES IN STRING PARAMETER. FUNCTION SHOULD PRINT THE STRING AND ITS LENGTH IN SOME NEAT, UNDERSTANDABLE MANNER.

*/
//variable list
string user_input;

//FUNCTIONS
void String_Reader(string user_input) {
	int string_length;
	//get lenght of string statemetn
	string_length = user_input.length();
	//print out string and string lenght
	cout << user_input << endl;
	cout << "String length: " << string_length << endl;
	// print out the character "#" equal to the length of the user_input
	for (int i = 0; i <= string_length; i++) {
		cout << "#";
	}
	cout << '\n';
	// reverse string
	reverse(user_input.begin(), user_input.end());
	cout << user_input << endl;
}


int main() {
	cout << "Enter a string: ";
	cin >> user_input;
	String_Reader(user_input); //call function
	return 0;
}
