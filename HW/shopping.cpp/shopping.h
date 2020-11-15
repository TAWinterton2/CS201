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
//struct store_stock to classify items in store
struct Store_Stock {
	double unitPrice;
	int units;
};

//void AddItem(std::map<string, int> cart, vector<string> stock)
//user selects item to add into their cart
void AddItem(std::map<string, int> &cart, std::map<string, Store_Stock> stock);

//void RemoveItem(std::map<string, int> cart)
//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> &cart);

//displaystock(std::map<string, int> stock)
//takes current stock and displays it to user
void DisplayStock(std::map<string, Store_Stock> stock);

//void Checkout(std::map<string, int> cart)
//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart);


#endif