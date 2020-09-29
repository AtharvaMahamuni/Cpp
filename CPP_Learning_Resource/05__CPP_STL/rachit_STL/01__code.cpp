#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int f(int x, int y) //for vector
{
    return x > y;
}

void vectorDemo()
{

    vector<int> A = {11, 2, 3, 14};

    // cout << A[1] << endl;

    sort(A.begin(), A.end()); //O(NlogN)

    //printing this sorted list.
    // for (auto i : A)
    // {
    //     cout << i << ' ';
    // }
    // cout << endl;
    // 2 3 11 14
    //O(logN) search in complexity

    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      //false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true

    //New sorted array after entering pushing 100.
    //2,3,11,14,100

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    // for (auto i : A)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // 2 3 11 14 100 100 100 100 100 123

    //finding the occurence of 100.

    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >

    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl; //5

    //Now sorting it in reverse
    sort(A.begin(), A.end(), f);
    // for (auto i : A)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    //123 100 100 100 100 100 14 11 3 2
}

void setDemo()
{

    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for (auto i : S)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    //C++ STL
    setDemo();

    return 0;
}