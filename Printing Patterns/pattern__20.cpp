#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k = 'A';
        int n = 1;
        for (int j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
                j <= 4 ? cout << k++ : cout << n++;
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

   A1
  AB12
 ABC123
ABCD1234

*/