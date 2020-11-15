#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include<utility>
#include<numeric>
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
		cout << user_amount << " " << user_input << " Has been added to cart" << endl;
	}
	else {
		cout << "Item not in stock" << endl;
	}
}

//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> &cart) {
	string user_input;
	std::map<string, int>::iterator it;
	cout << "Type in the Item that you want to Remove: ";
	cin >> user_input;
	std::for_each(user_input.begin(), user_input.end(), [](char& c) {
		c = ::tolower(c);
		});

	it = cart.find(user_input);

	//find item
	if (it != cart.end()) {
		cart.erase(user_input);
		cout << "Item has been removed" << endl;
	}
	else {
		cout << user_input << ' '  << "does not exist in your cart" << endl;
	}

}

void ViewCart(std::map<string, int> cart) {
	for (const auto a : cart) {
		auto item = a.first;
		auto quantity = a.second;
		
		cout << "Item: " << item << " // Quantity: " << quantity << '\n';
	}
}

void DisplayStock(std::map<string, Store_Stock> stock) {
	
	for (const auto a : stock) {
		auto item = a.first;
		auto price = a.second.unitPrice;
		cout << "Item: " << item << " // Price: $" << price << '\n';
	}
	
}

//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart, std::map<string, Store_Stock> stock) {
	vector<double> sum;
	double item_total;
	double final_transaction;
	for (const auto a : cart) {
		auto item = a.first;
		auto quantity = a.second;

		std::map<string, Store_Stock>::iterator it;
		it = stock.find(item);
		for (const auto b : stock)
			if (item == b.first) {
				item_total = quantity * b.second.unitPrice;
					sum.push_back(item_total);
			}
	}
	final_transaction = std::accumulate(sum.begin(), sum.end(), 0);
	cout << "Your Total Today Is : $" << final_transaction << '\n';




	
}