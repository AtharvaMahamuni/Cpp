#include <stdio.h>

void printFactors(int *number)
{
    // printing the factors of the number
    printf("Factors of %d are: ", *number);
    
    // for loop logic to find the factors
    for (int i = 1; i <= *number; i++)
    {
        // condition to check if the number is perfectly divisible
        if (*number % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    // declaring the number
    int number;

    // declaring the pointer
    int *ptr;

    // taking number input to find the factors
    printf("Enter a number: ");
    scanf("%d", &number);

    // calling the function with pointer
    ptr = &number;
    printFactors(ptr);

    return 0;
}