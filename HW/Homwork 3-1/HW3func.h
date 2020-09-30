#pragma once


//Travis Winterton
//Header file for HW 3-1
//Week of 09/28/20
#include<string>
using std::string;

#ifndef FILE_HW3FUNC_HPP
#define FILE_HW3FUNC_HPP

// BoxCreate
// Gets an integer from user to determin # of layers to box
// Get string from user for message to display inside box
// Prints out box
// Sample:
// cout << "Enter in the # of layers you want for box"
// cin >> layer
// cout << "Enter in the message you want to display"
// getlint(cin, message)
// BoxCreate(layer, message)

void BoxCreate(int layer, string message);


#endif