#include <iostream>
using namespace std;

int twoStack[10];
int top1 = 5;
int top2 = 4;

void push1(int n)
{
    if (top1 == 0)
    {
        cout << "Stack 1 Overflow !!!" << endl;
    }
    else
    {
        top1--;
        twoStack[top1] = n;
        cout << n << " is pushed inside Stack 1" << endl;
    }
}

void push2(int n)
{
    if (top2 == 9)
    {
        cout << "Stack 2 Overflow !!!" << endl;
    }
    else
    {
        top2++;
        twoStack[top2] = n;
        cout << n << " is pushed inside stack 2" << endl;
    }
}

int pop1()
{
    int n;

    if (top1 > 4)
    {
        cout << "Stack 1 Underflow !!!" << endl;
    }
    else
    {
        n = twoStack[top1];
        cout << n << " is popped" << endl;
        top1++;
    }

    return n;
}

int pop2()
{
    int n;

    if (top2 < 5)
    {
        cout << "Stack 2 Underflow !!!" << endl;
    }
    else
    {
        n = twoStack[top2];
        cout << n << " is popped" << endl;
        top2--;
    }

    return n;
}

int main()
{

    push1(10);
    push1(20);
    push1(30);
    push2(40);

    pop1();
    pop1();
    pop2();
    pop2();
    pop1();
    pop1();

    return 0;
}