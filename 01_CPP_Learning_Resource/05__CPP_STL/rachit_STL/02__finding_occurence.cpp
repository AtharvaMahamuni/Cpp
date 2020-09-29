#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 3, 4, 2, 5, 5, 6, 7, 6, 5, 5, 3, 5};

    sort(nums.begin(), nums.end());

    vector<int>::iterator it = lower_bound(nums.begin(), nums.end(), 5);
    vector<int>::iterator it2 = upper_bound(nums.begin(), nums.end(), 5);

    cout << it2 - it << endl;

    return 0;
}