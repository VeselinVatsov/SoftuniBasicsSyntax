//Write a program that enters the coefficients a, b, and c of a quadratic equation a* x2 + b * x + c = 0 and
//calculates and prints its real roots.Note that quadratic equations may have 0, 1, or 2 real roots.You can check your
//program against this: https://www.mathsisfun.com/quadratic-equation-solver.html
//The numbers a, b, and c will be entered on a single line from the console, separated by spaces.
//If the quadratic equation has no real roots(e.g. if the Discriminant is less than 0), print "no roots", if it has one real
//root print it, if it has two roots, print them on a single line, separated by a single space.

#include <iostream>
#include <cmath>

int main()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    float denominator = 2 * a;
    float discriminant = sqrt((b * b) - (4 * a * c));

    if (discriminant > 0)
    {
        float root1, root2;
        float denominator = 2 * a;

        root1 = (-b + discriminant) / denominator;
        root2 = (-b - discriminant) / denominator;

        std::cout << root1 << " " << root2;
    }
    else if (discriminant == 0)
    {
        std::cout << -b / denominator;
    }
    else
    {
        std::cout << "no roots";
    }   
}