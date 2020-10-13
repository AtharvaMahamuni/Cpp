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
        int j = i;

        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = temp;
    }

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}