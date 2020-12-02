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


Character_Sheet::Character_Sheet()

{ }

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

	while (score_assing <= 5) {
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
			STR = array_score[score_assing];
			break;
		case 2:
			CON = array_score[score_assing];
			break;
		case 3:
			INT = array_score[score_assing];
			break;
		case 4:
			INT = array_score[score_assing];

			break;
		case 5:
			WIS = array_score[score_assing];
			break;
		case 6:
			DEX = array_score[score_assing];
			break;
		default:
			CHA = array_score[score_assing];
			break;

		}


			score_assing++;
	}




	return 0;
}


