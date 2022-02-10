/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 2A

Asks the user to input an integer in the range 0 < n < 100. If the number 
is out of range, the program will keep asking to re-enter until a valid 
number is input.
 
After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter an integer between 1 and 100: " << std::endl;
    std::cin >> n;
    while ((n <= 0) || (n >= 100))
    {
        std::cout << "Please re-enter: " << std::endl;
        std::cin >> n;
    }
    
    std::cout << (n * n) << std::endl;

    return 0;
}