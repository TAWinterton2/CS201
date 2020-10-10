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
	int bull = 0;
	int cow = 0;
	int item;

	vector<int> bullandcow{
		1,7,9,9
	};
	int n = bullandcow.size();
	vector<int> user_guess(n);
	std::vector<int>::iterator it;

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

	//check for bulls and cows
	for (int b = 0; b < n; b++) {
		item = bullandcow[b];
		if (user_guess[b] == bullandcow[b]) {
			bull++;
		}
		else if()
	}
	
	return 0;
}