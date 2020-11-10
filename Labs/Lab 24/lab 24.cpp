#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int main() {
	vector<int> test{
		1,
		5,
		7,
		10,
		11,
		12,
		20,
		80,
		4,
		6
	};

	cout << "Current Vector: " << endl;
	for (auto a : test) {
		cout << a << " ";
	}
	cout << endl;

	cout << "Sorted Vector: " << endl;
	std::sort(test.begin(), test.end());
	for (auto a : test) {
		cout << a << " ";
	}
	cout << endl;

	cout << "Reversed Vector: " << endl;
	std::reverse(test.begin(), test.end());
	for (auto a : test) {
		cout << a << " ";
	}
	cout << endl;

	cout << "Rotated Vector: " << endl;
	std::rotate(test.begin(), test.begin() + 4, test.end());
	for (auto a : test) {
		cout << a << " ";
	}
	cout << endl;

	auto iter1 = test.begin();
	auto iter2 = test.begin() + 5;

	vector<int> new_vector(iter1, iter2);

	cout << "Sub Vector: " << endl;
	for (auto a : new_vector) {
		cout << a << " ";
	}
}