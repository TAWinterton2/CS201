#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
#pragma once


//Functions for First-in First-out
//array pop in 
void FifoPush(vector<string>& container, const string& item);
//array pop out
void FifoPop(vector<string>& container, const string& item);

//Functions for Last-in Fisrt out
void LifoPush(vector<string>& container, const string& item);
void LifoPop(vector<string>& container, const string& item);


//shared functionality
bool IsContainerEmpy(const vector<string>& containter);
void Printcontainer(const vector<string>& containter);