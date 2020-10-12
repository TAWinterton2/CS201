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

//create a new record
bool CreateRecord(const string& key) {
	Music_ratings data;
	data.title = key;

}

bool ReadRecord(const string& key, const Music_ratings& record) {
	string lp_name = record.title;
	if (key == lp_name) {
		return true;
	}
	else {
		return false;
	}
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
	return true;
}