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
bool DoesNameExist(const string & nameToFind, const  vector<string> & name_list)
{
	bool namefound;
	if (std::find(name_list.begin(), name_list.end(), nameToFind) != name_list.end()) {
		namefound = true;
		cout << namefound;
	}
	else {
		namefound = false;
		cout << namefound;
	}

}

// Get names from user, and inputs them into vector names "names_list"
void InputNames(vector <string>& name_list) 
{
	string name;
	for (int i = 0; i < 4; i++) {
		cout << "Enter in a Name: ";
		getline(cin, name);
		name_list.push_back(name);
	}
	 
}

//Takes a List of Names and prints them.
void PrintNames(const vector<string> name_list)
{
	for (int k = 0; k < name_list.size(); ++k) {
		cout << name_list[k] << endl;
	}
}

//takes vector with names in them and does somthing "special" with them
void Special(const vector<string> name_list){
	cout << "labor day";
}


int main(int argc, char** argv) {
	string namefind;
	vector <string> name_list;
	string list_name;
	InputNames(name_list); 
	cout << "enter in a name to find: ";
	getline(cin, namefind);
	DoesNameExist(namefind, name_list);
	cout << "\\n";
	PrintNames(name_list);
	return 0;
}