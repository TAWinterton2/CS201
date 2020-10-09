#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"tokenizer.h"

using std::istringstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


//bool Readline(string$ str);
	// uses getline() to get a line of text from the user. 
	//It should return true if it read the string and false if the string was a blank line.
bool Readline(string& str) {
	getline(cin, str);

	if (str.empty()) {
		return false;
	}
	else {
		return true;
	}
}

//unsigend StringToTokenWS(const string &input, vector<string> & tokens)
	//uses std::istringstream to read strings separated by whitespace characters.
	//push a blacnk string at the end of each line. It should return the number of tokesn read from the string
unsigned StringToTokenWS(const string& input, vector<string>& tokens) {
	istringstream check(input);
	string user_input;
	while (getline(check, user_input, ' ')) {
		tokens.push_back(user_input);
	}
	int a = tokens.size();
	return a;
}

//void AnalyzeTokens(vector<string> &tokens);
	// takes vector and determine if the token is:
	// a) an integer literal (all the characters are numbers)
	// b) an identifier literal (starts with a letter of underscore character and followed by A-Z, a-z, 0-9, or ))
	// c) a string literal (starts and ends with a double quote)
	// d) a white space literal (a blank string)
	// e) and unknown (undetermined form the input)
	// f) Optional, handel the case of special characters
	//AnalyzeTokens should print out the tpye of token and the token itself surrounded by quotation marks.
void AnalyzeTokens(vector<string>& tokens) {
	for (auto a : tokens) {
		cout << a << endl;
	}

}

