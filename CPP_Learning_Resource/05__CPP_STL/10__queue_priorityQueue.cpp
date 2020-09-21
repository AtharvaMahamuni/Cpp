#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    queue<int> myq;

    myq.push(10);
    myq.push(20);
    myq.push(30);
    myq.push(40);

    // cout << myq.front() << endl;
    // cout << myq.back() << endl;
    // myq.pop();

    // cout << myq.front() << endl;

    // while (!myq.empty())
    // {
    //     cout << myq.front() << endl;
    //     myq.pop();
    // }
    // cout << endl;
    // cout << "Outside" << endl;
    // cout << myq.front() << endl;

    priority_queue<int> mypq;
    mypq.push(10);
    mypq.push(40);
    mypq.push(30);
    mypq.push(20);
    while (!mypq.empty())
    {
        cout << mypq.top() << endl;
        mypq.pop();
    }

    return 0;
}