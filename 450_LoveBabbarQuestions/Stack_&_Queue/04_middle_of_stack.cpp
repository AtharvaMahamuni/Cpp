#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node Node;

Node *p, *q, *head = NULL, *top = NULL, *mid = NULL;

int i = 0;

void push(int n)
{
    p = new Node();
    p->data = n;
    if (head == NULL && top == NULL)
    {
        head = p;
        top = p;
        mid = p;
        p->next = NULL;
        p->prev = NULL;
        i++;
    }
    else
    {
        if (i % 2 != 0)
        {
            top->next = p;
            p->next = NULL;
            p->prev = top;
            top = p;
            mid = mid->next;
            i++;
        }
        else
        {
            top->next = p;
            p->next = NULL;
            p->prev = top;
            top = p;
            i++;
        }
    }
}

int pop()
{
    int n;

    if (head == NULL && top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        if (head == top)
        {
            p = head;
            head = NULL;
            top = NULL;
            mid = NULL;
            cout << p->data << " is popped" << endl;
            delete p;
            i--;
        }
        else
        {
            if (i % 2 != 0)
            {
                p = top;
                top = top->prev;
                top->next = NULL;
                cout << p->data << " is popped" << endl;
                delete p;
                i--;
            }
            else
            {
                p = top;
                top = top->prev;
                top->next = NULL;
                cout << p->data << " is popped" << endl;
                delete p;
                mid = mid->prev;
                i--;
            }
        }
    }

    return n;
}

void findMiddle()
{
    cout << mid->data << endl;
}

void deleteMiddle()
{
    if (i % 2 != 0)
    {
        p = mid;
        mid = mid->next;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        cout << p->data << " is at mid which is deleted" << endl;
        delete p;
    }
    else
    {
        p = mid;
        mid = mid->prev;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        cout << p->data << " is at mid which is deleted" << endl;
        delete p;
    }
}

void traverse()
{
}

int main()
{
    push(10);
    findMiddle();
    push(20);
    findMiddle();
    push(30);
    findMiddle();
    push(40);
    findMiddle();

    deleteMiddle();
    deleteMiddle();

    return 0;
}