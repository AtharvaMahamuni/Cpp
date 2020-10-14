#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. Inputs: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Insertion Sort:
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}