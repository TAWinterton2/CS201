/*
	Lab 12
	Travis Winterton
	Week of 09/28/20
	cpp file for lab 12 - userinputmain.cpp


*/





#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::find;



void getUserStrings(std::vector<std::string>& words) {
	string input;
	while (input != "end") {
		cin >> input;
		words.push_back(input);
	}
	cout << '\n';
}

