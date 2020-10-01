#include<iostream>
#include<math.h>
#include<string>


using std::cout;
using std::cin;
using std::endl;
using std::string;


// Collatz function takes value and runs it through functoin and retuns result 
int Collatz(int &value) {

	if (value % 2 == 0) {
		value = value / 2;
		return value;
	}
	else
	{
		value = 3 * value + 1;
		return value;
	}
}