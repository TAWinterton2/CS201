#include<iostream>
#include<string>
#include"HW3func.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;


//function

void BoxCreate(int layer, string message)
{
	//for loop to create top layer of box
	
	int space = layer - 1;
	//top layer
	for (int i = 0; i < layer;i++)
	{
		for (int h= 0;h < layer + 10;h++)
		
			cout << '*';
		cout << endl;
	}

	//middle part w/ text
	for (int k = 0; k < layer; k++) {
		cout << '*';
	}
	for (int p = 0; p < 5 - layer; p++){
		cout << " ";
	}
	cout << message;
	for (int p = 0; p < 5 - layer; p++) {
		cout << " ";
	}
	for (int k = 0; k < layer; k++) {
		cout << '*';
	}

	


	//bottm



	
}
