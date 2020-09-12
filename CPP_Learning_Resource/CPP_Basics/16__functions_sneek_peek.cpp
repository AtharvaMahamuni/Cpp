#include <iostream>
using namespace std;

void sayHello()
{
    puts("Hello there!!!");
}

int sayTwo()
{
    // puts("2");
    return 2;
}

char sayThree()
{
    puts("3");
}

int main()
{

    sayHello();
    cout << sayTwo() << endl;
    cout << sayThree() << endl;

    return 0;
}
