#include <iostream>
using namespace std;

class One //final
{
public:
    virtual void print() = 0;
    // {
    //     cout << "I am One";
    // }
    void display()
    {
        cout << "I am abstract" << endl;
    }
};

class Two : public One
{
public:
    void print()
    {
        cout << "I am groot!!!" << endl;
    }
};

int main()
{
    One *a;
    Two b;

    a = &b;

    

    a->print();
    a->display();

    return 0;
}
