#include <iostream>
#include <string.h>
using namespace std;

class rotatedArray
{
public:
    string rotated_array_helper(int arr[], int low, int high)
    {
        if (high < low)
            return "NO MATCH";

        int mid = (low + ((high - low) / 2));

        if (arr[mid] > arr[mid + 1])
            return to_string(mid + 1);

        if (arr[mid] < arr[mid - 1])
            return to_string(mid);

        if (arr[mid] > arr[high])
            return rotated_array_helper(arr, mid + 1, high);

        return rotated_array_helper(arr, low, mid - 1);
    }
};

int main()
{

    // int arr[] = {10, 12, 15, 19, 3, 5, 8};
    int arr[] = {3, 5, 8, 10, 12, 15, 19};
    // int arr[] = {10, 12, 13, 15, 17, 18, 19, 3, 5, 8, 9};
    // int arr[] = {19, 3, 5, 8, 9};

    int high = (sizeof(arr) / sizeof(arr[0])) - 1;

    rotatedArray a;

    cout << a.rotated_array_helper(arr, 0, high) << endl;

    return 0;
}