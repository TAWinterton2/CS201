#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


/*
TRAVIS WINTERTON
CS201
HW 2 - 1 (MAIN PROGRAM)
WEEK OF 09/14/20
PURPOSE OF PROGARM
	Write a progarm that uses std::vector class w/ a variety of loops. 
	Write and test a function that encapsulats the code in the main() function.
	EX : InputNames(std::vector<std::styring> & names);

	Write and test a function that searches for a name in the list. Return a bool value whether 
	the name exist or not. Use the function prototype.

	Write a function that  takes the list of names and prints them out. use the function prototype

*/

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


//Function list

//Searches name in vector and and returns a bool value of it exist or not
bool DoesNameExist(string nameToFind) {

}

// Get names from user, and inputs them into vector names "names_list"
void InputNames(string names, vector <string> names_list) {
	for (int i = 0; i < 10; ++i) {
		cout << "Enter a Name: ";
		getline(cin, names);
		names_list.push_back(names);
	}
}

//Takes a List of Names and prints them.
void PrintNames(){}

//takes vector with names in them and does somthing "special" with them
void Special(){}



