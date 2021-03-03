#include <iostream>
using namespace std;

int main()
{
    string inputString;

    cout << "Enter the string: ";
    cin >> inputString;

    int temp;

    for (int i = 0; i < (inputString.length() / 2); i++)
    {
        temp = inputString[i];
        inputString[i] = inputString[inputString.length() - 1 - i];
        inputString[inputString.length() - 1 - i] = temp;
    }

    cout << "Reversed String is: ";
    cout << inputString << endl;

    return 0;
}