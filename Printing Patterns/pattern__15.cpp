#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        int k = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (i <= 5)
            {
                if (j >= 6 - i)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    cout << " ";
                }
            }
            if (i > 5)
            {
                if (j > i - 5)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}

/*

    1
   12
  123
 1234
12345
 1234
  123
   12
    1

*/