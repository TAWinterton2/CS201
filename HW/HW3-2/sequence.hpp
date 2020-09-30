#pragma once


//Travis Winterton
//Header file for HW 3-2
//Week of 09/28/20

#ifndef FILE_SEQUENCE_HPP
#define FILE_SEQUENCE_HPP


//Collatz
//Gets integer from user
//takes integer and inputs into the Collatz sequence. 
//will continue untill 1 is produce, and the sequence ends
//sample
// cout << "Enter in a number: ";
// cin >> number;
// cout << Collatz(number);

int Collatz(int start_number);
#endif