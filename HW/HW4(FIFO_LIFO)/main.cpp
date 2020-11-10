#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"functions.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;



int main() {
	vector<string> test{ "one", "two","three","four" };

	string vector_add = "five";
	//demostrate FIFO
	cout << "Fist In First Out Demo: ";
	cout << endl;

	cout << "Current Container:"; 
	cout << endl;

	Printcontainer(test);
	
	cout << endl;

	cout << "FIFO push: " << endl;
	FifoPush(test, vector_add);
	cout << endl;

	 cout << "FIFO Pop: " << endl;
	 FifoPop(test, test[0]);

	 cout << endl;
	 cout << "'One' was the first element added into the vector, and is the first element to be removed";
	 cout << endl;
	 //demostrate LIFO
	 
	 test.clear();
	 if (IsContainerEmpty(test) == true) {
		 cout << "current container is now empty";
	 }
	 cout << endl;
	
	 vector<string> test2{ "one", "two","three","four" };

	 cout << "Last In First Out Demo: ";
	 cout << endl;

	 cout << "Current Container:";
	 cout << endl;

	 Printcontainer(test2);

	 cout << "LIFO Push : " << endl;

	 LifoPush(test2, vector_add);

	 cout << endl;

	 cout << "LIFO Pop: " << endl;

	 LifoPop(test2, vector_add);
	


	return 0;
}
