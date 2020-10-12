#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    //bubble sort:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}