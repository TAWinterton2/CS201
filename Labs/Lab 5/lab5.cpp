#include<iostream>

using std::endl;
using std::cout;
using std::cin;

/*
TRAVIS WINTERTON
LAB 05
CS201
WEEK OF 09/07/20
PURPOSE OF PROGRAM:
	Ask user to input % score for test, program will output grade student will get. 


*/

int main() {
	int percent_grade;

	cout << "Enter in test score (1 - 5): ";
	cin >> percent_grade;
	
	switch (percent_grade)
	{
		case 1:
			cout << "F" << endl;
			break;
		case 2:
			cout << "D" << endl;
			break;
		case 3: 
			cout << "C" << endl;
			break;
		case 4:
			cout << "B" << endl;
			break;
		case 5:
			cout << "A" << endl;
			break;
		default:
			cout << "no grade was entered" << endl;
			break;
	}
	return 0;

}