#include <iostream>
using namespace std;

int main()
{
    bool flag;
    int n, key;
    cout << "Enter the no. of entries: ";
    cin >> n;

    int arr[n];
    cout << "Enter the no.:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key: ";
    cin >> key;

    //Binary Search:
    int low = 0;
    int mid = n / 2;
    int high = n - 1;

    while (low <= high)
    {
        if (arr[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
    }

    if (flag == 1)
    {
        cout << "Key element is present." << endl;
    }
    else
    {
        cout << "Key element is not present." << endl;
    }

    return 0;
}