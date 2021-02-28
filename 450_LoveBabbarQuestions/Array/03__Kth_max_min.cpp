#include <iostream>
using namespace std;

int main()
{
    int num[] = {7, 5, 9, 3, 4};

    int arraySize = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = 0; j < arraySize - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // for (auto &&i : num)
    // {
    //     cout << i << endl;
    // }

    int k;
    cout << "Enter the Kth smallest no.: ";
    cin >> k;

    int number;

    for (int i = 0; i < k; i++)
    {
        number = num[i];
    }

    cout << "Kth smallest no. is: " << number << endl;

    return 0;
}