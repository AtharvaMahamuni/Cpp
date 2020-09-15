#include <iostream>
using namespace std;

template <typename T>

T addme(T num1, T num2)
{
    return num1 + num2;
}

int main()
{

    int v1 = 5;
    int v2 = 8;

    float v3 = 5.8;
    float v4 = 8.3;

    cout << "Addition of v1 & v2 is: " << addme(v1, v2) << endl;
    cout << "Addition of v3 & v4 is: " << addme(v3, v4) << endl;

    return 0;
}