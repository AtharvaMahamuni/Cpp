#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    list<int> mylist;

    for (int i = 3; i <= 10; i++)
    {
        mylist.push_back(i);
    }

    cout << mylist.front() << endl;
    cout << mylist.back() << endl;

    mylist.pop_back();
    mylist.reverse();

    for (auto i : mylist)
    {
        cout << i << " ";
    }
    cout << endl;

    mylist.sort();
    for (auto i : mylist)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// Traversing of list is not as optimized.
// The memory allocation of list is not linear.
//Adding and removing value with lists is very quick
//It is similar to doubly linked list.