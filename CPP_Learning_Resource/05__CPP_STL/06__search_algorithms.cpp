#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbers[] = {3, 2, 6, 4, 7, 9};

    sort(numbers, numbers + 6);

    // binary_search(numbers, numbers + 6, 7);
    // cout << "numbers: " << numbers << endl;
    // cout << "numbers: " << numbers + 6 << endl;

    if (binary_search(numbers, numbers + 6, 7))
    {
        cout << "NUMBER FOUND" << endl;
    }
    else
    {
        cout << "NUMBER NOT FOUND" << endl;
    }

    return 0;
}