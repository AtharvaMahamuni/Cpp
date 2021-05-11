#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/vector-sort/problem

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, num;
    vector<int> nums;

    cin >> n;

    //This will run perfectly fine
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }

    //this is good for online judge but in local it will go in infinite loop of input
    // while (cin >> n)
    //     nums.push_back(n);

    sort(nums.begin(), nums.end());

    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}
