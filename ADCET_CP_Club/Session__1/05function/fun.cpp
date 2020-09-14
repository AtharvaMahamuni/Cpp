#include <iostream>
using namespace std;
int calculator(int x, char ch, int y);
int main()
{
    int num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    calculator(num1, op, num2);
}
int calculator(int x, char ch, int y)
{
    if (ch == '+')
    {
        cout << x + y;
    }
    if (ch == '-')
    {
        cout << x - y;
    }
    if (ch == '*')
    {
        cout << x * y;
    }
    if (ch == '/')
    {
        cout << x / y;
    }
    if (ch == '^')
    {
        int i, result;
        result = 1;
        for (i = 0; i < y; i++)
        {
            result = x * result;
        }
        cout << result;
    }
}