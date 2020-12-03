#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>
#include<map>
#include"charactersheet.h"
#include"character_creation.h"
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::map;
int main() {
	
	Character_Sheet PC;

	Character_creation(PC);
	
	PC.Print_name();

	cout << endl;

	cout << "D20 Test: ";
	PC.D20();
	return 0;

}