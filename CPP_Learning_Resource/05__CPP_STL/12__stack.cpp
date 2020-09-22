#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    stack<int> mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);

    cout << mystack.size() << endl;
    cout << mystack.top() << endl;

    mystack.pop();
    cout << mystack.top() << endl;

    while (!mystack.empty())
    {
        cout << " " << mystack.top();
        mystack.pop();
    }
    cout << endl;

    return 0;
}