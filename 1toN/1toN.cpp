//Write a program that reads the integer number N from the console and prints all numbers from 1 to N(i.e.in the
//range[1, N]) to the console on a single line.The number N will always be larger than or equal to 1.

#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << i <<" ";
    }
}
