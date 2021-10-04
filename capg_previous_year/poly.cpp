#include <iostream>
using namespace std;

class One
{
public:
    virtual void intro() = 0;
    // {
    //     cout << "I am One \n";
    // }
};

class Two : public One
{
public:
    void intro()
    {
        cout << "I am Two \n";
    }
};

class Three : public One
{
public:
    void intro()
    {
        cout << "I am Three\n";
    }
};

int main()
{
    // One *a;
    // // One f;
    // Two b;
    // Three c;

    // a = &b;
    // a->intro();

    // a = &c;
    // a->intro();

    int x = 10;

    int *ptr = &x;
    int &ref = x;

    cout << &x << " " << &ptr << endl;
    cout << &x << " " << ptr << endl;
    cout << &x << " " << &ref << endl;

    return 0;
}