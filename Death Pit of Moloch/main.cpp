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
	int menu_select = 0;
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
	cout << "The interior is dimly lit by the sunlight shining thorugh the hole in the ceilling" << endl;
	while (cin.get() != '\n');

	//First Skill check. Check to see if player remebers what he was doing before.
	cout << "After you let the pain in your head subside, you try to remember what you've been doing" << endl;
	while (cin.get() != '\n');
	if (PC.Player_Check_INT(10, PC) == true) {

		cout << "You've been hired by Roland Tress. The Sheriff of Meadheaven" << '\n'
			<< "He asked you to invistgate the mysterious disapperanece of travvles who were last seen in the" << '\n'
		    << "vicinity of Hollow Rock Hills" << endl;
		while (cin.get() != '\n');

		cout << "You remember that you were investigating the area, when the ground beaneath you " << '\n'
			<< "crumbled, throwing you underground" << endl;
		while (cin.get() != '\n');


	}
	else {
		cout << "You tried your best to recall events before, but all you can do is draw a blank" << endl;
		while (cin.get() != '\n');
	}



}