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
	int* array{ new int[6] };
	int temp = 0;
	cout << "Rolling In Progress...";
	while (cin.get() != '\n');
	//DND 5e Ruleset:
	//Roll 4D6 5 times to generate ability scores to be distrubted. 
	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 4; x++)
			temp += (rand() % 6) + 1;
		array[y] = temp;
		temp = 0;
	}
	cout << "Dice Rolling completed" << '\n'
		<< "Here are your dice roll results:" << endl;
	for (int y = 0; y < 6; y++) {
		cout << array[y] << ' ';
	}



	return 0;
}


