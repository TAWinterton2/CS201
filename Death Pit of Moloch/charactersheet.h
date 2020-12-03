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
		
		//Ability score distribution for the PC
		int Ability_score_Distribute();
		

		//Functions for character creation

		void Player_Character_Name(string user_input);
		void Race_Selection(string user_race);
		void Class_Selection(string user_class);
		void Player_Weapon(string user_weapon);
		
		//Function to print out Character info 
		void Print_Abilites();
		void Print_name();
		void Print_race();
		void Print_class();
	

		//Things that a player can do (I.E Checks, roll d20, attack)
		int Player_attack();
		int D20();
		bool Player_Check_STR(int DC, Character_Sheet playercharacter);
		
		



	private:
		//PC ability scores
		int STR, CON, INT, WIS, DEX, CHA;

		int _character_level = 1;
		int _experince_points;
		//info about character 
		string _character_name, _character_race, _character_class;
		int Hit_Points;
		int hit_die;
		int AC;
		int damage_dice;

		//vector to hold ability modifiers (used during checks)
		vector<int> ability_modifiers = { -5, -4, -4, -3, -3, -2, -3, -1, -1, 0, 
											0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10 };

};

//class for NPC
class NPC {
private:
	int _character_level = 1;
	int _experince_points;
	string _character_name, _character_race, _character_class;
	int STR, CON, INT, WIS, DEX, CHA, Hit_Points;
	int AC;
	int damage_dice;
};


#endif

