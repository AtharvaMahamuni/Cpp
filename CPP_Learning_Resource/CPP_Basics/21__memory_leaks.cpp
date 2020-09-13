#include <iostream>
using namespace std;

int main()
{

    int *myp;

    //This can raise the exception while execution and system crash may happen
    //myp = new int [10000];

    //nothrow is used to avoid exception but this is bad practice
    //System can be crashed in this case as well.
    //myp = new(nothrow) int [10000];
    //cout << "Memory space allocated\n";

    // delete myp; //This will only delete the pointer myp,
    // from the memory other 10000 block will remain as it is.

    //This is the good practice.
    try
    {
        myp = new int[10000];
        cout << "Memory space allocated\n";
    }
    catch (...)
    {
        cout << "Failed in allocating memory\n";
    }

    //It will delete entire array and avoid memory leak.
    delete[] myp;

    return 0;
}

//TODO: some resources on memory leak:
//1. https://stackoverflow.com/questions/6261201/how-to-find-memory-leak-in-a-c-code-project
//2. https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/#:~:text=Memory%20leakage%20occurs%20in%20C%2B%2B,by%20using%20wrong%20delete%20operator.

//FIXME:
//Just a little history on cout and printf/puts
//In the initial version of C++ cout is overridden
//with leftshift operator and from that time there
//is an debate that it will make some difficulties
//in the usage of left and right shift operators.
//this overriden operators of leftshift and right shitf
//are never changed again because it very difficult to do
//it now and now days everyone get familiar so it will create
//a long lerning curve.
