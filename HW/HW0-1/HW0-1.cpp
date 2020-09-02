#include<iostream>

using namespace std;
/*
* TRAVIS WINTERTON
* CS210
* WEEK 08/31/20
* HOMEWORK 00
* PURPOSE OF PROGRAM
*
* PART 1:
*	Prints statement "Hello, World!" five times
*/
int main() {
	int i;
	// part one of program
	for (i = 0; i <= 6; i++)
	{
		cout << "Hello, World!!!" << '\n';
	};
	cout << "Press ENTER to Continue" << endl;
	while (cin.get() != '\n')
		return 0;
}


