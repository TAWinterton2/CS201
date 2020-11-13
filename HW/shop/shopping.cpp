#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "shopping.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;

int main() {
	int menu_choice = 0;
	//shopping cart for user first element being 
	map<string, int> cart{
		{"test", 0}
	};

	map<string, int> stock{
		{"Ramen", 100}
	};

	cout << "Welcome to KOPINI Store front!" << '\n';
	while (menu_choice != 5) {
		cout << "What would you like to do?" << '\n';
		cout << "1) Add Item" << '\n';
		cout << "2) Remove Item" << '\n';
		cout << "3) Look at cart" << '\n';
		cout << "4) Look at current stock" << '\n';
		cout << "5) Check out" << '\n';

		cin >> menu_choice;
		switch (menu_choice) {
		case 1:
			AddItem(cart, stock);
			continue;
			cout << endl;
		default:
			cout << "Option not valid" << endl;
			continue;
		}
	}
	return 0;
}