#include <iostream>
#include <string>

using namespace std;

template <typename T>
void func(T t)
{
    cout << "Func 1: " << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args)
{
    cout << "Func 2: " << t << endl;
    func(args...);
}

int main()
{

    func("atharva");

    func(1, 2, 3, 5.6, 7.1, "atharva", 'b', 5);

    return 0;
}

//More about variadic here:
// https://www.geeksforgeeks.org/variadic-function-templates-c/