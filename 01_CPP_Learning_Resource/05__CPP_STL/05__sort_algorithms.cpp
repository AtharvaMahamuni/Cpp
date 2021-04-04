#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int numbers[] = {3, 2, 6, 4, 7, 9}; //call it as iterator
    float numbers[] = {3.5, 2.1, 6.7, 4.0, 7.7, 9.2}; //call it as iterator

    cout << "Unsorted values: " << endl;
    //for (int i : numbers)
    for (float i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(numbers, numbers + 6); //by default it uses intro sort it is somekind of hybrid sort.
    // numbers will point the first loaction & numbers + 6 point to the last location

    // sort_heap(numbers, numbers + 6);

    cout << "Sorted values: " << endl;
    //for (int i : numbers)
    for (float i : numbers)
    {
        cout << i << " ";
    }

    return 0;
}