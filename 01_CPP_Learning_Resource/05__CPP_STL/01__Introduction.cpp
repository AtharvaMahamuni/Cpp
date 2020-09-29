#include <iostream>
using namespace std;

template <typename T>
T getBigger(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << getBigger(3, 6) << endl;

    return 0;
}

//STL - Standard Template Library
//It takes Generic Programming to the next level.
//Generic Programming is something between actual programming and pseudocode were we don't care about data types.
//It provides in built data structure and algorithms.

//Generic Programming:
// Data type are not specified at the time of implementation of code logic.
//Run time polymorphism
