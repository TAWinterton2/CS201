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
#include "NPC.h"


using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::map;


//NPC_Zombie
int NPC_Zombie::Ability_score_Distribute() {
	STR = 13;
	DEX = 6;
	CON = 16;
	INT = 3;
	WIS = 6;
	CHA = 5;

	Hit_Points = 20 + ability_modifiers[CON];
	return 1;
}
int NPC_Zombie::D20() {
	int die_roll = ((rand() % 20) + 1);
	return die_roll;
}

//NPC_Human
int NPC_Human::Ability_score_Distribute() {
	STR = 10;
	DEX = 10;
	CON = 10;
	INT = 10;
	WIS = 10;
	CHA = 10;
	
	Hit_Points = 4 + ability_modifiers[CON]; 
	return 1;

}
int NPC_Human::D20() {
	int die_roll = ((rand() % 20) + 1);
	return die_roll;
}

//NPC_Huamoid
int NPC_Humanoid::Ability_score_Distribute() {
	STR = 8;
	DEX = 14;
	CON = 10;
	INT = 10;
	WIS = 8;
	CHA = 8;
	return 1;
}
int NPC_Humanoid::D20() {
	int die_roll = ((rand() % 20) + 1);
	return die_roll;
}
