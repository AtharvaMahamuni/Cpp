#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : myints)
    {
        cout << i << " ";
    }
    cout << endl;

    // cout << myints.begin() << endl;
    // printf("%d", myints.begin());
    // cout << endl;
    // printf("%d", myints.end());

    partition(myints.begin(), myints.end(), [](auto x) { return x % 2 == 0; });
    //Partition works on algorithm of O(n)
    for (int i : myints)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}