#include <iostream>
using namespace std;

class MyFloat
{
    float ft;

public:
    MyFloat()
    {
        ft = 0.1;
    }

    void getValue()
    {
        cout << ft << endl;
    }

    void operator()(float v)
    {
        ft += v;
    }
};

int main()
{
    MyFloat floaty;
    floaty.getValue();

    floaty(0.1);
    floaty.getValue();

    floaty(1);
    floaty.getValue();

    return 0;
}
