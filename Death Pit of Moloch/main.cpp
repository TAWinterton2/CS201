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
	string user_input_name;

	cout << "Welcome to Character Creation!" << endl;
	cout << "What should your name be?  ";
		cin >> user_input_name;
	
	Character_Sheet PC;
	
	PC.character_name = user_input_name;

	cout << "Hello! " << PC.character_name << endl;


	return 0;

}