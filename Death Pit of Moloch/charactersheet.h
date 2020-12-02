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
		

		//Functions for printing info about character

		void Player_Character_Name(string user_input);
		void Race_Selection(string user_race);
		void Class_Selection();

		void Print_Abilites();
		void Print_name();
		void Print_race();

		//abilities scores and hit points
		
		//character info
		

		//



	private:
		
		int _character_level = 1;
		int _experince_points;
		string _character_name, _character_race, _character_class;
		int STR, CON, INT, WIS, DEX, CHA, Hit_Points;
};

//class for NPC
class NPC {

};
#endif