#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include<utility>
#include "shopping.h"



using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;



//user selects item to add into their cart
void AddItem(std::map<string, int> &cart, std::map<string, Store_Stock> stock) {
	string user_input;
	int user_amount = 0;
	cout << "What would you like to add? ";
	cin >> user_input;

	//convert user_input string to lower case
	std::for_each(user_input.begin(), user_input.end(), [](char& c) {
		c = ::tolower(c);
		});

	std::map<string, Store_Stock>::iterator it;

	//find user_input
	it = stock.find(user_input);
	if (it != stock.end()) {
		cout << "Item is in stock!" << '\n';
		cout << "Enter Quantity: ";
		cin >> user_amount;
		cart.insert({ user_input, user_amount });
		cout << user_amount << " " << user_input << " Has been added to cart";
	}
	else {
		cout << "Item not in stock";
	}
}

//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> &cart) {
	string user_input;
	cout << "Type in the Item that you want to Remove: ";
	cin >> user_input;
	std::transform(user_input.begin(), user_input.end(), user_input.begin(), [](unsigned char c) { return std::tolower(c); }
	);
	auto cart_count = cart.count(user_input);
	if (cart_count != 0) {
		cart.erase(user_input);
		cout << "Item has been removed" << endl;
	}
	else {
		cout << "Item Does not exist in your shopping cart" << endl;
	}

}
//display current stock

void DisplayStock(std::map<string, Store_Stock> stock) {
	
	for (const auto a : stock) {
		auto item = a.first;
		auto price = a.second.unitPrice;
		cout << "Item: " << item << " // Price: " << price << '\n';
	}
	
}

//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart) {
	cout << "Works!";
}