#include <iostream>
#include <array>
using namespace std;

int common_smallest(int arr1[], int arr2[], int arr3[], int len1, int len2, int len3)
{
    int p1, p2, p3;
    p1 = p2 = p3 = 0;

    while (p1 < len1 && p2 < len2 && p3 < len3)
    {
        if (arr1[p1] == arr2[p2] && arr1[p1] == arr3[p3])
            return arr1[p1];

        else if (arr1[p1] <= arr2[p2] && arr1[p1] <= arr3[p3])
            p1 = p1 + 1;

        else if (arr2[p2] <= arr1[p1] && arr2[p2] <= arr3[p3])
            p2 = p2 + 1;

        else if (arr3[p3] <= arr1[p1] && arr3[p3] <= arr2[p2])
            p3 = p3 + 1;
    }
    return -1;
}

int main()
{
    int arr1[] = {5, 6, 7, 20, 30, 54};
    int arr2[] = {0, 1, 2, 6, 7, 23, 60, 104};
    int arr3[] = {3, 4, 6, 20, 25};

    int len1 = end(arr1) - begin(arr1);
    int len2 = end(arr2) - begin(arr2);
    int len3 = end(arr3) - begin(arr3);

    cout << common_smallest(arr1, arr2, arr3, len1, len2, len3) << endl;

    return 0;
}