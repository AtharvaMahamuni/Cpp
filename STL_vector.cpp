#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// comparator fucntion for reversing the vector.
bool f(int x, int y) { return x > y; }

int main()
{

    vector<int> arr = {4, 5, 8, 3, 1, 4, 6, 9};

    //sort function comes from the algortihm library
    sort(arr.begin(), arr.end()); // This sorting is happening in O(nlog(n)) time

    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    bool present = binary_search(arr.begin(), arr.end(), 6);

    if (present == true)
        cout << "Element is presenet" << endl;
    else
        cout << "Element is not present" << endl;

    arr.push_back(100); // It will add the element to the end of an array.

    for (int i : arr)
        cout << i << " ";
    cout << endl;

    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);

    arr.push_back(123);

    for (int i : arr)
        cout << i << " ";
    cout << endl;
    // 1 3 4 4 5 6 8 9 100 100 100 100 100 123

    //This iterator will give us the first occurance of 100.
    // It will find the first element or the greater element than the provided.
    vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), 100); // >=

    //Upper bound will found the strictly greater element than the given it this case greater than the 100 which is 123.
    vector<int>::iterator it2 = upper_bound(arr.begin(), arr.end(), 100); // >

    cout << *it << " " << *it2 << endl;

    cout << it2 - it << endl; // It will print the distance between 100 and 123
    // This technique can be used to find the no. of occurances of particular no. inside an array.

    //To print the above vector in descending order we use comparator function which
    sort(arr.begin(), arr.end(), f);

    for (int i : arr)
        cout << i << " ";
    cout << endl;

    //now I want to increase the every no. inside vecotor by 1
    for (int &i : arr)
    {
        i++;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}