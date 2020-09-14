#include <iostream>
using namespace std;

int main()
{

    int rating = 4;

    //conditional statements.
    if (rating == 5)
    {
        puts("5 star rated.\n");
    }
    else if (rating == 4)
    {
        puts("It is rated for 4 stars.");
    }
    else
    {
        puts("Not rated for 4 or 5  stars");
    }

    if (true)
    {
        puts("This block always executes");
    }

    if (false)
    {
        puts("This block never executes");
    }

    //ternary operator:
    //(condition) ? (true block) : (false block);
    printf("Rating given is %s\n", rating > 3 ? "good rating" : "Bad rating");

    return 0;
}

//Conditional are very simple to understand and one of the basic of programming
//if condition is true then it executes one block else it run another block of code.
