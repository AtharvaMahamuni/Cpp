#include <iostream>
using namespace std;

void printValue(int a)
{
    printf("The value of int is: %d\n", a);
}

void printValue(double a)
{
    printf("The value of float is: %f\n", a);
}

void printValue(int *a)
{
    printf("The value of pointer is: %p\n", a);
}

int main()
{
    printValue(5);
    printValue(5.343);
    // printValue(NULL);//It will give an warning
    printValue(nullptr); //It will point the first location in memory

    return 0;
}

//More about nullptr:-------------------------------------------------------------------------------------------
// https://www.geeksforgeeks.org/understanding-nullptr-c/
// https://stackoverflow.com/questions/1282295/what-exactly-is-nullptr?newreg=8f4e020300554e4ebf995409b3a0f023
//--------------------------------------------------------------------------------------------------------------