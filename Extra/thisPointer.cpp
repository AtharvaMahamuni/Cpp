
#include <iostream>
using namespace std;

class Rectangle
{
    int length = 4, breadth = 5;

public:
    // Rectangle(int length, int breadth)
    // {
    //     this->length = length;
    //     (*this).length = length;
    //     this->breadth = breadth;
    // }

    void deleteThis()
    {
        delete this;
    }

    void area()
    {
        cout << "Area is = " << length * breadth << endl;
    }
};

int main()
{
    // Rectangle r1(4, 5);
    Rectangle r1;

    r1.deleteThis();
    r1.area();

    // const int num = 34;
    // num = 50;

    // cout << "Address of object r1 = " << &r1 << endl;
    // cout << "Address of object r1 = " << &r2 << endl;

    return 0;
}