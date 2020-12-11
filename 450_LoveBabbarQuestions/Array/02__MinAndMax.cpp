#include <iostream>
using namespace std;

int main()
{

  int arr[] = {5, 4, 5, 723, 3, 46, 12, 4, 64, 2};
  int max = arr[0];
  int min = arr[0];
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  // for (int i : arr)
  // {
  //   cout << i << " ";
  // }

  for (int i = 0; i < arrSize; i++)
  {
    if (arr[i] > max)
      max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }

  cout << "MAX: " << max << endl
       << "MIN: " << min << endl;

  return 0;
}
