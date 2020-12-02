#pragma once
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include <cmath>
#include <ctime>
#include <cstdlib>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::map;

#ifndef CHARACTERSHEET_HPP
#define CHARACTERSHEET_HPP

//Class for user character sheet
class Character_Sheet
{
	public:
		Character_Sheet();
		
		//Ability score distribution for the calss
		int Ability_score_Distribute();
		

		//
		void Class_Selection();



		//abilities score
		int STR, CON, INT, WIS, DEX, CHA, Hit_Points;
		//character info
		string character_name, character_race, character_class;




	private:
		
		int character_level;


};

//class for NPC
class NPC {

};
#endif