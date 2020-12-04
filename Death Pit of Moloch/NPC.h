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
#include "charactersheet.h"


using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::map; 

#ifndef NPC_HPP;
#define NPC_HPP;


//Class difintion for different NPC
class NPC_Zombie {
public:
	//things that NPC can do
	int Zombie_Attack();
	int D20();
	int NPC_Take_Damage();
	int Ability_score_Distribute();
private:
	//Class name, race, and character class
	string _character_name, _character_race, _character_class;
	//ability scores and hit points
	int STR, CON, INT, WIS, DEX, CHA, Hit_Points = 0;
	//armour class
	int AC;
	//damage die
	int damage_dice;
	//ability modifiers for class to refer to 
	vector<int> ability_modifiers = { -5, -4, -4, -3, -3, -2, -3, -1, -1, 0,
											0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10 };
};

class NPC_Human{
public:
	int Ability_score_Distribute();
	int Human_Attack();
	int D20();
private:
	//Class name, race, and character class
	string _character_name, _character_race, _character_class;
	//ability scores and hit points
	int STR, CON, INT, WIS, DEX, CHA, Hit_Points = 0;
	//armour class
	int AC;
	//damage die
	int damage_dice;
	//ability modifiers for class to refer to 
	vector<int> ability_modifiers = { -5, -4, -4, -3, -3, -2, -3, -1, -1, 0,
											0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10 };
};

class NPC_Humanoid {
public:
	int Ability_score_Distribute();
	int Humanoid_Attack();
	int D20();
private:
	//Class name, race, and character class
	string _character_name, _character_race, _character_class;
	//ability scores and hit points
	int STR, CON, INT, WIS, DEX, CHA, Hit_Points = 0;
	//armour class
	int AC;
	//damage die
	int damage_dice;
	//ability modifiers for class to refer to 
	vector<int> ability_modifiers = { -5, -4, -4, -3, -3, -2, -3, -1, -1, 0,
											0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10 };
};


#endif
