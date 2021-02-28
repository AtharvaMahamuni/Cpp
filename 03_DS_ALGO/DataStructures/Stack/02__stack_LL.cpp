#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

class Stack
{
    node *head = NULL, *top = NULL, *p, *q;

public:
    void push();
    void pop();
    void tos();
    void traverse();
};

void Stack::push()
{
    p = new Node();
    cout << "Enter the Data: ";
    cin >> p->data;

    if (head == NULL && top == NULL)
    {
        head = p;
        top = p;
        top->next = NULL;
        cout << p->data << " is pushed" << endl;
    }
    else
    {
        top->next = p;
        top = p;
        top->next = NULL;
        cout << p->data << " is pushed" << endl;
    }
}

void Stack::pop()
{
    if (head == NULL && top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        if (head->next == NULL)
        {
            p = head;
            head = NULL;
            top = NULL;
            cout << p->data << " is popped" << endl;
            delete p;
        }
        else
        {
            q = head;
            while (q->next != top)
            {
                q = q->next;
            }

            p = top;
            top = q;
            top->next = NULL;
            cout << p->data << " popped" << endl;
            delete p;
        }
    }
}

void Stack::tos()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << top->data << " is at top." << endl;
    }
}

void Stack::traverse()
{
    if (head == NULL && top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        q = head;
        while (q != NULL)
        {
            cout << q->data << " ";
            q = q->next;
        }
        cout << endl;
    }
}

int main()
{
    Stack stack;
    int i;

    do
    {
        cout << "------------- Stack Menu ---------------" << endl;
        cout << "Choose option from Following: " << endl;
        cout << "1. Push\n"
             << "2. Pop\n"
             << "3. Top\n"
             << "4. Traverse\n"
             << "5. Exit" << endl;

        cout << "Option No.: ";
        cin >> i;

        switch (i)
        {
        case 1:
            stack.push();
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.tos();
            break;
        case 4:
            stack.traverse();
            break;
        case 5:
            break;
        default:
            cout << "*** Invalid Input *** " << endl;
        }
    } while (i != 5);

    return 0;
}