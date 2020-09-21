#include"intio.hpp"
#include<iostream>


/*
	TRAVIS WINTERTON
	CS 201
	WEEK OF 09/21/20

	PURPOSE OF PROGRAM:
		Write a program that inputs 3 integers using 3 calls to getint. The program should then print the 3 integers in an aligned column.
*/

using std::cout;
using std::cin;
using std::endl;



int main() {
	int x, y, z, space;

	cout << "Enter in a integer: " << '\n';
	x = getInt();
	cout << "Enter in another one: " << '\n';
	y = getInt();
	cout << "One more time: " << '\n';
	z = getInt();

	cout << "enter in # of spaces to make: ";
	cin >> space;
	
	putInt(x, space);
	cout << endl;
	putInt(y, space);
	cout << endl;
	putInt(z, space);
	cout << endl;
	return 0;
}


