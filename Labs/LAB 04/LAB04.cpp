#include<iostream>
using namespace std;


/*
TRAVIS WINTERTON
WEEK OF 09/07/20
CS 201
LAB 04
PURPOSE OF PROGRAM:
#1) Write a C++ program that has a for-loop going through the numbers 1 to 100
	For each number divisible by 3, the program prints “Fizz”.
	For other numbers—not divisible by 3—the number itself is printed.
ADDITONAL ASSINGMENT 
Change your program from part 1 as follows.
	For each number divisible by 3, the program prints “Fizz”.
	For each number divisible by 5, the program prints “Buzz”.
	If a number is divisible by both 3 and 5, then the program prints “Fizz Buzz”.
	For other numbers—divisible by neither 3 nor 5—the number itself is printed.
*/
int main() {
	int a = 1;

	for (a; a <= 100; ++a)
	{
		if (a % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (a % 5 == 0) 
		{
			cout << "Buzz" << endl;
		}
		else if (a % 5 == 0 && a % 3 == 0) 
		{
			cout << "Fizz Buzz" << endl;
		}
		else
		{
			cout << a << endl;
		}

	}
	return 0;
}