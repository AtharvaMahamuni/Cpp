#include <iostream>
using namespace std;

int main()
{

    int add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(4,5);

    return 0;
}