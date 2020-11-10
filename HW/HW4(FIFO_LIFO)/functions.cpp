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

#ifndef FILE_FUNCTIONS_HPP
#define FILE_FUNCTIONS_HPP
//Functions for First-in First-out
//array pop in 
void FifoPush(vector<string>& container, const string& item) {
	container.push_back(item);
	for (auto a : container) {
		cout << a << " ";
	}
}
//array pop out
void FifoPop(vector<string>& container, const string& item) {
	container[0].erase();
	for (auto a : container) {
		cout << a << " ";
	}
}

//Functions for Last-in Fisrt out
void LifoPush(vector<string>& container, const string& item) {
	container.push_back(item);
	for (auto a : container) {
		cout << a << " ";
	}
}
void LifoPop(vector<string>& container, const string& item) {
	container.pop_back();
	for (auto a : container) {
		cout << a << " ";
	}
}

bool IsContainerEmpty(const vector<string>& containter) {
	if (containter.empty() == true) {
		return true;
	}
	else {
		return false;
	}
}

void Printcontainer(const vector<string>& containter) {
	for (auto a : containter) {
		cout << a << " ";
	}
}

#endif