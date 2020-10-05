#include<iostream>
#include<string>
#include<vector>
#include"vector_manip.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void firstLetterChange(std::vector<std::string>& strVec, const char& c) {
	for (auto a :strVec)
	{
		string change = a;

		change[0] = c;


		a = change;

		cout << a << " ";
	}
}

void addUserStrings(std::vector<std::string>& strVec, const std::string sentinel) {
	string input;
	while (input != sentinel) {
		cin >> input;
		if (input == sentinel) {
			for (auto a : strVec) {
				cout << a << " ";
			}
		}
		strVec.push_back(input);
	}
}

