#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    double _length;
    double _breadth;

public:
    Rectangle(double l = 2.0, double b = 2.0)
    {
        _length = l;
        _breadth = b;
    }

    double Area()
    {
        return _length * _breadth;
    }

    int compare(Rectangle rectangle)
    {
        return this->Area() > rectangle.Area();
    }
};

int main()
{

    Rectangle h1(3.0, 3.0);
    Rectangle h2(4.0, 4.0);

    cout << h1.compare(h2) << endl;
    cout << h2.compare(h1) << endl;

    if (h1.compare(h2))
    {
        cout << "H2 is smaller" << endl;
    }
    else
    {
        cout << "H2 is bigger" << endl;
    }

    return 0;
}

//More about this keyword:
// https://www.geeksforgeeks.org/this-pointer-in-c/