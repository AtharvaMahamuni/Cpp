#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    for (int i = 1; i <= 4; i++, k++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 7 - k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*

*******
 *****
  ***
   *

*/