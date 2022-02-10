/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 2C

Creates an array of 10 integers
Provides an interface to edit any of the elements
If out of range, program breaks
*/

#include <iostream>

int main()
{
    int index, value;
    int myData [10];
    for (int i = 0; i < 10; i++)
    {
        myData[i] = 1;
    }

    do
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << myData[i] << " ";
        }

        std::cout << std:: endl << "Input index: ";
        std::cin >> index;
        std::cout << "Input value: ";
        std::cin >> value;

        if ((0 <= index) && (index < 10))
        {
            myData[index] = value;
        }

    } while ((0 <= index) && (index < 10));

    std::cout << "Index out of range. Exit." << std::endl;
    
    return 0;
}