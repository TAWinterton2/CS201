#include<iostream>
#include<fstream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;


int main() {
	ofstream fout("test.txt");
	int x = 0;
	while (x <= 10) {
		fout << "Hello!"<< endl;

		x++;
	}
	cout << endl;
	x = 0;

	

	while (x <= 100) {
		fout << x << std::setw(5);
		if (x % 10 == 0) {
			fout << endl;
		}
		x++;
	}
	if (!fout) {
		cout << "Error writing to file" << endl;

	}
	return 0;
}