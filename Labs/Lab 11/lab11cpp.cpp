#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
#include<algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;


int main() {
	string user_input;
	vector <char> string_output;

	int k = 1;

	while (k != 0) {
		cout << "Enter in a string: ";
		getline(cin, user_input);

		for (int j = 0; j <= user_input.size(); j++) {
			if (isalpha(user_input[j]) && islower(user_input[j])) {
				string_output.push_back(user_input[j]);
			}
		}
		sort(string_output.begin(), string_output.end());
		for (auto a : string_output) {
			cout << a;
			cout << '\n';
		}
		
		cout << '\n';
		cout << "would you like to go agian? ";
		cin >> k;

	}
		
		return 0;
	}

	
