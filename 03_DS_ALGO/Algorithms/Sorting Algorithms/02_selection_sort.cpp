#include <iostream>

using namespace std;

int main()
{
    int array[] = {5, 7, 8, 2, 1, 3, 6, 3, 5, 8, 4};
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (auto &&i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < arraySize; i++)
    {
        int min = i;

        for (int j = i; j < arraySize; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

    for (auto &&i : array)
    {
        cout << i << " ";
    }

    return 0;
}