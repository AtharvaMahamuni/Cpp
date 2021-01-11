#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

typedef struct node Node;

class LinkedList
{

    Node *p, *q, *head;

public:
    void createAtStart();
    void createAtEnd();
    void createAtGivenLocation();
    void deleteAtStart();
    void deleteAtEnd();
    void deleteAtGivenLocation();
    void traverse();
};

void LinkedList ::createAtStart()
{
    p = new Node;
    cout << "Enter the data: ";
    cin >> p->data;

    if (head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        p->next = head;
        q = head;
        while (q->next != head)
        {
            q = q->next;
        }
        head = p;
        q->next = head;
    }
}

void LinkedList ::createAtEnd()
{
    p = new Node;
    cout << "Enter the data: ";
    cin >> p->data;

    if (head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        p->next = head;
        q = head;
        while (q->next != head)
        {
            q = q->next;
        }
        q->next = p;
    }
}

void LinkedList ::createAtGivenLocation() {}

void LinkedList ::deleteAtStart()
{
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
    }
    else
    {
        if (head->next == head)
        {
            p = head;
            head = NULL;
            delete p;
        }
        else
        {
            p = head;
            q = head->next;
            while (q->next != head)
            {
                q = q->next;
            }
            q->next = p->next;
            head = q->next;
            delete p;
        }
    }
}

void LinkedList ::deleteAtEnd()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        if (head->next = head)
        {
            p = head;
            head = NULL;
            delete p;
        }
        else
        {
            q = head
                p = head->next;
            while (p->next != head)
            {
                q = p;
                p = p->next;
            }
            q->next = head;
            delete p;
        }
    }
}

void LinkedList ::deleteAtGivenLocation() {}
void LinkedList ::traverse() {}

int main()
{
    int n;
    LinkedList l;

    do
    {
        cout << "----------------------MENU----------------------\n";
        cout << "1.Create at start\n"
             << "2.Create at end\n"
             << "3.Create at given location\n"
             << "4.Delete at Start\n"
             << "5.Delete at End\n"
             << "6.Delete at given loacation\n"
             << "7.Traverse\n"
             << "8.Exit" << endl;
        cout << "----------------------------------------------\n";

        cout << "Enter the option no."
             << " ";
        cin >> n;

        switch (n)
        {
        case 1:
            l.createAtStart();
            break;
        case 2:
            l.createAtEnd();
            break;
        case 3:
            l.createAtGivenLocation();
            break;
        case 4:
            l.deleteAtStart();
            break;
        case 5:
            l.deleteAtEnd();
            break;
        case 6:
            l.deleteAtGivenLocation();
            break;
        case 7:
            l.traverse();
            break;
        case 8:
            break;
        default:
            cout << "Worong Input" << endl;
        }

    } while (n != 8);

    return 0;
}
