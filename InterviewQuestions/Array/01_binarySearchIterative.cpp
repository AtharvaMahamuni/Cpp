#include <iostream>
using namespace std;

bool binarySearch(int arr[], int val, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (val == arr[mid])
            return true;

        else if (val > arr[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
}

int main()
{
    int arr[] = {12, 14, 16, 24, 27, 29, 31, 32, 37};
    int val = 30;

    int high = (sizeof(arr) / sizeof(arr[0])) - 1;

    if (binarySearch(arr, val, 0, high))
        cout << val << " is present" << endl;

    else
        cout << val << " is not present" << endl;

    return 0;
}