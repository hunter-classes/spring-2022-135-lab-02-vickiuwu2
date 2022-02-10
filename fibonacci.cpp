/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 2D

This program computes the fibocanni numbers from F(0) to F(59). When the
number approaches the two billions, it becomes negative because there
is a number limit. It loops back and becomes negative.
*/

#include <iostream>

int main()
{
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < 60; i++)
    {
        std::cout << fib[i] << std::endl;
    }

    return 0;
}
