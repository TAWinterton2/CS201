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


std::map<string, Music_ratings> Database;

//create a new data set
bool CreateRecord(const string& key, float &score) {
	Music_ratings LP_name;
	Music_ratings user_score;
	string LP_title;
	float user_score;
	cout << "Enter in Title of LP: ";
	getline(cin, LP_title);
	LP_name.title = LP_title;

}