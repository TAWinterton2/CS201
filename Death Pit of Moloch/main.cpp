#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::map;
int main() {

	//variable list
	string user_input_name;
	int menu_select = 0;

	//intro to character creation 

	//Get character name
	cout << "Welcome to Character Creation!" << endl;
	cout << "What should your name be?  ";
		cin >> user_input_name;
	
	Character_Sheet PC;
	
	PC.character_name = user_input_name;

	cout << "Hello " << PC.character_name << "!" << endl;

	//Race Select
	cout << "Please Select Your Race:" << endl;
	cout << "1) Dwarf" << endl;
	cout << "2) Elf" << endl;
	cout << "3) Human" << endl;
	while (menu_select > 4 || menu_select == 0) {
		cin >> menu_select;
		switch (menu_select) {
			case 1:
				PC.character_race = "Dwarf";
				break;
			case 2:
				PC.character_race = "Elf";
				break;
			case 3:
				PC.character_race = "Human";
				break;
			default:
				cout << "invalid option" << endl;

	}
	}
	cout << "your race is " << PC.character_race << endl;
	

	//Ability Score Allocation
	while (cin.get() != '\n');

	cout << "In Dungeon And Dragons, You Character is based around 6 main abilities" << endl;;

	while (cin.get() != '\n');

	cout << "Strength: Measuring Your Raw physical Strength" << endl;
	
	while (cin.get() != '\n');

	cout << "Dexterity: Measuring Your Hand-Eye cordination and Agility" << endl;
	while (cin.get() != '\n');

	cout << "Consitution: Measuring of Your Physical Endurance and Health" << endl;
	while (cin.get() != '\n');

	cout << "Intelligence: Measuring Your ability to reason, and memory" << endl;

	while (cin.get() != '\n');

	cout << "Wisdom Measuring Your Perception and Insight " << endl;;
	while (cin.get() != '\n');

	cout << "Charisma: Meastuing Your the force of your personality" << endl;

	while (cin.get() != '\n');
	

	PC.Ability_score_Distribute();

	cout << PC.character_name << " STR: " << PC.STR << endl;
	cout << PC.character_name << " CON: " << PC.CON << endl;
	cout << PC.character_name << " INT: " << PC.INT << endl;
	cout << PC.character_name << " WIS: " << PC.WIS << endl;
	cout << PC.character_name << " DEX: " << PC.DEX << endl;
	cout << PC.character_name << " CHA: " << PC.CHA << endl;

	return 0;

}