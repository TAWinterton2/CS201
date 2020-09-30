#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;



bool isDiv3(int value) {
	return(value % 3 == 0);
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