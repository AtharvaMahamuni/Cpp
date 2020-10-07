#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    for (int i = 1; i <= 4; i++)
    {
        k = i;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 3 + i && j >= 5 - i)
            {
                cout << k;
                if (j >= 4)
                {
                    k--;
                }
                else
                {
                    k++;
                }
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

   1
  232
 34543
4567654

*/