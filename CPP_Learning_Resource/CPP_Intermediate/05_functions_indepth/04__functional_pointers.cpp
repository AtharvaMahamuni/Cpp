#include <iostream>
using namespace std;

int getTwo()
{
    return 2;
}

void interesting()
{
    puts("I am interesting.");
}

int main()
{
    int whatIgot = getTwo();
    cout << whatIgot << endl;

    void (*pointsToInteresting)() = interesting; //here we are just pointing towards the memory location were the function is stored.
    //This both will produce same output.
    pointsToInteresting();
    (*pointsToInteresting)();

    return 0;
}

//Functional pointer:
//It is a simple pointer which points towards the function
//and then using that pointer we run function whenever we like.