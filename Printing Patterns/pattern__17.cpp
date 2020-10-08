#include <iostream>
using namespace std;

int main()
{
    for (int i = 1, k = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 6 - k || j >= 4 + k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        if (i < 5)
        {
            k++;
        }
        else
        {
            k--;
        }
    }

    return 0;
}

/*

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

*/