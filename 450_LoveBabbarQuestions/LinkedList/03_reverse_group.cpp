#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *head = NULL, *tail = NULL, *p, *q;

void createList(int element)
{
    p = new Node;
    p->data = element;

    if (head == NULL && tail == NULL)
    {
        head = p;
        tail = p;
        p->next = NULL;
    }
    else
    {
        tail->next = p;
        tail = p;
        p->next = NULL;
    }
}

void traverse()
{
    q = head;

    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->next;
    }
    cout << endl
         << "---------------------------" << endl;
}

//*******************************************

Node *reverse(Node *start, int n)
{
    // base case
    if (!start)
        return NULL;
    Node *current = start;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < n)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        start->next = reverse(next, n);

    /* prev is new head of the input list */
    return prev;
}

//*******************************************

int main()
{
    int array[] = {3, 4, 1, 4, 2, 6, 3, 7, 5, 8};
    int arraySize = (sizeof(array) / sizeof(array[0]));

    for (int i = 0; i < arraySize; i++)
    {
        createList(array[i]);
    }

    traverse();

    head = reverse(head, 3);

    traverse();

    return 0;
}