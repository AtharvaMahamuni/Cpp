#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = low;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void divide(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        divide(arr, low, mid);
        divide(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Merge Sort
    divide(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}