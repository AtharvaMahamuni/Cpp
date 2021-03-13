#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 2, 6, 1, 7, 4, 5, 1};

    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    int arraySize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }
}