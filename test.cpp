#include <iostream>
using namespace std;

int main()
{

    struct a
    {
        long int i;
        char ch[4];
    };

    struct a s;

    s.i = 512;

    cout << s.ch[0] << " " << s.ch[1] << " " << s.ch[2];

    return 0;
}