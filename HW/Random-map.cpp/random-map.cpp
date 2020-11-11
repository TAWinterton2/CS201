#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include"random-map.h"


int main()
{
    //demo code from homework
    // Seed with a real random value, if available
    //std::random_device r;

    // Choose a random mean between 1 and 6
   // std::default_random_engine e1(r());
   // std::uniform_int_distribution<int> uniform_dist(1, 6);
    //int mean = uniform_dist(e1);
    //std::cout << "Randomly-chosen mean: " << mean << '\n';

    // Generate a normal distribution around that mean
   // std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
   // std::mt19937 e2(seed2);
   // std::normal_distribution<> normal_dist(mean, 2);

   // std::map<int, int> hist;
   // for (int n = 0; n < 10000; ++n) {
   //     ++hist[std::round(normal_dist(e2))];
   // }
    //std::cout << "Normal distribution around " << mean << ":\n";
   // for (auto p : hist) {
   //     std::cout << std::fixed << std::setprecision(1) << std::setw(2)
   //         << p.first << ' ' << std::string(p.second / 200, '*') << '\n';
   // }


    int user_input_one;
    int user_input_two;

    //functions made for homework
    //Uniform Distribution
    std::cout << "TEST DRIVE TIME!!!!!!!!~" << '\n';
    std::cout << "Enter in 2 numbers to distribute between: ";
        std::cin >> user_input_one;
        std::cin >> user_input_two;

       RandomBetweenU(user_input_one, user_input_two);

    //Normal Distribution
        int input_one;
        int input_two;
      //  std::cout << "Enter 2 float point numbers: ";
      //  std::cin >> input_one;
        //std::cin >> input_two;
        //RandomBetweenN(input_one, input_two);

     //Distribution w/ RAND()'
        std::cout << "Enter 2 float point numbers: ";
        std::cin >> input_one;
        std::cin >> input_two;
        RandomBetween(input_one, input_two);

        return 0;
        std::map<int, int> hist;
        PrintDistribution(hist);

}

