#include <iostream>
#include <iomanip>
#include <string>
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


//user selects item to add into their cart
void AddItem(std::map<string, int> cart, vector<string>stock) {
	cout << "Works!";
}

//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> cart) {
	cout << "Works!";
}
//display current stock

void DisplayStock(std::map<string, int>stock) {
	cout << "works!";
#if 0
	for (const auto a : stock) {
		auto item = a.first;
		auto price = a.second;
		cout << "Item: " << item << " Price: " << price << '\n';
	}
#endif
}

//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart) {
	cout << "Works!";
}