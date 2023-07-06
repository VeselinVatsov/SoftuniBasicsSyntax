//Write a program that calculates the greatest common divisor (GCD) of given two numbers. Hint: you can use the
//Euclidean algorithm.
//The two integer numbers will be entered on a single line from the console, separated by a single space.
//Find and print their GCD.


#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    // Ensure num1 is greater than or equal to num2
    if (num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int gcd = num1; // Initialize gcd to num1

    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    gcd = num1; // The final gcd is stored in num1

    std::cout << gcd;
}