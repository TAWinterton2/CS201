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
void AddItem(std::map<string, int> &cart, std::map<string, int>stock) {
	string user_input;
	int user_amount;
	cout << "What would you like to add? ";
	cin >> user_input;
	std::transform(user_input.begin(), user_input.end(), user_input.begin(), [](unsigned char c) { return std::tolower(c); }
	);
	auto stock_count = stock.count(user_input);
	if (stock_count != 0) {
		cout << "Item is in stock!" << '\n';
		cout << "Enter Quantity: ";
		cin >> user_amount;
		cart.insert({ user_input, user_amount });
		
	}
	else {
		cout << "Item is not in stock" << '\n';
	}

}

//user selects which item they want to remove from their cart, and the quantity they want to do it at
void RemoveItem(std::map<string, int> cart) {
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

void DisplayStock(std::map<string, int>stock) {
	
	for (const auto a : stock) {
		auto item = a.first;
		auto price = a.second;
		cout << "Item: " << item << " // Price: " << price << '\n';
	}
	
}

//takes user's cart and adds up total 
void Checkout(std::map<string, int> cart) {
	cout << "Works!";
}