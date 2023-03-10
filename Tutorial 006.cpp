// Tutorial 006.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// parameter and return working together in functions 

int add(int y, int x)
{
    return y + x; 
}

int multiply(int z, int u)
{
    return z * u; 
}

int main()
{
    std::cout << add(4, 5) << '\n';
    std::cout << add(1 + 3, 3 * 4) << '\n';

    int a{ 5 }; 
    std::cout << add(a, a) << '\n';

    std::cout << add(1, multiply(2, 3)) << '\n';
    std::cout << add(1, add(2, 3)) << '\n';

    return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
