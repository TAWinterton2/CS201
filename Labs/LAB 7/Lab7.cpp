#include"intio.hpp"
#include<iostream>


using std::cout;
using std::cin;
using std::endl;



int main() {
	int x, y, z;

	cout << "Enter in a number: " << '\n';
	cin >> x;
	x = getInt();
	cout << "Enter in another one: " << '\n';
	cin >> y;
	y = getInt();
	cout << "One more time: " << '\n';
	cin >> z;
	z = getInt();

	cout << putInt() << endl;
	cout << y << endl;
	cout << z << endl;
	return 0;
}


