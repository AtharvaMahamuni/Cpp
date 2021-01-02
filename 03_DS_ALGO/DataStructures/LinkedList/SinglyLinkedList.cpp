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
private:
    Node *p = NULL, *q = NULL, *start = NULL;

public:
    void createAtStart();
    void createAtEnd();
    void createAtGiveLocation();
    void deleteAtStart();
    void deleteAtEnd();
    void deleteAtGivenLocation();
    void traverse();
};

void LinkedList::createAtStart()
{
    p = new Node;
    cout << "Enter the data: ";
    cin >> p->data;

    if (start == NULL)
    {
        p->next = NULL;
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }
}
void LinkedList::createAtEnd()
{
    p = new Node;
    cout << "Enter the data: ";
    cin >> p->data;

    if (start == NULL)
    {
        p->next = NULL;
        start = p;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }

        q->next = p;
        p->next = NULL;
    }
}

void LinkedList::createAtGiveLocation()
{
    p = new Node();
    cout << "Enter the data: ";
    cin >> p->data;
    int loc;
    cout << "Enter the location: ";
    cin >> loc;

    if (loc == 1)
    {
        if (start == NULL)
        {
            p->next = NULL;
            start = p;
        }
        else
        {
            p->next = start;
            start = p;
        }
    }
    else
    {
        if (start == NULL)
        {
            cout << "Invalid Location" << endl;
            delete p;
        }
        else
        {
            q = start;
            int i = 1;
            while (i < loc - 1 && q != NULL)
            {
                q = q->next;
                i++;
            }
            if (q == NULL)
            {
                cout << "Invalid Location" << endl;
            }
            else
            {
                p->next = q->next;
                q->next = p;
            }
        }
    }
}

void LinkedList::deleteAtStart()
{
    if (start == NULL)
    {
        cout << "Linked List is Empty" << endl;
    }
    else
    {
        if (start->next == NULL)
        {
            p = start;
            cout << "** " << p->data << " deleted" << endl;
            start = NULL;
            delete p;
        }
        else
        {
            p = start;
            start = start->next;
            cout << "** " << p->data << " deleted" << endl;
            delete p;
        }
    }
}

void LinkedList::deleteAtEnd()
{
    if (start == NULL)
    {
        cout << "Linked List is Empty" << endl;
    }
    else
    {
        if (start->next == NULL)
        {
            p = start;
            cout << "** " << p->data << " deleted" << endl;
            start = NULL;
            delete p;
        }
        else
        {
            p = start->next;
            q = start;

            while (p->next != NULL)
            {
                q = p;
                p = p->next;
            }
            cout << "** " << p->data << " deleted" << endl;
            q->next = NULL;
            delete p;
        }
    }
}
void LinkedList::deleteAtGivenLocation()
{
    if (start == NULL)
    {
        cout << "Linked List is empty" << endl;
    }
    else
    {
        int loc;
        int i = 1;
        cout << "Enter the location: ";
        cin >> loc;

        if (loc == 1)
        {
            p = start;
            start = p->next;
            cout << "** " << p->data << " deleted" << endl;
            delete p;
        }
        else
        {
            q = start;
            p = start->next;
            while (i < loc - 1 && p != NULL)
            {
                q = p;
                p = q->next;
                i++;
            }
            if (p == NULL)
            {
                cout << "Invalid location" << endl;
            }
            else
            {
                q->next = p->next;
                cout << "** " << p->data << " deleted" << endl;
                delete p;
            }
        }
    }
}

void LinkedList::traverse()
{
    if (start == NULL)
    {
        cout << "Linked List is Empty." << endl;
    }
    else
    {
        q = start;
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
            l.createAtGiveLocation();
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