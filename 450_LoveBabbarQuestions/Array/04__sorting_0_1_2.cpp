#include <iostream>
using namespace std;

int main()
{
    int zero = 0, one = 0, two = 2;

    int num[] = {0, 2, 2, 1, 0, 1, 2, 1};

    int arraySize = sizeof(num) / sizeof(int);

    for (int i = 0; i < arraySize; i++)
    {
        if (num[i] == 0)
            zero++;
        else if (num[i] == 1)
            one++;
        else
            two++;
    }

    for (int i = 0; i < arraySize; i++)
    {
        if (zero != 0)
        {
            num[i] = 0;
            zero--;
        }
        else if (one != 0)
        {
            num[i] = 1;
            one--;
        }
        else
        {
            num[i] = 2;
            two--;
        }
    }

    for (auto &&i : num)
    {
        cout << i << " ";
    }

    return 0;
}