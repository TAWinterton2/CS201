#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::map;

#ifndef CHARACTERSHEET_HPP
#define CHARACTERSHEET_HPP
class Character_Sheet
{
	public:
		Character_Sheet();
		string character_name, character_race;


	private:
		
		int character_level;


};

#endif