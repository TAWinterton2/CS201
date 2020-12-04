#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
#include"character_creation.h"
#include"NPC.h"
#include"storybranch.h"



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
	bool frankfurt_rescured;
	Character_Sheet PC;

	cout << "THE DEATH PIT OF MOLOCH" << endl;
	cout << "Press Enter to begin" << endl;
	while (cin.get() != '\n');

	//character creation, user reamins in loop untill satisfied with their character
	Character_creation(PC);
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
	if (PC.Player_Check_INT(11, PC) == true) {
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
		cout << "1) [WIS]: *Take in and observe the enviroment around you*" << endl;
		cout << "2) *Proceed foward into the cave*" << endl;
		cin >> menu_select;

		switch (menu_select) {
		case 1:
			if (PC.Player_Check_WIS(12, PC) == true) {
				cout << "The Cavern appears to be manmade, or one that atleast isnt' made by natrual" << '\n'
					<< "Means. Rotten wood can be seen along the walls of the cavern, and near the  far end of the " << '\n'
					<< "Cavern, you can make out a door, with 2 torches, one on each side of the door." << endl;
			}
			else {
				cout << "You try to make out the cavern you are in, but the way that it is dimily." << '\n'
					<< "lit, making hard for you to see" << endl;
			}
			while (cin.get() != '\n');
			break;
		case 2:
			cout << "You carefully start to make you way towrds the other side of the cave." << endl;
			while (cin.get() != '\n');
			story_continue = true;
			break;
		default:
			cout << "Invaild option" << endl;
			break;
		}
	}

	//Next part of story
	//player encounters first NPC, and presented with diolauge options

	story_continue = false;

	cout << "As you make your way inside futher into the caver, you notice that " << '\n'
		<< "Off to your left side, sits an upturned wagon, with a man pinned underneathed." << endl;
	while (cin.get() != '\n');
	cout << endl;

	cout << "'Help me, Help me!'" << '\n'
		<< "The man says to you in a  raspy, low pitched voice" << endl;
	while (cin.get() != '\n');
	cout << endl;

	cout << "'My leg is pinned under my wagon, I've been traped here for days" << '\n'
		<< "Please help me! before they com to collect me like the others" << endl;
	while (cin.get() != '\n');
	cout << endl;

	while (story_continue != true) {
		cout << endl;
		cout << "1) *Ask the Man who he is, and how he got down here*" << endl;
		cout << "2) *what does he mean by, 'Others'?*" << endl;
		cout << "3) *[STR]: Attempt to lift the wagon up " << endl;
		cout << "4) *Tell him that you don't you won't be able to lift the wagon up*" << endl;
		cin >> menu_select;

		switch (menu_select) {
		case 1:
			cout << "The man looks at with you with a stressed face" << endl;
			cout << "'M..My name is Frankfurt.. I was heading Meadheaven" << '\n'
				<< "Listen, please I don't have time for idle chit chat, help me get out of here!" << endl;
			while (cin.get() != '\n');
			break;

		case 2:
			cout << "'People, they've came from the door. Took away my one of my colleges'" << '\n'
				<< "The man says has he points to the door. positioned near the end of the cavern" << endl;
			cout << "Listen, please I don't have time for idle chit chat, help me get out of here!" << endl;
			while (cin.get() != '\n');
			break;
		case 3:
			if (PC.Player_Check_STR(12, PC) == true) {
				cout << "You Approach down to one of the legs of the wagon, and begin to pull up." << '\n'
					<< "You manage to get it to the point where the man trapped under is able to crawl out." << '\n'
					<< "As soon as he does, you let the wagon go, droping your end to the ground." << endl;
				while (cin.get() != '\n');
				frankfurt_rescured = true;
				story_continue = true;
				break;
			}
			else {
				cout << "You Approach down to one of the legs of the wagon, and begin to pull up" << '\n'
					<< "You tried your best to get atlest your end of the wagon up, but it bearly lifts off from the ground." << endl;
				while (cin.get() != '\n');
				
				frankfurt_rescured = false;
				story_continue = true;
				break;
			}
		case 4:
			frankfurt_rescured = Dialouge_Refuse_Help(PC);
			story_continue = true;
			break;
		default:
			cout << "Invalid option" << endl;
			break;
		}

	}

	story_continue = false;

	//branch: Determins if PC manages to help Frankfurt
	if (frankfurt_rescured == true) {
		cout << "the man carefully gets up from the ground" << '\n'
			<< "dusting off any dirt from his clothing" << endl;
		while (cin.get() != '\n');
		cout << "'Oh, Thank you thank you so much!', the man greatfully replies" << endl;
		while (cin.get() != '\n');
		cout << "'Here, I have something I can give you'" << '\n'
			<< "he begins to move around to the main seat of the wagon, and starts to" << '\n'
			<< "dig through some various objects, untill he comes out with a few gold pieces in his" << '\n'
			<< "hand" << endl;
		while (cin.get() != '\n');
		cout << " 'I know it may not be much right now, but I have more in the shop over at' " << '\n'
			<< "shop in Meadhaven. You can consider this an advance payment of sorts' " << endl;
		while (cin.get() != '\n');
		
		while (story_continue != true) {
			cout << "1) *Politely thank him and take the coins he offers*" << endl;
			cout << "2) *[CHA] Tell him that perhaps he can toss in a few more*" << endl;
			cout << "3) *tell him he can keep his coins" << endl;
			cin >> menu_select;

			switch (menu_select) {
			case 1:
				cout << "*You reach out your hand as he places the coins into it*" << endl;
				PC.Player_add_gold(PC, 15);

				while (cin.get() != '\n');
				story_continue = true;
				break;
			case 2:
				if (PC.Player_Check_CHA(16, PC) == true) {
					cout << "*He ponders on the thought for a bit*" << '\n'
						<< "'Well, I guess you deserve it'" << endl;
					PC.Player_add_gold(PC, 20);
					story_continue = true;
					break;
				}
				else {
					cout << "*He gives you a look, one that is slightly annoyed*" << '\n'
						<< "I think we will wait untill you can get me out of here alive" << endl;
					while (cin.get() != '\n');
					story_continue = true;
					break;
				}
			case 3:
				cout << "*He gives a surprised look*" << '\n'
					<< "'You sure? well ok I guess'" << endl;
				while (cin.get() != '\n');
				story_continue = true;
				break;
			default:
				cout << "Invaild option" << endl;
				break;
			}
		}

	}
	else {
		cout << "well, guess I won't be going anywhere soon" << endl;
		while (cin.get() != '\n');
	}

	story_continue = false;



	return 0;
}