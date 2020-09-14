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

//Functions sneek-peek just the simpke stuff you can refer:
//https://www.w3schools.com/cpp/cpp_functions.asp