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
	//int bull;
	//int cow;
	//int guess;

	vector<int> bullandcow{
		1,7,9,9
	};
	int n = bullandcow.size();
	vector<int> user_guess(n);

	cout << "Try to Guess the Numbers! (0 - 9): ";
	cout << "Enter in a negative number to show answer: " << endl;
	for (int a = 0; a < n; a++) {
		cin >> user_guess[a];
		//if user input is less than 0, display answer and end program
		if (user_guess[a] < 0) {
			for (auto p : bullandcow) 
				cout << p << endl;
				return 0;
			
		}
	}
	cout << '\n';

	//checks if user guess is euqal to bullandcow vector
	if (bullandcow == user_guess) {
		cout << "CORRECT!!!!!";
		return 0;
	}
	
	return 0;
}