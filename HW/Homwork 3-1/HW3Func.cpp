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
	
	//top layer of box
	for (int i = 0; i < layer;i++)
	{
		for (int h= 0;h < message.size()+ 10 ;h++)
		
			cout << '*';
		cout << endl;
	}

	//middle part w/ text
	//left side of box
	for (int k = 0; k < 2;k++) {
		for (int n = 0; n < layer; n++)
			cout << '*';
		for (int g = 0; g < (message.size()+10) - (layer *2);g++)
			cout << " ";
	}
	cout << endl;

	//empyt part w/ text
	for (int n = 0; n < layer; n++)
		cout << '*';
		cout << " ";

		cout << message << " ";

	for (int n = 0; n < message.size() - layer; n++)
		cout << " ";

	for (int n = 0; n < layer; n++)
		cout << "*";
	
	

		
	cout << endl;

	//right side of box
	for (int k = 0; k < 2; k++) {
		for (int n = 0; n < layer; n++)
			cout << "*";
		for (int g = 0; g < (message.size() + 10) - (layer * 2); g++)
			cout << " ";
	}
	cout << endl;


	//bottom layer of box
	for (int i = 0; i < layer; i++)
	{
		for (int h = 0; h < message.size() + 10; h++)

			cout << '*';
		cout << endl;
	}


	//calculate size of string + 2blanks
	// n * 2 + 2 + sizeofstring.size()
	//
	
}
