#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int num)
{
    if (top == 4)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << stack[top] << " Popped" << endl;
        top--;
    }
}

void tos()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << stack[top] << endl;
    }
}

void traverse()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        int i = top;
        while (i > -1)
        {
            cout << stack[i] << " ";
            i--;
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

    traverse();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    push(10);
    push(20);
    push(30);
    traverse();

    return 0;
}