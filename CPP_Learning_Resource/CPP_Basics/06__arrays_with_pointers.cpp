#include <iostream>
using namespace std;

int main()
{

    int integer_array[4] = {1, 2, 3, 4};
    cout << integer_array[2] << endl; // It will print the number at second position

    cout << integer_array << endl; // It will give memory address of first element

    //Intitializing values at 0th position
    integer_array[0] = 5;
    printf("%d\n", integer_array[0]);

    cout << "------------------" << endl;

    int another_array[4];
    another_array[0] = 5;

    int *arr_p;
    arr_p = another_array;
    cout << arr_p << "   " << another_array << endl;
    //This concludes that both are pointers and pointing towards the first element of an array;
    //or we can also say that they both have address of first element of another_array

    arr_p++;
    *arr_p = 19; //Pointer referencing
    cout << another_array[1] << endl;
    // another_array++;//we can't increament this due to C++ guidlines or standards

    arr_p++;
    *arr_p = 20;
    cout << another_array[1] << endl;
    cout << another_array[2] << endl;

    cout << "--------------------" << endl;
    // C++ program to understand difference between
    // pointer to an integer and pointer to an
    // array of integers.
    //This part is as it is taken from geeksforgeeks link is below

    // Pointer to an integer
    int *p;

    // Pointer to an array of 5 integers
    int(*ptr)[5];
    int arr[5];

    // Points to 0th element of the arr.
    p = arr;

    // Points to the whole array arr.
    ptr = &arr;

    cout << "p =" << p << ", ptr = " << ptr << endl;
    p++;
    ptr++;
    cout << "p =" << p << ", ptr = " << ptr << endl;

    return 0;
}

//FIXME:
// Remeber this:
//When you declare an array its name is like a pointer which points to the first location of an array;
//for detailed information refer this: https://www.geeksforgeeks.org/pointer-array-array-pointer/