#include <iostream>
using namespace std;

struct node
{
    int data;
    node *previous;
    node *next;
};
typedef struct node Node;

class DoublyLinkedList
{
private:
    Node *head = NULL, *tail = NULL, *p = NULL, *q = NULL;

public:
    void createAtStart();
    void createAtEnd();
    void createAtGivenLocation();
    void deleteAtStart();
    void deleteAtEnd();
    void deleteAtGivenLocation();
    void traverse();
};

void DoublyLinkedList::createAtStart()
{
    p = new Node;
    cout << "Enter the Data: ";
    cin >> p->data;

    if (head == NULL && tail == NULL)
    {
        p->next = NULL;
        p->previous = NULL;
        head = p;
        tail = p;
    }
    else
    {
        p->next = head;
        head->previous = p;
        p->previous = NULL;
        head = p;
    }
}

void DoublyLinkedList::createAtEnd()
{
    p = new Node;
    cout << "Enter the Data: ";
    cin >> p->data;

    if (head == NULL && tail == NULL)
    {
        p->next = NULL;
        p->previous = NULL;
        head = p;
        tail = p;
    }
    else
    {
        p->previous = tail;
        tail->next = p;
        p->next = NULL;
        tail = p;
    }
}
void DoublyLinkedList::createAtGivenLocation() {}
void DoublyLinkedList::deleteAtStart() {}
void DoublyLinkedList::deleteAtEnd() {}
void DoublyLinkedList::deleteAtGivenLocation() {}

void DoublyLinkedList::traverse() 
{
    
}

int main()
{
    int n;
    DoublyLinkedList dlist;
    do
    {
        cout << "---------------------------MENU--------------------------------" << endl;
        cout << "1.Create at Start\n"
             << "2.Create at End\n"
             << "3.Create at Given Location\n"
             << "4.Delete at Start\n"
             << "5.Delete at End\n"
             << "6.Delete at Given Location\n"
             << "7.Traverse\n"
             << "8.exit" << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << "Option No.: ";
        cin >> n;

        switch (n)
        {
        case 1:
            dlist.createAtStart();
            break;
        case 2:
            dlist.createAtEnd();
            break;
        case 3:
            dlist.createAtGivenLocation();
            break;
        case 4:
            dlist.deleteAtStart();
            break;
        case 5:
            dlist.deleteAtEnd();
            break;
        case 6:
            dlist.deleteAtGivenLocation();
            break;
        case 7:
            dlist.traverse();
            break;
        case 8:
            break;
        default:
            cout << "Wrong Input" << endl;
        }
    } while (n != 8);

    return 0;
}