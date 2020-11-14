#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <ctime>
#include <cstdlib>

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


int RandomBetweenN(int first, int last) {
	std::random_device rd;
	mt19937 gen{ rd() };

	std::normal_distribution<> d( first, last );
	cout << "Normal Distribution: " << '\n';
	for (int n = 0; n < 10; ++n) {
		cout << d(gen) << ' ';
		cout << '\n';
	}
	return 1;
}


int RandomBetween(int first, int last) {
	std::srand(std::time(nullptr));
	int random_var = std::rand();
	cout << "Random value on [0 " << RAND_MAX << "]: "
		<< random_var << '\n';
	cout << "Rolling d20 10 times:: " << '\n';
	int d20;
	for (int n = 0; n != 10; n++) {
		d20 = (rand() % 20) + 1;
		cout << d20 << '\n';
	}
	return 1;
}


void PrintDistribution(  std::map<int, int>& numbers) {
	cout << "Uniform Distribution between 1 and 6" << '\n';
	std::random_device rd;
	std::default_random_engine e1(rd());
	mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(1, 6);
	for (int n = 0; n < 10000; ++n) {
		++numbers[distrib(gen)];
	}
	for (int i = 1; i <= 6; i++) {
		cout << i << ':' << numbers[i] << "  " << std::string((numbers[i]/2000.0) * 70 , '*') << '\n';
	}
	cout << endl;
	cout << "Normal Distribution between 1 and 6" << endl;
	std::normal_distribution<> normal_dist(1, 6);
	numbers.clear();
	for (int n = 0; n < 10000; ++n) {
		++numbers[std::round(normal_dist(gen))];
	}
	for (int i = 1; i <= 6; i++) {
		cout << i << ':' << numbers[i] << "  " << std::string((numbers[i] / 2000.0) * 70, '*') << '\n';
	}
} 