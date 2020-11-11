#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

#ifndef FILE_RANDOM_MAP_HPP
#define FILE_RANDOM_MAP_HPP

//int RnadomBetweenU(int first, int last)
//Return a uniform random number between first and last, inclusively
//(E.G i and 6 returns random numbers between 1 and 6)
int RandomBetweenU(int first, int last);

//int RandomBetweenN(int first, int last) 
//retunrs a normally distributed random number between first and last, inclusively
//(E.G 1 and 6 returns numbers between 1 and 6)
int RandomBetweenN(int first, int last);

//int RandomBetween(int first, int last) 
//returns numbers using the rand() function from the C standard libary <stdlib.h>
//int RandomBetween(int first, int last);

//void PrintDistribution(const std::map <int, int> &numbers)
//prints a list (similar to demo code) of the random numbers clearly showing they are 
// normally or uniformaly distributed.
//void PrintDistribution(const std::map<int, int>& numbers);


#endif