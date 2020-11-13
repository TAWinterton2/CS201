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
using std::map;
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int>
		distrib(1, 2);
	int coin_flip = distrib(gen);
	int heads = 0;
	int tails = 0;
	for (int i = 0; i < 1000; i++) {
		if (distrib(gen) % 2 == 0) {
			heads++;
		}
		else
			tails++;
	}
	cout << "# of times Heads Appeared: " << heads << '\n';
	cout << "# of times Tails Appeared: " << tails << '\n';
	return 0;
}