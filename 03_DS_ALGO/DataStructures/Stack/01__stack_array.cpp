#include <iostream>
using namespace std;

class Stack
{
    int _top = -1;
    int stack[5];

public:
    void push();
    void pop();
    void top();
    void traverse();
};

void Stack::push()
{
    if (_top >= 4)
    {
        cout << "Stack is Full !!!" << endl;
    }
    else
    {
        int value;
        cout << "Enter the value: ";
        cin >> value;
        _top++;
        stack[_top] = value;
    }
}

void Stack::pop()
{
    if (_top <= -1)
    {
        cout << "Stack is Empty !!!" << endl;
    }
    else
    {
        cout << stack[_top]
             << " is popped !!!" << endl;
        _top--;
    }
}

void Stack::top()
{
    if (_top <= -1)
    {
        cout << "Stack is Empty !!!" << endl;
    }
    else
    {
        cout << stack[_top]
             << " is at top !!!" << endl;
    }
}

void Stack::traverse()
{
    if (_top <= -1)
    {
        cout << "Stack is Empty !!!" << endl;
    }
    else
    {
        cout << "Values in stack : ";
        for (int i = _top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    Stack s;
    int n;

    do
    {
        cout << "------------STACK-MENU-------------" << endl;
        cout << "Choose the option from following:" << endl;

        cout << "1. Push\n"
             << "2. Pop\n"
             << "3. Top\n"
             << "4. Traverse\n"
             << "5. Exit" << endl;

        cout << "Option No. : ";
        cin >> n;

        switch (n)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top();
            break;
        case 4:
            s.traverse();
            break;
        case 5:
            break;
        default:
            cout << "\n *** Invalid Input ***" << endl;
        }

    } while (n != 5);

    return 0;
}