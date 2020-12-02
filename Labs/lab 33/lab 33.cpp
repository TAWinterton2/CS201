#include<iostream>
#include<string>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Human {
public:
	string setName(string name) {
		_name = name;
		cout << "My name is: " << _name;
		return _name;
	}
	void printHuman(int n) {
		for (int i = 0; i < n; i++) {
			cout << "I am a Human" << endl;
			cout << "my name is " << _name << endl;
			cout << "I am " << std::to_string(_age) << " years old" << endl;
		}
			
	}
	int setAge(int age) {
		_age = age;
		cout << "My age is: " << std::to_string(_age) << endl;
		return _age;
	}

private:
	string _name;
	int _age;
};


int main() {
	string user_input_name;
	int user_input_age;

	Human Steve;

	Steve.setName("Steve");
	cout << endl;
	Steve.setAge(31);
	cout << endl;
	Steve.printHuman(3);
	cout << endl;
	
	
	Human Audrey;
	Audrey.setName("Audrey");
	cout << endl;
	Audrey.setAge(18);
	cout << endl;
	Audrey.printHuman(2);

	cout << endl;

	


	return 0;

}