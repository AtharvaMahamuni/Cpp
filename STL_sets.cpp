#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

//We have set to perform the insertion as well as lower bound and upper bound at the same time.
//In the time complexity of O(log(n)) time.

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(6);
    s.insert(10);
    s.insert(-5);
    s.insert(-11);

    for (int i : s)
        cout << i << " ";
    cout << endl;
    // -11 -5 1 6 10

    set<int>::iterator it = s.find(-5);

    if (it == s.end())
        cout << "element is not found";
    else
        cout << "element is found";

    

    return 0;
}