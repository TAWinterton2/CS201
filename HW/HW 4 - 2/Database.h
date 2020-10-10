#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::vector;


#ifndef FILE_DATABASE_HPP
#define FILE_DATABASE_HPP

//take in the title of an LP, and take in the user rateing of it
struct Music_ratings
{
	string title;
	float score;
};

//crud functions
bool CreateRecord(const string& key);
bool ReadRecord(const string& key, const Music_ratings& record);
bool UpdateRecord(const string& key, const Music_ratings& record);
bool DeleteRecord(const string& key);
#endif

