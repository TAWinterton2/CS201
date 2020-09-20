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
bool DoesNameExist(const string & nameToFind, const  vector<string> & names) {

}

// Get names from user, and inputs them into vector names "names_list"
void InputNames(vector <string> & name_list) {
	string name;
	for (int i = 0; i < 10; i++) {
		cout << "Enter in a Name: ";
		getline(cin, name);
		name_list.push_back(name);
		}
	
}

//Takes a List of Names and prints them.
//void PrintNames(){}

//takes vector with names in them and does somthing "special" with them
//void Special(){}


int main() {
	vector <string> name_list;
	string list_name;
	int a;
	cout << "enter in option: ";
		cin >> a;
	switch (a) {
		case 1:
			InputNames(name_list);
			break;
		default:
			break;
			return 0;
	}
	return 0;
}