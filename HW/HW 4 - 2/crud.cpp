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
	int x = 0;
	//float user_score;

	std::map<string, Music_ratings> Database;

	struct Music_ratings   Record;

	cout << "Enter in an option: " << endl;
	cout << "1: Create new Record" << endl;
	cout << "2: Read from current Record" << endl;
	cout << "3: Update Record" << endl;
	cout << "4: Delete record Record" << endl;

	while (x < 1) {
		cin >> choice;
		switch (choice) {
		//create new record
		case 1:
			cout << "Enter in name of LP: ";
			cin >> LP_name;
			CreateRecord(LP_name);
			continue;
		// read info from existing one
		case 2:
			cout << "Enter in name of LP: ";
			cin >> LP_name;
			if (ReadRecord(LP_name, Record) == true) {
				cout << "Does exist!" << endl;
			}
			continue;
		// update current record
		case 3:
			cout << "Enter in name of LP: ";
			cin >> LP_name;
			UpdateRecord(LP_name, Record);
			continue;
			
		// delete record
		case 4:
			cout << "Enter in name of LP: ";
			cin >> LP_name;
			DeleteRecord(LP_name);
			continue;
			break;
		default:
			return 0;
		}
		return 0;
	}

}