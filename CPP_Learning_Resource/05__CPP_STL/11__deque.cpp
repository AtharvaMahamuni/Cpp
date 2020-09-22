#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    deque<int> mynums;

    mynums.push_front(10);
    mynums.push_front(20);
    mynums.push_back(40);
    mynums.push_back(30);

    cout << mynums.size() << endl;
    cout << mynums.at(3) << endl;

    mynums.pop_back();

    for (auto i : mynums)
    {
        cout << i << " ";
    }

    return 0;
}