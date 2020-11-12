#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include"random-map.h"


int main()
{

    int user_input_one;
    int user_input_two;

    //functions made for homework
   
    //Uniform Distribution
    std::cout << "test drive" << '\n';
    std::cout << "Enter in 2 numbers to distribute between: ";
    std::cin >> user_input_one;
    std::cin >> user_input_two;

    RandomBetweenU(user_input_one, user_input_two);

   
    
    //Normal Distribution
    int input_one;
    int input_two;
      std::cout << "Enter 2 float point numbers: ";
      std::cin >> input_one;
      std::cin >> input_two;
      RandomBetweenN(input_one, input_two);

   //Distribution w/ RAND()
    std::cout << "Enter 2 float point numbers: ";
    std::cin >> input_one;
    std::cin >> input_two;
    RandomBetween(input_one, input_two);

    return 0;
    std::map<int, int> hist;
    PrintDistribution(hist);




}

