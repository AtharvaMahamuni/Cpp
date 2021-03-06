#include <iostream>
using namespace std;

int main()
{
    int array[] = {2, 3, 1, 5, 7};
    int arraySize = (sizeof(array) / sizeof(array[0]));

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int temp = array[arraySize - 1];

    for (int i = arraySize - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = temp;

    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}