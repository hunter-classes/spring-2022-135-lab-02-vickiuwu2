/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 2B

Given interval L, U
Returns [R, U)
*/

#include <iostream>

void print_interval(int L, int U)
{
    for (int x = L; x < U; x++)
    {
         std::cout << x << " ";
    }

}

int main()
{
    int L, U;
    std::cout << "Please enter L: ";
    std::cin >> L;
    std::cout << "Please enter U: ";
    std::cin >> U;
    print_interval(L,U);

    return 0;
}