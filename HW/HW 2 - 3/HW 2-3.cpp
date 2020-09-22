#include<iostream>
#include<vector>
#include<string>

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
int main() {

	int list_choice;

	switch (list_choice) 
	{
	case 1:
		cout << "option one" << endl;
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

	}

}