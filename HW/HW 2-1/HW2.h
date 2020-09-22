#include<string>
#include<vector>
using std::string;
using std::vector;

#ifndef FILE_HW2_HPP_INCLUDED
#define FILE_HW2_HPP_INCLUDED

// InputNames
// Get an integer from a typed line of text; repeat until successful.
// Does no error checking on cin, so avoid using for file input.

void InputNames(vector <string>& name_list);

// Does Name Exist

bool DoesNameExist(const string& nameToFind, const  vector<string>& name_list);

// Print Names

void PrintNames(const vector<string> name_list);

#endif