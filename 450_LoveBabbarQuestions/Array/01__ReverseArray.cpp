// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  cout << "Given array: ";

  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << endl;

  for (int i = 0; i < (arrSize / 2); i++)
  {
    int temp = arr[i];
    arr[i] = arr[arrSize - 1 - i];
    arr[arrSize - 1 - i] = temp;
  }

  cout << "Reversed array: ";

  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << endl;

  return 0;
}