#include <iostream>
using namespace std;

void findUnion(int array1[], int array2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (array1[i] < array2[j])
            cout << array1[i++] << " ";

        else if (array2[j] < array1[i])
            cout << array2[j++] << " ";

        else
        {
            cout << array2[j++] << " ";
            i++;
        }
    }

    /* Print remaining elements of the larger array */
    while (i < n)
        cout << array1[i++] << " ";

    while (j < m)
        cout << array2[j++] << " ";
}

int main()
{

    int n, m;
    int count = 0;

    cin >> n >> m;

    int array1[n], array2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }

    findUnion(array1, array2, n, m);

    // cout << count << endl;

    return 0;
}