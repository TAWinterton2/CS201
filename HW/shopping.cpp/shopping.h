#pragma once

#include <iostream>
#include <iomanip>
#include <map>
#include <random>
#include <cmath>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
#ifndef FILE_SHOPPING_HPP
#define FILE_RANDOM_MAP_HPP

//void AddItem(std::map<string, int> cart, vector<string> stock)
//user selects item to add into their cart
void AddItem(std::map<string, int> cart, vector<string>stock);

//void RemoveItem(std::map<string, int> cart)
//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> cart);

//void Checkout(std::map<string, int> cart)
//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart);
#endif