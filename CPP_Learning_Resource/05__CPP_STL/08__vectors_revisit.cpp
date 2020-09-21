#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums;
    vector<string> heros{"batman", "flash", "superman", "robin"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for (int i = 0; i <= 5; ++i)
    {
        nums.push_back(i);
    }

    cout << nums.size() << endl
         << nums.capacity() << endl
         << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}

// https://www.geeksforgeeks.org/vector-in-cpp-stl/
// http://www.cplusplus.com/reference/vector/vector/