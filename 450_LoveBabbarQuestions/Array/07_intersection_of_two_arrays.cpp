#include <iostream>
using namespace std;

void findIntersection(int array1[], int array2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (array1[i] == array2[j])
        {
            cout << array1[i++] << " ";
        }
        else if (array1[i] < array2[j])
        {
            i++;
        }
        else if (array1[i] > array2[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int array1[n];
    int array2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }

    findIntersection(array1, array2, n, m);

    return 0;
}