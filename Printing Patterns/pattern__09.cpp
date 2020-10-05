#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                // cout << k;
                if (j >= 4)
                {
                    cout << k;
                    k--;
                }
                else
                {
                    cout << k;
                    k++;
                }
            }
            else
            {
                if (j >= 4)
                {
                    cout << " ";
                    k--;
                }
                else
                {
                    cout << " ";
                    k++;
                }
            }
        }
        cout << endl;
    }

    return 0;
}

/*

ABCDCBA
ABC CBA
AB   BA
A     A

*/