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

	


	Character_creation(PC);
	

	
	PC.Print_name();
	cout << "...Let us, Venture Forth!";
	cout << endl;
	while (cin.get() != '\n');
	

	//Test skill check
	cout << "Scenario Test: " << endl;
	cout << "Now that you've regained Consciousness, you find yourself in a "
		<< "manmade cavern with an upturned wagon to your side" << endl;
	while (cin.get() != '\n');

	cout << " 'HELP ME, HELP ME!', A raspy, low pitched voice called out." << endl;
	while (cin.get() != '\n');

	cout << "'My leg is pinned under my wagon. Please, hurry, before they come to collect me like the others!" << endl;
	while (cin.get() != '\n');

	if (PC.Player_Check_STR(12, PC) == true) {
		cout << "You grab a hold of one of the wagons legs, and start to lift up the cart"
			<< "you get it to the point in which the man is able to escape form under it" << endl;
	}
	else {
		cout << "You grab a hold of one of the wagons legs, but you can't even move an inch off the ground " << endl;
	}
	return 0;

}