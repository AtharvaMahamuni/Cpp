#include <iostream>
using namespace std;

int main()
{
    string inputString;

    cout << "Enter the String: ";
    cin >> inputString;

    bool isIt = true;

    for (int i = 0; i < (inputString.length()) / 2; i++)
    {
        if (inputString[i] != inputString[(inputString.length() - 1 - i)])
        {
            isIt = false;
            break;
        }
    }

    if (isIt == false)
    {
        cout << "Given String is not Palindrome" << endl;
    }
    else
    {
        cout << "Given String is Palindrome" << endl;
    }

    return 0;
}