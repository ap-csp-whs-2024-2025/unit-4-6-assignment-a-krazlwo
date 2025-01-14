/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// In-Class Examples
// greet procedure

// goodbye procedure


// TODO: Create squareNum
    void squareNum(int n)
    {
        std::cout << "The square of " << n << " is " << (n*n) << std::endl;
    }

// TODO: Create distance
void distance(doible x, double y)
{
    double dist = abs(x-y)
    std::cout << "The distance between " << x << " and " << y << " is " << dist << std::endl;
}

// TODO: Create rollDice
    void rollDice()
    {
        int randomNumber = rand() % 6 + 1;
    }

        //Print the result
        std::cout << "You rolled a " << randomNumber << std::endl;

int main()
{
    // You can follow along with any code in class here
   double num1;
   double num2;
   std::cout << "Enter two numbers:\n";
   std::cin >> num1 >> num2;
   distance(num1, num2);
    
    return 0;
}
