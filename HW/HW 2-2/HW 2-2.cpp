#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using std::cout;
using std::cin;
using std::endl;




/*
TRAVIS WINTERTON
CS 201
HW 2 (PROGRAM 2)

WEEK OF 09/ 21/ 20

PURPOSE OF PROGRAM
	Prompt user to enter # of pennies, nickles, dimes, quarters, and one-dollar coins. Query the user seperatly
	for the number of each size coin. (E.G "How many pennies do you have?") than the program should print out somthing like this:
				You Have 23 pennies.
				You have 17 nickles.
				you have 14 dimes.
				you have 7 quarters.
				you have 3 half dollars
				value of all coins: 573 cents
*/

//calculates total value of all coins
void coin_amount_calc(int & pennies, int & nickles, int & dimes, int & quarters, int & dollars) {
	double penny_value = 0.1;
	double nickle_value = 0.5;
	double dime_value = 0.10;
	double quater_value = .25;
	double dollar_value = 1.00;

	const double Total_amount = (pennies * penny_value) + (nickles * nickles) + (dimes * dimes) + (quarters * quater_value) + (dollars * dollars);
	
	cout << "Your total value of all coins is: " << Total_amount;

}

// main collects # of coins of each type from user
int main() {
	//list of values associated with each coic
	
	int penny_amount;
	int nickle_amount;
	int dime_amount;
	int quater_amount;
	int dollar_amount;

	cout << "Enter amount of Pennies: ";
	cin >> penny_amount;

	cout << "Enter amount of Nickles: ";
	cin >> nickle_amount;;

	cout << "Enter amount of Dimes: ";
	cin >> dime_amount;

	cout << "Enter amount of Quarters ";
	cin >> quater_amount;

	cout << "Enter amount of Dollars: ";
	cin >> dollar_amount;

	return 0;


}