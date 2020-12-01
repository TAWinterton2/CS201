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
	cout << "In Dungeon And Dragons, You Character is based around " << '\n'
		<< "6 Main Abilites" << endl;
	
	cout << "Press ENTER to continue";
    while (cin.get() != '\n') ;

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;
	
	cout << "Press ENTER to continue";
	while (cin.get() != '\n');

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;

	cout << "Press ENTER to continue";
	while (cin.get() != '\n');

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;

	cout << "Press ENTER to continue";

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;

	cout << "Press ENTER to continue";
	while (cin.get() != '\n');

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;

	cout << "Press ENTER to continue";
	while (cin.get() != '\n');

	cout << "Strength: Measuring of Your Raw physical Strenght" << endl;

	cout << "Press ENTER to continue";
	while (cin.get() != '\n');
	while (cin.get() != '\n');


	return 0;

}