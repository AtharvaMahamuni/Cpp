#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int num[10] = {1, 2, 3, 4, 5, 6};
    // for (int i : num)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    vector<int> nums;

    nums.push_back(30);
    nums.push_back(20);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(10);

    sort(nums.begin(), nums.end());

    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

   

    return 0;
}