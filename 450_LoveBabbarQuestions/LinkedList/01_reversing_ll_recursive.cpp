#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
typedef struct node Node;

Node *head = NULL, *tail = NULL, *p = NULL;

Node *reverse(Node *node) //This * defines that the return type of function is Node* it dosen't have any relation with the functional pointer it just specifies the return type
{
    if (node == NULL)
        return NULL;
    if (node->next == NULL)
    {
        head = node;
        return node;
    }
    Node *tempNode = reverse(node->next);
    tempNode->next = node;
    node->next = NULL;
    return node;
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
    reverse(head);

    //After
    traverse();

    return 0;
}