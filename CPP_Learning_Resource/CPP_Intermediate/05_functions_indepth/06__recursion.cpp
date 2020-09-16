#include <iostream>

int factorial(int n);

int main()
{
    int n;

    std::cout << "Enter the number: ";
    std::cin >> n;

    std::cout << "Recursion of given number is: " << factorial(n) << std::endl;

    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

//Recursion:
//In recursion we have one function which call it again and again but with an exit strategy.
//If there is not an exit strategy then program will crash at some point.