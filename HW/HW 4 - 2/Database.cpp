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
struct Music_ratings Record;

//create a new record
bool CreateRecord(const string& key) {
	Record.title = key;
	return true;
}

bool ReadRecord(const string& key, const Music_ratings& record) {
	auto it = Database.find(key);
	if (it == Database.end()) {
		return false;
	}
	record = it->second;
	return true;
}

bool UpdateRecord(const string& key, const Music_ratings& record) {
	auto it = Database.find(key);
	if (it == Database.end()) {
		return false;
	}
	Database[key] = record;
	return true;
}

bool DeleteRecord(const string& key) {
	auto it = Database.find(key);
	if (it == Database.end()) {
		return false;
	}
	delete[] Record;
	return true;
}