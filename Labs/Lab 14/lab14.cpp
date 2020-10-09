#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;         
using std::vector;

int main() {
	string user_input;
	int input_len;
	cout << "Enter in a string: ";
	cin >> user_input;

	input_len = user_input.length();

	for (int a = 0; a < input_len; a++) {
		int b = 0;
		string input_sub = user_input.substr(b, input_len-a);
		cout << input_sub << endl;

	}
	return 0;
}