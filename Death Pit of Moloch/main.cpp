#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
#include"character_creation.h"
#include"NPC.h"



using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::map;

int main() {

	//variable list

	int menu_select = 0;
	bool story_continue = false;
	Character_Sheet PC;
	


	//character creation, user reamins in loop untill satisfied with their character
		Character_creation(PC);
		PC.Print_name();
		cout << endl;
	
	PC.Print_name();
	cout << "...Let us, Venture Forth!";
	cout << endl;
	while (cin.get() != '\n');
	

	//Adventure Begins
	cout << "As you Open your eyes, you find yourself in an eery cavern." << '\n';
	cout << "The interior is dimly lit by the sunlight shining thorugh the hole in the ceilling." << endl;
	while (cin.get() != '\n');

	//First Skill check. Check to see if player remebers what he was doing before.
	cout << "After you let the pain in your head subside, you try to remember what you've been doing." << endl;
	while (cin.get() != '\n');
	if (PC.Player_Check_INT(10, PC) == true) {
		cout << "You've been hired by Roland Tress. The Sheriff of Meadheaven" << '\n'
			<< "He asked you to invistgate the mysterious disapperanece of travvles who were last seen in the" << '\n'
		    << "vicinity of Hollow Rock Hills." << endl;
		while (cin.get() != '\n');

		cout << "You remember that you were investigating the area, when the ground beaneath you " << '\n'
			<< "crumbled, throwing you underground." << endl;
		while (cin.get() != '\n');


	}
	else {
		cout << "You tried your best to recall events before, but all you can do is draw a blank." << endl;
		while (cin.get() != '\n');
	}

	cout << endl;

	//First menu select option for the user
	//Option to allow Player to try to make a DC 12 WIS skill check to see that the
	//Hole clearly has man made Elements to it
	//Or to let user proceede futher
	//user can attempt this wis check multiple times if desired

	while (story_continue != true) {
		cout << "1) [WIS]: Take in and observe the enviroment around you" << endl;
		cout << "2) Proceed foward into the cave" << endl;

		cin >> menu_select;

		switch (menu_select) {
		case 1:
			if (PC.Player_Check_WIS(12, PC) == true) {
				cout << "The Cavern appears to be manmade, or one that atleast isnt' made by natrual" << '\n'
					<< "Means. Rotten wood can be seen along the walls of the cavern, and near the  far end of the " << '\n'
					<< "Cavern, you can make out a door, with 2 torches, one on each side of the door." << endl;
			}
			else {
				cout << "You try to make out the cavern you are in, but the way that it is dimily" << '\n'
					<< "lit, making hard for you to see" << endl;
			}
			while (cin.get() != '\n');
			break;
		case 2:
			cout << "You carefully start to make you way towrds the other side of the cave" << endl;
			while (cin.get() != '\n');
			story_continue = true;
		}
	}
	
	story_continue = false;


}