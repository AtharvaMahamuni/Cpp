#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int n)
{
    if (top >= 4)
    {
        cout << "Stack Overflow !!!" << endl;
    }
    else
    {
        top++;
        stack[top] = n;
        cout << n << " is pushed !!!" << endl;
    }
}

int pop()
{
    int n;

    if (top == -1)
    {
        cout << "Stack Underflow !!!" << endl;
    }
    else
    {
        n = stack[top];
        top--;
        cout << n << " is popped !!!" << endl;
    }

    return n;
}

void traverse()
{
    if (top == -1)
    {
        cout << "Stack is empty !!!";
    }
    else
    {
        cout << "Elements in stack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);

    traverse();

    pop();
    pop();
    pop();

    traverse();

    return 0;
}