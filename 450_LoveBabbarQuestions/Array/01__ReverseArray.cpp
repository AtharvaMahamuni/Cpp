#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  for (int i : arr)
  {
    cout << i << " ";
  }

  for (int i = 0; i < (arrSize / 2); i++)
  {
    int temp = arr[i];
    arr[i] = arr[arrSize - 1 - i];
    arr[arrSize - 1 - i] = temp;
  }

  cout << endl;

  for (int i : arr)
  {
    cout << i << " ";
  }

  return 0;
}