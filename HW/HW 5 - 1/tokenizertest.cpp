#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include"tokenizer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	string user_input;
	cout << "Please type in some text. When you are done, type 'End', 'end', or 'END' ";
	cout << "\n";
	do {
		getline(cin, user_input);
		transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
		Readline(user_input);

	} while (user_input != "end");
	
	
	return 0;
}