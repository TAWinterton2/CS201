#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;



bool isDiv3(int value) {
	int remainder = value % 3;

	if (remainder == 0) {
		return true;
	}
	else {
		return false;
	}
}


	
	






//main function
	int main()
	{
		int i = 1;
		int a;
		int b;
		for (i; i < 40; i++) {
			cout << i * 3 << " is divisable? " << isDiv3(i * 3) << endl;
		}
		
		return 0;
	}