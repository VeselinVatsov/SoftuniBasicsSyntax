//Write a program that reads an integer number N, then reads a line of N integers, and prints the minimum and
//maximum of those integers.

#include <iostream>

int main()
{
    int min = INT32_MAX;
    int max = INT32_MIN;

    int numbers = 0;
    std::cin >> numbers;

    for (int i = 0; i < numbers; i++) {
        int currentNumber;
        std::cin >> currentNumber;

        if (currentNumber < min)
        {
            min = currentNumber;
        }
        if (currentNumber > max)
        {
            max = currentNumber;
        }
    }
    std::cout << min << ' ' << max;
}