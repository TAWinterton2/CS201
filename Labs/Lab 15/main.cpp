#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

bool streamtest(string& test) {
	int n;
	istringstream test_string(test);
	test_string >> n;
	if (!test_string) {
		cout << "Please Enter in a Number: ";
		return n;
	}
	else {
		cout << n * n;
		cout << endl;
		return n;
	}
}
int main() {
	int test_continue = 1;
	while (test_continue == 1) {
		cout << "Enter in a nubmer: ";
		string user_input;
		cin >> user_input;
		cout << streamtest(user_input) << endl;
		cout << "Do another test? :";
		cin >> test_continue;
	}
	
}