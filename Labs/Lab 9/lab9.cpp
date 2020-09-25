#include<iostream>
#include<string>
#include<vector>
#include"modifyString.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {
	//string stringInMain = "hello";
	string user_input;
	int app;

	cout << "Enter in a String: ";
	getline(cin, user_input);
	cout << '\n';

	for (app = 0; app <= 3; app++) {
		cout << "length: " << modifyString(user_input, app) << endl;
		cout << "Modified string: " << user_input << endl;
	}

	return 0;
}