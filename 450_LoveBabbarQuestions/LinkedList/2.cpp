/*
Q. Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.
(With recursive method)

Examples: 

Input: Head of following linked list 
1->2->3->4->NULL 
Output: Linked list should be changed to, 
4->3->2->1->NULL

Input: Head of following linked list 
1->2->3->4->5->NULL 
Output: Linked list should be changed to, 
5->4->3->2->1->NULL

Input: NULL 
Output: NULL
*/

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
typedef struct node Node;

Node *head = NULL, *tail = NULL, *p = NULL;

Node *reverse(Node *node)
{
    if (node == NULL)
        return NULL;
    if (node->next == NULL)
    {
        head = node;
        return node;
    }
    Node *node1 = reverse(node->next);
    node1->next = node;
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