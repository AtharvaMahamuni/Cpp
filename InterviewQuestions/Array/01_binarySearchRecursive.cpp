#include <iostream>
using namespace std;

bool binarySearch(int arr[], int val, int low, int high)
{
    if (low > high)
        return false;

    int mid = low + (high - low) / 2;

    if (arr[mid] == val)
        return true;

    else if (arr[mid] < val)
        return binarySearch(arr, val, mid + 1, high);

    else
        return binarySearch(arr, val, low, mid - 1);
}

int main()
{

    int arr[] = {12, 14, 16, 24, 27, 29, 31, 32, 37};
    int val = 12;

    int high = (sizeof(arr) / sizeof(arr[0])) - 1;

    if (binarySearch(arr, val, 0, high))
        cout << val << " is present" << endl;

    else
        cout << val << " is not present" << endl;

    return 0;
}