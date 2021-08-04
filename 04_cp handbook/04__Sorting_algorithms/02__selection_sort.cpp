#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of inputs: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Selection Sort:
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}