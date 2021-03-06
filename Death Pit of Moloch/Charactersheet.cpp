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



//Functions for Player Character
Character_Sheet::Character_Sheet()

{ 
	
}



//distribute players ability score during set up
int Character_Sheet:: Ability_score_Distribute()
{
	std::srand(std::time(nullptr));

	int dice = std::rand();
	int* array_score{ new int[6] };
	int temp = 0;
	int score_assing = 0;
	int menu;

	cout << "Rolling In Progress...";
	while (cin.get() != '\n');
	
	//DND 5e Ruleset:
	//Roll 4D6 5 times to generate ability scores to be distrubted. 
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 4; x++)
			temp += (rand() % 6) + 1;
		array_score[y] = temp;
		temp = 0;
	}
	cout << "Dice Rolling completed" << '\n'
		<< "Here are your dice roll results:" << endl;
	for (int y = 0; y < 6; y++) {
		cout << array_score[y] << ' ';
	}

	cout << ", Please start Assinging your ability scores: " << '\n'
		<< "[ Type in 1 - 6 to select the score from the row]" << endl;

	while (score_assing < 6) {
		cout << "Select which attribute that " << array_score[score_assing] << " Will go to" << endl;
		cout << "1) STRENGTH" << endl;
		cout << "2) CONSITUTION" << endl;
		cout << "3) INTELLEGINCE" << endl;
		cout << "4) WISDOM" << endl;
		cout << "5) DEXTERITY" << endl;
		cout << "6) CHARISMA" << endl;
		cin >> menu;

		switch (menu) {
		case 1:
			STR += array_score[score_assing];
			break;
		case 2:
			CON += array_score[score_assing];
			break;
		case 3:
			INT += array_score[score_assing];
			break;
		case 4:
			WIS += array_score[score_assing];
			break;
		case 5:
			DEX += array_score[score_assing];
			break;
		case 6:
			CHA += array_score[score_assing];
			break;
		default:
			cout << "invalid Option" << endl;
			break;

		}


			score_assing++;
	}
	delete[] array_score;



	return 0;
}




//Info about player name
void Character_Sheet::Player_Character_Name(string user_input) {
	_character_name = user_input;
	
}
void Character_Sheet::Print_name() {
	cout << _character_name;
}

//info about player class
void Character_Sheet::Class_Selection(string user_class)
{
	_character_class = user_class;

	if (_character_class == "Fighter") {
		CON += 1;
		Hit_Points = 10 + ability_modifiers[CON];
		Max_HP = 10;
		hit_die = (rand() % 10) + 1;
		AC = 15;
	}

	if (_character_class == "Ranger") {
		DEX += 1;
		Hit_Points = 8 + ability_modifiers[CON];
		Max_HP = 8;
		hit_die = (rand() % 8) + 1;
		AC = 13;
	}

	if (_character_class == "Wizard") {
		INT += 1;
		Hit_Points = 6 + ability_modifiers[CON];
		Max_HP = 6;
		hit_die = ((rand() % 8) + 1) + 2;
		AC = 12;
	}

}
void Character_Sheet::Print_class() {
	cout << _character_class;
}

//info about player race
void Character_Sheet::Race_Selection(string user_race){
	_character_race = user_race;

	if (_character_race == "Human") {
		CHA += 1;
	}

	if (_character_race == "Dwarf") {
		STR += 1;
	}

	if (_character_race == "Elf") {
		WIS += 1;
	}

	
}
void Character_Sheet::Print_race() {
	cout << _character_race;
}

//info about player abilities
void Character_Sheet::Print_Abilites() {
	cout << _character_name << " Ability Scores:" << endl;
	cout << "STR:" << STR << endl;
	cout << "CON:" << CON << endl;
	cout << "INT:" << INT << endl;
	cout << "WIS:" << WIS << endl;
	cout << "DEX:" << DEX << endl;
	cout << "CHA:" << CHA << endl;

}

//functions for abilites that player can do
int Character_Sheet::Player_attack() {
	int attack_roll = (rand() % 6) + 1;
	return attack_roll;
}
int Character_Sheet::D20() {
	int die_roll = ((rand() % 20) + 1) ;
	return die_roll;
}
int Character_Sheet::short_rest(){
	int difference;

	Hit_Points += hit_die;
	if (Hit_Points > Max_HP) {
		difference = Hit_Points - Max_HP;
		Hit_Points = difference;
	}
	return Hit_Points;
}
int Character_Sheet::Player_add_gold(Character_Sheet& player, int gold) {
	player.gold += gold;
	cout << "You now have: " << player.gold << "G" << endl;
	while (cin.get() != '\n');
	return 1;
}
int Character_Sheet::take_damage(Character_Sheet &player, int damage) {
	player.Hit_Points -= damage;
	return 1;
}




//ability check functions for each ability
bool Character_Sheet::Player_Check_STR(int DC, Character_Sheet playercharacter) {
	int die_result = playercharacter.D20();
	int _ability_mod= ability_modifiers[STR-1];
	
	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;

	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}
bool Character_Sheet::Player_Check_DEX(int DC, Character_Sheet playercharacter){
	int die_result = playercharacter.D20();
	int _ability_mod = ability_modifiers[DEX-1];


	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;
	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}
bool Character_Sheet::Player_Check_CON(int DC, Character_Sheet playercharacter){
	int die_result = playercharacter.D20();
	int _ability_mod = ability_modifiers[CON-1];


	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;
	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}
bool Character_Sheet::Player_Check_INT(int DC, Character_Sheet playercharacter){
	int die_result = playercharacter.D20();
	int _ability_mod = ability_modifiers[INT - 1];


	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;
	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}
bool Character_Sheet::Player_Check_WIS(int DC, Character_Sheet playercharacter) {
	int die_result = playercharacter.D20();
	int _ability_mod = ability_modifiers[WIS-1];


	
	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;
	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}
bool Character_Sheet::Player_Check_CHA(int DC, Character_Sheet playercharacter){
	int die_result = playercharacter.D20();
	int _ability_mod = ability_modifiers[CHA-1];


	int result = die_result + _ability_mod;
	cout << "You rolled: " << die_result << endl;
	cout << "Ability Mod: " << _ability_mod << endl;
	cout << "Result: " << result << endl;

	if (result >= DC) {
		cout << "Check passed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return true;
	}
	else {
		cout << "Check failed!" << endl;
		cout << result << " VS " << DC;
		cout << endl;
		while (cin.get() != '\n');
		return false;
	}
}

//Functions for NPC

