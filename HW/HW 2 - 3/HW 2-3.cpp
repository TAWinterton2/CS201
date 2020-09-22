#include<iostream>
#include<vector>
#include<string>
#include<utility>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
	TRAVIS WINTERTON
	CS 201
	HOMEWORK 2 PROGRAM 3
	WEEK OF 09/21/20

	PURPOSE OF PROGRAM:
		program will ask user to enter a set of name and value pairs, such as Joe 17 and Barbara 22. 
		
		For each pair, add the name to a vector called "names" and the number to a vecotr called "scores"
		in corresponding posistions, so that if names[7] == "Joe" and score[7] == 17. Terminate input with NoName 0.

		Check that each name is unique and terminate with an error message if a name is entered tweice. Write out all the pairs, one
		one line.

		Next, Display a prompt asking the user wheter they want to 
			1) add names and scores.
			2) print the names ans scores
			3) search for a name
			4) search for a score.





*/

void AddName_Score();


int main() {

	int list_choice;
	cout << "Please select an option:" << endl;
	cout << "1: Add names and scores" << endl;
	cout << "2: Print the names and score" << endl;
	cout << "3: Search for a name" << endl;
	cout << "4: Search for a score" << endl;
	

	do {
		cin >> list_choice;
		switch (list_choice)
		{
			case 1:
				AddName_Score();
				break;
			case 2:
				cout << "option two" << endl;
				break;
			case 3:
				cout << "option 3" << endl;
				break;
			case 4:
				cout << "option 4" << endl;
				break;
			default:
				cout << "option not avaliable" << endl;
				break;
				

		}
	} while (list_choice < 6);
	
	return 0;
}

void AddName_Score() {
	cout << "Works!" << endl;
}