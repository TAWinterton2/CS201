#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


void PrintSubStrings(char str[], int n) {
	//start point
	for (int k = 1; k <= n; k++) {
		//picking an end point
		for (int i = 0; i <= n -k; i++) {
			//print chars from current start point to determened end point
			int n = i + k - 1;
			for (int j = i; j <= n; j++)
				cout << str[j];
			cout << endl;
		}
	}
}

int main() {
	char str[] = "Test One Two";
	PrintSubStrings(str,strlen(str));

}