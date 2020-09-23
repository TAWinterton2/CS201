#include<iostream>
#include"lab8.hpp"
#include"intio.hpp"


using std::cout;
using std::cin;
using std::endl;


//Runs getInt function from intio.cpp / intio.hpp
//function stops when integer has been entered
int doInput() {

	int num = getInt();
	return num;
}


//Retuns value in parametered, squared
int compute(int value) {

	int result;

	result = value * value;

	return result;

	
}