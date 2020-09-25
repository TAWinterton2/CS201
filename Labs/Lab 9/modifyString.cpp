#include<iostream>
#include"modifyString.h"
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int modifyString(string & referencedString, int value) {


	string string_appened = referencedString += std::to_string(value);

	return referencedString.length();
}
