#include <iostream>
using namespace std;

int main()
{
    int k = 1;

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j <= k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        if (i >= 4)
        {
            k--;
        }
        else
        {
            k++;
        }
    }

    return 0;
}

/*

*   
**
***
****
***
**
*

*/