#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::mt19937;

int RandomBetweenU(int first, int last) {
	 std::random_device rd;
	 mt19937 gen(rd());
	 std::uniform_int_distribution<> distrib(first, last);
	 cout << "Uniformed Distribution: " << '\n';
	 for (int n = 0; n < 10; ++n) {
		 cout << distrib(gen) << ' ';
		 cout << '\n';
	 }
	 return 1;
}