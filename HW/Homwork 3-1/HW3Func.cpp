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
	for (int k = 0; k < 3; k++) {
		for (int n = 0; n < layer; n++)
			cout << '*';
		for (int g = 0; g < (layer + 10) - (layer *2);g++)
			cout << " ";
		cout << message;
		for (int n = 0; n < layer; n++)
			cout << '*';
		cout << endl;
}

	//bottm
	for (int i = 0; i < layer; i++)
	{
		for (int h = 0; h < layer + 10; h++)

			cout << '*';
		cout << endl;
	}



	
}
