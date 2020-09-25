#pragma once

#include<string>

using std::string;

//modifystring.hp
//for lab 8 (modifystring.cpp)
//09/25/20
//header file for lab 9


#ifndef FILE_MODIFYSTRING_H
#define FILE_MODIFYSTRING_H

//function modifystring()
//appends integer to string and then returns the length of the string
//example:
//	modifystring(user_string, 8)
//{
//	string string_appened = referencedString += std::to_string(value);
//	return referencedString.length();
// }

int modifyString(string & referencedString, int value);




#endif 