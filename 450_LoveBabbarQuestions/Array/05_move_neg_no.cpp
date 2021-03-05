#include <iostream>
using namespace std;

int main()
{
    int array[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int no = 0;
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i : array)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] < 0)
        {
            int temp = array[i];
            array[i] = array[no];
            array[no] = temp;
            no++;
        }
    }

    for (int i : array)
    {
        cout << i << " ";
    }

    return 0;
}