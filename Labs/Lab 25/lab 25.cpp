#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::mismatch;
using std::pair;

int main() {
	vector<int> test_one{
	1, 10, 15, 20
	};

	vector<int> test_two{
		1, 10, 25, 30, 45
	};

	vector<int> test_three{
	 1, 10, 15, 20
	};
	vector<int> test_four{ 1, 10, 15, 20, 24 };

	pair<vector<int>::iterator, vector<int>::iterator> mispair;

	//mismatch found
	mispair = mismatch(test_one.begin(), test_one.end(), test_two.begin(), test_two.end());

		cout << "First mismatch element: "
			<< *mispair.first << endl;

		cout << "Second mismatch element: "
			<< *mispair.second << endl;
	
	//no mismatch found
	mispair = mismatch(test_three.begin(), test_three.end(), test_four.begin(), test_four.end());
	if (mispair.first == test_three.end()) {
		cout << "Vectors Matched";

	}
	else {
		cout << "Retunred value :"
			<< *mispair.first;
		cout << "Returned value: "
			<< *mispair.second;
	}
	
	return 0;


}