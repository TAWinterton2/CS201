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

int main() {
	int menu_choice = 0;
	std::map<string, int> cart;
	vector<string> stock;
	//main menu
	cout << "Welcome to KOPINI Store front!" << '\n';
	while (menu_choice != 4) {
		cout << "What would you like to do?" << '\n';
		cout << "1) Add Item" << '\n';
		cout << "2) Remove Item" << '\n';
		cout << "3) Look at cart" << '\n';
		cout << "4) Check out" << '\n';

		cin >> menu_choice;
		switch (menu_choice) {
			case 1:
				AddItem(cart, stock);
				cout << endl;
				continue;
			case 2:
				RemoveItem(cart);
				cout << endl;
				continue;
			case 3:
				cout << "placeholder";
				cout << endl;
				continue;
			case 4:
				Checkout(cart);
				cout << endl;
				break;
			default:
				cout << "Option not valid" << '\n';
				continue;

		}
			

	}
	return 0;
}