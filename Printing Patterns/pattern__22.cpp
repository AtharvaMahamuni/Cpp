#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = 1;

        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                k % 2 ? cout << k-- : cout << k++;
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
10
101
1010
10101

*/