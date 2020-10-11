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

	struct Music_ratings Record;

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
		CreateRecord(LP_name);
		break;
	case 2:
		cout << "Enter in name of LP: ";
		cin >> LP_name;
		UpdateRecord(LP_name, Record);
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