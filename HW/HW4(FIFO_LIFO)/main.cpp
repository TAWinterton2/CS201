#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"functions.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;



int main() {
	vector<string> test;
	string vector_add;
	int user_choice;
	cout << "Enter in 5 stings into the vector: ";
	for (int i = 0; i < 5; i++) {
		getline(cin, vector_add);
		FifoPush(test, vector_add);

	}
	cout << endl;

	for (auto a : test) {
		cout << a << ' ';
	}
	cout << endl;

	cin >> vector_add;
	FifoPop(test, vector_add);
	for (auto a : test) {
		cout << a << ' ';
	}
	return 0;
}
