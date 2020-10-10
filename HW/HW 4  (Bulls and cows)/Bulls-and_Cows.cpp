#pragma once

//Travis Winterton
//HW 4 - 2
//Week of 09/28/20
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main() {
	int bull;
	int cow;
	int guess;

	vector<int> bullandcow{
		1,7,9,9
	};
	int n = bullandcow.size();
	vector<int> user_guess(n);

	cout << "Try to Guess the Numbers! (0 - 9): ";
	cout << "Enter in a negative number to show answer";
	cin >> guess;
	for (auto B : user_guess) {

	}


	
	return 0;
}