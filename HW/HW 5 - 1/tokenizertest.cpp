#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"tokenizer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string user_input;
	vector <string> tokens;

	//user input 
	cout << "Please type in some text. When you are done, type 'End', 'end', or 'END' ";
	cout << "\n";
	do {
		//if user inputed a string, adds to vector
		if (Readline(user_input) == true) {
			StringToTokenWS(user_input, tokens);
		}
		transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);


	} while (user_input != "end");
	//print out results
	cout << "\n";

	AnalyzeTokens(tokens);


	return 0;
}