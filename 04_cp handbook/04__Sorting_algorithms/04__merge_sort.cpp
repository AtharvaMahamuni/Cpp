#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int l_subArr[n1];
    int r_subArr[n2];

    for (int i = 0; i < n1; i++)
    {
        l_subArr[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        r_subArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (l_subArr[i] <= r_subArr[j])
        {
            arr[k] = l_subArr[i];
            i++;
        }
        else
        {
            arr[k] = r_subArr[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = l_subArr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = r_subArr[j];
        j++;
        k++;
    }
}

void divide(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + ((high - low) / 2);

        divide(arr, low, mid);
        divide(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter the no. of inputs: ";
    cin >> n;

    int arr[n];
    cout << "Enter the inputs: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int low = 0, high = n - 1;

    //Merge Sort
    divide(arr, low, high);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}