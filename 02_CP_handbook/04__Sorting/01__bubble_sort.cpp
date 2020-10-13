#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of Enetries: ";
    cin >> n;

    int arr[n];
    cout << "Enter the set of elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Bubble sort:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}