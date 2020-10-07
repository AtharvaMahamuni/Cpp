#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    for (int i = 1; i <= 7; i++)
    {
        k = 7 - i;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 7 - (i - 1))
            {
                cout << k;
                k--;
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

6543210
543210
43210
3210
210
10
0

*/