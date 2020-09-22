#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::vector;

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

void AddName_Score(vector<string>& Names, vector<int>& Score, pair<string, int>& ScoreName) {
	cout << "Type in NoName and Then 0 to terminate" << endl;
	do
	{
		cout << "Enter in a name: ";
		cin >> ScoreName.first;
		cout << "Enter in a score: ";
		cin >> ScoreName.second;

		if (ScoreName.first == "NoName" && ScoreName.second == 0) {
			cout << "Data input has stopped" << endl;
			cout << '\n';
			break;
		}
		else 
		{
			Names.push_back(ScoreName.first);
			Score.push_back(ScoreName.second);
		}


	} while (std::find(Names.begin(), Names.end(), "NoName") == Names.end() && std::find(Score.begin(), Score.end(), 0) == Score.end());

}


void PrintNameScores(const vector<string>Names, vector<int>Score) {
	int o = Names.size();
	for (int k = 0; k < o; ++k) {
		cout << Names[k] << " " << Score[k] << endl;

	}
	cout << '\n';
}

bool FindName(const string& nameToFind, vector<string> Names) {
	if (std::find(Names.begin(), Names.end(), nameToFind) != Names.end()) {
		return true;
	}
	else
	{
		return false;
	}
}

bool FindScore(const int& ScoreToFind, vector<int> Score) {
	if (std::find(Score.begin(), Score.end(), ScoreToFind) != Score.end()) {
		return true;
	}
	else
	{
		return false;
	}
}

	



int main() {
	vector<string>Names;
	vector<int>Score;
	pair<string, int> ScoreName;
	int list_choice;
	string namefind;
	int scorefind;

	AddName_Score(Names, Score, ScoreName);
	do { 

		cout << "Please select an option:" << endl;
		cout << "1: Add names and scores" << endl;
		cout << "2: Print the names and score" << endl;
		cout << "3: Search for a name" << endl;
		cout << "4: Search for a score" << endl;
		cout << "0: End Program " << endl;

		cin >> list_choice;
		switch (list_choice)
		{
		case 1:
			AddName_Score(Names, Score, ScoreName);
			break;
		case 2:
			PrintNameScores(Names, Score);
			break;
		case 3:
			cout << "Enter in a Name to Find: ";
			cin >> namefind;
			if (FindName(namefind, Names)) {
				cout << "Name Found " <<  namefind << endl;
				cout << '\n';
			}
			else
			{
				cout << "Name Not Found " << endl;
				cout << '\n';
			}
			break;
		case 4:
			cout << "Enter in a Score to Find: " << endl;
			cin >> scorefind;
			if (FindScore(scorefind, Score)) {
				cout << "Score Found" << scorefind << endl;
				cout << '\n';
			}
			else
			{
				cout << "Score Not Found" << endl;
				cout << '\n';
			}
			break;
		case 0:
			cout << "Program Terminated" << endl;
			cout << '\n';

			break;
		default:
			cout << "option not avaliable" << endl;
			cout << '\n';
			break;


		}

	} while (list_choice != 0);
		
	
	
	return 0;
}