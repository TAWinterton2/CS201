#include<iostream>
#include "truncstruct.hpp"
// For struct StringInfo definition
#include <string>
using std::string;
#include <cctype>
using std::toupper;
using std::cout;
using std::cin;

int main() {
	string user_input;
	string truncated;
	//int user_input_num;
	cout << "Enter in a String: ";
	//cout << "Enter in a Number: ";
	//cin >> user_input_num;
	cin >> user_input;

	cout << std::endl;

	trunc8(user_input);

	

	
	return 0;
	

	//trunc();


}