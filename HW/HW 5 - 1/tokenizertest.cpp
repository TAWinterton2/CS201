#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"tokenizer.h"
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

int main() {
	string user_input;
	vector <string> tokens;
	istringstream check(user_input);
	//user input 
	cout << "Please type in some text. When you are done, type 'End', 'end', or 'END' ";
	cout << "\n";
	do {
		//if user inputed a string, adds to vector
		if (Readline(user_input) == true) {
			while (getline(check, user_input, '\t')){
				StringToTokenWS(user_input, tokens);
			}
			
		}
		transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);


	} while (user_input != "end");
	//print out results
	cout << "\n";
	for (auto a : tokens) {
		cout << a << endl;
	}
	AnalyzeTokens(tokens);


	return 0;
}