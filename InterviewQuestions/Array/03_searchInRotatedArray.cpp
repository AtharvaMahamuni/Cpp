#include <iostream>
using namespace std;

int rotated_search_helper(int arr[], int key, int low, int high)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (key == arr[mid])
        return mid;

    if (arr[low] <= arr[mid] && key <= arr[mid] && key >= arr[low])
        return rotated_search_helper(arr, key, low, mid - 1);

    else if (arr[mid] <= arr[high] && key >= arr[mid] && key <= arr[high])
        return rotated_search_helper(arr, key, mid + 1, high);

    else if (arr[high] <= arr[mid])
        return rotated_search_helper(arr, key, mid + 1, high);

    else if (arr[low] >= arr[mid])
        return rotated_search_helper(arr, key, low, mid - 1);

    return -1;
}

int main()
{
    int arr[] = {9, 12, 15, 18, 3, 5};

    int high = (sizeof(arr) / sizeof(arr[0])) - 1;

    cout << rotated_search_helper(arr, 12, 0, high) << endl;
    cout << rotated_search_helper(arr, 3, 0, high) << endl;
    cout << rotated_search_helper(arr, 5, 0, high) << endl;
    cout << rotated_search_helper(arr, 9, 0, high) << endl;

    return 0;
}