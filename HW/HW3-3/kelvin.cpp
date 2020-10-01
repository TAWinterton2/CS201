//Travis Winterton
//CS 201
//HW 3-3
//Week of 09/28/20
// PURPOSE OF PROGRAM
//		look at the code given for additonal assingment 4
//		The program was design to take in a tempurate value in celsius and convert into kelvin
//		Look at the code and Identify the errors, list them, and correct the code.




//copy of the given program of Kelvin.cpp



//Converts Celsisus to Kelvin


//program has no header files 
//program cannot use cout or cin w/out #include<iostream> and using std::cout || using std::cin


double ctok(double c)
{	
	//converions rate is correct
	int k = c + 273.15;
	//function returns a data type of "int" , no value will actually be returned
	//suggested edit: have the fucntion return the value of k
	return int;
}


int main() {
	double c = 0;
	//progarm has a cin statement for a value of d which does not exist in program
	//suggested edit: Either have the program start with a predetermin value to convert to kelvin or have program prompt user for value to convert
	cin >> d;

	//program is trying to call function "ctok" but parameter does not take a char
	double k = ctok("c");
	//C in cout is captialized, where it should be all lower case
	//line is trying to end with insterting a new line, it should be '\n' not '/n'
	Cout << k << '/n';

	//no retrun 0;
}