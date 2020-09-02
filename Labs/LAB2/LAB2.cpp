#include<iostream>
 
using namespace std;
/*
TRAVIS WINTERTON
CS201
WEEK OF 08/31/20
PURPOSE OF PROGRAM
	Get Integer from user, then print the square of the next integer 
	Example: User inputs 3, Next number is 4 then squared is 16. Output will be 16.
*/
int main() {
	//List of variables
	int user_input;
	int input_squared;
	

	cout << "Please input an Integer: ";
	cin >> user_input;
	
	cout << "You Entered: " << user_input << '\n';

	input_squared = (user_input + 1) * (user_input + 1);

	cout << "The next number is: " << user_input + 1 << '\n';

	cout << user_input + 1 << " Squared is : " << input_squared << '\n';

	return 0;
}
