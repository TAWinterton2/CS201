#include<iostream>
using std::endl;
using std::cout;
using std::cin;

/*
TRAVIS WINTERTON
HW 1
CS 201
WEEK OF 09/07/20

PURPOSE OF PROGRAM
	PROMPT USER TO INPUT ANY NUMBER OF MILES, PROGRAM THEN CONVERTS GIVN MILES TO KILOMETERS
*/

int main() {
	float miles;
	float KM_Convertsion = 1.609;
	float KM;;
	do {
		cout << "Please enter any amount of miles (Enter 0 to exit): ";

		cin >> miles;
		if (miles == 0) {
			break;
			return 0;
		}
		KM = miles * KM_Convertsion;
		cout << miles << "miles = to " << KM << endl;
	} while (miles != 0);
	return 0;
}