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
};

//crud functions


//create new data set
bool CreateRecord(const string& key, const Music_ratings& record);
//print out data set
bool ReadRecord(const string& key, const Music_ratings& record);
//update existing data set
bool UpdateRecord(const string& key, const Music_ratings& record);
//delete dataset
bool DeleteRecord(const string& key);
#endif

