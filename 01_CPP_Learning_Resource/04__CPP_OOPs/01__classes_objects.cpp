#include <iostream>
#include <string>
using namespace std;

class User //This is class
{
private: // Bydefault class is private no need write it, it is optional.
    int secret = 22;

public:
    string name = "default";
    void classMessage()
    {
        cout << "Class is great, " << name << endl;
    }
};

int main()
{

    User sam; //This is object
    User atharva;

    sam.name = "sam";
    sam.classMessage();
    // sam.secret = 222; //we can't acces this because it is in private section.

    atharva.classMessage();
    //change on one object does not make change on another class.

    return 0;
}

//This is one of the best video to understand OOPs by MOSH:
// https://www.youtube.com/watch?v=pTB0EiLXUC8

//This is one more resource:
// https://www.w3schools.com/cpp/cpp_oop.asp

//Classes: This are blueprint of object
//Objects: This are instance of classes