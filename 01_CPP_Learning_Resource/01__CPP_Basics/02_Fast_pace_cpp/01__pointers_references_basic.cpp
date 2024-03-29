#include <iostream>

using namespace std;

int main()
{
    int life = 4;
    life = 5; // variables vary over time

    // const int life2 = 4;
    // life2 = 5; //const is not allowed to vary it has fixed value

    int my_life = life;
    cout << "my_life: " << my_life << endl; // my_life: 5
    //We can assign value from one variable to another.

    int *myl;
    //referncing a variable
    myl = &life;
    cout << myl << endl; // 0x7ffc5dcf3e58

    //here we are storing address of my_life in myl (It is something known as referncing.)
    myl = &my_life;
    cout << myl << endl; // 0x7ffc5dcf3e58

    //pointer dereferncing
    my_life = *myl;
    cout << my_life << endl; // 5
    cout << myl << endl;     // 0x7ffc5dcf3e58
    cout << *myl << endl;    // 5

    return 0;
}

//Pointers and refernces are two most important things in c++ which give c++ an advantage for speed and optimization
//and this two things make c++ the most powerful language and the dangerous as well.
//Pointers: pointer points to memory location remember this and you are ready to go further
//If I want to give defination then pointer is a special variable which stores the address of another variable

//Pointer is simple in C++ but real culprit is references.
