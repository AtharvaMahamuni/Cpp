#include <stdio.h>

void printFactor(int number, int i)
{
    // recursion end condition
    if (i > number)
        return;

    // condition to check if the number is perfectly divisible
    if (number % i == 0)
    {
        printf("%d ", i);
    }

    // recursive call
    printFactor(number, ++i);
}

int main()
{
    // declaring the number
    int number;

    // taking number input to find the factors
    printf("Enter a number: ");
    scanf("%d", &number);

    // printing the factors of the number
    printf("Factors of %d are: ", number);

    // calling the function to find factors recursively
    printFactor(number, 1);

    return 0;
}