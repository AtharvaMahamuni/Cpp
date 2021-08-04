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

    //Linear Search:
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
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