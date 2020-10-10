#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<algorithm>
#include<map>
#include"Database.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::vector;


int main() {
	int choice;
	string LP_name;
	float user_score;
	cout << "Enter in an option";
	cout << "1: Create new Record" << endl;
	cout << "2: Read from current Record" << endl;
	cout << "3: Update Record" << endl;
	cout << "4: Delete record Record" << endl;

	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Enter in name of LP: ";
		cin >> LP_name;
		cout << "Enter in Score (scale from 0.00 to 5.00: ";
		cin >> user_score;
		CreateRecord(LP_name, user_score);
		break;
	case 2:
		cout << "works!" << endl;
		break;
	case 3:
		cout << "works!" << endl;
		break;
	case 4:
		cout << "works!" << endl;
		break;
	default:
		return 0;
	}
	return 0;
}