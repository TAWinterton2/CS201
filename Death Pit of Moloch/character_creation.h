#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "charactersheet.h"


using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::map;

#ifndef CHARACTER_CREATION_HPP
#define CHARACTER_CREATION_HPP
//function used @ that start of the program that takes the steps for user to take through charcter creation
void Character_creation(Character_Sheet& playercharacter);

#endif