/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2B

*/

#include <iostream>
#include "funcs.h"

void print_interval(int L, int U)
{
    for (int x = L; x < U; x++)
    {
         std::cout << x << " ";
    }

}
