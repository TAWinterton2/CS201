#include<iostream>
using namespace std;

/*
TRAVIS WINTERTON
CS201
WEEK OF 08/31/20
PURPOSE OF PROGRAM:
	1) Write a program that prints numbers 1 to 20, using a while-loop
	2) Write a program that prints a 60 * 10 Box made of a some single character, using a nested while-loops
	ADDITIONAL
	CHnage your program from part 2 so that the box alternates between 2 different characters. 
	

*/

int main() {
	//part 1 of program
	int k = 0;

	while (k <= 20) {
		cout << k << " ";
		++k;
	}
	cout << "Press ENTER to continue to part 2 of Lab" << '\n';
	while (cin.get() != '\n');


	//part 2 of program
	cout << "part 2 beginning" << '\n';
	int p = 0;
	int l = 0;
	int length;
	int width;
	
	cout << " Enter the length: ";
	cin >> length;
	cout << "Enter in the nubmer of width: ";
	cin >> width;

	while (p < width ) {
		while (l < length - 1) {
			cout << " * ";
			++l;
		}
		cout << " * " << '\n';
		++p;
		l = 0;
	}
	
	p = 0;
	l = 0;
	cout << "Bonus Assingment" << endl;

	while (p < width) {
		while (l < length - 1) {
			if (l % 2 == 0) 
			{
				cout << " $ ";

			}
			else
			{
				cout << " * ";
			}
			
			++l;
		}
		if (p % 2 == 1) 
		{
			cout << " $ " << '\n';
		}
		else 
		{
			cout << " * " << '\n';
		}
		++p;
		l = 0;
	}
	
	return 0;


}