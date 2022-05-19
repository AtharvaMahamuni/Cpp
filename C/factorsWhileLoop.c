#include <stdio.h>
int main()
{
    // declaring the number
    int number;

    // taking number input to find the factors
    printf("Enter a number: ");
    scanf("%d", &number);

    // printing the factors of the number
    printf("Factors of %d are: ", number);
    // while loop logic to find the factors
    int i = 1;
    while (i <= number)
    {
        // condition to check if the number is perfectly divisible
        if (number % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}