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
	
	PC.Player_Character_Name(user_input_name);

	cout << "Hello ";
	PC.Print_name();
	cout << "!" << endl;

	//Race Select
	cout << "Please Select Your Race:" << endl;
	cout << "1) Dwarf (+1 to Strength )" << endl;
	cout << "2) Elf (+1 To wisdom )" << endl;
	cout << "3) Human(+1 to Charisma )" << endl;
	while (menu_select > 4 || menu_select == 0) {
		cin >> menu_select;
		switch (menu_select) {
			case 1:
				PC.Race_Selection("Dwarf");
				break;
			case 2:
				PC.Race_Selection("Elf");
				break;
			case 3:
				PC.Race_Selection("Human");
				break;
			default:
				cout << "invalid option" << endl;

	}
	}
	cout << "your race is ";
	PC.Print_race();
	cout << endl;
	while (cin.get() != '\n');


	//Class Select
	cout << "Please Select Your Class:" << endl;
	cout << "1) Fighter (+1 to Consitution)" << endl;
	cout << "2) Ranger(+1 to dexterity)" << endl;
	cout << "3) Wizard (+1 to Intelligence)" << endl;
	while (menu_select > 4 || menu_select == 0) {
		cin >> menu_select;
		switch (menu_select) {
		case 1:
			PC.Class_Selection("Fighter");
			break;
		case 2:
			PC.Class_Selection("Ranger");
			break;
		case 3:
			PC.Class_Selection("Rouge");
			break;
		default:
			cout << "invalid option" << endl;

		}
	}
	cout << "Your race is: ";
	PC.Print_class();


	//Ability Score Allocation
	while (cin.get() != '\n');

	cout << "In Dungeon And Dragons, You Character is based around 6 main abilities" << endl;;

	while (cin.get() != '\n');

	cout << "Strength: Measuring Your Raw physical Strength" << endl;
	
	while (cin.get() != '\n');

	cout << "Dexterity: Measuring Your Hand-Eye cordination and Agility" << endl;
	while (cin.get() != '\n');

	cout << "Consitution: The Measuring of Your Physical Endurance and Health" << endl;
	while (cin.get() != '\n');

	cout << "Intelligence: Measuring Your ability to reason, and Your memory" << endl;

	while (cin.get() != '\n');

	cout << "Wisdom Measuring Your Perception and Insight " << endl;;
	while (cin.get() != '\n');

	cout << "Charisma: Measuring the force of your personality and Character" << endl;

	while (cin.get() != '\n');
	

	PC.Ability_score_Distribute();
	PC.Print_Abilites();
	
	

	return 0;

}