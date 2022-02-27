#include <stdio.h>

// math.h is included for the log() function
#include <math.h>

int main()
{
    // // Variable declarations
    // float answer;

    // // passing integer type value
    // int num = 5;

    // // log() returns the natural logarithm of the argument
    // answer = log(num);

    // // Print the answer of the log function
    // printf("log(%d) = %f", num, answer);

    // printf("log(%d) = %f", 5, log(5));

    printf("logf(%.2f) = %.2f", 5.6, log(5.6));
    printf("\nlogl(%.2f) = %.2f", 5.3232, log(5.3232));

    return 0;
}