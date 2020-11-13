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

int main() {
	int menu_choice;
	std::map<string, int> cart;

	//main menu
	while (menu_choice != 4) {
		cout << "Welcome to KOPINI Store front!" << '\n';
		cout << "What would you like to do?" << '\n';
		cout << "1) Add Item" << '\n';
		cout << "2) Remove Item" << '\n';
		cout << "3) Look at cart" << '\n';
		cout << "4) Check out" << '\n';
		cin >> menu_choice;
	}
	
}