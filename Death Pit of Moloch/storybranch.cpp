#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
#include"character_creation.h"
#include"storybranch.h"
#include"NPC.h"



using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::map;


//combat functoin for zombies
void Combat(Character_Sheet playercharacter, NPC_Zombie zombie) {

}


//Optional Dialouge Branch: Player Initially refuses to help Frankfurt
bool Dialouge_Refuse_Help(Character_Sheet &playercharacter) {
	
	int menu;

	cout << "The man looks at you with a paniced face" << '\n'
	 << "'Please, You've got to atleast try!'" << endl;
	while (cin.get() != '\n');
	cout << "1) *Explain that you can try to get out of her and see if you can't get help*" << endl;
	cout << "2) *[STR]: Attempt to lift the wagon up " << endl;
	cin >> menu;
	
	switch (menu) {
	case 1:
		cout << "'Well, that's not entirely a bad idea. Of course, that's the risk you are willing to make" << endl;
		while (cin.get() != '\n');
		return false;
		break;
	case 2:
		if (playercharacter.Player_Check_STR(12, playercharacter) == true) {
			cout << "You Approach down to one of the legs of the wagon, and begin to pull up." << '\n'
				<< "You manage to get it to the point where the man trapped under is able to crawl out." << '\n'
				<< "As soon as he does, you let the wagon go, droping your end to the ground." << endl;
			while (cin.get() != '\n');
			return true;
			break;
		}
		else {
			cout << "You Approach down to one of the legs of the wagon, and begin to pull up" << '\n'
				<< "You tried your best to get atlest your end of the wagon up, but it bearly lifts off from the ground." << endl;
			while (cin.get() != '\n');
			return false;
			break;
			
		}
	}
	

}