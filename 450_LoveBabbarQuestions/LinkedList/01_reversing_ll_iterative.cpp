#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
typedef struct node Node;

Node *head = NULL, *tail = NULL, *p = NULL;

void reverse()
{
    //Take 3 pointers to keep track
    Node *nPrev = NULL;
    Node *nCurr = head;
    Node *nNext = head->next;

    while (nCurr != NULL)
    {
        nCurr->next = nPrev;
        nPrev = nCurr;
        nCurr = nNext;
        if (nNext != NULL)
            nNext = nNext->next;
    }

    head = nPrev;
}

void insert(int n)
{
    p = new Node;
    p->data = n;

    if (head == NULL)
    {
        head = p;
        tail = p;
        head->next = NULL;
    }
    else
    {
        tail->next = p;
        tail = p;
        tail->next = NULL;
    }
}

void traverse()
{
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        p = head;
        while (p != NULL)
        {
            cout << " " << p->data;
            p = p->next;
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    // for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    for (int i : array)
    {
        insert(i);
    }

    //Before
    traverse();

    cout << endl;
    reverse();

    //After
    traverse();

    return 0;
}